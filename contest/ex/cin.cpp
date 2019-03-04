#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int Get(int in[]){
	int a = 0;
	int index = 0;
	char s[2000000] = {};
	fgets(s, sizeof(s), stdin);
	char *n;
	n = strtok(s, " ");
	while(n != NULL){
	    a = stoi(n);
		n = strtok(NULL, " ");
	}
	return index;
}

int main(void){
	int re[1000000000] = {};
	int n = Get(re);
	for(int i = 0; i < n; i++){
		cout << re[i] << '\n';
	}
	return 0;
}
