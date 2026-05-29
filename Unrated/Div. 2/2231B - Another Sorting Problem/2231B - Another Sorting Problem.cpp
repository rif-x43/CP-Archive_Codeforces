#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"
#define no "No"
#define yes "Yes"

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend() // For sorting in descending order 

const int INF = 1e18; // Large value for "infinity" 

int gcd(int a, int b){ return b ? gcd(b, a % b) : a; }
int lcm(int a, int b){ return a / gcd(a,b) * b; }

bool isPrime(int n){for(int i=2;i*i<=n;i++) if(n%i==0) return 0; return n>1;}

void solve() {

  int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_val = 0;
    int mx_diff = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > max_val) {
            max_val = a[i];
        }
        mx_diff = max(mx_diff, max_val - a[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (i > 0 && a[i] < a[i - 1]) {
            a[i] += mx_diff; 
        }
    }

    if (is_sorted(all(a))) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int32_t main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}