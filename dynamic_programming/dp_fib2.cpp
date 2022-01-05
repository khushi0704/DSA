// top down approach
int fib(int n,int dp[]){
    if(n==0 or n==1){
        return n;
    }

    // check if the dp os already computed
    if(dp[n]!=0){
        return dp[n];
    }
    // otherwise compute the state and store it
    return dp[n] = fib(n-1,dp) + fib(n-2,dp);
}