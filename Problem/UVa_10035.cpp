#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x,y;
    while(cin>>x>>y){
        int step=0;
        if(x==0 && y==0)break;
        else{
            int temp=0;
            while(x!=0 || y!=0){
                if(x%10+y%10+temp>=10){
                    step++;
                    temp=1;
                }
                else{
                    temp=0;
                }
                x/=10;
                y/=10;
            }
        }
        if(step==0){
            cout<<"No carry operation."<<endl;
        }
        else if(step==1){
            cout<<"1 carry operation."<<endl;
        }
        else{
            printf("%d carry operations.\n",step);
        }
    }
}