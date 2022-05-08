#include <stdio.h>
#include <stdlib.h>

// External File
#include "../ConsoleNumInput.c"

/**
 * Decreasing Triangle Pattern
 * */

static int loop(int n);


int main(void){
    // Default
    int n = 5;
    
    do {
        // From External File
        clrscr();
        
        loop(n);
        
        n = inInt();
        
        // This will never trigger. 
        // System required. Hahaha
        if(! n){
            return 0;
        }
    } while(1);
}

 int loop(int n){
    int i, j;
    
    for(i = n; i > 0; i--){
        for(j = 0; j < i; j++){
            printf(" * ");
        }
        
        printf("\n");
    }
    
    return 0;
}

/**
 * Written by Jovan De Guia
 * Github Username: jxmked
 * */