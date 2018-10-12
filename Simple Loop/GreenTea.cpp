#include<iostream>

using namespace std;

void act(){
    long long wat, sug;
    cin>>wat>>sug;
    int ava = wat/250 < sug/15 ? wat/250 : sug/15;
    cout<<ava;
    if(wat-250*ava > 0) cout<<" water";
    cout<<endl;
}

int main(){
    for(int i=1; i<=7; i++)
        act();
}
