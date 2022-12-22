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
