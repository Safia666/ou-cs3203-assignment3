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
       product *= arr[i];
    }
    return product;
}




