#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void){
	int n = 0;
	int m = 0;
	int a[100000] = {};
	int t = 0;
	int l = 0;
	int r = 0;
	int k = 0;
	int re = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++){
		cin >> t >> l >> r;
		if(t == 1){
			for(int j = l; j <= r; j++){
				if(a[j-1]){
//					cout << "\t" << j << endl;
					re ++;
				}
			}
			cout << re << endl;
			re = 0;
		}else{
			cin >> k;
			for(int j = l; j <= r; j++){
				a[j-1] /= k;
			}
		}
	}
	
	return 0;
}
