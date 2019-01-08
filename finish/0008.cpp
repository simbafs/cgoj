#include <iostream>
#include <string>

using namespace std;

class Player{
	private:
		int _x;
		int _y;
	public:
		Player(){
			_x = 0;
			_y = 0;
		}
		Player(int x,int y){
			_x = x;
			_y = y;
		}
		int w(){
			_y++;
			return 0;
		}
		int a(){
			_x--;
			return 0;
		}
		int s(){
			_y--;
			return 0;
		}
		int d(){
			_x++;
			return 0;
		}
		int print(){
			cout << _x << ' ' << _y << endl;
			return 0;
		}
		int get(){
			cin >> _x >> _y;
			return 0;
		}
		int debug(){
			cout << "x= " << _x << ' '
					 << "y= " << _y << endl;
			return 0;
		}
};

int main(){
	string step;
	while(cin >> step){
//		cout << step << endl;
		Player player;
		player.get();
//		player.debug();
		for(int i=0; i<step.length(); i++){
			switch(step[i]){
				case 'a':
				case 'A':
					player.a();
					break;
				case 'w':
				case 'W':
					player.w();
					break;
				case 's':
				case 'S':
					player.s();
					break;
				case 'd':
				case 'D':
					player.d();
					break;
			}
		}
		player.print();
	}
	return 0;
}
