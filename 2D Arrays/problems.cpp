// 1) check whether the element is present or not in an 2D Array :-
// // using linearSearch .

// #include<iostream>
// using namespace std;
// bool linearSearch(int arr[][2],int rows,int cols,int search){
// for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
// if(search==arr[i][j]){
//     return true;
// }
//     }
// }
// return false;
// }


// int main(){
//     int arr[3][2]={{2,3},{4,7},{9,1}};
//     int rows=3;
//     int cols=2;
//     int search;
//     cout<<"enter the element to e seached in an array : "<<endl;
//     cin>>search;
    
//     cout<< linearSearch(arr,rows,cols,search)<<endl;

    
// return 0;
    
// }

// // 2) return the max sum of row in a 2D Array !!

// #include<iostream>
// #include<climits>
// using namespace std;
// int maxSumrows(int arr[][2],int rows,int cols){
// int maxSum=INT_MIN;
// for(int i=0;i<rows;i++)
// {
//     int RowSum=0;
//     for(int j=0;j<cols;j++)
//     {
//         RowSum+=arr[i][j];
//     }
//     maxSum=max(maxSum,RowSum);
// }
// return maxSum;
// }
// int main(){
// int arr[][2]={{2,4},{7,4},{9,1}};
// int rows=3;
// int cols=2;
// cout<<maxSumrows(arr,rows,cols)<<endl;

//     return 0;
// }

// 3) return the max sum of columns in a 2D Array !!

// #include<iostream>
// #include<climits>
// using namespace std;
// int maxSumcols(int arr[][2],int rows,int cols){
// int maxSum=INT_MIN;
// for(int j=0;j<cols;j++){
//     int colSum=0;
//     for(int i=0;i<rows;i++){
//         colSum+=arr[i][j];
//     }
//     maxSum=max(maxSum,colSum);
// }
// return maxSum;
// }
// int main(){
// int arr[][2]={{2,4},{7,4},{9,1}};
// int rows=3;
// int cols=2;
// cout<<maxSumcols(arr,rows,cols)<<endl;

//     return 0;
// }


// 4) Diagonal sum of Square Matrix .
// PD--> Primary Diagonal
// SD--> Secondary Diagonal 
#include<iostream>
using namespace std;
int DiagonalSum(int arr[][3],int n)
{
    // int sum=0;

//     time complexity --> O(n*n) 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
// if(i==j){
//     sum+=arr[i][j];           // PD
// }
// else if(j==n-1-i){
//     sum+=arr[i][j];            // SD
// }
//         }
//     }
//     if(n % 2 == 1){                // remove common element 
//         sum -= arr[n/2][n/2];
//     }
    // return sum;


    // time complexity --> O(n) 
    int sum=0;
    // PD--> (i=j)
    // SD-->(j=n-1-i)
for(int i=0;i<n;i++){
    sum+=arr[i][i];             //PD
    if(i!=n-1-i){            // Avoid duplicate center element
        sum+=arr[i][n-i-1];    //SD
    }
}
   
return sum;
}

int main(){
    // int n=3;
int arr[3][3]={{2,3,5},{7,9,4},{7,1,5}};
int n=3;
cout<<DiagonalSum(arr,n)<<endl;

    return 0;
}