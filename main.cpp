// This is c++ main file

#include <iostream>
using namespace std;

int main()
{
    double num1 {};
    double num2 {};
    int choice {};
    char c {};
    cout << "Welcome to this simple calculator program\n";
    do{
        cout << "Following operations are supported: \n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter you choice: ";
        cin >> choice;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        switch (choice)
        {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4: 
                cout << "Result: " << num1 / num2 << endl;
                break;
            case 5:
                exit(0);
        }

        cout << "Do you want to continue (y or n): ";
        cin >> c;
        cout << "\n";

    } while (c != 'n' && c !='N');
    return 0;
}