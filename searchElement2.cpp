#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, x;
    cin>>n;
    cin>>x;
    int arr[n];
    int temp = -1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(x==arr[i]){
            temp = i;
            break;
        }
    }
    cout<<temp<<endl;
    return 0;
}