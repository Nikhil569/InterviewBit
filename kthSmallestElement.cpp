/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 
 
int kthsmallest(const int* A, int n1, int B) {
    int temp[n1];
    int i,j;
    for(i=0;i<n1-1;i++){
        temp[i] = A[i];
    }
    
    for(i=0;i<n1-1;i++){
        for(j=i+1;j<n1;j++){
            if(temp[i]>temp[j]){
                int a = temp[j];
                temp[j] = temp[i];
                temp[i] = a;
            }    
        }
    }
    
    return temp[B];
    
}
