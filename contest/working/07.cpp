#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;

int aa = 0;
int indexx = 0;
char s[2000000] = {};
char *nn;

int Get(int in[]){
	aa = 0;
	indexx = 0;
	fgets(s, sizeof(s), stdin);
	nn = strtok(s, " ");
	while(nn != NULL){
	    aa = stoi(nn);
		in[indexx++] = aa;
		nn = strtok(NULL, " ");
	}
	return indexx;
}

int main(void){
	int n = 0;
	int m = 0;
	int a[100000] = {};
	int* ap;
	int t = 0;
	int l = 0;
	int r = 0;
	int k = 0;
	int re = 0;
	int input[1000] = {};
	char* cp;
	Get(input);
	n = input[0];
	m = input[1];
	Get(a);
	for(int i = 0; i < m; i++){
		Get(input);
		t = input[0];
		l = input[1];
		r = input[2];
//		cin >> t >> l >> r;
		if(t == 1){
			for(ap=a+l-1; ap<a+r; ap++) {
				if(*ap){
//					cout << "\t" << j << endl;
					re ++;
				}
			}
			printf("%d\n", re);
			re = 0;
		}else{	
			k = input[3];
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
