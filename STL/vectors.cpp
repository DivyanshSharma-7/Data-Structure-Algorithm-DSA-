//// some vector functions !!

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// // vector<int>vec(10,0); //size-->10,      every value is equal to 0.
// // it use in Dynamic programming ---> tabulation DP[][]
// vector<int>vec;
// cout<<vec.size()<<endl;
// vec.push_back(1);
// vec.push_back(2);
// vec.push_back(3);
// vec.push_back(4);
// vec.push_back(5);
// vec.emplace_back(6);
// vec.pop_back();
// vec.pop_back();

// cout<<vec.size()<<endl;
// cout<<vec.capacity()<<endl;
// for(int val:vec){
//     cout<<val<<" ";
// }
// cout<<endl;
// cout<<"val at index 2 is "<<vec.at(2)<<endl;
// cout<<"val at index 2 is "<<vec[2]<<endl;
// cout<<vec.front()<<endl;
// cout<<vec.back()<<endl;
//     return 0;
// }


// vector functions :- erase ,insert , clear & empty .

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec={1,2,3,4,5};
// // vec.erase(vec.begin());
// // vec.erase(vec.begin()+2);
// // vec.erase(vec.end());
// // vec.erase(vec.begin(),vec.begin()+2);          // removes the elementin this given range
// vec.insert(vec.begin()+1,10);
// vec.clear();
// for(int val:vec){
// cout<<val<<" ";
// }
// cout<<endl;
// cout<<"is empty : "<< vec.empty()<<endl;
//     return 0;
// }

// vectors --> iterators .

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,3,5,8,4,7};

// cout<<*(vec.begin())<<endl;
// cout<<*(vec.end())<<endl;
// cout<<*(vec.end()-1)<<endl;
vector<int>::reverse_iterator it;
// for( it=vec.begin();it!=vec.end();it++){
//     cout<<*(it)<<" ";
// }
cout<<endl;
for( it=vec.rbegin();it!=vec.rend();it++){
    cout<<*(it)<<" ";
}

cout<<endl;
    return 0;
}