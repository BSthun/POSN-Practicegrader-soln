#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int siz[3];
    cin>>siz[2]>>siz[1]>>siz[0];
    int box[3][3] = {
        8,10,15,
        12,15,25,
        20,40,50
    };

    bool co=false;
    for(int i=0; i<3; i++){
        bool cor=true;
        for(int c=0; c<3;c++){
            if(siz[c] > box[i][c]) { cor=false; break; }
        }
        if(!cor)  continue;
        co=true;
        cout<<i+1<<endl;
        cout<<(box[i][0]*box[i][1]*box[i][2])-(siz[0]*siz[1]*siz[2]);
        break;
    }
    if(!co){
        cout<< "Oversize product" <<endl;
        cout<<(siz[0]*siz[1]*siz[2])-(box[2][0]*box[2][1]*box[2][2]);
    }
}
