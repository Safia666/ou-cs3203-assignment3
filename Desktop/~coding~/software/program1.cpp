#include <string> 
#include <vector>
#include <iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
       sum += arr[i];
    }
    return sum;
}

int productArray(int arr[], int size)
{
    int product = 0;
    for(int i = 0; i < size; i++)
    {
        if (i ==0)
            product = 1;
        product = product * arr[i];
    }
    return product;
}


// Function to reverse an array of integers and return a pointer to the reversed array
int* reverseArray(int arr[], int size) {

    int* reverse = new int[size]; // Create a new dynamic array

    for (int i = 0; i < size; i++) 
        reverse[i] = arr[size - 1 - i]; // Reverse the elements
    

    return reverse;
}

int main()
{
    int size;
    
    cout << "How many numbers would you like to input?" << endl;
    cin >> size;
    int arr[size];


    cout << "Input your numbers" << endl;
    for (int i = 0; i < size; i ++)
    {
        cin >> arr[i];
    }

    cout << "Sum of array: " << sumArray(arr, size) << endl;
    cout << "Product of array: " << productArray(arr,size) << endl;
    

    return 0;
}











