/*
Find pairs that sum to k
Given an array of integers arr and an integer k, create a boolean function that checks if there exist two elements in arr such that we get k when we add them together.
*/

#include <iostream>
using namespace std;

bool checkSum(int arr[], int k){
    for (int i = 0; i < 5; i++){
        for (int j = (i + 1); j < 5; j++){
            if (arr[i] + arr[j] == k){
                return true;
                break;
            }
        }
    }
    return false;
}

int main(){
    int arr[5] = {4, 5, 1, -3, 6};
    int k; cin >> k;
    if (checkSum(arr, k)) cout << "true";
    else cout << "false";
}

