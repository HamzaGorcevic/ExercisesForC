// ZADACI ZA PRVI KOLOKVIJUM 11/17/2022;



/////////////////////////////////////////////////

// 1) Proveriti da li je uneti broj deljiv sa faktorijelom svih svojih cifara
// #include <stdio.h>

// int main()
// {
//     int n,p,pomocna,i;
//     printf("unesite vrednost:");
//     scanf("%d",&n);
//     pomocna = n;
//     while(pomocna > 0){
//         p = pomocna % 10;
//         pomocna /=10;
//         int faktori = 1;
//         for(i=1; i<=p; i++){
//             faktori *=i;
//         }
//         if(n % faktori == 0){
//             printf("deljiv je sa %d \n",faktori);
//         }else{
//             printf("nije deljiv sa %d \n",faktori);
//         }
            
//         }
        
    

//     return 0;
// }

/////////////////////////////////////////////////



/////////////////////////////////////////////////

// 2) odrediti da li se tacka nalazi u trouglu na kordinatnom sistemu

// #include <stdio.h>

// int main()
// {
//     int x,y;
    
//     printf("Unesite tacku x");
//     scanf("%d",&x);
//     printf("Unesite tacku y");
//     scanf("%d",&y);
    
//     // tacke ivica trougla
//     int x1 = -1;
//     int y1 = 1;
    
//     int x2 = 3;
//     int y2 = 1;
    
//     int x3 = 2;
//     int y3 = 3;
    
    
    
//     int p = abs(x1*(y2 - y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    
//     int p1 =abs(x*(y2-y3) + x2*(y3-y) + x3*(y-y2)) /2;
//     int p2 = abs(x1*(y-y3) + x*(y3-y1) + x3*(y1-y2)) /2;
//     int p3 = abs(x1*(y2-y) + x2*(y3-y1) + x*(y1-y)) /2;
    
//     if(p == (p1+p2+p3)){
//         printf("u trouglu je");
//     }else{
//         printf("nije u trouglu");
//     }
    
    

//     return 0;
// }



///////////////////////////////////////////////////

// 3) Pronaci sumu elementa sa n brojem cifara i sa e elementima , do p indeksa cife 

// #include <stdio.h>

// int main()
// {
//     int i,n,e,p;
//     int suma = 0;
//     int sumaOstatka = 0;
//     printf("unesi broj elemenata niza: \n");
//     scanf("%d",&n);
//     printf("unesite do kog broja sumirati \n");
//     scanf("%d",&p);
    
//     for(i = 1;i<=n ;i++){
//         printf("unesi element broj %d \n",i);
//         scanf("%d",&e);
//         if(i < p){
//             suma+=e;
//         }
//         if(p > i){
//             sumaOstatka+=e;
            
//         }
//     }
    
//     if(suma == sumaOstatka){
//         printf("sredina je ista");
//     }else{
//         printf("Nije ista")
//     }
    
//     printf("suma %d \n",suma);
//     printf(" suma ostatka %d \n",sumaOstatka);

//     return 0;
// }


//////////////////////////////////////////////////