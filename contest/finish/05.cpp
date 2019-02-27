#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void){
	char n = 0;
	int a = 0;
	bool flag = false;
	cin >> a;
	for(int i = 0;i < a; i++){
		cin >> n;
		if(n <= 'Z' && flag){
			cout << " " << n;
		}else if(n <= 'Z'){
			cout << n;
			flag = true;
		}else{
			cout << n;
		}
	}
	cout << endl;
	return 0;
}
