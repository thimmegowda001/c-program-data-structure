#include<stdio.h>
#include<math.h>
int main() {
  int n,originalNum,remainder,result=0,digits=0;
  printf("Enter a number: ");
  scanf("%d",&n);
  originalNum=n;
  while(originalNum!=0){
    originalNum/=10;
    digits++;
    printf("Iteration: %d,Digits counted so far: %d",digits,digits);
  }
  originalNum=n;
  while(originalNum!=0){
    remainder=originalNum%10;
    result+=pow(remainder,digits);
    originalNum/=10;
  }
  if(result==n)
    printf("%d is not an Armstrong number.\n",n);
}


