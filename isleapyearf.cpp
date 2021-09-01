
bool isleapyear(int year) {
  bool output = false;
            if(year%4==0){
              if(year%100==0 && year%400==0){
                output = true;
              }  else if (year%100!=0 ){
                output = true;
              } else{
                output = false;
              }
            } else{
                output = false;
            }
    return output;
}



