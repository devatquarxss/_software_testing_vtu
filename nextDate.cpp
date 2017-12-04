//
// Created by Shivam Singh on 05/12/17.
//

#include <iostream>
using namespace std;

int ly[13] = {-1,31,29,31,30,31,30,31,31,30,31,30,31};
int nly[13] = {-1,31,28,31,30,31,30,31,31,30,31,30,31};

int checkLeap(int);
int checkMon(int,int);

int checkLeap(int y){
    //y
    if(( y%4 == 0 && y%100 != 0 ) || (y%400==0))
        return 1;
    else
        return 0;
}

int checkMon(int l, int m){
    if(l==1)
        return ly[m];
    else
        return nly[m];
}

int main(){

    int d,m,y;
    cin >> d>> m >>y;

    int l = checkLeap(y);
    int dm = checkMon(l,m);
    cout << "days in mon => " << dm <<endl;

    if(m==12 && d==dm)
        cout << "1/1/" << y+1;
    else{
        if(d==dm)
            cout << "1/" << m+1 <<"/"<< y;
        else
            cout << d+1 << "/"<<m <<"/"<< y;
    }

    return 0;
}