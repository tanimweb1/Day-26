#include<stdio.h>
int main(){


//bee 139 
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







/ bee 1040

    float n1,n2,n3,n4,avg;
scanf("%f%f%f%f",&n1,&n2,&n3,&n4);

avg = (n1*2+n2*3+n3*4+n4*1)/10;
printf("Media: %.1f\n",avg);

if(avg>=7.0){
    printf("Aluno aprovado.\n");
}

if(avg<5){
    printf("Aluno reprovado.\n");
}

if(avg>=5.0 && avg<7){
    printf("Aluno em exame.\n");





 

    return 0;

}





