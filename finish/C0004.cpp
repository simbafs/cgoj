#include <iostream>

using namespace std;

int gcd(int,int);

int main(){
	int a,b,c;
 	cin >> a >> b >> c;
  	cout << gcd(gcd(a,b),c) << endl;
  	return 0;
}

int gcd(int a,int b){
 	int r=a%b;
  	if(r == 0){
     	return b; 
    }else{
     	return gcd(b,r); 
    }
}
