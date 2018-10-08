#include <iostream>

using namespace std;
int main() {
  int cnt=0;
  for(int i=1; i<=1000; i++)
    if(i%10==9) cnt++;
  cout<<cnt;
}
