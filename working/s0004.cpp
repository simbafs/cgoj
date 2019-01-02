#include <iostream>

using namespace std;

int num=0;
int score[20] = {};

int sort();

int main(){
	while(cin >> num){
		bool below = true;
		bool above = true;
		int* minpass = score;
		int* maxnopass;
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
		cout << *minpass << ' ' << *maxnopass << endl;
		while(*minpass < 60){
			minpass ++;
		}
		maxnopass = minpass -1;
		cout << *minpass << ' ' << *maxnopass << endl;
		cout << minpass-score << ' ' << maxnopass-score << endl;
/*
		if(above && !below){
			cout << "best case" << endl;
		}else if(!above && below){
			cout << "worst case" << endl;
		}else{

		}
*/
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
