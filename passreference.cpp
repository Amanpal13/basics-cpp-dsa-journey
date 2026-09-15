#include<iostream>
using namespace std;

// void solve(string a) {
//     cout << "Inside function " << a << endl;
//     a[0] = 'b';
//     cout << "Inside function " << a << endl;
// }

void solve (string &a) {
    cout << "Inside func " << a << endl;
    a = "pal";
    cout << "inside func " << a << endl;
}

void countevenNum(int arr[], int size, int &count ){
    for (int index = 0; index<size; index ++) {
        if (arr[index] % 2 == 0) {
            count++;
        }
    }
}


// By using '&' using this u can make same location for 2 database.

// array hmesha pass by refrence hota hai never pass by value.

int main(){

    int arr[] = {1,2,3,4,5};
    int size = 5;
    int count = 0;

    countevenNum (arr,size,count);
    cout << "Even Number count:" << count << endl;


    // string name = "aman";
    // // char a = 'k';
    // cout <<"inside main " << name << endl;
    // solve(name) ;
    // cout << "inside main " << name << endl;

    // string str = "love";
    // cout << "inside main " << str << endl;
    // solve(str);
    // cout << "Inside main " << str << endl;

    return 0;
}