
#include <iostream>
using namespace std; 

void quicksort(int arr[], int l, int r)
{
    if(l < r)
    {
       int i = l ; 
       int j = r; 
       int x = arr[l];
       while( i < j)
       {
           while ( i < j && arr[j] >= x)
              j--; 
            if(i < j)
               arr[i++] = arr[j];
               
             while( i < j && arr[i] < x)
                i++; 
             if(i<j)
               arr[j--] = arr[i];
       }
       arr[i] = x; 
       quicksort(arr, l ,i-1); 
       quicksort(arr, i+1, r);
    }
}


int main()
{

      int arr[] = {5,6,4,1,9,10}; 
      
      int len = sizeof(arr)/sizeof(int); 
      
      quicksort(arr,0,len-1); 
      for(int i=0; i<len; i++)
      {
         cout<<arr[i]<<endl; 
      }
      return 0; 
      
}
