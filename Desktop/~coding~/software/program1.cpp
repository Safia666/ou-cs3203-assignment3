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











