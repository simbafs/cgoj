#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;

#define LINE_LEN 10000000
#define ERR_DIGIT -100000000
char line[LINE_LEN]={};
char* cp = line;

int readLine() {
	if (cp >= line+strlen(line)) {
		if (NULL == fgets(line, LINE_LEN, stdin)) return 0;
		cp = line;
		while (line[strlen(line)-1] == '\r' || line[strlen(line)-1] == '\n') line[strlen(line)-1] = '\0';
	}
	return 1;
}
int nextDigit() {
    if (!readLine()) return ERR_DIGIT;
    int d;
	while (*cp == ' ' && cp < line+strlen(line)) ++cp;
	if (cp < line+strlen(line)) d = stoi(cp);
	else return ERR_DIGIT;
	while (*cp != ' ' && cp < line+strlen(line)) ++cp;
	while (*cp == ' ' && cp < line+strlen(line)) ++cp;
	return d;
}
int main(void){
	int a;
	while ((a = nextDigit()) != ERR_DIGIT) {
		printf ("%d\n", a);
	}
	return 0;
}
