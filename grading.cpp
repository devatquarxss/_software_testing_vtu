//
// Created by Shivam Singh on 05/12/17.
//

#include<iostream>
using namespace std;

int main(){
    float p;
    char g;

    cin >> p ;
    if(p>=90)
        g='A';
    else if(p>=80)
        g='B';
    else if(p>=70)
        g='C';
    else if(p>=60)
        g='D';
    else
        g='E';

    switch (g){
        case 'A':cout << "excellent" <<endl;
            break;
        case 'B':cout << "v good" <<endl;
            break;
        case 'C':cout << "good"<<endl;
            break;
        case 'D':cout <<"above avg" <<endl;
            break;
        case 'E':cout <<"satisfactory"<<endl;
            break;
    }

    cout << "per : "<< p << " grade: " << g;

    return 0;
}