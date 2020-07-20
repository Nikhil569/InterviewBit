/*Problem:
Suppose a sorted array A is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

The array will not contain duplicates.

*/




/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int findMin(const int* A, int n1) {
    int low = 0;
    int high = n1-1;
    int mid = (high+low)/2;
    
    if(A[mid]>A[high]){
        low = mid;
        while(A[low]<A[low+1]){
            low++;
        }
        return A[low+1];
    }
    
    else if(A[mid]<A[high]){
        if(A[mid]<A[mid-1]) return A[mid];
        high = mid;
        while(A[high]>A[high-1]){
            high--;
        }
        return A[high];
    }
    
    return A[high];
    
}
