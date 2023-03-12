#include <iostream>

using namespace std;

int main()
{
    string operation;
    int a;
    int b;
    int oper;
    
    cout << "Введите выбранные числа: ";
    cin >> a;
    cin >> b;

    cout << "Выберите операцию из перечисленных: + - * / ! ^: ";
    cin >> operation;
    
            while (operation != "q")
    {
        if (operation == "+")
        {
            oper = 0;
        }
        else if (operation == "-")
        {
            oper = 1;
        }
        else if (operation == "*")
        {
            oper = 2;
        }
        else if (operation == "/")
        {
            oper = 3;
        }
        else if (operation == "!")
        {
            oper = 4;
        }
        else if (operation == "^")
        {
            oper = 5;
        }
    
    
        switch(oper)
        {
            case 0:
            cout << a + b << endl;
            break;
        
            case 1:
            cout << a - b << endl;
            break;
        
            case 2:
            cout << a * b << endl;
            break;
        
            case 3:
            if (b == 0)
                cout << "infinity" << endl;
            else
                cout << float (a) / b << endl;
            
            break;
            
            case 4:
            bool c;
            c = a = !b;
            cout <<  c << endl;
            break;
            
            case 5:
            bool d;
            d = a ^ b;
            cout << d << endl;
            break;
            
        }
        
        cout << "Выберите операцию из перечисленных: + - * / ! ^: ";
        cin >> operation;
    }
}
