#include <iostream>

using namespace std;

class Stack{
	private:
		int _stack[2000000] = {};
		int _length = 0;
	public:
		Stack(){
			for(int i=0; i<2000000; i++) _stack[i] = 0;
			_length = 0;
		}
		int push(int n){
			_stack[_length++] = n;
			return 0;
		}
		int pull(){
			return _stack[--_length];
		}
		int length(){
			return _length;
		}
};

int main(){
	int step = 0;
	Stack refig;
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
