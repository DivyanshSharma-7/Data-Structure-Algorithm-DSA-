#include<iostream>
#include<vector>
using namespace std;
int main(){
// pair<int,char>p={7,'d'};
// cout<<p.first<<endl;
// cout<<p.second<<endl;

pair<int,pair<int ,char>>p={2,{3,'e'}};
cout<<p.first<<endl;
cout<<p.second.first<<endl;
cout<<p.second.second<<endl;

vector<pair<int,int>>vec={{2,3},{5,6},{7,7},{4,6}};

vec.push_back({2,4}); //insert
vec.emplace_back(2,4); //in-place object create

// for(pair<int,int>p:vec){
for(auto p:vec){
    cout<<p.first<<" "<<p.second<<endl;
}
    return 0;
}