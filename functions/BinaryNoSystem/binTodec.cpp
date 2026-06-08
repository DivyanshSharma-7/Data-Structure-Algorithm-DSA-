// convert a binary into decimal form .

#include<iostream>
using namespace std;
int binTodec(int binNum){
int ans =0;
int rem;
int pow=1;
while(binNum>0){
    rem=binNum%10;
    
    ans+=(rem*pow);
    binNum/=10;
pow=pow*2;
}
return ans;   // decimal form .
}
int main(){
binTodec(101010);
cout<< "decimal no :  " <<binTodec(101010)<<endl;


return 0;

}

   