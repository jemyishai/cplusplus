int maxinlst (int arr[], int num){
  int currentMax = arr[0];
  for (int i=0; i < num; i++){
    if (currentMax < arr[i])
      currentMax = arr[i];
  }
  return currentMax;
}
