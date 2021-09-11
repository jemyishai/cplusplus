// If y is equal to 0, then gcd(x,y) is x; otherwise gcd(x,y) is gcd(y,x%y) where % is remainder operator.

int gcd(int x, int y){
  if (y==0){
    return x;
  } else{
    gcd(y,x%y);
  }
}

