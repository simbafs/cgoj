#include <iostream>

using namespace std;

int main(){
	int n = 0;
	int m = 0;
	int p[10] = {};
	int fab[100000] = {};
	int mod = 1000000007;
	fab[0] = 1;
	for(int i = 1; i < 100000; i++) fab[i] = 0;
	cin >> n >> m;
	for(int i = 0; i < m; i ++) cin >> p[i];
	for(int i = 1; i <= n; i ++){
		int re = 0;
		for(int j = 0; j < m; j ++){
			int k = p[j];
			if(i - k == 0) re += 1;
			else if(i - k < 0) re += 0;
			else{
				re += fab[i - k];
			}
			re %= mod;
		}
		fab[i] = re;
	}
	cout << fab[n] << '\n';
	return 0;
}
