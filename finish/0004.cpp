#include <iostream>
#include <string>

using namespace std;

int main(){
  int a=0;
  string n[50];
  for(;;a++){
    cin >> n[a];
    if(!n[a].compare("done")){
      a--;
      break;
    }
  }
  for(int i=0;i<=a;i++){
    cout << n[i] << endl;
  }
  return 0;
}
