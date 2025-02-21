#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define vull vector<unsigned long long>
#define pb push_back
#define mp make_pair
#define fwdi(a,b) for(int i=a;i<b;i++)
#define fwdj(a,b) for(int j=a;j<b;j++)
#define el "\n"
#define sp <<" "
#define co cout<<
#define ci cin>>
#define all(arr) arr.begin(),arr.end()
#define rall(arr) arr.rbegin(),arr.rend() 
#define sayok co "ok" << el;

using namespace std;

template <typename T>
T mod(T a, T b) {
    return ((a % b) + b) % b;
}

template <typename T>
T floor_div(T a, T b) {
    T q = a / b;
    T r = a % b;
    if (r != 0 && ((a < 0) ^ (b < 0))) {
        q--;
    }
    return q;
}

template <typename T>
T ceil_div(T a, T b) {
    T q = a / b;
    T r = a % b;
    if (r != 0 && !((a < 0) ^ (b < 0))) {
        q++;
    }
    return q;
}

int d(int n){int ans = 0;int i=1;while(i*i<n){if(n%i == 0){ans++;ans++;}i++;}if(i*i == n){ans++;}return ans;}
// const int MAXN = 1e6+1;
// bool is_prime[MAXN];

// void seive(){fill(is_prime,is_prime + MAXN,true);is_prime[0] = false; is_prime[1] = false;for(int i = 2;i*i<MAXN;i++){if(is_prime[i]){for(int j = i*i;j<MAXN;j += i){is_prime[j] = false;}}}}

void solve(){
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin>>t; //if multiple test cases
    
    for(int z = 0;z<t;z++){
        solve();
    }
}
