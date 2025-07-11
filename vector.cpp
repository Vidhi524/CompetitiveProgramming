#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

// 10 to power 7 in global area for sequential

// void printVector(vector<int> v){  // use &v here 
//     for(int i=0;i<v.size();i++){
//         cout<<"Size:"<<v.size()<<endl;
//         cout<<v[i];
//     }
// }

int main(){
    //vectors are array with variable size
    // vector<int> v;
    // v.push_back(1); // add element to v at the end // O(1)
    // v.pop_back(); // removes last element // O(1)
    // v.size(); //O(1)

    // vector<int> v1(10,3);
    // //vector<int> v(size, default value);


    // // Copying of vector
    // vector<int> v2=v; // v2 is copy of v therefore both are different // O(n)

    // //nesting of vectors;

    vector<vector<int>> v;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++){
        
    }


    return 0;
}