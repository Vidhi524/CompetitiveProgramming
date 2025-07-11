#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    // direct value iteration
    //works in all containers similar to for all
    vector<int> v = {1,2,3,4,5,6,7};
    for(int val: v){  // val here is the copy and not reference for actual values use &val thus will work in actual values
        cout<<val<<" ";
    }
    for(auto va:v){
        cout<<va;
    }
    return 0;
}