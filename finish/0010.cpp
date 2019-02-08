#include <iostream>

using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
		for(int i = 0; i <= n; i ++){
			cout << i << ' ' << n - i << endl;
		}
	}
	return 0;
}
