#include <iostream>
// using namespace std;

// // reverse an array using formula
// int main() {
//     int arr[] = {10,20,30,40,50,60};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int i=0;
//     int j= n-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int k = 0; k < n; k++){
//         cout << arr[k] << " ";
//     }
//     return 0;
// }




// Find the duplicates element in an array
// input = [1,2,3,4,5,2,1,6,1,5,3]
#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,2,1,6,1,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Duplicate elements ";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}
 
// find the two elements whose sum gives the target = 18 
// input [2,7,,11,15]
