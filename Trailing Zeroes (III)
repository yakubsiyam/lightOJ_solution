#include<bits/stdc++.h>
using namespace std;

int find_trailing_zeroes(int N)
{
    int cnt = 0, p = 5, dw = 5;
    while(N >= dw)
    {
        cnt += N /dw;
        dw *= p;
    }
    return cnt;
}

int find_N(int Q)
{
    int L = 0, R = 1e9;
    while(L < R)
    {
        int M = L + (R - L) / 2;
        if(find_trailing_zeroes(M) < Q)
            L = M + 1;
        else
            R = M;
    }
    return L;
}

int main()
{
    int T, cs = 1;
    cin >> T;
    while(T--)
    {
        int Q;
        cin >> Q;
        int N = find_N(Q);
        if(find_trailing_zeroes(N) != Q)
            cout << "Case " << cs++ << ": " "impossible" << "\n";
        else
            cout << "Case " << cs++ << ": " << N << "\n";
    }
}
