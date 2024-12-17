#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define vi vector<int>
#define vb vector<bool>
#define vull vector<unsigned long long>
#define pb push_back
#define mp make_pair
#define fwdi(a,b) for(int i=a;i<b;i++)
#define el "\n"
#define sp <<" "
#define co cout<<
#define ci cin>>
#define all(arr) arr.begin(),arr.end()
#define rall(arr) arr.rbegin(),arr.rend() 
 
using namespace std;
 
int d(int n){int ans = 0;int i=1;while(i*i<n){if(n%i == 0){ans++;ans++;}i++;}if(i*i == n){ans++;}return ans;}
// const int MAXN = 1e7+1;
// bool is_prime[MAXN];

// void seive(){fill(is_prime,is_prime + MAXN,true);is_prime[0] = false; is_prime[1] = false;for(int i = 2;i*i<MAXN;i++){if(is_prime[i]){for(int j = i*i;j<MAXN;j += i){is_prime[j] = false;}}}}

void solve(){
		// ifstream cin("input.txt");
		// ofstream cout("output.txt");
		// solution here
		   
}

        
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t=1;
	// cin>>t; //if multiple test cases
	for(int z = 0;z<t;z++){
		solve();
	}
}
