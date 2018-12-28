#include <iostream>

using namespace std;

int main(){
	bool first=true;
	char in;
	while(cin >> in){
		cin >> in;
//		if( in == EOF ){
//			break;
//		}
		if( in == '\"' ){
			if(first) cout << "``";
			else cout << "\'\'";
		}else{
			cout << in;
		}
	}
	return 0;
}
