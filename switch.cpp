#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter your grade: "<<endl;
    cin >> grade;

    // if(grade == 'A'){
    //     cout << "your marks will be range of 90 to 100" << endl ;
    // }
    // else if (grade == 'B'){
    //      cout << "your marks will be range of 80 to 90" << endl ;
    // }
    // else if (grade == 'C'){
    //     cout << "your marks will be range of 70 to 80" << endl ;
    // }
    // else if (grade == 'D'){
    //     cout << "your marks will be range of 60 to 70" << endl ;
    // }
    // else {
    //     cout << "your marks will be range of 0 to 60" << endl ;
    // }

    switch(grade){
        case 'A':cout << "your marks will be range of 90 to 100" << endl ;
        case 'a':cout << "your marks will be range of 90 to 100" << endl ;
        break;
        case 'B':cout << "your marks will be range of 80 to 90" << endl ;
        case 'b':cout << "your marks will be range of 80 to 90" << endl ;
        break;
        case 'C':cout << "your marks will be range of 70 to 80" << endl ;
        case 'c':   cout << "your marks will be range of 70 to 80" << endl ;
        break;
        case 'D':cout << "your marks will be range of 60 to 70" << endl ;
        case 'd':cout << "your marks will be range of 60 to 70" << endl ;
        break;
        default:cout << "your marks will be range of 0 to 60" << endl ;
        break;
    }


//     The expression used in a 
// switch
//  statement must be of an integral or enumerated type.

// Supported data types include:

// int
// char
// enum
// Floating-point types such as 
// float
//  or 
// double
//  and complex data types cannot be directly used in a 
// switch
//  expression.

    return 0;
}