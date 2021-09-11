int binary_search(int search_value, int lst[], int elements){
  int count = 0;
  int low, high, mid;
  bool flag = false;

  low=0;
  high=elements-1;

  while (flag == false && low <= high){
    mid = (low+high)/2;
    count++;
    if (lst[mid] == search_value) {
      flag = true;
    } else if (search_value < lst[mid]){
      high = mid-1;
    } else if(search_value > lst[mid]){
      low = mid+1;
    }
  }

// would put flag check but this func only needs count
  return count;

}
