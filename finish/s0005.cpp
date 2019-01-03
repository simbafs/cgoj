#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n = 0;
	while(cin >> n){
	for(int i=0; i<n; i++){
			int a = 0;
			int b = 0;
			int c = 0;
			cin >> a >> b >> c;
			double d = sqrt(b*b-4*a*c);
			if( d-(int)d == 0){
				cout << "yes" << endl;
			}else{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}
