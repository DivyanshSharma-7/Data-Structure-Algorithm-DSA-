
// sum of all even numbers from 1 to N .
#include<iostream>
using namespace std ;
int main(){

    
    int n;
    int evensum=0;
    cout << "enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            evensum+=i;

        }
    }
    cout<< "evensum = "<<evensum<<endl;

    return 0;
}

