#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void){
	int n = 0;
	int re = 0;
	for(int i = 0; i < 10; i++){
		cin >> n;
		if(n == 88) re ++;
	}
	if(re >= 8) cout << "PASS";
	else cout << "FAIL";
	
	return 0;
}
