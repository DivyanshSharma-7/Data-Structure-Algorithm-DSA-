// sum of number from 1 to N .
#include<iostream>
using namespace std;
int sumAll(int n){
int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
    
}
return sum;
}
int main(){


cout<< sumAll(3)<<endl;

    return 0;
}