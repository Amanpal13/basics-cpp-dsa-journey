#include <iostream>
using namespace std;

int main() {

    // int a = 10;
    // cout << a << endl;
    // cout << ++a << endl;
    // //increasing a value by 1 and then printing it
    // cout << a++ << endl;
    // //increasing a value by 1 but printing the previous value
    // cout << a << endl;
    // //a value become 12 
    // cout << --a << endl;
    // //decreasing a value by 1 and then printing it
    // cout << a-- << endl;
    // //decreasing a value by 1 but printing the previous value
    // cout << a << endl;
    // //verified


    //arithmetiuc
    // int a =10;
    // int b = 5;

    // cout << a + b << endl;
    // cout << a - b << endl;
    // cout << a * b << endl;
    // cout << a / b << endl;
    // cout << (5.0/2) << endl;


    //relational
    // int a = 10;
    // int b = 5;   
    // cout << (a > b) << endl;
    // cout << (a < b) << endl;
    // cout << (a >= b) << endl;
    // cout << (a <= b) << endl;
    // cout << (a == b) << endl;
    // cout << (a != b) << endl;


    //LOGICAL OPERATORS
    int a = 10;
    int b = 5;
    // cout << (a > b && a < b) << endl;
    //if all conditions are true then it will return true otherwise false
    // cout << (a > b || a < b) << endl;
    //if any one condition is true then it will return true otherwise false
    // cout << (!(a > b)) << endl;
    //if the condition is true then it will return false and vice versa


    //assignment operators
    int c = 10;
    // cout << (c += 5) << endl;
    // cout << (c -= 5) << endl;
    // cout << (c *= 5) << endl;
    // cout << (c /= 5) << endl;

    //bitwise operators
    cout << (5 & 4) << endl;
    //if both bits are 1 then it will return 1 otherwise 0
    cout << (5 | 4) << endl;
    //if any one bit is 1 then it will return 1 otherwise 0
    cout << (~ 4) << endl;
    //if the bit is 1 then it will return 0 and vice versa
    cout << (5 << 1) << endl;
    //it will shift the bits to left by 1 position
    cout << (10 >> 1) << endl;
    //it will shift the bits to right by 1 position //kindoff half the value of the number
    cout << (5 ^ 5) << endl;
    //if both bits are same then it will return 0 otherwise 1


    return 0;
}