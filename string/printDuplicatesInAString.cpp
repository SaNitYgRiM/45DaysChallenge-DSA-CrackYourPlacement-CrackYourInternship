// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin>>input;
    unordered_map<char,int> umap;
    for(auto i:input)umap[i]++;
    for(auto i:umap)cout<<i.first<<":"<<i.second<<endl;

    return 0;
}
