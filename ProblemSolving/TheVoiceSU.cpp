#include<stdio.h>
#include<iostream>

using namespace std;

int n,k;

int main(){
    cin>>n>>k;
    int _kr[2] = {k,k};
    int _se[n][2];
    int allpass = 0;
    for(int i=0; i<n;i++){
        int sex, sc1,sc2;
        cin>>sex>>sc1>>sc2;
        if(sc1<9 && sc2<9) continue;
        if(sc1>=9 && sc2<9 && _kr[0]>0){
            _kr[0]--;
            _se[++allpass][0] = i+1;
            _se[allpass][1] = 1;
            cout<< _se[allpass][0]<<" "<< _se[allpass][1]<<endl;
            continue;
        }
        if(sc1<9 && sc2>=9 && _kr[1]>0){
            _kr[1]--;
            _se[++allpass][0] = i+1;
            _se[allpass][1] = 2;
            cout<< _se[allpass][0]<<" "<< _se[allpass][1]<<endl;
            continue;
        }
        if(sc1>=9 && sc2>=9){
            sex--;
            if(_kr[sex] > 0){
                _kr[sex]--;
                _se[++allpass][0] = i+1;
                _se[allpass][1] = sex;
                cout<< _se[allpass][0]<<" "<< _se[allpass][1]+1<<endl;
            }else if (_kr[sex==0?1:0] > 0){
                _kr[(sex==0?1:0)]--;
                _se[++allpass][0] = i+1;
                _se[allpass][1] = (sex==0?1:0);
                cout<< _se[allpass][0]<<" "<< _se[allpass][1]+1<<endl;
            }
            continue;
        }
    }
}
