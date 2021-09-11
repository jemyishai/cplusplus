#include "cpluspluslabs.h"

void swap(int *xp, int *yp);

int lowIndex(int arr[], int low, int high){
  int i, lowNum, minIndex;
  lowNum = arr[low];
  minIndex = low;
  for(i = low+1; i < high; i++){
    if (arr[i]<lowNum){
      lowNum = arr[i];
      minIndex=i;
    }
  }
  return minIndex;
}

void selection_sort(int arr[], int elements){
  int i, high, lowInd;
  high = elements;
  for (i=0;i<elements;i++){
    lowInd=lowIndex(arr, i, high);
    swap(&arr[i],&arr[lowInd]);
  };
};

