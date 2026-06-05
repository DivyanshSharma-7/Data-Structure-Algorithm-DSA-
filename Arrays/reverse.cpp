// WAP to reverse the elements of an Array .

#include<iostream>
using namespace std;
int reverseArray(int arr[],int size ){
    int start =0;int end=size-1;
    while(start<end){
    //    int temp=arr[start];
    //     arr[start]=arr[end];
    //     arr[end]=temp;

            //  OR
            swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
int arr[]={9,6,3,4,2};
int size=5; //size of an array.
reverseArray(arr,size);
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}