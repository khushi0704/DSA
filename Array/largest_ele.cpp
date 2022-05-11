#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector <int> arr) {
    // using binary search
    int s=0;
    int e=arr.size()-1;
    int max=arr[0];
    while(s <= e ){
        if(arr[s] > arr[e]){
        max=arr[s];
        e--;
    }
        else{
            max=arr[e];
            s++;
        }
        
    }
    return max;
}