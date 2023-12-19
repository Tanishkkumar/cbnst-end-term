#include<stdio.h>
#include<math.h>
#include<conio.h>
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int main(){
   float arr[10][11];
   int a;
   printf("enter the size in the field\n");
   scanf("%d",&a);
   printf("enter the data elements in the field\n");
   for(int i=0;i<a;i++){
        scanf("%f",&arr[i][0]);
        scanf("%f",&arr[i][1]);
   }
   //forming diffrence table 
   for(int j=2;j<=a;j++){
    for(int i=0;i<a-1;i++){
        arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
    }
   }   
   // printing the table;
   int ch=30;
   for(int i=0;i<=a-2;i++){
    printf(" %c%d  ",ch,i+1);
   }
   printf("\n");
   for(int i=0;i<a;i++){
    for(int j=0;j<a+1-i;j++){
        printf("%.1f ",arr[i][j]);
    }
    printf("\n");
   }
   float h,px=1,y,x,p;
   printf("enter the value of x for f(x) in the field\n");
   scanf("%f",&x);

   //calculation
   h=arr[1][0]-arr[0][0];
  p=(x-arr[0][0])/h;
  y=arr[0][1];
  for(int i=1;i<a;i++){
    px=px*(p-(i-1));
    y=y+(arr[0][i+1]*px)/fact(i);
  }
  printf("\nthe value of function at x=%f is -->%f",x,y);
   return 0;
}

/*
0 1
1 4
2 17
3 46
4 97
5 176
6 289
*/