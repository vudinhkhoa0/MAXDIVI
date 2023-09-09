#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0) return b;
    return gcd(b % a, a);
}
int main()
{
    //vector <int> a(1000001);
    int n;
    cin >> n;
    vector <int> a(n+1);
    int ans = 0 ;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i == 2) ans = abs(a[2] - a[1]);
        else if (i > 2) ans = gcd(ans, abs(a[i] - a[1]));
    }
    cout << ans;
}

