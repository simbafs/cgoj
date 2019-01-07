#include <iostream>
#include <math.h>

using namespace std;

int sort(int*,int);

int main(){
	int n = 0;
	int m = 0;
	while(cin >> n >> m){
		int k[65535] = {};
		int index = 0;
		int sum = 0;
		for(; index<m; index++) cin >> k[index];
		for(int i=0; i<m; i++) k[i] = pow(2,n-k[i]);
		sort(k,index);
		for(int i=0; i<m;i++) cout << k[i] << ' '; cout << endl;
		for(int i=0,j=0; i<n; i++){
			cout << i << ' ' << j << ' ' << k[j] << endl;
			if(pow(2,i) != k[j]){
				sum += pow(2,k[j]);
				j++;
			}
		}
		cout << sum << endl;

	}
	return 0;
}

int sort(int ar[],int num){
	for(int i=0; i<num-1; i++){
		for(int j=i+1; j<num; j++){
			if(ar[i] > ar[j]){
				ar[i] ^= ar[j];
				ar[j] ^= ar[i];
				ar[i] ^= ar[j];
			}
		}
	}
	return 0;
}
