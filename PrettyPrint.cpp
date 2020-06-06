#include <iostream>
using namespace std;

int ** preetyPrint(int a){
    int** arr = new int*[2*a-1];
    for(int i = 0; i < 2*a-1; i++){
        arr[i] = new int[2*a-1];}
    
    for(int i=0;i<a;i++){				//using i as a level indicator
        for(int j=i;j<=2*(a-i-1)+i;j++){		//every level has a same kind of cube of no. shifting each value by i and a' = a-i 
            arr[i][j] = a-i;
            arr[2*(a-i-1)+i][j] = a-i;
            arr[j][i] = a-i;
            arr[j][2*(a-i-1)+i] = a-i;
        }
    }
    
    return arr;
}

int main() {
	int n;
	cin>>n;
	int** a = preetyPrint(n);
	
	for (int h = 0; h < 2*n-1; h++)
      {
            for (int w = 0; w < 2*n-1; w++)
            {
                  cout<<a[h][w]<<" ";
            }
            cout<<endl;
      }
	
	return 0;
}
