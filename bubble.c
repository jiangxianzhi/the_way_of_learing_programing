#include<stdio.h>

void Bubble( int *a){
    int i ;
    int j;
    int length = sizeof(a)/sizeof(int);
for( i = length; i > 0; i--){
    for( j = 0; j < i; j++){
        if( a[j] > a[j+1]){
            int tmp = a[j];
            a[j] = a[j+1];
            a[j+1] = tmp;
        }
    }

}

}