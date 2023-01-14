#include<bits/stdc++.h>
using namespace std;

int findNOD (int n)
{
    int c = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            c++;
            c += (i != n / i);
        }
    }
    return c;
}

bool isLess (int a, int b)
{
    int nod_a = findNOD(a);
    int nod_b = findNOD(b);

    if(nod_a < nod_b)
        return true;
    else if(nod_a > nod_b)
        return false;
    else
    {
        if(a > b)
            return true;
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a(1000);

    for(int i = 0; i < 1000; i++)
        a[i] = i + 1;
    sort(a.begin(), a.end(), isLess);

    int T, cs = 1;
    scanf("%d", &T);

    while(T--)
    {
        int n;
        scanf("%d", &n);
        printf("Case %d: %d\n", cs++, a[n - 1]);
    }

    return 0;
}
