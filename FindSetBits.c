#include <stdio.h>

int main()
{
    int test_cases[16];
    int array_size = sizeof(test_cases)/sizeof(int);
    printf("Size of array: %d\n", array_size);
    
     for(int i = 0; i<array_size;i++){
        test_cases[i] = i;
        
    }
    // #todo Add more test cases for corner cases, signed etc.
   
    
    for(int i = 0; i<array_size;i++){
         int set = findSetBits(test_cases[i]);
         printf("Set bits in %d are %d\n",test_cases[i], set);
    }
   
   // printf("Set bits in 5 are %d\n", set);
    return 0;
}


int findSetBits(int n){

    int counter = 0;
    int result  = n;
    
    while(result){
       
        result &= (result-1);
        counter++;
       
    }
    
    
    return counter;
}
