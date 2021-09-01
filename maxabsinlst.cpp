int absoluteConv(int num);

int maxabsinlst (int arr[], int size){
  int currentMax = arr[0];
  for (int i=0; i < size; i++){
    int absoluteValue = absoluteConv(arr[i]);
    if (currentMax < absoluteValue)
      currentMax = arr[i];
  }
  return currentMax;
}

int absoluteConv(int num){
  if (num>=0){
    return num;
  } else{
    return num*-1;
  }
}
