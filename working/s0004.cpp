
#include <iostream>

using namespace std;

int num = 0;

int sort(int*,int);

int main(){
	while(cin >> num){
		int _pass[20] = {};
		int _nopass[20] ={};
		int* pass = _pass;
		int* nopass = _nopass;
		for(int i=0; i<num; i++){
			int tmp = 0;
			cin >> tmp;
			if(tmp >= 60){
				*pass = tmp;
				pass++;
			}else{
				*nopass = tmp;
				nopass++;
			}
		}
		
		sort(_pass,pass-_pass);
		sort(_nopass,nopass-_nopass);
		

		for(int i=0; i<nopass-_nopass; i++){
			cout << *(_nopass+i) << ' ';
		}
		for(int i=0; i<pass-_pass; i++){
			cout << *(_pass+i);
			if(i != pass-_pass-1){
				cout << ' ';
			}
		}
		cout << endl;
		
		if(pass-_pass == 0){
			
		}


//		cout << *(_pass) << ' ' << *(nopass-1) << endl;


		/*
		for(int i=0; i<num; i++){
			cout << score[i];
			if(i != num-1){
				cout << ' ';
			}else{
				cout << endl;
			}
		}
		
		while(score[minpass-1] >= 60 && minpass-1 >= 0) minpass --;
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

	*/
	}
	return 0;
}

int sort(int* ar,int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(*(ar+i) > *(ar+j)){
				*(ar+i) ^= *(ar+j);
				*(ar+j) ^= *(ar+i);
				*(ar+i) ^= *(ar+j);
			}
		}
	}
	return 0;
}
