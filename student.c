#include "student.h"
#include <stdio.h>


void swap(int *a, int *b) {
  //Enter code here
  int temp = *a;
  *a = *b;
  *b = temp;

}

void modifyarray(int array[], int length) {
  //Enter code here
  for (int i = 0; i < length;){
    if (array[i] < 0){
      array[i] *= -1;
    }
  } 
}

int nthtrifibonacci(int n) {
  //Enter code here
  if (n<=0){
    return 0;
  }
  if (n<3){
    return 1;
  } 
  return nthtrifibonacci(n-1) + nthtrifibonacci(n-2) + nthtrifibonacci(n-3);
  }

double mean(int array[], int length) {
  //Enter code here
  float sum = 0.0;
  for (int i = 0; i < length; i++){
    sum += (float)(array[i]);
  }
  return sum/length;
}

void insertionsort(int array[],int length) {
  //Enter code here
  for (int i = 1; i < length; i++){
    int temp = array[i];
    int prev = i - 1;

    while (prev >= 0 && array[prev] > temp){
      array[prev + 1] = array[prev];
      prev--;
    }
    
    array[prev + 1] = temp;
  }
}

int reverseinteger(int n) {
  //Enter code here
  int output = 0;
  while (n != 0){
    output = (output * 10) + (n % 10);
    n /= 10;
  }
  return output;
}

int palindrome(char str[], int length) {
  //Enter code here
  for (int i = 0; i < length/2; i++){
    if (str[i] != str[(length-1)-i]){
      return 0;
    }
  }
  return 1;
}