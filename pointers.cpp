// #include<iostream>
// using namespace std;
// int changenum(int a){ // pass by value.
//     a=10;
// }

// int main(){

// int a=6;
// changenum(a);
// cout<<"value inside fun : "<<a;


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int changenum(int *ptr){ // pass by reference using pointers .
//     *ptr=10;
// }

// int main(){

// int a=6;
// changenum(&a);
// cout<<"value inside fun : "<<a;


//     return 0;
// }


// #include<iostream>
// using namespace std;
// int changenum(int &b){ // pass by reference using alials .
//     b=10;               // here & is not address its is alials.
// }

// int main(){

// int a=6;
// changenum(a);
// cout<<"value inside fun : "<<a;


//     return 0;
// }


// Array pointer .
// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
// int arr[]={2,5,8,3};

// cout<<arr<<endl;
// cout<<*arr<<endl;

// int a=7,b=9;
// int* ptr=&a;
// ptr=&b;
// cout<<ptr<<endl;
// cout<<&a<<endl;
//     return 0;
// }

// pointer Arithmetic :- 
#include<iostream>
using namespace std;
int main(){
int arr[]={3,1,3,7,2,7};
int a=10; 
// int *ptr=&a;
int *ptr=arr;
cout<<ptr<<endl;

cout<<ptr<<endl;
cout<<*(ptr+1)<<endl;
cout<<*(ptr+3)<<endl;
ptr++;
cout<<*ptr<<endl;

    return 0;
}