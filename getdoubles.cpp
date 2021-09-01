double* getDoubles(int numDoubles)
{
  double *doublesArr = new double[numDoubles];
  for (int i = 0; i < numDoubles; i++){
    doublesArr[i] = (double)((i+1)/ 3.0);
    };
  return doublesArr;
  delete[] doublesArr;
};

