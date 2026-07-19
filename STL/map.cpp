// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// using namespace std;
// int main(){
// map<string,int>m;
// m["tv"]=10;
// m["laptop"]=70;
// m["laptop"]=5;
// m["phones"]=20;
// m["radio"]=100;

// // m.emplace("camera",20);
// m.erase("phones");
// for(auto l:m){
//     cout<<l.first<<" "<<l.second<<endl;
// }

// // cout<<"count :"<<m.count("tv")<<endl;
// // cout<<"count :"<<m["laptop"]<<endl;

// if(m.find("camera")!=m.end()){
//     cout<<"found";
// }
//     else cout<<"not found";



//     return 0;
// }


// //Multimap :-
// #include<iostream>
// #include<vector>
// #include<list>
// #include<deque>
// #include<stack>
// #include<queue>
// #include<map>
// using namespace std;
// int main(){
// multimap<string,int>m;
// m.emplace("tv",20);
// m.emplace("camera",20);
// m.emplace("phones",90);
// m.emplace("phones",90);
// m.emplace("phones",90);
// m.emplace("laptop",70);
// // m.erase("phones");             //iss se phones wli sarii value delete hogi .
// m.erase(m.find("phones"));    // iss se only ek value delete hogi
// for(auto l:m){
//     cout<<l.first<<" "<<l.second<<endl;
// }



// // if(m.find("camera")!=m.end()){
// //     cout<<"found";
// // }
// //     else cout<<"not found";



//     return 0;
// }


//Unordered map :-
#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<string,int>m;

m.emplace("tv",20);
m.emplace("camera",20);
m.emplace("phones",90);
m.emplace("phones",90);
m.emplace("phones",90);
m.emplace("laptop",70);

for(auto l:m){
    cout<<l.first<<" "<<l.second<<endl;
}



// if(m.find("camera")!=m.end()){
//     cout<<"found";
// }
//     else cout<<"not found";



    return 0;
}