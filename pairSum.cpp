
// // WAP to check pair sum is equal to target .
// // brute force approach .
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    
//  vector<int>arr={7,2,-8,8,0,3,-9};
// int n=arr.size(); //size of an array ;
// int target;
// cout<<"enter targated pair sum : ";
// cin>>target;
// bool found=false;

// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]+arr[j]==target){
//             // arr.push_back(i);
//             // arr.push_back(j);
//             cout<<" pair sum is : "<<arr[i]<<", "<<arr[j]<<endl;
// found=true;
//         }
//     }
// }
// if (!found) {
//         cout << "No pair found." << endl;
// }
//     return 0;
// }

// 2 pointer approach or optimal approach ,
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={2,6,1,8,15,0};
int n=6;
sort(arr, arr + n);

int target;
cout<<"enter the targeted sum : "<<endl;
cin>>target;
int i=0;int j=n-1;
while(i<j){
   int  pairSum=arr[i]+arr[j];

    if(pairSum<target){
        i++;
    }
    else if (pairSum>target){
        j--;
    }
    else if (target==pairSum){
cout<<" pair sum is : "<<arr[i]<<", "<<arr[j]<<endl;
break;
    }
}

cout<<" NO PAIR FOUND ";

    return 0;
}
