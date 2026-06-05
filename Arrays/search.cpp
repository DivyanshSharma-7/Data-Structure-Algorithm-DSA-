// find a element in an array using linear search .
#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int search){
for(int i=0;i<size;i++){
    if(arr[i]==search){
       return i;
}
}
return -1;
}
int main(){
int arr[]={3,6,3,6,2};
int size=5; //size of an array.
int search;
cout<<"enter search element : ";
cin>>search;
cout<<linearSearch(arr,size,search);
   return 0;
}
  