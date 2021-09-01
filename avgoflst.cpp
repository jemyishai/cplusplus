float avgoflst(int lst[], int size){
  int total = 0;
  for (int i=0; i < size; i++ ){
    total+= lst[i];
  }
  return (float)total/(float)size;
}
