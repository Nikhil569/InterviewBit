/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * @input C : Integer
 * 
 * @Output Integer
 */
int numRange(int* A, int n1, int B, int C) {
    int i,j;
    int count=0;
    for(i=0;i<n1;i++){
        int sum=A[i];
        if(sum>=B && sum<=C) count++;
        for(j=i+1;j<n1;j++){
            sum = sum+A[j];
            if(sum>C) break;
            else if(sum>=B && sum<=C) count++;
        }
    }
    
    return count;
    
}
