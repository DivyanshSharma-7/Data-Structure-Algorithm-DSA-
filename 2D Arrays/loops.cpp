// input and output in 2D Array !!

#include<iostream>
using namespace std;
int main(){

    int rows ;
int cols;
cout<<"enter rows" <<endl;
cin>>rows;
cout<<"enter columns" <<endl;
cin>>cols;

//input
cout<<"enter the elements in an array : "<<endl;
int arr[rows][cols];
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cin>> arr[i][j];
}

}

// output
cout<<"entered matrix is : "<<endl;
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
cout<<arr[i][j]<<" ";
}
cout<<endl;
}

cout<<endl;
    return 0;
}


