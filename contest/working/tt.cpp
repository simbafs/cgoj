#include <stdio.h>

int main(void){
	setvbuf(stdin, calloc(1 << 20, sizeof(char)), _IOFBF, 1 << 20);
	setvbuf(stdout, calloc(1 << 20, sizeof(char)), _IOFBF, 1 << 20);
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
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d %d %d", &t, &l, &r);
		if(t == 1){
			for(ap=a+l-1; ap<a+r; ap++) {
				if(*ap){
					re ++;
				}
			}
			printf("%d\n", re);
			re = 0;
		}else{	
			scanf("%d", &k);
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
