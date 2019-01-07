#include <iostream>
#include <cmath>

using namespace std;

int sort();

int main(){
	
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
