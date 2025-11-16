#include<stdio.h>
float calculater(int a, int b , int c);
int main () {
    int x,y,z;
    printf("*-----MENU-----* \n");
    printf(" 1. Addition \n ");
    printf("2. subtraction \n ");
    printf("3. multiplication \n ");
    printf("4. division \n");
    printf("Enter the x and y : ");
    scanf("%d %d", &x , &y);
    printf("Enter MENU number : ");
    scanf("%d", &z);
   float ans= calculater(x,y,z);
   if(z==1){
    printf ("Addition of %d and %d is %d ",x,y,(int)ans);
   } else if(z==2){
    printf("subtraction of %d and %d is %d",x,y,(int)ans);
   } else if (z==3){
    printf("multiplication of %d and %d is %d",x,y,(int)ans);
   } else if (z==4) {
    printf("division of %d and %d is %f",x,y,ans);
   }

}

float calculater(int a, int b , int c){
   
  switch(c) {
    case 1:      return a+b;
                 break;
    case 2:      return a-b;
                 break;
    case 3:      return a*b;
                 break;
    case 4:     return (float)a/b;
                break;  
    default : printf("input number not in MENU");                                                
  }
}
