#include <srdio.h>

int main(){
	int n = 0;
	int q = 0;
	while(scanf("%d %d",&n, &q)){
		long long x[500000] = {};
		for(int i = 0; i < n; i++) scanf("%d", x[i]);
		for(int i = 0; i < q; i++){
			int cmd = 0;
			int l = 0;
			int r = 0;
			int k = 0;
			long long re = 0;
			scanf("%d", &cmd);
			switch(cmd){
				case 1:
					scanf("%d %d %d", &l, &r, &k);
					l -= 1;
					r -= 1;
					for(int i = l; i <= r; i++){
						x[i] += k;
					}
					break;
				case 2:
					scanf("%d %d", &l, &r);
					for(int i = l-1; i <= r-1; i++){
						re += x[i]*x[i];
					}
					printf("%d\n", re);
					break;
				case 3:
					scanf("%d %d", &l, &r);
					re = x[l-1]*x[l-1];
					for(int i = l; i <= r-1; i++){
						long long tmp = x[i]*x[i];
						if(tmp < re) re = tmp;
					}
					printf("%d\n", re);
					break;
			}
		}
	}
	return 0;
}
