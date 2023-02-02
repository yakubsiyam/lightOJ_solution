#include<bits/stdc++.h>
using namespace std;

double get_tri_area(double a, double b, double c)
{
    double s = (a + b + c) / 2.0;
    return sqrtl(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    int T, cs = 1;
    cin >> T;

    while(T--)
    {
        double AB, AC, BC, AD, r;
        cin >> AB >> AC >> BC >> r;

        double lo = 0, hi = AB;
        double area_ABC = get_tri_area(AB, AC, BC);

        int cnt = 100;
        while(cnt--)
        {
            double mid = (lo + hi) / 2.0;
            AD = mid;
            double AE = (AD * AC) / AB;
            double DE = (AE * BC) /  AC;
            double area_ADE = get_tri_area(AD, AE, DE);
            double rat = area_ADE / (area_ABC - area_ADE);
            if(rat < r) lo = mid;
            else hi = mid;
        }

        cout << "Case " << cs++ << ": " << setprecision(6) << fixed << AD << endl;
    }
    return 0;
}
