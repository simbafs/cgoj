#include <iostream>
#include <string>

using namespace std;

char tab(char a){
	switch(a){
		case 'E':
			return '3';
		case 'J':
			return 'L';
		case 'S':
			return '2';
		case 'z':
			return '5';
		default:
			return a;
	}
}

int mirror(char a,char b){
	if ( a == b ){
		switch(a){
			case 'A':
			case 'H':
			case 'I':
			case 'M':
			case 'O':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case '1':
			case '8':
				return 1;
		}
	}else if( tab(a) == tab(b) ){
		return 1;
	}
	return 0;
}

int main(){
	string a;
	while(cin >> a){
		bool flag=true;
		bool flagmirror=true;
		for(int i=0,j=a.length()-1;i<=j;i++,j--){
			if (tab(a[i]) != tab(a[j])) flag = false;
			if (!mirror(a[i],a[j])) flagmirror = false;
		}
		
		if (flagmirror){
			cout << a << " -- is a mirrored string." << endl << endl;
		}else if(flag){
			cout << a << " -- is a regular palindrome." << endl << endl;
		}else{
			cout << a << " -- is not a palindrome." << endl << endl;
		}
	}
	return 0;
}
