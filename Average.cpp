#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, f, g, h;
    scanf("%f %f %f %f %f %f",&a,&b,&c,&f,&g,&h);
    printf("%0.2f",((a+b+c)+(f+g)*2+h*3)/10);
}
