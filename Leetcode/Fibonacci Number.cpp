class Solution {
public:
    int fib(int N)
    {
        vector<int> d(N+2, 0);      //vector of fib numbers
        d[1] = 1;    //first fib number
        for(int i = 2; i <= N; i++)
        {
            d[i] = d[i -1] + d[i - 2];  //loop for generating fib numbers up to N
        }
        return d[N];    //return N'th fib number
    }
};
