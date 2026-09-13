#include<iostream>
using namespace std;

int main(){
    char arr[100];
    char capital[100];
    cout << "Enter your word:";
    cin >> arr;

    int index = 0;

    while(arr[index] != '\0'){
        if(arr[index] >= 'a' && arr[index] <= 'z'){
            capital[index] = arr[index] - 32;
        }
        else if(arr[index] >= 'A' && arr[index] <= 'Z'){
            capital[index] = arr[index] + 32;
        }
        else{
            capital[index]=arr[index];
        }

        index++;
    }


    capital[index] = '\0';

    cout <<"Changed:"<< capital << endl;





    return 0;
}