#include<iostream>
using namespace std;
class bank{
public:
string holder_name;
int acc_number;
int balance;
 void inisialize()
 {
 string a;
 int b;
 int c;
 holder_name = a;
 acc_number = b;
 balance = c;
 cout << "the holder name:" << endl;
 cin >> a;
 cout << "the account number:" << endl;
 cin >> b;
 cout << "Enter your balance:" << endl;
 cin >> c;
 }
 void display()
 {
 cout << "the holder name:" << holder_name << endl;
 cout << "Fo account number:" << acc_number << endl;
 cout << "your balance is" << balance << endl;
 }
  void deposite(){
 int depositeX;
 cout << "your balance is:" << balance << endl;
 cout << "enter the amount of deposite:" << endl;
 cin >> depositeX;
 int x=balance+depositeX;
 cout << "your current balance is:" <<  x  <<endl;
 }
  void withdraw(){
 int withdrawX;
 cout << "your balance is:" << balance << endl;
 cout << "enter the withdrawal money:" << endl;
 cin >>withdrawX ;
 int y=balance-withdrawX;
 cout << "your current balance is:" << y << endl;
 }
 
};
int main()
{
int z;
cout << "welcome to nobitha bank:" << endl;
bank p1;
p1.inisialize();
cout << "enter 1 for checking balance\n enter 2 for money deposite \n enter 3 for moneywithdrawal \n" << endl;
cout << "enter any number:" << endl;
cin >> z;
switch(z)
{
case 1:
    p1.display();
     break;
 case 2:
     p1.deposite();
     break;
  case 3:
     p1.withdraw();
}
return 0;
}