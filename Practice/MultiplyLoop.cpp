#include <iostream>

using namespace std;
int main() {
  int a,b;
  cout<<"Input ~ ";
  cin>>a;
  cout<<"Input ~ ";
  cin>>b;

  for(int i=b; i>=1;i--)
    cout<<a<<" * "<<i<<" = "<<a*i<<endl;
  
}
