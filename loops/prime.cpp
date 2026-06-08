// WAP to check whether the number is prime or not .
#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"enter the  value of n : ";
    cin>>n;
bool isPrime=true;
// for(int i=2;i<=n-1;i++){ 
            //  OR ANOTHER CONDITION .
    for(int i=2;i*i<=n ;i++){
    if(n%i==0)

    { // non prime
    isPrime=false;
    break;
}
}
if(isPrime ==true){
cout<<"prime number";
}
else cout<<"not prime no ";

    return 0;
}
