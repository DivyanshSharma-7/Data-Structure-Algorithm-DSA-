// sum of digits of  given number N .

#include<iostream>
using namespace std;
int sumDigit(int num){
    int sum=0;
    while(num!=0){
    
    int rem=num%10;
     sum=sum+rem;
     num/=10;
}
return sum;
}
int main(){

cout<< "sum= "<<sumDigit(54665);


    return 0;
}