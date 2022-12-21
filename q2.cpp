/*
Find repeating character
Given a string str, create a function that returns the first repeating character.
If such a character doesn't exist, return the null character '\0'.
*/

#include <iostream>
using namespace std;

int main(){
    string str; cin >> str;
    for (int i = 0; i < str.length(); i++){
        if (str.find(str[i]) < i){
            cout << str[i];
            break;
        }
    }
    cout << "\0";
}