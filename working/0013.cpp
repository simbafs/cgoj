#include <iostream>

using namespace std;

int main(){
	int n = 0;
	int q = 0;
	while(cin >> n >> q){
		long long x[500000] = {};
		long long re = 0;
		int cmd = 0;
		int l = 0;
		int r = 0;
		int k = 0;
		int tmp = 0;
		for(int i = 0; i < n; i++) cin >> x[i];
		for(int i = 0; i < q; i++){
			cin >> cmd;
			switch(cmd){
				case 1:
					cin >> l >> r >> k;
					for(;l <= r; l++) x[l] += k;
					break;
				case 2:
					re = 0;
					for(;l <= r; l++) re += x[l]*x[l];
					cout << re << endl;
					break;
				case 3:
					tmp = x[l]*x[l];
					re = tmp;
					l++;
					for(;l < r; l++) {
							tmp = x[l]*x[l];
							if (tmp < re) re = tmp;
					}
					cout << re << endl;
					break;
			}
		}
	}
	return 0;
}
