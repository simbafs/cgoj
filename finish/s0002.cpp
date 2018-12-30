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
		case 'Z':
			return '5';
	}
	return a;
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
			default:
				return 0;
		}
	}
	return 0;
}

int main(){
	//cout << tab('Z'') << ' ' << tab('5');
	
	
	string a;
	cin >> a;
	while(1){
		bool flag=true;
		bool mirrored=true;	
		bool strictmirror=true;
		for(int i=0,j=a.length()-1;i<=j;i++,j--){
			if( a[i] != a[j] ){
				flag = false;
			}
			if( tab(a[i]) != tab(a[j]) ){
				//cout << i << ' ' << j << endl;
				mirrored = false;
			}
			if( mirror(a[i],a[j]) != 1 ){
				strictmirror = false;
			}
		}
		cout << a;
		if( strictmirror ){
			cout << " -- is a mirrored palindrome.";
		}else if( mirrored && !flag ){
			cout << " -- is a mirrored string.";
		}else if( flag ){
			cout << " -- is a regular palindrome.";
		}else{
			cout << " -- is not a palindrome.";
		}
		if(cin >> a){
			cout << endl << endl;
		}else{
			cout << endl;
			break;
		}
	}
	return 0;
	
}

