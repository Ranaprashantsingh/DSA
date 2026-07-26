
     // allocatbook problrm 

// #include<iostream>
// #include<vector>
// using namespace std;

// bool ispossible(vector<int> arr, int n, int m, int mid){

//     int studentcount = 1;
//     int pagesum = 0;

//     for(int i=0; i<n; i++){
//         if(pagesum + arr[i] <= mid){
//             pagesum += arr[i];
//         }
//         else{
//             studentcount++;
//             if(studentcount > m || arr[i] > mid){
//                 return false;
//             }
//             pagesum = arr[i];
//         }
//     }
//     return true;
// }

// int allocatebook(vector<int> arr, int n, int m){
//     int s = 0;
//     int sum = 0;

//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(ispossible(arr,n,m,mid)) {
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid +1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     vector<int>arr = {10, 20, 30, 40};
//     int n = arr.size();
//     int m = 2;

//     cout << " minimum pages: "<<allocatebook(arr,n,m);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------

        // painters partition problem
        
// #include<iostream>
// #include<vector>
// using namespace std;

// bool ispossible(vector<int> &arr, int n, int k, int mid){

//     int paintercount = 1;
//     int timesum = 0;

//     for(int i = 0; i < n; i++){

//         if(timesum + arr[i] <= mid){
//             timesum += arr[i];
//         }
//         else{
//             paintercount++;

//             if(paintercount > k || arr[i]>mid){
//                 return false;
//             }
//             timesum = arr[i];
//         }
//     }
//     return true;
// }
// int painterpartition(vector<int> &arr, int n, int k){
//     int s = 0;
//     int sum = 0;

//     for(int i = 0;i < n; i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;

//     while(s <= e){
//         int mid = s +(e - s)/2;

//         if(ispossible(arr, n, k, mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr ={5,5,5,5};
//     int k =2;
    
//     cout<<" minimum time: "<<painterpartition(arr, arr.size(),k);

//     return 0;
// }

// ---------------------------------------------------------------------------------------

       // aggresive lows

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int> &stalls, int k, int mid){

        int cowcount = 1;
        int lastpos = stalls[0];

        for(int i=1; i<stalls.size(); i++){

                if(stalls[i]-lastpos >= mid){
                        cowcount++;
                        if(cowcount==k){
                                return true;
                        }
                        lastpos = stalls[i];
                }
        }
        return false;
}
int aggressivecows(vector<int> &stalls, int k){
        sort(stalls.begin(), stalls.end());

        int s = 0;
        int e = stalls[stalls.size()-1]-stalls[0];
        int ans = -1;

        while(s<=e){
                int mid = s + (e-s)/2;
                if (ispossible(stalls, k, mid)){
                        ans = mid;
                        s = mid +1;
                }
                else{
                        e =  mid - 1;
                }              
        }
        return ans;
}
int main(){
        vector<int>stalls = {4,2,1,3,6};
        int k = 2;

        int result = aggressivecows(stalls,k);
        cout << "answer: " << result;

        return 0;
}

// ----------------------------------------------------------------------------------------------

