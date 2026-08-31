

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {2,3,4};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//    return 0;
// }



//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"The elements of array are:";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Calculate the sum of all elements in an array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int sum = 0;

//     for (int i = 0; i < 5; i++) {
//         sum += arr[i];
//     }

//     cout << "Sum of all elements: " << sum;

//     return 0;
// }


// Count the  number of occurences of a particular element X

// Search the given elements X in th array if present then return the index of that element otherwise return -1

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x;
//     cout<<"Enter the element to search:";
//     cin>>x;
//     int index = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             index = i;
//             break;
//         }
//     }
//     if(index != -1){
//         cout<<"Element found at index: "<<index<<"\n";
//     }else{
//         cout<<"-1\n";
//     }
//     return 0;
// }


// calculate the max and min value out of all the elements in the array 
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[]={1,5,8,4,9,7,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mn = arr[0], mx = arr[0];
//     for(int i = 1; i < n; ++i){
//         if(arr[i] < mn) mn = arr[i];
//         if(arr[i] > mx) mx = arr[i];
//     }
//     cout << "Minimum: " << mn << "\n";
//     cout << "Maximum: " << mx << "\n";
//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int searchItem = 40;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchItem) {
            cout << "Item found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Item not found" << endl;
    }

    return 0;
}







