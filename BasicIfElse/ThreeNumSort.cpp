#include<iostream>
#include<algorithm>

using namespace std;

/*
int main(){
    int n[3];
    cin>>n[0]>>n[1]>>n[2];
    sort(n, n+3);
    cout<<n[0]<<" "<<n[1]<<" "<<n[2];
}*/

int main(){
    int n[999999], num=0;
    while(true){
        int i;
        cin>>i;
        cout<<i;
        if(i==0) break;
        n[num++] = i;
    }
    sort(n, n+num);
    for(int i=0; i<num; i++){
        cout<<n[i]<<endl;
    }
}
