#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void){
	unsigned long long n = 0;
	cin >> n;
	if(n%4 == 0){
		cout << 4 << endl;
	}else{
		cout << 0 << endl;
	}
	return 0;         
}
/*1 1 1 1
 *2 4 3 1
 *3 4 2 1
 *4 1 4 1
 *10 10 10 4
 */
