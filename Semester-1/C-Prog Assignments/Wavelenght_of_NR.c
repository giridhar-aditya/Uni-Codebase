#include<stdio.h>
#include<math.h>
int main() {                         //WAVELENGTH OF NEWTON'S RING
    float di,df,R,W,p;
    int ni,nf;
    printf("THIS PROGRAM IS TO FIND WAVELENGTH IF NEWTON'S RING\n");
    printf("Order of the ring 1-and it's diameter (meter)");
    scanf("%d-%f",&ni,&di);         // GIVE INPUT LIKE  1-3e2
    printf("Order of the ring 2-and it's diameter (meter)");
    scanf("%d-%f",&nf,&df);
    printf("Enter the Radius of curvature (meter):");
    scanf("%f",&R);
    p = nf - ni;
    W= ((df*df)-(di*di))/4*p*R;
    printf("Wavlelength of the Light is %f meters" ,W);




}