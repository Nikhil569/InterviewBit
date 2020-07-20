/*Problem:
Given a sorted array of integers, find the number of occurrences of a given target value.
Your algorithm’s runtime complexity must be in the order of O(log n).
If the target is not found in the array, return 0

**Example : **
Given [5, 7, 7, 8, 8, 10] and target value 8,
return 2

*/






/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 int search(const int* A , int low, int high, int B, int searchFirst){
     int mid = (low+high)/2, result = -1;
     
     while(low<=high){
         if(A[mid]==B){
            if(searchFirst){
                result = mid;
                high = mid-1;
            }  
            
            else{
                result = mid;
                low = mid+1;
            }
         } 
         else if(A[mid]>B) high = mid-1;
         else low = mid+1;
     }
     
     return result;
 }
 
 
int findCount(const int* A, int n1, int B) {
    int low = search(A , 0 , n1-1 , B  , 1);
    if(low==-1) return 0;
    else{
        int high = search(A , low , n1-1 , B  , 0);
        return high-low+1;
    }
    
    
}
