/*
Find the duplicate
Given an array of integers arr that contains n+1 elements between 1 and n inclusive, create a function that returns the duplicate element (the element that appears more than once). Assume that:
- There is only one duplicate number
- The duplicate number can be repeated more than once
*/

#include <iostream>
using namespace std;

int main(){
    int arr[6] = {1, 4, 2, 2, 5, 2};
    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++){
        if (arr[i] == arr[i + 1]){
            cout << arr[i];
            break;
        } 
    }
}