#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    // code for traversal
    for (int i = 0; i < n; i++)
    {
        cout << "  " << arr[i];
    }
    cout << endl;
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    // code for insertionn
    if (size >= capacity)
    {

        return -1;
    }
    // for (int i = 0; i<size; i++)
    // {
    //     arr[i] = arr[i];
    // }
    // arr[size] = element;
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    display(arr, 5);
    int element = 45, index = 3;
    indInsertion(arr, size, element, 100, index);
    size += 1;
    // display(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << "  " << arr[i];
    }
    cout << endl;
    return 0;
}