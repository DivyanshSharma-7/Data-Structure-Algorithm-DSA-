//  pattern program :-
// output :- *****
//           *****
//           *****
//           *****
//           *****

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){ // lines or rows
        int m=5;
        for(int j=1;j<=m;j++){  // column or 
                  cout<<"*"<<" ";
        } 
        cout<<endl;
    }
    return 0;
}