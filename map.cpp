#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    // map of integer, string
    map<int, string> mp;
    // insering value
    mp[1]="One"; //O(n)
    mp[5]="five";
    //or
    mp.insert({4,"four"});

    //traversing using iterator
    // map<int, string> ::iterator it;
    // for(it=mp.begin();it!=mp.end();it++){
    //     cout<< it->first <<" "<< it->second<<endl;
    // }

    // or

    for(auto &m:mp){
        cout<<m.first<<" "<<m.second<<endl;
    } // nlog(n)

    mp.find(3); // returns iterator or mp.end();  log(n)

    // erase
    //m.erase(key or iterator) logn(n)

    //clear()=> empties the container


}