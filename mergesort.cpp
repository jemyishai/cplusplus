#include "cpluspluslabs.h"

void merge(int arr[], int left, int middle, int right);

void merge_sort(int arr[], int left, int right){
  int mid;
  if (left == right){
    return;
  }  else {
      mid = (right+left)/2;
      merge_sort(arr,left, mid);
      merge_sort(arr,mid+1, right);
      merge(arr,left,mid,right);
  }
}

