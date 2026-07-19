// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<unordered_map>
// #include<map>
// #include<set>
// using namespace std;
// int main(){

// set<int>s;
// s.insert(1);
// s.insert(6);
// s.insert(7);
// s.insert(5);
// s.insert(3);


// // s.insert(7);
// // s.insert(5);
// // s.insert(3);
// cout<<s.size()<<endl;          // don't return duplicate value and return all values in sorted order


//  cout<<"lower bound : " <<*(s.lower_bound(5))<<endl;  // aagar n value h or na usse next value h toh s.end() value aayegi .
//  cout<<"upper bound : "<<*(s.upper_bound(5))<<endl; 

// Note ::- lower bound & upper bound only calculated when data is Sorted .

// for(int val:s){
//     cout<<val<<" ";
// }
// cout<<endl;
//     return 0;
// }

// // multiset :-
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<unordered_map>
// #include<map>
// #include<set>
// using namespace std;
// int main(){

// multiset<int>s;
// s.insert(1);
// s.insert(6);
// s.insert(7);
// s.insert(5);
// s.insert(3);


// s.insert(7);
// s.insert(5);
// s.insert(3);
// cout<<"size : "<<s.size()<<endl;          

// //  cout<<"lower bound : " <<*(s.lower_bound(5))<<endl;  // aagar n value h or na usse next value h toh s.end() value aayegi .
// //  cout<<"lower bound : "<<*(s.upper_bound(5))<<endl; 
// for(int val:s){
//     cout<<val<<" ";
// }
// cout<<endl;
//     return 0;
// }


// unordered set :-
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<unordered_map>
#include<map>
#include<set>
#include<unordered_set>
using namespace std;
int main(){

unordered_set<int>s;
s.insert(1);
s.insert(6);
s.insert(7);
s.insert(5);
s.insert(3);


s.insert(7);
s.insert(5);
s.insert(3);
cout<<s.size()<<endl;          


 
for(int val:s){
    cout<<val<<" ";
}
cout<<endl;
    return 0;
}