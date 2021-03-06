#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

#define pb push_back
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define gcd(a,b) __gcd((a), (b))
#define repi(s,e) for(int i=(s); i<(e); i++)
#define repd(s,e) for(int i=(s); i>=(e); i--)
#define PA(a, s, e) repi((s),(e)) cout << a[i] << " "; cout << endl;
#define PAr(a, s, e) repd((s), (e)) cout << a[i] << " "; cout << endl;
#define PV(s, e) for(auto i=(s); i < (e); i++) cout << *i << " "; cout << endl;
#define PVr(s, e) for(auto i=(s)-1; i >= (e); i--) cout << *i << " "; cout << endl;

#define mod 1000000007
#define pii pair<int, int>
#define mii map<int, int>
using namespace std;


int main(void) {
do_not_sync
// FIO
    int t;  cin >> t;
    while (t --) {
        int n, k, sum=0;   cin >> n >> k;
        
        vector<int> a(n), b(n);

        repi(0, n)  cin >> a[i];
        repi(0, n)  cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        repi(0, n) {
            if (i < k)  sum += max(a[i], b[i]);
            else    sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}
