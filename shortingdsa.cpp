// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// void selectionsort(vector<int>& arr,int n){
//     for(int i = 0; i < n-1; i++){
//         int minindex = i;

//         for(int j = i+1; j<n; j++){
//             if(arr[j] < arr[minindex]){
//                 minindex = j;
//             }
//         }
//         swap(arr[minindex], arr[i]);
//     }
    
// }
// int main(){
//     vector<int>arr = {1,7,9,2,3,0};
//     selectionsort(arr, arr.size());

//     for(int i = 0; i< arr.size(); i++){
//         cout<< arr[i]<<" ";
//     }
// }

// -----------------------------------------------------------------------------------------------------
                //  bubble sort

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// void bubblesort(vector<int>& arr, int n){

//     for(int i = 1; i<n; i++){

//         for(int j = 0; j<n-i; j++){


//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     vector<int>arr = {10,1,7,6,14,9};
//     bubblesort(arr,arr.size());

//     for(int i = 0; i < arr.size(); i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// ---------------------------------------------------------------------------------------------------------------

                         //  INSERTION SORT
                         
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// void insertionsort(int n, vector<int> &arr){

//     for(int i = 1; i<n; i++){
//         int temp = arr[i];
//         int j = i-1;

//         for(; j>=0; j--){

//             if(arr[j] > temp){
//                 // SHIFT
//                 arr[j+1] = arr[j];
//             }
//             else{              //  RUK JAAO
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }
// int main(){
//     vector<int>arr = {1,10,7,4,8,2,11};
//     int n = arr.size();

//     insertionsort(n,arr);

//     for(int i = 0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------
