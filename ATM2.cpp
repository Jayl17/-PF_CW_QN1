#include <iostream>
#include <stdio.h>
#define clrscr() ;
using namespace std;


//This function account_show_menu is to display or print out the following items within the function and it show at the start of the program
void account_show_menu() {
   cout << "l. Login  " << endl;
   cout << "c. Create New Account  " << endl;
   cout << "q. Quit " << endl;

}

//This function transaction_show_menu is for displaying transaction menu items
void transaction_show_menu() {
   cout << "d. Deposit Money  " << endl;
   cout << "w. Withdraw Money." << endl;
   cout << "r. Request Balance  " << endl;
   cout << "q. Quit " << endl;

}


int main() {

    char oper; //oper variable is declared to be used in switch case function e.g d for deposit, w for withdraw
    int balance = 0, deposit, withdraw; //All variables declared here accepts only integers

    // All these below are string declared variables
    string userid="";
    string pass="";
    string userid2="";
    string pass2="";




     do   {

    account_show_menu(); //show_menu has been called now to display the content

        cout << "Enter selection: ";
        cin >> oper;
        system("cls"); //Clear the screen after entry
        switch (oper)
        {


        case 'l':

            cout << "Enter userID: ";
            cin >> userid2;
            cout << "Enter Password: ";
            cin >> pass2;

            if (userid.compare(userid2) == 0 && pass.compare(pass2) == 0){



            //code deposite, withdrawl, request after loging successully





    do   {
        transaction_show_menu();

        cout << "input: ";
        cin >> oper;
        system("cls");
        switch (oper)
        {
        case 'd':
            cout << "Enter Amount to Deposit: ";
            cin >> deposit;
            balance += deposit;
            break;
        case 'w':
            cout << "Enter Amount to withdraw: ";
            cin >> withdraw;
            if (balance >= withdraw)
            {
                balance -= withdraw;
            }
            else
            {
                cout << endl
                << "You dont have sufficient Amount in you A/c" << endl;
            }

            break;

        case 'r':

          cout << "Balance is: " << balance << ".00 ugx" << endl;
            break;

        case 'q':
            exit(1);
        }
    } while (oper != 4);

    return 0;








           //code deposit, withdraw, request after logging successlly


            } else {
                cout << "Login not Successfully"  << endl;
            }


            break;

        case 'c':

            cout << "Enter userID: ";
            cin >> userid;
            cout << "Enter Password: ";
            cin >> pass;
           cout << "user is: " << userid  << " and " << pass << endl;
            break;

        case 'q':
            exit(1);
        }




     } while (oper != 3);

    return 0;


}
