#include<iostream>
#include<vector>
#include<list>

using namespace std;
int main(){
    // list<int>l={2,3,5,6,7};
    list<int>l;
    

    l.emplace_back(2);
    l.push_back(3);
    l.push_front(9);
    l.push_front(7);
    l.pop_front();
    l.pop_back();
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;

    

    cout<<"size is : "<<l.size()<<endl;
    // cout<<"capacity is : "<<l.capacity()<<endl;      // not in list



    return 0;
}


