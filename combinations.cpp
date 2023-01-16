#include<bits/stdc++.h>
using namespace std;

const int MOD = 1000003;

long long fact[1000005];

long long get_factorial(int n)
{
    return fact[n];
}

long long get_power(int a, int b)
{
    if(b == 0)
        return 1;
    if(b % 2 == 0)
    {
        auto res = get_power(a, b / 2);
        return (res * res) % MOD;
    }
    return (a * get_power(a, b - 1)) % MOD;
}

long long find_ncr(int n, int k)
{
    long long up = get_factorial(n);
    long long dw = (get_factorial(k) * get_factorial(n - k)) % MOD;
    return (up * get_power(dw, MOD - 2)) % MOD;
}

int main()
{
    fact[0] = 1;
    for(int i = 1; i <= 1000000; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    int T, cs = 1;
    scanf("%d", &T);

    while(T--)
    {
        int n, k;
        cin >> n >> k;
        printf("Case %d: %lld\n", cs++, find_ncr(n, k));
    }
    return 0;
}
