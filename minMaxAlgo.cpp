#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum=INT_MIN;
    int minimum=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }

    cout<<maximum<<" "<<minimum<<endl;
    
}
