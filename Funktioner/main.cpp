#include <iostream>

using namespace std;

int addition(int a, int b);  // call by value
int multiplication(int a, int b); // call by value
void showMenu(int &choice); // Call by reference
void enterValue(int &a, int &b); // Call by reference

int main()
{
    int choice = 0;
    bool exit = false;

    while(exit == false)
    {
        showMenu(choice);

        if (choice == 1)
        {
            int a, b, result;
            enterValue(a, b);
            result = addition(a, b);
            cout << a << " + " << b << " = " << result << endl;
        }
        else if (choice == 2)
        {
            int a, b, result;
            enterValue(a, b);
            result = multiplication(a, b);
            cout << a << " * " << b << " = " << result << endl;
        }
        else if (choice == 0)
        {
            exit = true;
        }
    }

    return 0;
}

void enterValue(int &a, int &b)
{

    cout<<"Enter value 1: ";
    cin>>a;
    cout<<"Enter value 2: ";
    cin>>b;
}
int addition(int a, int b)
{
    int result = a + b;
    return result;
}

int multiplication(int a, int b)
{
    return a * b;
}

void showMenu(int &choice)
{
    cout << "Press 1 for addition." << endl;
    cout << "Press 2 for multiplication" << endl;
    cout << "Press 0 to exit program" << endl;
    cin >> choice;
}
