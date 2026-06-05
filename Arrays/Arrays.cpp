// // input and output in array by using loops .

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter size of array : ";
// cin>>n;
// int arr[n];

// cout<<"enter the elements in an array : ";
// for(int i=0;i<n;i++){        
// cin>>arr[i];                 // loop for input
// } 

// cout<<"output of the given array : "; 

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
// }
// cout<< "size of array : "<<sizeof(arr)/sizeof(int);
//     return 0;
// }

// smallest element in an array .
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){

// int arr[]={3,6,8,5,7};
// int n=5;  //size of an array .
// int smallest = INT_MAX;
// for(int i=0;i<n;i++){
//     if(arr[i]<smallest){
//         smallest=arr[i];
//     }
// smallest=min(arr[i],smallest);
// }
// cout<<" smallest element is "<<smallest;

//     return 0;
// }


// largest no in an array .
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){


// int arr[]={2,4,7,29,4,2,8};
// int size=7;
// int largest =INT_MIN;
// for(int i=0;i<size;i++){
//     // if(arr[i]>largest){
//     //     largest=arr[i];
//             //  OR
// largest = max(arr[i],largest);
//     // }
// }
// cout<<"largest element is "<<largest;


//     return 0;
// }


// index of the largest and samllest elements in an array .

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int i;
   int index_lar;
    int index_Sma;
int smallest =INT_MAX;
int largest = INT_MIN;
int arr[]={3,7,9,1,6,2};
int n=6; //size
for( i=0;i<n;i++){
if(arr[i]>largest){

 largest=arr[i];
 index_lar=i;
}
 
if(arr[i]<smallest){
        smallest=arr[i];
        index_Sma=i;
    }

}
cout<<"index of samllest element is "<<index_Sma<<endl;
cout<<"index of largest element is "<<index_lar;


    return 0;
}