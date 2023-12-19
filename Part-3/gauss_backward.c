#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    float x[100],y[100],d[100][100],u,h,xn,m=1,yn=0;
    printf("enter the number of data in the field\n");
    scanf("%d",&a);
    printf("enter the tabl;e in the field\n");
    for(int i=0;i<=a;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    printf("enter the xn value in the field\n");
    scanf("%f",&xn);
    h=x[1]-x[0];
    for(int i=0;i<a;i++){
        d[i][1]=y[i+1]-y[i];
    }

   for(int j=2;j<=a;j++){
    for(int i=0;i<=a-j;i++){
        d[i][j]=d[i+1][j-1]-d[i][j-1];
    }
   }
   int i=0;
   while(!(xn<x[i])){
    i++;
   }
   //i--;
   u=(xn-x[i])/h;
   if(u>0 || u<(-0.5)){
    printf("wrong\n");
   }
   else{
    int k=0;
    for(int j=1;j<=a;j++){
        if((j%2)==0){
         m=m*((u+k)/j);
        }
        else{
            m=m*((u-k)/j);
            k=k+1;
        }
        yn=yn+m*d[i-k][j];
    }
    yn=yn+y[i];
    printf("-->%f",yn);
   }
   
}