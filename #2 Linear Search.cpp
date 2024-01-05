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


// Linear search : search and compare one by one;
int LinearSearch(struct Array arr, int key){

    for(int i = 0; i < arr.length; i++){

        if(key == arr.A[i]){

            return i;
        }
    }

    return -1;
}

void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

//Transposition
int ImprovedLinearSearch1(struct Array *arr, int key){

    for(int i=0; i< arr->length; i++){

        if(key == arr->A[i]){

            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
}


//Move to Head
int ImprovedLinearSearch2(struct Array *arr, int key){

    for(int i=0; i< arr->length; i++){

        if(key == arr->A[i]){

            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
}

int main(){

    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};


    
    cout << ImprovedLinearSearch1(&arr, 5) << endl;

    Display(arr);

    return 0;
    
}