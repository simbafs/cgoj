#include <iostream>
#include <string>

using namespace std;


int main(){
	string step;
	while(cin >> step){
		int x = 0;
		int y = 0;
		cin >> x >> y;
		for(int i=0; i<step.length(); i++){
			switch(step[i]){
				case 'a':
				case 'A':
					x--;
					break;
				case 'w':
				case 'W':
					y++;
					break;
				case 's':
				case 'S':
					y--;
					break;
				case 'd':
				case 'D':
					x++;
					break;
			}
		}
		cout << x << ' ' << y << endl;
	}
	return 0;
}
