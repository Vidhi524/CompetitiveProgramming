#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
 int main(){
     // it .begin() => points first element
     // .end() => points element next to last element of the conatiner

    // declaration
    // vector<int> v={1,2,3,4,5};
    // vector<int> ::iterator it=v.begin();
    // // value nekaalna
    // cout<< *(v.end()-1);

    // for(it = v.begin();it!=v.end();++it){
    //     cout<<*it;
    // }

    // it+1 => moves to next location
    // it++ => moves next iterator => works in all containers for discontinous as well

    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>> :: iterator it;
    for(it=vp.begin();it!=vp.end();it++){
        cout<<(*(it)).first<<" "<<(*(it)).second<<endl;
        //or only for pair
        cout<<it->first<<" "<<it->second<<endl;
    }
 }