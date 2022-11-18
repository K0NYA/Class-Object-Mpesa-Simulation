#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


//CREATING CLASS FOR AIRTIME BALANCE
class Airtime{
public:
    int CurrentAirtime=500;
    int AirtimeBalance;
    int NewAirtime;

    int findAirtimeBalance(){
       return AirtimeBalance=CurrentAirtime+NewAirtime;
       Airtime();
     }
};

class Jazapoints{
public:
    int CurrentJazaPoints=50;


};

class SaftelMoneyBalance{
public:
	long int RecipientNumber;
    int CurrentMoneyBalance=500;
    int MoneyBalance=0;
    int Money=0;
    int Deposit=0;
    int Withdraw=0;
    int Send=0;

    int findAbsoluteBalance(){
        return  MoneyBalance=CurrentMoneyBalance+Money+Deposit-Withdraw;
    }
    int findAbsoluteBalance1(){	
		return MoneyBalance=CurrentMoneyBalance+Money+Deposit-Send;
    }
};

int main()
{
     char NewPin[3];
     int a=0,Options,SaftelMoney;
 cout<<"welcome to Saftel network, kindly set up your new pin"<<endl;
        while(NewPin[a-1] !='\r'){
          NewPin[a]=getch();
            if (NewPin[a]!='\r'){
                cout<<"*";
            }
            a++;
        }
        NewPin[a-1]='\0';

    cout<<"\nGreat, you are ready to go!"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;

    cout<<"To access any of our services, choose an option from the Saftel menu list\n"<<endl;
    cout<<" [1]Check balance\n [2]Buy Airtime\n [3]Check Jaza Points\n [4] Use Saftel Money\n [5]EXIT\n"<<endl;
    do{
    cin>>Options;
    switch (Options){
    case 1:
        cout<<"[1]Check ballance\n"<<endl;
        break;

    case 2:
        cout<<"[2]Buy Airtime\n"<<endl;
        break;
    case 3:
        cout<<"[3]Check Jaza Points\n"<<endl;
        break;
    case 4:
        cout<<"[5]Use Saftel Money"<<endl;
        break;
    case 5:
        cout<<"EXIT"<<endl;
    default:
        cout<<"invalid input"<<endl;
    }
    if (Options==1){
       //CREATE OBJECT FOR AIRTIME
    Airtime Airtime1;
    cout<<"your airtime balance is currently "<<Airtime1.CurrentAirtime<<" valid for 72hrs."<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    else if (Options==2){
    Airtime Airtime2;
    cout<<"Enter the amount you would like to buy"<<endl;
    cin>>Airtime2.NewAirtime;
    cout<<"your new airtime balance is "<<Airtime2.findAirtimeBalance()<<" valid for 72hrs."<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
//CREATE OBJECT FOR JAZAPOINTS
    else if (Options==3){
    Jazapoints Jazapoints1;
    cout<<"your current jazapoints is "<<Jazapoints1.CurrentJazaPoints<<". Top up and stand a chance to in a new Toyota Hilux!"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
//CREATE OBJECT FOR SAFTEL MONEY BALANCE
    else if (Options==4){
            cout<<"Welcome to Saftel money, kindly enter your pin"<<endl;
            NewPin;
            while(NewPin[a-1] !='\r'){
              NewPin[a]=getch();
                if (NewPin[a]!='\r'){
                    cout<<"*";
                }
                a++;
            }
            NewPin[a-1]='\0';
            if (NewPin==NewPin){
                cout<<"\nSelect a service "<<endl;
                cout<<"[1] Check balance\n [2] Deposit money from bank\n [3] Withdraw money to bank\n [4]Send money\n [5]EXIT\n" <<endl;
                do{
                cin>>SaftelMoney;

                switch (SaftelMoney){
                case 1:
                    cout<<"[1] Check balance\n"<<endl;
                    break;
                case 2:
                    cout<<"[2] Deposit money from bank\n"<<endl;
                    break;
                case 3:
                    cout<<"[3] Withdraw money to bank\n"<<endl;
                    break;
                case 4:
                    cout<<"[4] Send money to a number"<<endl;
                    break;
                case 5:
                    cout<<"EXIT"<<endl;
                default:
                    cout<<"Input error"<<endl;
                }
                if (SaftelMoney==1){
                    SaftelMoneyBalance SaftelMoneyBalance1;
                    cout<<"Your balance is currently "<<SaftelMoneyBalance1.CurrentMoneyBalance<<"ksh"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                else if(SaftelMoney==2){
                    SaftelMoneyBalance SaftelMoneyBalance2;
                    cout<<"Enter amount you wish to deposit"<<endl;
                    cin>>SaftelMoneyBalance2.Deposit;
                    cout<<"You have successfully deposited "<<SaftelMoneyBalance2.Deposit<<"ksh"<<endl;
                    cout<<"Your balance is currently "<<SaftelMoneyBalance2.findAbsoluteBalance()<<"ksh"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                else if(SaftelMoney==3){
                    SaftelMoneyBalance SaftelMoneyBalance3;
                    cout<<"Enter amount you wish to withdraw"<<endl;
                    cin>>SaftelMoneyBalance3.Withdraw;
                    cout<<"You have successfully withdrawn "<<SaftelMoneyBalance3.Withdraw<<"ksh to your bank account."<<endl;
                    cout<<"Your new balance is "<<SaftelMoneyBalance3.findAbsoluteBalance()<<"ksh"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                else if(SaftelMoney==4){
                	SaftelMoneyBalance SaftelMoneyBalance4;
                    cout<<"Enter amount you wish to send"<<endl;
                    cin>>SaftelMoneyBalance4.Send;
                    cout<<"Enter recipeint's phone number"<<endl;
                    cin>>SaftelMoneyBalance4.RecipientNumber;
                    cout<<"You have successfully sent "<<SaftelMoneyBalance4.Send<<"ksh to +254"<<SaftelMoneyBalance4.RecipientNumber<<endl;
                    cout<<"Your new balance is "<<SaftelMoneyBalance4.findAbsoluteBalance1()<<"ksh"<<endl;
                    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                }
                else if(SaftelMoney==NULL){
                     cout<<"Invalid Pin"<<endl;
                }
            }
             while(Options!=5);
        }
            else{
                cout<<"Invalid Pin"<<endl;
            }
        }
    }
    while(Options!=5);
    }
