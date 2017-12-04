//
// Created by Shivam Singh on 05/12/17.
//

#include <iostream>
using namespace std;

int bs(int a[], int l, int h, int k){
    int m;
    while (l<=h){
        m  = (l+h)/2;
        if(a[m]==k)
            return m;
        else if(a[m] > k){
            h=m-1;
        }else{
            l=m+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;

    int r = bs(a,0,n-1,k);
    if(r==-1)
        cout << "not found !";
    else
        cout << "found at " <<  r;

    return 0;
}