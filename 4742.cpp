#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, ans = 0, sq;
    cin >> n;
    sq = sqrt(n);
    for (int i = 2; i <= sq; i++)
        if (!(n % i))
            ans++;
    ans *= 2;
    if (sq * sq == n)
        ans--;
    cout << ans << endl;
}