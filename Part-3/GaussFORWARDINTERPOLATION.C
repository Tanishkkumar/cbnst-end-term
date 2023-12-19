#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
   int n,i,j,k;
   float x[100],y[100],d[100][100],h,xn,yn=0,m=1,u;
   printf("enter the value of n in the field\n");
   scanf("%d",&n);
   printf("enter the value of x and y in the field\n");
   for(int i=0;i<=n;i++){
     scanf("%f%f",&x[i],&y[i]); 
   }

   printf("enter the value of x for which y has to be found\n");
   scanf("%f",&xn);
   
   h=x[1]-x[0];
   for(int i=0;i<n;i++){
       d[i][1]=y[i+1]-y[i];    
   }
   for(int j=2;j<=n;j++){
      for(int i=0;i<=n-j;i++){
         d[i][j]=d[i+1][j-1]-d[i][j-1];
      }
   }
   i=0;
   while(!(x[i]>xn)){
      i++;
   }
   i--;
   u=(xn-x[i])/h;
   if(u<0 || u>.5){
      printf("wrong data\n");
   }
   else{
      k=0;
      for(j=1;j<=n;j++){
         if(j%2==1){
            m=m*((u+k)/j);
         }
         else{
            k=k+1;
            m=m*((u-(k))/j);
         }
         if((i-k)<0 || (i-k)>(n-j+1)){
            break;
         }
         yn=yn+m*d[i-k][j];
      }
      yn=yn+y[i];
      printf("%f",yn);
   }
   return 0;
}