#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    stack<int>s1;
    s1.swap(s);


    cout<<s1.size()<<endl;   //3
    cout<<s.size()<<endl;      //0
// while(!s.empty()){
//     cout<<s.top()<<" ";
//     s.pop();
// }
// cout<<"top is : "<<s.top()<<endl;

    return 0;
}