/*Problem Description

Given an integer array A of size N containing 0's and 1's only.

You need to find the length of the longest subarray having count of 1’s one more than count of 0’s.



Problem Constraints
1 <= N <= 105



Input Format
First and only argument is an integer array A of size N.



Output Format
Return an integer denoting the longest length of the subarray.



Example Input
Input 1:

 A = [0, 1, 1, 0, 0, 1]
Input 2:

 A = [1, 0, 0, 1, 0]


Example Output
Output 1:

 5
Output 2:

 1
 */
 
 
 int max(int x, int y){
    return (x>y) ? x : y ;
}

int solve1(vector<int> &A, int i, int j,int sum,vector<vector<int>> dp){
    if(i>j) return 0;
    
    if(dp[i][j]!=-1) return dp[i][j];
    
    if(sum==1) return dp[i][j] = j-i+1;
    else{
        return dp[i][j] = max(solve1(A,i+1,j,sum-A[i-1],dp) , solve1(A,i,j-1,sum-A[j-1],dp));
    }
}


int Solution::solve(vector<int> &A) {
    int sum=0;
    int n = A.size();
    for(int i=0;i<n;i++){
        if(A[i]==0) A[i] = -1;
        sum = sum+A[i];
    }
    
    if(sum==1) return n;
    else{
        vector<vector<int>> dp;
        dp.assign(n+1,vector<int>(n+1,-1));
        return solve1(A,1,n,sum,dp);
    }
    
}
