#include <iostream>
using namespace std;

int main(){

//     int budget;
//     cout << "Enter your budget: " << endl;

//     cin >> budget;

//     if (budget >= 2000000) {
//         cout << "You can buy a scorpio" << endl;
//     }
//     else{
//         cout << "you cannot buy a scorpio" << endl;
//         }


//     if (condition1) {
//     // Code if condition1 is true
// } else if (condition2) {
//     // Code if condition1 is false, but condition2 is true
// } else {
//     // Fallback code if no conditions are true
// }

int height ;
cout << "Enter your height in feet " << endl;
cin >> height;

int weight ;
cout << "Enter your weight: " << endl;
cin >> weight;

if (height >= 5) {

    if (weight >= 70) {
        cout << "You got a good bmi" << endl;
    }
    else{
        cout << "u should be ashame" << endl;
    }
}
else{
    cout << " hey short king" << endl;
}


    return 0;
}