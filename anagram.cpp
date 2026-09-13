#include<iostream>
using namespace std;

int countfirstlength(char arr[]){
    int length = 0;
    int index = 0;
    while (arr[index] != '\0'){
        index++;
        length++;
    }
    return length;
}
int countsecondlength(char brr[]){
    int length = 0;
    int index = 0;
    while(brr[index] != '\0'){
        index++;
        length++;
    }
    return length;
}

void countAlphabet(char arr[], int count[]) {
    int index = 0;

    while (arr[index] != '\0') {
        count[arr[index] - 'a']++;
        index++;
    }
}


int main(){
    char arr[100];
    char brr[100];
    cout << "Enter your first word:" << " ";
    cin >> arr ;
    cout << "Enter your second word:" << " ";
    cin >> brr;



    int arrlength = countfirstlength(arr);
    int brrlength = countsecondlength(brr);

    if (arrlength != brrlength) {
        cout << "Not an anagram" << endl;
        return 0;
    }

    int count1[26] = {0};
    int count2[26] = {0};

    countAlphabet(arr, count1);
    countAlphabet(brr, count2);

    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            cout << "Not an anagram" << endl;
            return 0;
        }
    }

    cout << "Anagram" << endl;




    return 0;
}