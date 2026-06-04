// ques :- find the factorial of given number .

#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;
}
int main(){

cout<<"factorial = " <<fact(4);


    return 0;
}