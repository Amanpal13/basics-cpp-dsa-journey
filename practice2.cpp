#include<iostream>
using namespace std;

// print couting from 1 to 100
void printcounting(){
    for(int i=1; i <=100; i=i+1)
    cout << i << endl;
}

// print simple intrest
int simpleintrest (int p , int r , int t){
    int result = p * r * t;
    int ans = result/100;
    return ans;
}

//print prime number from 1 to 100
void printPrime() {

    for (int num = 2; num <= 100; num++) {

        bool isPrime = true;

        for (int i = 2; i < num; i++) {

            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime == true) {
            cout << num << " ";
        }
    }
    cout << endl;
}

//check if someone is eligible for vote or not
void checkingage(int age){
    if ( age >= 18 ){
        cout << "eligible for vote" << endl;
    }
    else {
        cout << "not eligible for vote"<<endl;
    }
}

//make sip calculator
int calculateSIP(int monthlyAmount, int months) {
    int total = monthlyAmount * months;

    return total;
}



int main(){
    printcounting();


    int sinumber = simpleintrest(20,49,50);
    cout << sinumber << endl;

    printPrime();


    int age;
    cout << "enter your age :" ;
    cin >> age;

    checkingage (age);

    int monthlyAmount;
    int months;

    cout << "Enter monthly amount: ";
    cin >> monthlyAmount;

    cout << "Enter number of months: ";
    cin >> months;

    cout << "Total invested = "
         << calculateSIP(monthlyAmount, months);

    return 0;
}

