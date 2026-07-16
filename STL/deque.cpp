#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main() {
    deque<int> d = {1, 3, 6, 7, 5};

    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;
cout<<d[4]<<endl;
    return 0;
}