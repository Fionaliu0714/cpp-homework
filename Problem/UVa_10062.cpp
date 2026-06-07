#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int> a,pair<char,int> b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second<b.second;
}
int main(){
    string s;
    int t=0;
    while(getline(cin,s)){
        map<char,int> mp;
        if(t){
            cout<<"\n";
        }
        t=1;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int> > mpp;
        for(auto it:mp){
            mpp.push_back({it.first,it.second});
        }
        sort(mpp.begin(),mpp.end(),cmp);
        for(auto it:mpp){
            cout<<(int)it.first<<" "<<it.second<<endl;
        }
    }
}