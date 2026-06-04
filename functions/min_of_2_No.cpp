// find the minimun of two numbers .

#include<iostream>
using namespace std;
// min of two no .
double min(int ,int ); // fuction prototype / declaration . 
double min(double a,double b){ //   function definition & parameters,
if(a>b){
    return b;

}
else return a;
}
int main(){
    
    cout<<"min= "<<min(5.67,4.99); // arguments
//  sum of two no .
// int s = sum(10,7);   
// cout<<"sum= "<<s<<endl;

            // OR

// sum(10.38,7.69);
// cout<<sum(10.38,7.69) ;

return 0;
}




    
