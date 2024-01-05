#include <bits/stdc++.h>
using namespace std;

struct Array{

    int *A;
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


// Appending a value x to the end of the array
void Append(struct Array *arr, int x){ 

    if(arr->length < arr->size){

        arr->A[arr->length++] = x;
    }
}


//Inserting an element x at a given index
void Insert(struct Array *arr, int index, int x){ 

    if(index>=0 && index <= arr->length){

        for(int i = arr->length; i>index; i--){

            arr->A[i] = arr->A[i-1];
        }

        arr->A[index] = x;
        arr-> length++;
    }
}

//Deleting an element at a given index and returning the deleted element
int Delete(struct Array *arr, int index){

    int x = 0;
    if(index >= 0 && index < arr->length){

        x = arr->A[index];
        for(int i = index; i <arr->length-1;i++){

            arr->A[i] = arr->A[i+1];
        }

        arr->length--;
        return x;
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