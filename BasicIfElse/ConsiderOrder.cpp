#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int x,y;
    int m,n;
    cin>>x>>y>>m>>n;
    int uX = m*2 + n*1;
    int uY = m*6 + n*4;
    if(x>=uX && y>=uY){
        printf("Yes %d %d", x-uX, y-uY);
    }else{
        printf("No %d %d", uX-x>=0 ? uX-x : 0, uY-y>=0 ? uY-y : 0);
    }
}
