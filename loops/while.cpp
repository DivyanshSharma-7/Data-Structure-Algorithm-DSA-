#include<iostream>
using namespace std ;
int main(){
    int sum=0;
    // example of  while loop .
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;

    }
    cout<<"sum= "<< sum <<endl;
    return 0;
}

