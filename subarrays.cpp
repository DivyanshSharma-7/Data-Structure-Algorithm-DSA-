// // write all the possible subarrays in the given array .
//            and print how many are they  .

// #include<iostream>
// using namespace std;
// int main(){
// int count=0;
//     int arr[]={3,7,2,9,2};
//     int n=5; //size .
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             for(int k=start;k<=end;k++){
//                 cout<<arr[k];

//             }
//             cout<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// cout<<"possible subarrays are :  "<<count;
//     return 0;
// }


// maximum subarray sum . -- leetcode (53).
// brute force approach .
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=68;
    // int maxSum=INT_MIN;
    int maxSum=0;

int arr[n]={3,6,2,8,1,9,2,4};
for(int start=0;start<n;start++){
    int currSum=0;
    for(int end=start;end<n;end++){
currSum+=arr[end];
maxSum=max(currSum,maxSum);
    }
}


cout<<"maximun subarray sum is : "<<maxSum;
    return 0;
}