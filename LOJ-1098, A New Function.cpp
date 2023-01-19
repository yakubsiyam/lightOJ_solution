#include<bits/stdc++.h>
using namespace std;

long long getSeriesSum(long long st, long long en)
{
    long long n = en - st + 1;
    return n * (st + st + n - 1) / 2;
}

long long getVsum(long long st, long long en)
{
    return st * (en - st);
}

int main()
{
    int T, cs = 1;
    scanf("%d", &T);

    while(T--)
    {
        int n;
        scanf("%d", &n);
        long long sum = 0;
        for(int i = 2; i * i <= n; i++)
        {
            sum += getSeriesSum(i, n / i);
            sum += getVsum(i, n / i);
        }

        printf("Case %d: %lld\n", cs++, sum);
    }
    return 0;
}
