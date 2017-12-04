//
// Created by Shivam Singh on 05/12/17.
//

#include<iostream>
#include <algorithm>
using namespace std;

void qs(int a[], int l, int h){
    int p,i,j, tmp;
    if(l<h){
        p=l;
        i=l;
        j=h;
        while(i<j){
            while(a[i]<=a[p] && i<h)
                i++;
            while(a[j]>a[p])
                j--;
            if(i<j){
                swap(a[i],a[j]);
            }
        }
        swap(a[p],a[j]);
        qs(a,l,j-1);
        qs(a,j+1,h);
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    //sort(a,a+n); // :P
    qs(a,0,n-1);

    for(int i=0; i<n; i++)
        cout << a[i] << " " ;

    return 0;
}