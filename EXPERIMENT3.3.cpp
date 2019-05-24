// Create a C++ program which prints the letters in a char array in reverse order and shows the size of
//the array.

#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to reverse arr[] from start to end*/
void rvereseArray(char arr[], char start, char end) 
{ 
    while (start < end) 
    { 
        char temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}      
  
/* Utility function to print an array */
void printArray(char arr[], char size) 
{ 
   for (char i = 0; i < size; i++) 
   cout << arr[i] << " "; 
  
   cout << endl; 
}  
  
/* Driver function to test above functions */
int main()  
{ 
    char arr[] = {'e', 'n', 'g', '1', '9', '0', '7'}; 
      
    char n = sizeof(arr) / sizeof(arr[0]);  
  
    // To print original array  
    printArray(arr, n); 
      
    // Function calling 
    rvereseArray(arr, 0, n-1); 
      
    cout << "Reversed array is" << endl; 
      
    // To print the Reversed array 
    printArray(arr, n); 
      
    return 0; 
} 
