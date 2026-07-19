// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

    

    
// while(!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
// }
// // cout<<"front is : "<<q.front()<<endl;

//     return 0;
// }


//priority queue :-

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>q;         //by default 
    // priority_queue<int,vector<int>,greater<int>>q;           //for reverse sorted order

    q.push(10);
    q.push(3);
    q.push(5);

    

    
while(!q.empty()){
    cout<<q.top()<<" ";
    q.pop();
}

    return 0;
}
