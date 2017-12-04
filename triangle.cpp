#include <iostream>
using namespace std;

int a,b,c;

void check(char, int);
void input(char);

void check(char tmp, int v){
    if(v<0 || v>10) {
        cout << tmp <<" out of range !";
        input(tmp);
    }else{
        if(tmp == 'a'){
            a = v;
        }else if(tmp == 'b'){
            b = v;
        }else {
            c = v;
        }
    }
}

void input(char tmp){
    cout << tmp << " :" ;
    int v;
    cin >> v;
    check(tmp, v);
}

int main(){

    input('a');
    input('b');
    input('c');

    if(a+b > c && b+c > a && c+a > b){ //tri
        if(a==b && b==c && c==a)
            cout <<"eq " << endl;
        else if(a==b || b==c || c==a)
            cout << "iso" << endl;
        else
            cout << "sca" << endl;
    }else
        cout << "not a tri" << endl;

    return 0;
}