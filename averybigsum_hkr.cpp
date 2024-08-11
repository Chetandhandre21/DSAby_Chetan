long aVeryBigSum(vector<long> ar) {
    int n=end(ar)- begin(ar);
    long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    return sum;

}