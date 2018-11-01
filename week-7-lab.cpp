#include <iostream>
#include <time.h>
using namespace std;
int main() {
int money,x,y;
money=500;
srand( time(NULL) );
 int random = rand() % 2;
 while (money>0){


cout <<"Hi there! You have" << money <<"Bet wisely!" << endl;
cout <<"Enter bet amount" << endl;
cin >> y;
cout << "Enter 1 or 0" << endl;
cin >> x;
if (x!=0 && x!=1) {
    cout << "Try again!" << endl;
continue;

}
else   {
    cout << random;
}
if (random==x){
    money=y*2+;
    cout << money << endl;
}
else
money=money-y;
    cout << money << endl;
    
if (y<0) {
    break;

}
 }










return 0;
}