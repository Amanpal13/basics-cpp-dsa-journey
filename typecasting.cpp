#include <iostream>
using namespace std;

int main() {
    //implicit casting
    //1. int to float
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + num2;
    // cout << "Result: " << result << endl;

    //2. char to int
    // char ch = 'A';
    // int a = ch + 1; //implicit conversion from char to int.
    // cout << a << endl;

    //3. int to char
    //int a = 97;
    //char ch = a; //implicit conversion from int to char.
    //cout << ch << endl;

    //explicit casting
    //1. double to int
    // double pi = 3.14159;
    // int intPi = int (pi); //explicit conversion from double to int.
    // cout << intPi << endl;

    //2. float to char
    // float floatingnumber = 65.35;
    // char charvalue = (char)floatingnumber; //explicit conversion from float to char.
    // cout << charvalue << endl;

    // int/int = int
    // int/float = float
    // float/int = float
    // float/float = float

    //3. int to float
    int a = 10;
    int b = 3.0;
    int c = (float(a)) / b; //explicit conversion from int to float.
    cout << c << endl;



    return 0;
}