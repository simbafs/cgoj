#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void){
	int n = 0;
	int k = 0;
	int at[500] = {};
	string cmd;
	int arg = 0;
	int ddeal = 0;
	int deal[10000][3] ={{}};
	bool mine = false;
	/**/
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> at[i];
	for(int i = 0; i < k; i++){
		cin >> cmd;
//		cout << cmd << endl;
		if(cmd.compare("txpool.pending") == 0){
//			cout << 1 << endl;
			cout << ddeal << endl;
		}else if(cmd.compare("balance") == 0){
//			cout << 2 << endl;
			cin >> arg;
			cout << at[arg-1] << endl;
		}else if(cmd.compare("miner.start()") == 0){
//			cout << 3 << endl;
			mine = true;
		}else if(cmd.compare("miner.stop()") == 0){
//			cout << 4 << endl;
			mine = false;
		}else if(cmd.compare("trans") == 0){
//			cout << 5 << endl;
			cin >> deal[ddeal][0] >> deal[ddeal][1] >> deal[ddeal][2];
			ddeal ++;
		}
		if(mine){
			for(int i = 0; i < ddeal; i++){
				int mon = deal[i][2];
				at[deal[i][0]-1] -=  mon;
				at[deal[i][1]-1] +=  mon;
				at[0] ++;
			}
			ddeal = 0;
		}
	}
	return 0;
}


/* txpool.pending
 * balance x
 * miner.start()
 * miner.stop()
 * trans x y z
 */
