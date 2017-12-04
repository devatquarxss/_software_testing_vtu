//
// Created by Shivam Singh on 05/12/17.
//

#include <iostream>
using namespace std;

int l,s,b; //no. of lock, stock, barrel at a time during input

void input(char);
void check(char, int);

void input(char ch){
    int tmp;
    cout << ch << " : ";
    cin >> tmp;
    check(ch, tmp);
}

void check(char ch, int val){
    int max;
    if(ch=='l')
        max=70;
    else if(ch =='s')
        max=80;
    else if(ch =='b')
        max=90;

    if(val < 0 || val >max){ //max is diff for each
        cout << "not in range: " << endl;
        input(ch);
    }else{
        if(ch=='l'){
            l = val;
        }else if(ch=='s'){
            s = val;
        }else if(ch=='b'){
            b = val;
        }
    }
}


int main(){

    int lp = 45, sp = 30, bp = 25; //price of lock stock barrel
    int tl = 0, ts = 0, tb = 0; //total no.of lock stock barrel

    cout << "enter no. of locks(to exit: press -1): ";
    cin >> l; // take no. of lock as input
    if(l!=-1)
        check('l',l);
    while(l!=-1){
        input('s'); // take no. of stock as input
        input('b'); //take no. of barrel as input

        //before taking them again for next order copy them into another var
        //update the var on next delivery
        tl += l;
        ts += s;
        tb += b;

        cout << "enter no. of locks(to exit: press -1): ";
        cin >> l; //for next order, take input again, give option to exit again
        if(l!=-1)
            check('l',l);
        //we could have used do while here !
    }

    //
    cout << "tl:" << tl << "ts: " << ts << "tb: " << tb << endl;

    int ls = tl*lp; //price of total lock
    int ss = ts*sp; //price of total stock
    int bs = tb*bp; //price of total barrel

    int t_s = ls + ss + bs; //update total price
    cout << "total sale: " << t_s;

    int c; // different commision for different total
    if(t_s>1800){
        c=t_s*0.10;
        c += 0.15*800;
        c += 0.20*(t_s-1800); //above 1800  => 20%
    }else if(t_s>1000){
        c=t_s*0.10;
        c += 0.15*(t_s-1000); //1000-1800 15%
    }else{
        c=t_s*0.10; //10% for below 1000
    }

    cout << "comm: " << c << endl;

    return 0;
}