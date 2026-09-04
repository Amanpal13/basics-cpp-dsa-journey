#include <iostream>
using namespace std;
// int sum (int a, int b){
//     int totalSum = a + b;
//     return totalSum ;
// }

// void printmyname()
// {
//     cout << "AMAN" << endl;
// }


int getmultiplication (int x, int y , int z){

    int result = x * y * z;
    return result;
}

void printmyname(){
    for (int i=1; i<=10; i=i+1){
        cout << "AMAN" << " ";
        
    }
    cout << endl;
}           //in void you can run return but not with anyone ,
            //example = return; can run succesfully.
            //but "return 10;" , "return 0" will give you error.

void printmultiples(int num){
    for(int i=1; i<=10; i++){
        cout << num * i << " ";
    }
    cout << endl;
}

int convertintocelsius (int far){
    int celsius = (far-32)*5/9;
    return celsius;
}

char convertintouppercase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}

int main() {
    // int ans = sum(10, 20);
    // cout << ans << endl;



    //functioncalling
    int multiplication = getmultiplication(4,5,6);  //(4.5.6)-> is called as argument
    cout << multiplication << endl;


    printmyname();


    printmultiples(5);


    int celsius = convertintocelsius (107);
    cout << celsius<< endl;


    char word = convertintouppercase('b');
    cout << word << endl;



     







    //fucntioncall
    // printmyname();

    return 0;
}