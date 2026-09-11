#include <iostream>
using namespace std;

int main() {

    char arr[100];

    cout << "Enter a word: ";
    cin >> arr;

    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    bool palindrome = true;

    while (start < end) {

        if (arr[start] != arr[end]) {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (palindrome == true) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}