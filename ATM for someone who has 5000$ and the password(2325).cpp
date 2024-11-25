#include <iostream>
using namespace std;

//***the variable***//
int passWord = 2325;
double balance = 5000;
int deposit = 0;
int withdDraw = 0;
int choice1 = 0;
char choice2 = 0;

//***the Menu of ATM***//
void show() {
    cout << "\n\n***** Menu *****" << endl;
    cout << "1) balance" << endl;
    cout << "2) withdDraw" << endl;
    cout << "3) deposit" << endl;
    cout << "4) Exit" << endl;
    cout << "****************\n" << endl;
}

//***the general process***//
void process() {
    cout << "Enter your passWord : "; cin >> passWord;

    if (passWord == 2325) {
        show();

        do {
            cout << "\nEnter your  choice : "; cin >> choice1;
            switch (choice1) {
            case 1:
                cout << "\n\tYour balance is : " << balance << endl;
                break;
            case 2:
                cout << "\n\tEnter your Amount money : "; cin >> withdDraw;

                if (withdDraw < balance)
                    balance -= withdDraw;
                else
                {
                    cout << "\nErorr : Sorry you can't withdDraw this Amount becouse your balance : " << balance << endl;
                    break;
                }

                cout << "\n\t\tDo you want to know your current balance [Y OR N] ? : "; cin >> choice2;
                if (choice2 == 'Y' || choice2 == 'y')
                    cout << "\n\t\t\tYour balance is : " << balance;
                else;

                break;
            case 3:
                cout << "\n\tEnter you deposit money : "; cin >> deposit;
                balance += deposit;

                cout << "\n\t\tDo you want to know your current balance [Y OR N] ? : "; cin >> choice2;
                if (choice2 == 'Y' || choice2 == 'y')
                {
                    cout << "\n\t\t\tYour balance is : " << balance;
                    break;
                }
                else
                    break;
            case 4:
                cout << "\n\tThank You <3." << endl;
                break;
            }
        } while (choice1 < 4);
    }
    else
    {
        char option;
        cout << "\n\tThe password is incorrect, Do you want to try again [Y or N] ? : "; cin >> option;
        if (option == 'Y' || option == 'y')
        {
            cout << "\n\t\tEnter your passWord : "; cin >> passWord;
            if (passWord == 2325)
                process();
            else
                cout << "\n\t\t\ttry again later <3." << endl;
        }
        else
        {
            cout << "\n\t\tThank You <3." << endl;
            choice1 = 4;
        }
    }
}

int main()
{
    process();

return 0;
}