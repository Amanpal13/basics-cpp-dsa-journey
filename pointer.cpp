#include<iostream>
using namespace std;

void solve(int *arr){
    cout << "Inside function:" << sizeof(arr)<< endl;
}

int main(){
    // variable which consist address of value.




    // int number =50;
    // cout << "Printing address of number:" << &number << endl;
    // int *ptr = &number;

    // cout << number << endl;
    // cout << &number << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << *ptr << endl;  //value present at address stored in ptr
    // (*ptr)++;
    // cout << number << endl;

    // int arr[4] = {1,2,3,4};
    // cout << sizeof(arr)<<endl;
    // solve(arr);


    int a=5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << ctr << endl;
    cout << &ctr << endl;
    cout << *ctr << endl;
    cout << **ctr << endl;
    cout << dtr << endl;
    cout << &dtr << endl;
    cout << *dtr << endl;
    cout << **dtr << endl;
    cout << ***dtr << endl;





    return 0;
}