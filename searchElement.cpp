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
    bool found = false;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(x==arr[i]){
            cout<<i<<endl;
            found = true;
            break;
        }
    if(!found){
        cout<<-1<<endl;
    }
    return 0;
    }
}
