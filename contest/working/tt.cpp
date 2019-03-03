#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;

#define LINE_LEN 10000000
#define ERR_DIGIT -100000000
char line[LINE_LEN]={};
char* cp = line;

int nextDigit() {
    int d;
	if (cp >= line+strlen(line)) {
		if (NULL == fgets(line, LINE_LEN, stdin)) return ERR_DIGIT;
		cp = line;
		while (line[strlen(line)-1] == '\r' || line[strlen(line)-1] == '\n') line[strlen(line)-1] = '\0';
	}
	while (*cp == ' ' && cp < line+strlen(line)) ++cp;
	if (cp < line+strlen(line)) d = stoi(cp);
	else return ERR_DIGIT;
	// move to next digit
	while (*cp != ' ' && cp < line+strlen(line)) ++cp;
	// and skip SPACE
	while (*cp == ' ' && cp < line+strlen(line)) ++cp;
	return d;
}
int main(void){
	int n, m, t, l, r, k, re;
	int a[100000] = {};
	int* ap;

	n = nextDigit();
	m = nextDigit();
	for(int i = 0; i < n; i++){
		a[i] = nextDigit();
	}
	for(int i = 0; i < m; i++){
		t = nextDigit();
		l = nextDigit();
		r = nextDigit();
		if(t == 1){
			for(ap=a+l-1; ap<a+r; ap++) {
				if(*ap){
					re ++;
				}
			}
			fputs(to_string(re).c_str(), stdout);
			fputc('\n', stdout);
			re = 0;
		}else{	
			k = nextDigit();
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
