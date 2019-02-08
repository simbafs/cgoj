#include <iostream>
#include <string>

using namespace std;

int main(){
	string n;
	while(cin >> n){
		int re = 0;
		for(int i = 0; i < n.length(); i ++){
			re += n[i] - '0';
		}
		cout << re << endl;
	}
	return 0;
}
