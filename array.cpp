#include <iostream>
using namespace std;
void printarray(int arr[], int size){
    for (int index=0; index<=size-1; index++){
        cout <<arr [index]<<" ";
    }

}
void storemultipleof10 (int num[],int size){
    int count = 1;
    for(int index=0; index <= 9; index++){
    num[index]= 10 * count;
    count++;
    }
}
void flipzerotoone(int arr[], int size) {

    for (int index = 0; index < size; index++) {

        if (arr[index] == 1) {
            arr[index] = 0;
        }
        else {
            arr[index] = 1;
        }
    }
}


int main(){

    // int arr[5]={0};
    // int size = 5;
    // printarray(arr,size);


    // int arr [10];
    // int size = 10 ;
    // storemultipleof10(arr,size);

    // printarray(arr,size);


    int arr[] = {1,1,1,0,1,0,0,0,1,1,0,1};
int size = 12;

cout << "Before: ";
printarray(arr, size);
cout << endl;

flipzerotoone(arr, size);

cout << "After: ";
printarray(arr, size);
cout << endl;

    // int arr[] = {10,20,30,40};
    // int size = 4 ;
    // printarray (arr, size);

    //declaration
    //int laxman[101];
    //int arr [11];

    //initialisation
    // int brr[5] = {10,20,30,40,50};
    // int crr[] = {10,20,30,40,50};

    // int multipleof2 [10] = {2,4,6,8,10,12,14,16,18,20};
    // cout << multipleof2[3] << endl;


    // //traverse
    // for (int i=0;i<=9;i++){
    //     cout << multipleof2[i] << " ";
    // }

    //input
    // int arr[5];
    // for (int index = 0; index<=4; index++){
    //     cout << " enter your value for arr:" << " ";
    //     cin >> arr [index];
    //     cout<< endl;
    // }
    // for (int index = 0; index<=4;index++){
    //     cout<< arr [index] << " ";
    // }


    //sum
    // int arr[]={10,20,30,40,50};
    // int sum=0;
    // for (int index=0;index<=4;index++){
    //     sum = sum+arr[index];
    // }
    // cout << "total sum:"<< sum <<endl;

    return 0;
}