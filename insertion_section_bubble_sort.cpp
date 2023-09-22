
//Insertion sort, selection sort, bubble sort
// friday : 22th sep, 2023

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

int printVector(vector<int>& a){	
	for(int x: a) cout << x << " ";		
	return 0;
}




int insertion_sort(vector<int>& a){
	
	int len = a.size();
	for(int i=0; i<len; i++){
		int key = a[i], j = i-1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
		
	return 0;
}



int selection_sort(vector<int>& a){
	int len = a.size();
	for(int i=0; i<len; i++){
		int min_indx = i;
		for(int j = i+1; j<len; j++){
			if(a[j] < a[min_indx])
				min_indx = j;
		}
		if(a[i] != a[min_indx])
			swap(a[min_indx], a[i]);
		
	}
	return 0;
}

int bubble_sort(vector<int>& a){
	int len = a.size();
	for(int i=0; i<len-1; i++){
		for(int j = i+1; j<len; j++)
			if(a[i] > a[j])
				swap(a[i], a[j]);

	}
	return 0;
}

int main(){
	
	int n = in();
	VI vec;
	for(int i=0; i<n; i++)
		vec.pb(in());
	
	//insertion_sort(vec);
	//selection_sort(vec);
	//bubble_sort(vec);
	printVector(vec);
	
	
	return 0;
}




