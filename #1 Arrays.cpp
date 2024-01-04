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