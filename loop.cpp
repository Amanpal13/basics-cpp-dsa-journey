#include <iostream>
using namespace std;

int main() {
    // for (int i=1; i<=5; i=i+1){
    //     if (i == 4) {
    //         continue; // skip the rest of the loop when i is 4
    //     }
    //     cout << i << " ";
    // }

    // for (int i=1; i<=5; i=i+1){
    //     if (i == 4) {
    //         break; // exit the loop when i is 4
    //     }
    //     cout << i << " ";
    // }

    // while loop
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i = i + 1;
    }

    return 0;
}