#include<iostream>
using namespace std;
int main(){
    int a=5;
    int c=3;
    float b=2;
     // these all arithmetic operators .
     int ans =3/(double)2;
    cout<<(3/(double)2)<<"\n"; // type casting
    cout<<ans<<"\n"; // ans is 1 after type casting also bcz ans is integer type.
cout<<"sum ="<<(a+c)<<"\n";
cout<<"difference ="<<(a-c)<<"\n";
cout<<"product ="<<(a*c)<<"\n";
cout<<"division = "<<(a/b)<<"\n";
cout<<"modulo ="<<(a%c)<<"\n";

// these are relational operators having answer or output only 1 or 0 means true or false .
cout<<(3<5)<<"\n";
cout<<(3<=5)<<"\n";
cout<<(3>5)<<"\n";
cout<<(3>=5)<<"\n";
cout<<(3==3)<<"\n";
cout<<(3!=3)<<"\n";
// these are logical operators .
cout<<!(3>=5)<<"\n";
cout<<((3>5)|| (5>3))<<"\n";
cout<<((3>5)&& (5>3))<<"\n";

// unary operator .
int d=--a;
cout << "d = "<<d<<endl;
cout << "a = "<<a<<endl;
return 0;
}