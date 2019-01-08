#include <iostream>

using namespace std;

class Queue{
	private:
		int _queue[2000000] = {};
		int _length = 0;
		int _limited = 2000000;
	public:
		Queue(){
			for(int i=0; i<_limited; i++) _queue[i] = 0;
			_length = 0;
		}
		int push(int n){
			_queue[_length++] = n;
			return 0;
		}
		int pull(){
			int re = _queue[0];
			for(int i=1; i<_length; i++){
				_queue[i-1] = _queue[i];
			}
			_length --;
			return re;
		}
		int length(){
			return _length;
		}
};

int main(){
	int step = 0;
	Queue refig;
	while(cin >> step){
		for(int i=0; i<step; i++){
			int command = 0;
			int argument = 0;
			cin >> command;
			switch(command){
				case 1:
					cin >> argument;
					refig.push(argument);
					break;
				case 2:
					cout << refig.pull() << endl;
					break;
				case 3:
					cout << refig.length() << endl;
					break;
				default:
					cout << "ERROR" << endl;
			}
		}
	}
	return 0;
}
