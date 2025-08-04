#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUser.h"
#include <iomanip>
#include "clsMainScreen.h"
#include "Global.h"

class clsLoginScreen :protected clsScreen
{

private:

    static  void _Login()
    {
        bool LoginFaild = false;
		int numberofTrailLogin = 0;
		int numberofMaxLogin = 3;
        string Username, Password;
        do
        {
            
            if (LoginFaild)
            {
                cout << "\nInvalid Username/Password!\n\n";
				cout << "You have " << numberofMaxLogin-1 << " trial(s) left.\n";
            }
            if(numberofTrailLogin == numberofMaxLogin)
            {
                cout << "\nYou have reached the maximum number of login attempts. Exiting...\n";
                exit(0);
			}
            cout << "Enter Username? ";
            cin >> Username;

            cout << "Enter Password? ";
            cin >> Password;

            CurrentUser = clsUser::Find(Username, Password);

            LoginFaild = CurrentUser.IsEmpty();

        } while (LoginFaild);

        clsMainScreen::ShowMainMenue();
       
    }

public:


    static void ShowLoginScreen()
    {
        system("cls");
        _DrawScreenHeader("\t  Login Screen");
        _Login();

    }

};

