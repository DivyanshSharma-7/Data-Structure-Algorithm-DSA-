// convert a decimal into binary form .

#include<iostream>
using namespace std;
int decTobin(int decNum){
int ans =0;
int rem;
int pow=1;
while(decNum>0){
    rem=decNum%2;
    decNum/=2;
    ans+=(rem*pow);
pow=pow*10;
}
return ans;
}
int main(){
for(int i=1;i<=10;i++){
cout<< "binary no of "<< i <<" is "<< decTobin(i)<<endl;

}
return 0;

}

   