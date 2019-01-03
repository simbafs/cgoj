#include <iostream>

using namespace std;

int main(){
  	int n = 0;
  	int m = 0;
  	int N[10] = {};
  	int M[10] = {};
  	cin >> m >> n;
  	for(int i=0; i<n; i++) cin >> N[i];
  	for(int i=0; i<m; i++) cin >> M[i];
  	for(int i=0; i<m; i++) cout << M[i] << ' ';
  	for(int i=0; i<n; i++) cout << N[i] << ' ';
  	
  	return 0;
}
  
