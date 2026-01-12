#include<stdio.h>
int main(){

int x,y;
scanf("%d%d",&x,&y);
float yNew = y;
float p1,p2,p3,p4,p5,pay;
p1 = 4.00;
p2 = 4.50;
p3 = 5.00;
p4 = 2.00;
p5 = 1.50;

if(x==1){

pay = p1*y;
printf("Total: R$ %.2f\n", pay);
}
if(x==2){

pay = p2*y;
printf("Total: R$ %.2f\n", pay);
}
if(x==3){

pay = p3*y;
printf("Total: R$ %.2f\n", pay);
}
if(x==4){

pay = p4*y;
printf("Total: R$ %.2f\n", pay);
}
if(x==5){

pay = p5*y;
printf("Total: R$ %.2f\n", pay);
}


    return 0;
}