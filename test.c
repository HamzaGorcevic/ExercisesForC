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



////////////////////////////////////////////////////

// 4) Pronaci tacku x i y koja se nalazi u krugu


// #include <stdio.h>
// #include <math.h>

// int main()
// {   
//     int x,y,r,d;
//     printf("Unesite tacku x \n");
//     scanf("%d",&x);
//     printf("Unesite tacku y \n");
//     scanf("%d",&y);
    
//     int x1 = 3;
//     int y1 = 2;
    
//     //poluprenik
//     r = 2;
    
//     if(pow((x - x1),2) + pow((y-y1),2) <= r*r){
//         printf("U krugu je");
        
//     }else{
//         printf("Van kruga je");
//     }
    
    
    
    
//     return 0;
    
// }


////////////////////////////////////////////////////////




///////////////////////////////////////////////////////

// 5) Napraviti kalkulator koji sve dok se ne unuse "=" racuna brojeve i operacije koje unosimo


// #include <stdio.h>

// int main()
// {
//     int broj1,broj2;
//     char znak;
//     int counter = 0;
//     int suma = 0;
//     int broj;
    
    
//     while(znak !='='){
//         counter ++;
//         printf("unesite znak \n");
//         scanf(" %c",&znak);
        
        
//         if(znak != '=' ){
            
        
//         if(counter == 1){
//             printf("unesite  borj \n");
//             scanf("%d",&broj1);
//             printf("unesite  borj \n");
//             scanf("%d",&broj2);
//             if(znak == '+') suma = broj1 + broj2;
//             if(znak == '*') suma = broj1 * broj2;
//             if(znak == '/') suma = broj1 / broj2;
//             if(znak == '-') suma = broj1 - broj2;
            
//         }else{
//             printf("unesite  borj \n");
//             scanf("%d",&broj);
//             if(znak == '+') suma += broj;
//             if(znak == '*') suma *= broj;
//             if(znak == '/') suma /= broj;
//             if(znak == '-') suma -= broj;
//         }
//         }
            
//         }
//     printf("suma je %d",suma);
    
   
    

//     return 0;
// }

///////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////


// 6) unetom broju proveriti da li su cifre deljive sa 3,ako jesu sabrati te brojeve.Ukoliko je suma brojeva veca od 15 ispisati sumu brojeva
// i uneti broj,ako nije isprinatni samo sumu
// #include <stdio.h>

// int main()
// {
//     int pomocna;
//     int element;
//     int suma = 0;
//     int broj;
//     printf("Unesite broj");
//     scanf("%d",&broj);
    
//     pomocna = broj;
    
//     while(pomocna > 0){
//         element = pomocna % 10;
//         pomocna/=10;
//         if(element % 3 ==0){
//             suma +=element;
//         }
//     }
//     if(suma > 15){
//         printf("suma je %d i broj je %d",suma,broj);
//     }else printf("suma je %d",suma);

//     return 0;
// }


////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////


// 7) Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
//а) суму парних и суму непарних бројева; 

//a)

// #include <stdio.h>

// int main()
// {   
//     int n ,suma,i;
//     printf("unesite duziny niza");
//     scanf("%d",&n);
//     int array[n];
    
//     for(i=0;i<n;i++){
//         printf("Unesite element");
//         scanf("%d",&array[i]);
//         if(array[i] % 2 ==0){
            
//             suma +=array[i];
//         }
//     }
//     printf("Ovo je suma %d",suma);

//     return 0;
// }





///////////////////////////////////////////////////////
//8) Napisati program kojim se iz datog niza realnih 
// brojeva X izbacuje maksimalni element. 
// Nije dozvoljeno koriš?enje pomo?nog niza.



// #include <stdio.h>
// #define MAX 100

// void unos(float array[MAX],int n){
//     int i;
//     float el;
//     printf("Unesite elemente:");
//     for(i=0;i<n;i++){
//         scanf("%f",&el);
//         array[i] = el;
       
//     }
// }
// void ispis(float array[MAX],int n){
//     int i=0;
//     for(i=0;i<n;i++){
//         printf("%.2f \n",array[i]);
        
//     }
// }

// int main()
// {   int n,i,imax,j;
//     float max = 0;
//     printf("unesite n ");
//     scanf("%d",&n);
//     float array[n];
//     unos(array,n);
//     for(i=0;i<n;i++){
//         if(array[i] > max){
//             max = array[i];
//             imax = i;
//         }
        
//     }
//     for(i=imax;i<n;i++){
//             array[i] = array[i+1];
        
//     }
//     ispis(array,n-1);

   
//     return 0;
// }

///////////////////////////////////////////////////////////////
//9)Napisati program koji na osnovu datog niza realnih brojeva X formira novi niz Y koji sadrži elemente niza X 
// koji su manji od srednje vrednosti niza X. 
// Ispisati elemente niza Y. U?itavanje niza X, 
// formiranje niza Y i ispis niza Y realizovati pomo?u 
// odvojenih potprograma. 


// #define MAX 100

// #include <stdio.h>
// #include <stdlib.h>

// void formiranje(int array[MAX],int n){
//     int i,el;
//     printf("Unesite element");
//     for(i=0;i<n;i++){
//         scanf("%d",&el);
//         array[i] = el;
//     }
// }

// int avg(int array[MAX],int n ){
//     int i,suma=0,avg=0;
//     for (i=0;i<n;i++){
//         suma+=array[i];
        
//     }
//     avg = suma / n;
//     return avg;
// }

// void ispisY(int array[MAX],int arrayY[MAX],int avg,int n){
//     int i,counter = 0;
//     for(i=0;i<n;i++){
//         if(array[i] < avg){
//             arrayY[i] = array[i];
//             counter++;
//         }
        
//     }
//     for(i=0;i<counter;i++){
//         printf("%d \n",arrayY[i]);
//     }
    
    
    
// }

// int main(){
//     int n;
//     printf("Unesite duzinu");
//     scanf("%d",&n);
//     int array[n];
//     int arrayY[n];
//     int avrage;
//     formiranje(array,n);
    
//     avrage = avg(array,n);
    
//     ispisY(array,arrayY,avrage,n);
    
    
    
    
//     return 0;
// }


////////////////////////////////////////////////////////////
//10)Vezba

// #include <stdio.h>

// int main()
// {
//     int i,m,im;
//     int array[]={2,3,4,5,43,4,3,3};
//     printf("Unesite broj koji zelite da izbrisete");
//     scanf("%d",&m);
//     for(i=0;i<sizeof(array) / sizeof(array[0]);i++){
//         if(array[i] == m){
//             im = i;
//         }
//     }
//     for(i=im;i<sizeof(array) / sizeof(array[0])-1;i++){
//         array[i] = array[i+1];
        
//     }
//     for(i=0;i<sizeof(array) / sizeof(array[0]);i++){
//         printf("%d\n",array[i]);
//     }
    
    
    

//     return 0;
// }


//////////////////////////////////////////////////////////////////