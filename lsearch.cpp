int linear_search(int search_value, int lst[], int elements){
  int count = 0;
  for (int i = 0; i < elements; i++){
    count++;
    if(lst[i] == search_value){
      break;
    }
  }
  return count;
}
