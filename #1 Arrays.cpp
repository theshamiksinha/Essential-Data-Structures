#include <bits/stdc++.h>
using namespace std;

struct Array{

    int *A;
    int size;
    int length;

};

void Display( struct Array arr){ // Function to display an array;

    cout<< "Elements of the array are: "<< endl;
    for(int i = 0; i < arr.size ; i++){

        cout << arr.A[i] <<" ";
    }

    cout<< endl;

}

void Append(struct Array *arr, int x){ // Appending a value x to the end of the array

    if(arr->length < arr->size){

        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x){

    if(index>=0 && index <= arr->length){

        for(int i = arr->length; i>index; i--){

            arr->A[i] = arr->A[i-1];
        }

        arr->A[index] = x;
        arr-> length++;
    }
}


int main(){

    struct Array arr;

    cout << "Enter the size of the array: ";
    cin >> arr.size;

    arr.A = (int*)malloc(arr.size*sizeof(int));
    // arr.A = new int[arr.size];
    arr.length = 0;
    
    int n;    cout << "Enter number of numbers to be inserted: " ;
    cin >> n;

    cout << "Enter all the elements" ;
    for(int i = 0; i< n; i++){

        cin >> arr.A[i];
    }

    arr.length = n;


    Display(arr);

    return 0;
    
}