#include <stdio.h>
int main(void) {

float score;
printf("Input score : ");
scanf("%f",&score);
int x = (int) score;
switch(x/10)  {

case 10:
  if(score <= 100)
    printf("You Grade : A");
    break;
case 9:
    printf("You Grade : A");
break;
case 8:
    printf("You Grade : A");
break;
case 7:
  if((score >=75.00) && (score <=79.99))
    printf("You Grade : B+");
if((score >=70.00) && (score <=74.99))
    printf("You Grade : B");
break;
case 6:
  if((score >=65.00) && (score <=69.99))
    printf("You Grade : C+");
  if((score >=60.00) && (score <=64.99))
    printf("You Grade : C");
break;
case 5:
  if((score >=55.00) && (score <=59.99))
    printf("You Grade : D+");
  if((score >=50.00) && (score <=54.99))
    printf("You Grade : D");
break;
case 4:
    printf("You Grade : F");
  break;
case 3:
    printf("You Grade : F");
  break;
  case 2:
      printf("You Grade : F");
  break;
  case 1:
      printf("You Grade : F");
    break;
  case 0:
      if(score >=0)
      printf("You Grade : F");
    break;
}
return 0;
}