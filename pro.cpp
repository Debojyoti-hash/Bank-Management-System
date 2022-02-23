#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class  bank
{
char  name[100],add[100],y;
int  balance;
public:
void  open_account();
void  deposit_money();
void  withdraw_money();
void  Display_account();
};
void  bank :: open_account()
{
cout<<"enter your full name ::";
cin.ignore();
cin.getline(name,100);
cout<<"enter your address ::";
cin.ignore();
cin.getline(add,100);
cout<<"What type of account you want to open savings(s) or current(c)";
cin>>y;
cout<<"enter amount for deposite ::";
cin>>balance;
cout<<"your account is created \n";
}
void  bank :: deposit_money()
{
int  a;
cout<<"enter how much you deposite ::";
cin>>a;
balance+= a;
cout<<"total amount you deposite :: \t"<<balance;
}
void  bank :: Display_account()
{
cout<<"your full name :: \t"<<name;
cout<<"your address :: \t"<<add;
cout<<"type of account that you open :: \t"<<y;
cout<<"amount you deposite :: \t"<<balance;
}
void  bank :: withdraw_money()
{
float  amount;
cout<<"\n withdraw ::";
cout<<"enter amount to withdraw ::";
cin>> amount;
balance = balance - amount;
cout<<"now total amount left is ::"<<balance;
}
int  main()
{
int  ch,x;
bank  obj;
cout<<"----------------BANK MANAGEMENT SYSTEM----------------------"<<endl;
cout<<endl;
cout<<endl;
do
{
cout<<"1) open account \n";
cout<<"2) deposit money \n";
cout<<"3) withdraw money \n";
cout<<"4) Display account \n";
cout<<"5) Exit \n";
cout<<"\n Select the option from above \n";
cin>>ch;
switch(ch)
{
case 1:
cout<<"1)open account \n";
obj.open_account();
break;
case2:
cout<<"2)deposit money \n";
obj.deposit_money();
break;
case3:
cout<<"3)withdraw money : \n";
obj.withdraw_money();
break;
case4:
cout<<"4)Display account \n";
obj.Display_account();
break;
case5:
if(ch==5)
{
cout<<"exit";
}
Default:
cout<<"this does not exist, try again \n";
}
cout<<"\n if you want to select next option, then press :: y \n";
cout<<" if you want to exit then press :: N";
x = getch();
if(x=='n'||x=='N')
cout<<"exist";
}
while(x=='y'||x=='Y');
getch();
return 0;
}

