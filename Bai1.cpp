#include <bits/stdc++.h>
using namespace std;
main()
{
    int n, k;
    cin >> n >> k;
    long a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n +1);
    cout << a[n - k];
}
