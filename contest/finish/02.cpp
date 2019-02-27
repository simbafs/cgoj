#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void){
	int n = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 9; j++){
			cout << i << "*" << j << "=" << i*j;
			if(j != 9){
				cout << "\t";
			}
		}
		cout << endl;
	}
	return 0;
}
