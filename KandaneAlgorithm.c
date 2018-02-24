// Solution for practice.geeksforgeeks.org/problems/kadanes-algorithm/
#include <stdio.h>
#include<math.h>
void printArr();
int kandaneAlgorithm(int *Arr, int len);
int main()
{
    
    int T, size;
    // Scan the numebr of test cases
    scanf( "%d", &T);
    // Store results dynamically in the results array
    int result[T];
    // Scan size, elements of each test case array
    for(int j = 0; j<T; j++){
        scanf("%d", &size);
        int numbers[size];
        for(int k=0;k<size;k++){
            scanf("%d", &numbers[k]);
        }
        
        int len = sizeof(numbers)/sizeof(numbers[0]);   
        // Test if input is correct
        //printf("Array size is: %d", len); 
        //printArr(numbers, len);
        result[j] = kandaneAlgorithm(numbers, len);
    }
      
        printArr(result, T);      
        return 0;
}

void printArr(int *Arr, int len){
   for(int i=0; i<len;i++){
        printf("\n%d", Arr[i]);
   }
}

/*
Algorithm: Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_ending_here < 0)
            max_ending_here = 0
  (c) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
return max_so_far*/

int kandaneAlgorithm(int *Arr, int len){
    int max_sum =0, max_temp=0,  maxim =-1;
    for(int i=0; i<len; i++){
        max_temp = max_temp +Arr[i];
        
        if(Arr[i]<0 && maxim < Arr[i]){
            maxim = Arr[i];
        }
        if(max_temp<0)
            max_temp = 0;
        
        if(max_sum <max_temp)
            max_sum = max_temp;
        
        
    }
     if(max_sum == 0)  
        max_sum = maxim;
        //printf("Max sum is: \n%d",max_sum);
    return max_sum;
}
