// // basics of vector -- syntax and all .

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec(3,9);

// cout<<vec[0]<<endl;
// cout<<vec[1]<<endl;
// cout<<vec[2]<<endl;
// cout<<vec[3]<<endl;  // garbage value .
// cout<<vec[4]<<endl; // garbage value .


//     return 0;
// }
 

//(for each loops) in vector .

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

// vector<char>vec={'a','b','g','f'};
// for(char  val: vec){ // syntax .

// cout<<val<<endl;
// }
//     return 0;
// }

// different functions in vectors .
 // this is size() function .

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<char>vec={'a','b','g','f','e','5'};


// cout<<"size : " <<vec.size()<<endl;


//     return 0;
// }

// push_back() function .

// #include<iostream>          
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec;
//     cout<<"size : " <<vec.size()<<endl;


// vec.push_back(35);
// vec.push_back(55);
// vec.push_back(25);

// cout<<"after push back size : " <<vec.size()<<endl;


//     return 0;
// }

// this is pop_back() function .
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>vec={3,6,2,6,2,7,1};
// cout<<"size : "<<vec.size()<<endl;
// vec.pop_back(); // last value is deleted .
// cout<<"size after pop back : "<<vec.size()<<endl;

// for(int val :vec){
//     cout<<val<<endl;
// }
//     return 0;
// }


// front() , back() and at() function .

#include<iostream>
#include<vector>
using namespace std;
int main(){

    int i;      // index
    vector<int>vec={2,4,1};
    int size=vec.size();
    cout<<"size is : "<<size<<endl;
    cout<<"front value is : "<<vec.front()<<endl; // 1st value in vector .
    cout<<"back value is : "<<vec.back()<<endl;     // last value in vector.
cout<<"enter index : "<<endl;
cin>>i;
if(i<=size-1){
    cout<<"at position you enter value is " <<vec.at(i);}
   else cout<<"invalid position";
    return 0;

}


