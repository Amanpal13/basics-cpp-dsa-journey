#include <iostream>
using namespace std;

int main() {

    char arr[5] = "aman";

    int start = 0;
    int end = 3;

    while (start < end) {

        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << arr;

    return 0;
}