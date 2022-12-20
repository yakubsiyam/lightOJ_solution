#include <bits/stdc++.h>
using namespace std;
int a[100010];

int main()
{
    int T, n, q, cs = 1;
    cin >> T;
    while(T--)
    {
        scanf("%d %d", &n, &q);

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("Case %d:\n", cs++);
        while(q--)
        {
            int l,r;
            scanf("%d %d", &l, &r);
            printf("%d\n", upper_bound(a, a + n, r) - lower_bound(a, a + n, l));
        }
    }
    return 0;
}
