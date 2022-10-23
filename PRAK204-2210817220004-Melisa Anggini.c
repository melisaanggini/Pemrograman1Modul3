#include<stdio.h>

int main()
{
    for (int i=0; i<=1; i++){
    float r = 7,t = 10, phi = 22/7.f;
    float volume,luas,keliling;
    scanf("%f %f",&r,&t);
    volume = phi*r*r*t;
    luas = (2*phi*r)*(r+t);
    keliling = (2*phi*r);
    printf("Volume = %.2f\n",volume);
    printf("Luas = %.2f\n",luas);
    printf("Keliling = %.2f\n\n",keliling);
    }
}
