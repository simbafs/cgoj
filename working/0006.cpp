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
		sort(k,index);
		for(int i=0; i<n; i++){
			int* ki = k;
			if(i != *ki){
				sum += pow(2.0,n-i);
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
