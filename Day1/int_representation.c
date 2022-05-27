#include <stdio.h>
#include <math.h>

int main(){
  unsigned long long int maxValue = (unsigned long long int)  (pow(2,64)-1);
  printf("max value of unsigned long = %llu\n",maxValue);
  // output obtained - 18446744073709551615
  
  long long int maxV = (int) (pow(2,63) - 1); //compiler dependent, alt = LLONG_MAX (constant)
  long long int minV = (int) (pow(2,63) *-1); // compiler dependent, alt = LLONG_MIN
  printf("max long long int = %lld \n min long long int = %lld\n", maxV, minV);
 
 
  return 0;
}


