#include<bits/stdc++.h>
using namespace std;

double solve(double r, double AB)
{
    return AB * sqrtl(r / (r + 1));
}

int main()
{
    int T, cs = 1;
    cin >> T;

    while(T--)
    {
        double AB, BC, CA, AD, DE, r;
        cin >> AB >> CA >> BC >> r;

        printf("Case %d: %lf\n",cs++ ,solve(r, AB));
    }
    return 0;
}
