#include <iostream>
#include <string.h>

using namespace std;
int InputOne;
int InputTwo;
string InputOperation;
char c;
int InputLength;
int main()
{
    
    //cout << "Hello World!\n";
    cin >> InputOne;
    cin >> InputOperation;
    cin >> InputTwo;
    if (!cin) {
        cout << "\n";
        cout << "Bad value!";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> InputOne;
    }
    
    cout << "\n";

    //InputLength = InputOne.length();
    
    /*char char_array[InputLength + 1];
    strcpy(char_array, Input.c_str());*/

    //const char* str = Input.c_str();

    switch (InputOperation[0])
    {

    case '/':
        //cout << "Divide huh?";
        cout << InputOne/InputTwo;
        break;
    case '*':
        //cout << "Multiply huh?";
        cout << InputOne*InputTwo;
        break;

    case '+':
        //cout << "Addition huh?";
        cout << InputOne + InputTwo;
        break;

    case '-':
        //cout << "Subtraction huh?";
        cout << InputOne - InputTwo;
        break;

    default:
        //cout << "Default huh?";
        break;
    }

    //for (int i = 0; i < InputLength; i++) {
    //    cout << InputOne[i];

    //    switch (InputOne[i])
    //    {

    //    case '/':
    //        cout << "Divide huh?";
    //        break;
    //    case '*':
    //        cout << "Multiply huh?";
    //        break;

    //    case '+':
    //        cout << "Addition huh?";
    //        break;

    //    case '-':
    //        cout << "Subtraction huh?";
    //        break;

    //    default:
    //        //cout << "Default huh?";
    //        break;
    //    }
    //    cout << "\n";
    //}

   

    //for (char& c : Input)
    //{
    //    cout << c;
    //    cout << "\n";
    //    //str[]
    //    if (isspace(c)) {
    //        cout << "found a space\n";
    //    }
    //    
    //}

    

}

