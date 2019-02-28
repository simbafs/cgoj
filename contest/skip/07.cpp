#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(void){
	std::ios::sync_with_stdio(false);
	/*
	static const auto init = []() {
		std::ios::sync_with_stdio(false);
		std::cin.tie(nullptr);
		return nullptr;
	}();
	*/
	int n = 0;
	int m = 0;
	int a[100000] = {};
	int* ap;
	int t = 0;
	int l = 0;
	int r = 0;
	int k = 0;
	int re = 0;
	char input[1000000] = {};
	char* cp;
	cin >> n >> m;
	//for(int i = 0; i < n; i++) cin >> a[i];
	ap = a;
	cp = input;
	fgets(input, sizeof(input), stdin);
	char* tmp;
	tmp = strtok(cp, " ");
	do{
		//*ap = atoi(tmp);
//		cout << atoi(tmp) << ' ';
		cout << *ap << '\n';
		ap ++;
	}while(tmp = strtok(NULL, " "));
	
	//for(ap = a; ap < a+n; ap++) cin >> *ap; 
	for(int i = 0; i < m; i++){
		cin >> t >> l >> r;
		if(t == 1){
			//for(int j = l; j <= r; j++){
			for(ap=a+l-1; ap<a+r; ap++) {
				if(*ap){
//					cout << "\t" << j << endl;
					re ++;
				}
			}
			cout << re << endl;
			re = 0;
		}else{
			cin >> k;
			for(ap=a+l-1; ap<a+r; ap++) {
				if(*ap < k){
					*ap = 0;
				}else if(*ap){
					*ap /= k;
				}
			}
		}
	}
	
	return 0;
}
