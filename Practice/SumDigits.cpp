#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main() {
  long long _inp;
  int sum=0;
  cin>>_inp;
  while(_inp>0){
    int cnn=0;
    while((long long)pow(10,cnn) < _inp)
      cnn++;
    short flr = _inp/(long long)pow(10,cnn-1);
    sum+=flr;
    printf("%d", flr);
    if(cnn-1!=0) printf("+");
    _inp%=(long long)pow(10,cnn-1);
  }
  printf("=%d", sum);
}
