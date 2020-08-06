/*
Problem Description

Given a string A consisting only of lowercase characters, we need to check whether it is possible to make this string a palindrome after removing exactly one character from this.

If it is possible then return 1 else return 0.



Problem Constraints
3 <= |A| <= 105

A[i] is always a lowercase character.



Input Format
First and only argument is an string A.



Output Format
Return 1 if it is possible to convert A to palindrome by removing exactly one character else return 0.
*/




bool check(int start,int end,string A){
    while(start<=end){
        if(A[start]==A[end]){
            start++;
            end--;
        }
        else    return false;
    }
    
    return true;
}


int Solution::solve(string A) {
    int n = A.size();
    int start=0,end=n-1;
    int flag=0;
    while(start<=end){
        if(A[start]==A[end]){
            start++;
            end--;
        }
        
        else if(A[start]!=A[end] && flag==0){
            if(end-start==1)    return 1;
            
            else if(A[start+1]==A[end] && A[start]==A[end-1]){
                if(check(start+1,end,A))    return 1;
                else if(check(start,end-1,A))   return 1;
                else    return 0;
            }
            
            else if(A[start+1]==A[end]){
                start++;
                flag=1;
            }
            else if(A[start]==A[end-1]){
                end--;
                flag=1;
            }
            else    return 0;
        }
        
        else if(A[start]!=A[end] && flag==1)    return 0;
    }
    return 1;
}
