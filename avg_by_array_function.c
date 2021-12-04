
#include<stdio.h>

int avg( int [] , int );

int main(){

    int arr[5] = { 5 , 6 , 6 , 7 , 8};

    int average;

    average = avg( arr , 5 );

    printf("%d" , average);

    return 0;

    int avg( int  arr[] , int l ){

        int sum = 0;

        for( int i = 0; i < l; i++  ){

            sum = sum + arr[i];

        }

        




    } 
}