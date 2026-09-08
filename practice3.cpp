#include<iostream>
using namespace std;
// void populateArray(int arr[], int size){
//     for(int i=1; i < size ; i++) {
//         arr[i]=(i + 1) * 10 ;
//     }
// }

void reverseArray(int arr[], int size) {

    int start = 0;
    int end = size - 1;

    while (start < end) {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}




int main(){
    // int arr[]={10,20,30,40,50,60};
    // int sum =0;
    // for (int index = 0; index<6;index++){
    //     sum = sum + arr[index];
    // }
    // cout << "Total sum:" << sum << endl;

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }




    // int arr [5];
    // int size = 5;

    // populateArray(arr , size);

    // for (int i = 0; i < size ; i++){
    //     cout << arr[i] <<" ";
    // }

    return 0;
}