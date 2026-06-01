#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    int n;
    while(cin>>n){
        string line,s;
        cin.ignore();
        for(int i=0;i<n;i++){
            getline(cin,line);
            stringstream ss(line);
            ss>>s;
            mp[s]++;
        }
        for(auto it:mp){
            cout<<it.first<<" "<<it.second;
            cout<<"\n";
        }
    }
}