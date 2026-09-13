#include<iostream>
using namespace std;

int countvowel(char arr[]){
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        if ( arr[index] == 'a' || arr[index] == 'e' || arr[index] == 'i' || arr[index] == 'o' || arr[index] == 'u'){
            count++ ;
        }
        index++;
    }
    return count;
}

int countlength(char arr[]){
    int length=0;
    int index=0;
    while(arr[index] != '\0'){
        length++;
        index++;
    }
    return length;
}


int main(){

    char arr[100];
    cout << "Enter a word:";
    cin >> arr ;

    int vowels = countvowel(arr);
    int length = countlength(arr);
    int consonants = length - vowels;
    

    cout << "vowels : " << vowels<< endl;

    cout << "consonant : "<<consonants <<endl;


    return 0;
}