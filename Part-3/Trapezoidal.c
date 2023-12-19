#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int  a;
    float arr[10][11],h,y=0,d[100][100],u,p,px=1;
    printf("enter the size in the filed\n");
    scanf("%d",&a);
    printf("enter the table in the field\n");
    for(int i=0;i<a;i++){
        scanf("%f",&arr[i][0]);
        scanf("%f",&arr[i][1]);
    }    
    // printf("enter the value of xn in the field\n");
    // scanf("%f",&xn);
    
    float  x;
    printf("enter the value of x in the field\n");
    scanf("%f",&x);
    for(int j=2;j<=a;j++){
        for(int i=0;i<a-1;i++){
            arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
        }
    }
    h=arr[a-1][0]-arr[a-2][0];
    p=(x-arr[a-1][0])/h;
    y=arr[a-1][1];
    for(int i=1;i<a;i++){
        px=px*(p+(i-1));
        y=y+(arr[a-1-i][i+1]*px)/fact(i);
    }
    printf("value is-->%f",y);
    return 0;
}