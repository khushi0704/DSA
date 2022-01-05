int fib(int n){
    int dp[n+1]={0};
    // base case => assignment
    dp[0]=0;
    dp[1]=1;

    //bottom up approach
    for(int i=2;i<n;i++){
        dp[i] = dp[i-2] + dp[i+1];
    }
    return dp[n];
}