#include <iostream>
#include<stdio.h>


using namespace std;

int main() {
  int _indent, _days;
  cout<<"Indent ~ ";
  cin>>_indent;
  cout<<"Days ~ ";
  cin>>_days;
  for(int i=1; i<=_indent-1; i++){
    cout<<"\t";
  }
  for(int i=1; i<=_days; i++){
    printf("%8d", i);
    if((i+_indent-1)%7==0) cout<<endl;
  }
}
