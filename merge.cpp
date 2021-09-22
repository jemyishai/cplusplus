void merge(int arr[], int left, int middle, int right){
  int size, leftIndex, rightIndex, sortedArrIndex, i;
  size = right-left+1;
  int *sortedArr = new int[size];
  leftIndex= left;
  rightIndex = middle+1;
  sortedArrIndex = 0;

  while(leftIndex <= middle && rightIndex < right){
    if (arr[leftIndex]<arr[rightIndex]){
      sortedArr[sortedArrIndex] = arr[leftIndex];
      leftIndex++;
      sortedArrIndex++;
    } else{
      sortedArr[sortedArrIndex] = arr[rightIndex];
      rightIndex++;
      sortedArrIndex++;
    }
  }

  while(leftIndex<=middle){
      sortedArr[sortedArrIndex] = arr[leftIndex];
      leftIndex++;
      sortedArrIndex++;
  }

    while(rightIndex<right){
      sortedArr[sortedArrIndex] = arr[rightIndex];
      rightIndex++;
      sortedArrIndex++;
  }

  for (i=0; i < sortedArrIndex ; i++){
    arr[i] = sortedArr[i];
  }

  delete[] sortedArr;
}
