#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void){
	int x = 0;
	int y = 0;
	int h = 100;
	cin >> x >> y;
	while(x >= 1 && y >= 3){
		x -= 1;
		y -= 3;
	}
	cout << x << ' ' << y << endl;
	for(int i = 0; i < 7; i++){
		h -= y;
		if(x){
			h -= (i+1)*x;
		}
		if(h > 0){
			cout << h;
		}else{
			cout << 0;
		}
		if(i != 6) cout << ' ';  
	}
	
	return 0;
}
