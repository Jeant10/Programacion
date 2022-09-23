#include <iostream>
using namespace std;
int main() {
  int i = 10;
  while (i>0){
    int j=1;
    while(j<=i){
      cout<<j;
      j++;
    }
    cout<<endl;
    i--;
  }
  return 0;
}