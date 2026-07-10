#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<vector<int>>mat={{1,2,4},{3,7,4,6,9},{5,8,0}};
cout<< mat[0][0]<<endl;
// rows => mat.size();
// cols => mat[i].size();  ( 1st row m  kitne element h )
for(int i=0;i<mat.size();i++){
    for(int j=0;j<mat[i].size();j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}