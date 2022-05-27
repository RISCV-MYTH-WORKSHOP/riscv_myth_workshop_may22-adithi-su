#include <stdio.h>
#include <math.h>

int main(){
  unsigned long long int maxValue = (unsigned long long int)  (pow(2,64)-1);
  printf("max value of unsigned long = %llu\n",maxValue);
  /*
  long long int maxV = (int) (pow(2,63) - 1);
  long long int minV = (int) (pow(2,63) *-1);
  printf("max = %lld \n min = %lld, maxV, minV);
  */
  
  return 0;
}

// output obtained - 18446744073709551615
