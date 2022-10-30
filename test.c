#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    // int broj ;
    // float ocena;
    // int i;
    // printf('unesite broj');
    // scanf("%d" ,&broj);
    // ocena = 1.0;

    // for(i=1;i<broj;i++){
    //     ocena *=i;
    // };
    // printf("ovo je rezultat %f" , ocena);

// OVo nije htelo

    int i,n;
    float S = 1,p=0,clan;

    printf("Unesite  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        p=sqrt(2+p);
        clan = 1/p;
        S = S *clan;
    };
    printf("Dobijemo %.2f",S);



    // printf("Unesite neki borj\n");
    // scanf("%d",&broj);

    // if(broj % 2 == 0){
    //     printf("Broj je paran KKK");
    // }
    // else{
    //     printf("Broj je neparan ");
    // }

    // if(broj < 0){
    //     printf("Broj je manji od nule");
    // }else if(broj > 0){
    //     printf("Broj je veci od nule");
    // }else{
    //     printf("Broj je nula");
    // }

    // if(broj < broj1){
    //     broj = broj1;
        
    // }
    // if(broj < broj2){
    //     broj = broj2;}


    // printf("%d",broj);


// printf("dobilie ste ocenu  %f", ceil(1.0 * broj / 10)); 



    


    return 0;
}


