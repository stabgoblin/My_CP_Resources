#include <bits/stdc++.h>
#include <iomanip>
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
#define fwdi(a,b) for(int i=a;i<b;i++)
#define fwdj(a,b) for(int j=a;j<b;j++)
#define el "\n"
#define sp <<" "
#define all(arr) arr.begin(),arr.end()
#define rall(arr) arr.rbegin(),arr.rend()
using namespace std;

template<typename T>
T MOD(T a, T m) {
    return (a % m + m) % m;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
template <typename T>
T cdiv(T a, T b) {
    T q = a / b;
    T r = a % b;
    if (r != 0 && !((a < 0) ^ (b < 0))) {
        q++;
    }
    return q;
}
template <typename T>
T fdiv(T a, T b) {
    T q = a / b;
    T r = a % b;
    if (r != 0 && ((a < 0) ^ (b < 0))) {
        q--;
    }
    return q;
}

// vector<int> primes;
// void seive(vector<int>& primes){ull nsqrt =  1e6;vector<char> is_prime(nsqrt + 2, true);for (ull i = 2; i <= nsqrt; i++) {if (is_prime[i]) {primes.push_back(i);for (ull j = i * i; j <= nsqrt; j += i)is_prime[j] = false;}}}

void solve(){
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    // seive(primes);
    for(int z = 0;z<t;z++){
        solve();
    }
}
