#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<string> vs;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        vs.push_back(s);
    }

    map<string,int> mp;
    for(int i=0;i<vs.size();i++){
        mp[vs[i]]++;
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second;
    }
    return 0;

}