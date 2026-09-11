#include <iostream>
using namespace std;

//strcpy() -> copy
//strlen() -> length
//strcmp() -> compare
//strcat() -> contaginate


int getlength (char arr[]){
    int count = 0;
    int index = 0;
    while (arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

void concatarraychar (char a[], char b[]){
    int aindex = getlength(a);
    int bindex = 0;

    while(b[bindex] != '\0'){
        //start copying
        a[aindex] = b[bindex];
        aindex++;
        bindex++;
    }
    //end a string with null pointer
    a[aindex] = '\0';
}

void copyarray(char actualarr[], char copyarr[]){
    int aindex=0;
    int bindex=0;

    while(actualarr[aindex] != '\0'){
        //start copying
        copyarr[bindex] = actualarr[aindex];
        aindex++;
        bindex++;
    }
}

bool comparearray(char a[], char b[]){
    int aindex = 0;
    int bindex = 0;
    int aLength = getlength(a);
    while (aindex <= aLength){
        if(a[aindex] != b[bindex]){
        return false;
    }
    else {
        aindex++;
        bindex++;
    }
    }
    return true;
}


int main() {


    char actual[] = "aman";
    char ans[100];
    cout << "length of actual char array:" << strlen(actual) << endl;
    
    
    strcpy(ans , actual);

    cout << ans << endl;

    ans[0] = 'c';

    if (strcmp(actual,ans)==0){
        cout << "char arrays are same" << endl;
    }
    else{
        cout << "char arrays are not same" << endl;
    }

    
    // char arr[] = "aman";
    // char brr[] = "goglu";

    // cout << comparearray(arr,brr) << endl;

    // char actual[100] = "aman";
    // char ans[100];

    // copyarray(actual,ans);

    // cout << "printing ans array:"<< ans << endl;
    
    
    // char a[50] = "aman";
    // char b[50] = "goglu";
    // concatarraychar(a,b);

    // cout << "printing a:" << a << endl;
    
    
    // char arr[] = "amanpal";
    // cout << getlength(arr) << endl;
    
    
    
    //declare
    // char arr[10];

    // cout << arr[3] << endl;

    // char arr[10] = "amanpal";
    // cout << arr[4]<<endl;

    // int asciiValue = arr[6];
    // cout << asciiValue << endl;

    // char arr[4];
    // arr[0] = 'a';
    // arr[1] = 'b';
    // arr[2] = '\0';

    // int arr[4] = {1,2,3,4};
    // cout << arr << endl;        //not print inside the index thing

    // char brr[5] = "aman";
    // cout << brr << endl;     //print everything in index

    return 0;
}