#include <iostream>
using namespace std;

//***the variable***//
int passWord = 2325;
double balance = 5000;
int deposit = 0;
int withDraw = 0;
int choice1 = 0;
char choice2 = 0;
int Attempts = 5;

//***the Menu of ATM***//
void show() {
    cout << "\n\n***** Menu *****" << endl;
    cout << "1) balance" << endl;
    cout << "2) withDraw" << endl;
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
            cout << "\nEnter your choice : "; cin >> choice1;
            switch (choice1) {
            case 1:
                cout << "\n\tYour balance is : " << balance << " JD." << endl;
                break;
            case 2:
                cout << "\n\tEnter your Amount money : "; cin >> withDraw;

                if (withDraw <= balance)
                    balance -= withDraw;
                else
                {
                    cout << "\n|* Erorr : Sorry you can't withDraw this Amount becouse your balance : " << balance << " JD. *|" << endl;
                    break;
                }

                cout << "\n\t\tDo you want to know your current balance [Y OR N] ? : "; cin >> choice2;
                if (choice2 == 'Y' || choice2 == 'y')
                    cout << "\n\t\t\t|* Your balance is : " << balance << " JD. *|" << endl ;
                else;

                break;
            case 3:
                cout << "\n\tEnter you deposit money : "; cin >> deposit;
                balance += deposit;

                cout << "\n\t\tDo you want to know your current balance [Y OR N] ? : "; cin >> choice2;
                if (choice2 == 'Y' || choice2 == 'y')
                {
                    cout << "\n\t\t\t|* Your balance is : " << balance << " JD. *|" << endl ;
                    break;
                }
                else
                    break;
            case 4:
                cout << "\n\t|* Thank You <3. *|" << endl;
                    break;
            default:
            cout<<"\n\t|* Your choice is't available try again *|"<<endl;
            
            }
        } while (choice1 != 4);
    }
    else
    {
        char option;
        Attempts--;
        cout << "\n\tThe password is incorrect, Do you want to try again [Y or N] ? : "; cin >> option;
        if (option == 'Y' || option == 'y')
        {
            if(Attempts!=0)
            {
                cout<< "\n\t\t\tYou have " << Attempts << " attempts left.\n" << endl;
                process();
            }
            else
                cout << "\n\t\t\tYour attempts have been completed try again later <3." << endl;
        }
        else
        {
            cout << "\n\t\t|* Thank You <3. *|" << endl;
            
        }
    }
}

int main()
{
    process();

return 0;
}
