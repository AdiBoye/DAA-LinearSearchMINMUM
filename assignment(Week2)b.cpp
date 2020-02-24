
#include <iostream>

using namespace std;

void swap(int *lim, int *tim)
{
    int temp = *lim;
    *lim = *tim;
    *tim = temp;
}

void bubbleSort(int b[], int size)
{
   int i, j;
   bool swapped;
   for (i = 0; i < size-1; i++)
   {
     swapped = false;
     for (j = 0; j < size-i-1; j++)
     {
        if (b[j] > b[j+1])
        {
           swap(&b[j], &b[j+1]);
           swapped = true;
        }
     }

     if (swapped == false)
        break;
   }
} 

int main(void){
    int size;
    cout << "Enter the size of the array here: ";
    cin >> size;
    int b[size];

    cout << "Enter the elements of the array: " <<endl;
    for(int i = 0; i<size; i++){
        cin >> b[i];
    }
