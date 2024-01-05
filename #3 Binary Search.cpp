#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

struct Array{

    int A[10];
    int size;
    int length;

};


// Function to display an array;
void Display( struct Array arr){ 

    cout<< "Elements of the array are: "<< endl;
    for(int i = 0; i < arr.size ; i++){

        cout << arr.A[i] <<" ";
    }

    cout<< endl;

}


//Binary Search Iterative
int BinarySearch(struct Array arr, int key){

    int l, mid, h;
    l=0;
    h=arr.length-1;

    while(l<=h){

        mid= (l+h)/2;

        if(key==arr.A[mid]){

            return mid;

        }else if(key<arr.A[mid]){

            h = mid-1;

        }else{

            l=mid+1;
        }
    }

    return -1;
}

//BInary Search Recursion
int BinaryRecursive(int arr[], int low, int high, int key){

    int mid;

    if(low <= high){

        mid=(low+high)/2;

        if(key == arr[mid]){

            return mid;
        }else if(key < arr[mid]){

            return BinaryRecursive(arr, low, mid+1, key);
        }else{

            return BinaryRecursive(arr, mid+1, high, key);
        }
    }

    return -1;
}


int main(){

    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};


    
    
    Display(arr);

    return 0;
    
}