// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;


int main()
{
    int firsnumber;
    int secondnumber;
    bool keepgoing = true;
    int answer;
    while(keepgoing)
    {
        cout << "Enter your fucking number:\n";
        cin >> firsnumber;
        cout << "You entered this number, " << firsnumber << "\nEnter another number\n";
        cin >> secondnumber;

        if (firsnumber < secondnumber)
        {
            cout << "the first number," << firsnumber << ", is less than the second number" << secondnumber << '\n';
        }
        else
        {
            cout << "the first number," << firsnumber << ", is not less than the second number" << secondnumber << '\n';
        }
        if (firsnumber == secondnumber)
        {
            cout << "the first number, " << firsnumber << " ,is equal to second number" << secondnumber << '\n';
        }
        if (firsnumber > secondnumber)
        {
            cout << "The first number is," << firsnumber << " ,is greater than the second number, " << secondnumber << '\n';
        }
        for (int loop = 0; loop < 10 ; loop++ )
        {
            cout << loop << "";

        }
        cout << "\n Hey bro, you still here? if you want to stop put 0 or any other number to continue:\n";
        cin>> answer;
        if (answer == 0)
        {
            keepgoing = false;
        }
    }
    system("pause");
}


