#include <stdio.h>
extern int load(int x, int y);

int main(){
int result = 0, count = 9;
result = load(0x0,count+1);
printf("sum of %d numbers is %d", count, result);
return 0;
}
