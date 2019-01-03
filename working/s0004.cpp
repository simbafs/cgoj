
#include <iostream>

using namespace std;

int num=0;
int score[20] = {};

int sort();

int main(){
	while(cin >> num){
		bool below = true;
		bool above = true;
		int minpass = num-1;
		int maxnopass = 0;
		for(int i=0; i<num; i++){
			cin >> score[i];
			if(score[i] < 60) above = false;
			if(score[i] >= 60) below = false;
		}
		sort();
		for(int i=0; i<num; i++){
			cout << score[i];
			if(i != num-1){
				cout << ' ';
			}else{
				cout << endl;
			}
		}
		
		while(score[minpass-1] > 60 && minpass-1 >= 0) minpass --;
//		cout << minpass << ' ' << maxnopass << endl;
		while(score[maxnopass+1] < 60 && maxnopass+1 < num) maxnopass ++;
//		cout << minpass << ' ' << maxnopass << endl;
		
		if(above && !below){
			cout << score[minpass] << endl;
			cout << "best case" << endl;
		}else if(!above && below){
			cout << score[maxnopass] << endl;
			cout << "worst case" << endl;
		}else{
			cout << score[maxnopass] << endl << score[minpass] << endl;
		}

	}
	return 0;
}

int sort(){
	for(int i=0; i<num-1; i++){
		for(int j=i+1; j<num; j++){
			if(score[i] > score[j]){
				score[i] ^= score[j];
				score[j] ^= score[i];
				score[i] ^= score[j];
			}
		}
	}
	return 0;
}
