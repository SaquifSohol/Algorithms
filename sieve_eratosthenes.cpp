

//Sieve Eratosthenes : finding prime numbers, lowest prime factor, highest prime factor. source : LUV(youtube)
// GCD, LCM
// sunday : 07/10/2023  10:21 AM


#include <bits/stdc++.h>                                                                         
using namespace std;                                                                             

//..............................................my tools...........................................................
#define pb push_back
#define ll long long
#define mx_e max_element
#define mn_e min_element
#define all(x) x.begin(),x.end()
#define forn(i,n) for(int i = 0; i < (int)n; ++i)
#define br <<"\n"
#define sp <<" "<<
#define print(array) for(auto x: array)cout<<x<<" ";
typedef vector<int> VI;
typedef set<int> SI;
const int N = 1e5+10;

//VI a,b;

int ti(){
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	return 0;
}
int in() { int _; scanf("%d", &_); return _; }
ll int l_in() { ll int _; cin >> _; return _; }


bool yn(bool _) { cout << (_? "YES\n":"NO\n"); return NULL; }
int fast(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
return 0;
}



  //************************************************************************************************************//
 //                                           M A I N   C O D E                                                //
//************************************************************************************************************//


vector<bool> isPrime(N, true);
vector<int> lp(N, 0);
vector<int> hp(N);


int sieve(){
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i<N; i++){
        if(isPrime[i]){
            lp[i] = hp[i] = i;
            for(int j=i*2; j<N; j+=i){
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0)
                    lp[j] = i;
            }
        }
    }
    return 0;
}


int gcd(int a, int b){
	
	if(b==0) return a;
	return gcd(b, a%b);
}

//Lcm = a*b/gcd

//GCD Library : __gcd(a,b);
//gcd(gcd(a, b), c);                            // three number’s gcd



int main(){
	fast();
	sieve();

	int n = in();
	cout << isPrime[n] << " " << lp[n] << " " << hp[n] << endl; // prime or not, lowest prime factor, highest prime factor
		
	return 0;
}







