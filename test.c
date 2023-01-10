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

//11) a)Izbrisati element iz arraya ,koji korisnik unese.
// b) Izbrisati sve elemente koje user unese;
//a)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int i,j,n;
//     int size = 6;
//     int array[100] = {2,3,1,1,23,4};
    
//     int delete;
//     printf("Unesite element koji zelite da izbrisete");
//     scanf("%d",&delete);
//     i = 0;
//     while(i < size){
//         if(array[i] == delete){
//             for(j=i;j<size;j++){
//                 array[j] = array[j+1];
//             }
//             size --;
//             i--;
           
//         }
//        i++;
        
//     }
    
//     for(i=0;i<size;i++){
//         printf("%d \n",array[i]);
//     }
//     return 0;
// }

//b)
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int i,j,n;
//     int size = 6;
//     int array[100] = {2,3,1,1,23,4};
//     int k;
//     int delete;
//     int unos;
//     printf("Unesite koliko elemenata");
//     scanf("%d",&unos);
//     int arrayUnos[unos];
    
//     for(i=0;i<unos;i++){
//         int el;
//         printf("Unesite element");
//         scanf("%d",&el);
//         arrayUnos[i] = el;
        
//     }
//     for(i=0;i<size;i++){
//         for(j=0;j<unos;j++){
//             if(array[i] == arrayUnos[j]){
//                 for(k=i;k<size;k++){
//                     array[k] = array[k+1];
//                 }
//                 size--;
//                 i--;
                
//             }
//         }
        
//     }
//     for(i=0;i<size;i++){
//         printf("%d \n",array[i]);
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////

//12)Napraviti program koji ispisuje sve moguce kombinacije brojeva niza

// #include<stdio.h>
// #include<string.h>
// #define N 10
 
// void print(int *num, int n)
// {
//     int i;
//     for ( i = 0 ; i < n ; i++)
//         printf("%d ", num[i]);
//     printf("\n");
// }
// int main()
// {   int n,i,j,temp;
//     printf("Unesite duzinu");
//     scanf("%d",&n);
    
//     int array[n];
//     for(i=0;i<=n;i++){
//         array[i] = i+1;
//     }
    
//     for(i=0;i<n;i++){
//         for(j=0;j<n-1;j++){
//             temp = array[j];
//             array[j] = array[j+1];
//             array[j+1] = temp;
//             print(array,n);
            
            
//         }
//     }
//     return 0;
// }




////////////////////////////////////////////////////////////////

//12 Napraviti program pomocu rekurzije koji ce ispisati sve kombinacjie brojeva rekurziom(zbirka:10.26)
// #include <stdio.h>
// #include <stdlib.h>

// void ispis(int array[],int n){
//     int i;
//     for(i=0;i<n;i++) printf("%d " ,array[i]);
//     printf("\n");
    
// }

// void permutacija(int array[],int m,int n){
//     int i,temp,j;
//     if(m<=n){
//         permutacija(array,m+1,n);
//         for(i=0;i<n-1;i++){
//         temp = array[i];
//         array[i] = array[i+1];
//         array[i+1]= temp;
//         ispis(array,n);
        
        
//     }
    
        
//     }
    
    
// }
// int main(){
    
//     int n,i;
//     printf("Unesite vrednost n");
//     scanf("%d",&n);
    
//     int array[n];
//     for(i=0;i<n;i++){
//         array[i] = i+1;
//     }
//     permutacija(array,1,n);
//     return 0;
    
// }

////////////////////////////////////////////////////////////////////////////

//13)Isprintati zadatu matricu i transponovanu istu (zbirka 11.12)

// #include <stdio.h>
// #define MAX 100
// int main()
// {
//     int i,j,k,n,m,el;
//     int array[MAX][MAX];
//     printf("Unesi dimenziju matrice");
//     scanf("%d",&n);
    
//     for(i=0;i<n;i++){
//         array[i][n];
        
//         for(j=0;j<n;j++){
//             printf("Unesite element[%d][%d]",i,j);
            
//             scanf("%d",&el);
//             array[i][j] = el;
            
//         }
//     }
//     printf("Zadata matrica \n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
            
            
//             printf("%d ",array[i][j]);
            
//         }
        
//         printf("\n");
//     }
//     printf("Transponovana \n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("%d ",array[j][i]);
//         }
//         printf("\n");
//     }
    

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////
//13 Mnozenje matrica (zbirka 11.14)

// #include <stdio.h>
// #define MAX 100
// int main()
// {
//     int n,i,el,k,j;
//     int counter = 0;
//     int array[MAX][MAX];
//     int arrayY[MAX][MAX];
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
            
//             arrayY[i][j] = array[i][j] * array[j][i];
//         }
        
//     }
    
    
//     printf("Unesite dimenziju");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("%d,%d",i,j);
//             scanf("%d",&el);
//             array[i][j] = el;
//         }
        
//     }
//     printf("ZADATA MATRICA \n");
    
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf(" %d ",array[i][j]);
//         }
//         printf("\n");
//     }
    
//     int brojac1 = 0, brojac2 = 0;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             for(k=0;k<n;k++){
//                         arrayY[i][j] +=array[i][k] * array[k][j];
                        
  
//             }
            
//         }
        
        
//     }
    

//     printf("KVADRIRANA MATRICA \n");
    
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf(" %d ",arrayY[i][j]);
//         }
//         printf("\n");
//     }
    

//     return 0;
// }

////////////////////////////////////////////////////////////
//14
// #define MAX 100
// #include <stdio.h>

// void unos(int array[MAX][MAX],int n,int m){
//     int i,j,el;
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&el);
//             array[i][j] = el;
            
//         }
//     }
// }
// int najviseKvarova(int array[MAX][MAX],int n,int m){
//     int i,j,brojKvarova,max = 0,imax;
//     for(i=0;i<n;i++){
//         brojKvarova = 0;
//         for(j=0;j<m;j++){
//             if(array[i][j] > 0){
//                 brojKvarova++;
//             }
            
//         }
//         if(brojKvarova > max ){
//             max = brojKvarova;
//             imax = i;
//         }
//     }
//     return imax;
    
// }
// int najucestalijiKvar(int array[MAX][MAX],int n,int m){
//     int i ,j,brojKvarova,imax=0,max =0;
//     for(i=0;i<m;i++){
//         brojKvarova = 0;
//         for(j=0;j<n;j++){
//             if(array[j][i] > 0){
//                 brojKvarova++;
//             }
            
            
//         }
//         if(brojKvarova > max){
//             max = brojKvarova;
//             imax = i;
//         }
//     }
//     return imax;
    
// }

// int najviseJedinicia(int array[MAX][MAX],int n,int m){
//     int i ,j,brojKvarova,imax=0,max =0;
//     for(i=0;i<n;i++){
//         brojKvarova = 0;
//         for(j=0;j<m;j++){
//             if(array[i][j] == 1){
//                 brojKvarova++;
//             }
            
            
//         }
//         if(brojKvarova > max){
//             max = brojKvarova;
//             imax = i;
//         }
//     }
//     return imax;
    
// }


// int main()
// {   int array[MAX][MAX] ,n,m;
//     printf("Unesite koliko automobila");
    
//     scanf("%d",&n);
//     printf("Unesite koliko kvarova ");
//     scanf("%d",&m);
    
//     unos(array,n,m);
//     printf("Najvise kvarova ima %d \n" ,najviseKvarova(array,n,m));
//     printf("Najucestali kvar je %d \n",najucestalijiKvar(array,n,m));
//     printf("Najvise jedinica %d",najviseJedinicia(array,n,m));
    
    
    
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////

//15) zbirka 11.16

// #include <stdio.h>
// #define MAX 100

// void unos(int array[MAX][MAX] ,int array2[MAX][MAX],int m,int n){
//     int i ,j,el;
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
            
//             printf("[%d][%d]",i,j);
//             scanf("%d",&el);
//             array[i][j] = el;
//             array2[i][j] = el;
//         }
//     }
    
// }



// void stepen(int array[MAX][MAX] ,int arrayStepenovan[MAX][MAX],int array2[MAX][MAX], int m, int n){
//     int i ,j,k,s;
    
    

//     for(s=0;s<m;s++){
        
        
    
//         for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             arrayStepenovan[i][j] = 0;

//             for(k=0;k<m;k++){
//                 arrayStepenovan[i][j] += array[i][k] * array2[k][j];
                
                
//             }
            
//         }
//     }
    
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             array2[i][j] = arrayStepenovan[i][j];
//         }
//     }
//     }
    
// }
    
    
        
    
    





// void ispis(int array[MAX][MAX] ,int arrayStepenovan[MAX][MAX],int m, int n){
//     int i ,j;
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             printf("  %d  ",array[i][j]);
            
//         }
      
//         printf("\n");
//     }
    
//     printf("Stepenovana \n");
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             printf("  %d  ",arrayStepenovan[i][j]);
            
//         }
//         printf("\n");
//     }
    
    
// }






// int main()
// {   
//     int array[MAX][MAX];
//     int array2[MAX][MAX];
//     int arrayStepenovan[MAX][MAX];
    
//     int m,n;
//     printf("unesite dimenzija ");
//     scanf("%d",&m);
    
//     printf("Unesite kojeg stepena");
//     scanf("%d",&n);
//     unos(array,array2,m,n);
//     stepen(array,arrayStepenovan,array2,m,n);
//     ispis(array,arrayStepenovan,m,n);
    
//     return 0;
// }


/////////////////////////////////////////////////////////////////////////////
//16) Izbaciti sve maksimalne vrednosti iz liste


// #define MAX 100
// #include <stdio.h>

// void unos(int array[MAX],int m){
//     int i;
    
//     printf("Unesite elemente");
    
//     for(i=0;i<m;i++){
//         scanf("%d",&array[i]);
//     }
// }

// void trazenjeMaximuma(int array[MAX],int m){
//     int i,max = 0,maxEL = 0;
//     for(i=0;i<m;i++){
//         if(array[i] > maxEL){
//             max = i;
//             maxEL = array[i];
//         }
//     }

//     for(i=max;i<m;i++){
//             array[i] = array[i+1];
//             if(array[i+1] == maxEL){
//                 array[i] = array[i+1];
//                 m = m-1;
                
//             }
           
//     }
//      m = m-1;
    
    
    
//     for(i=0;i<m;i++){
//         printf("[%d]",array[i]);
//     }
//     printf("\n");
// }




// main()
// {
    
    
//     int m;
//     int array[MAX];
//     printf("Unesite duzinu");
//     scanf("%d",&m);
    
//     array[m];
    
//     unos(array,m);
//     trazenjeMaximuma(array,m);
    
    
 
//  return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////
// 17 ) Rotiranje elemenata iz niza 10.36

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <stdio.h>

// void upis(int array[] ,int m){
//     int i;
//     printf("UNESTIE ELEMENTE NIZA \n");
//     for(i=0;i<m;i++){
//         scanf("%d",&array[i]);
//     }
    
// }

// void rotiranje(int array[] ,int m){
    
//     int i;
//     int pom = array[0];
//     for(i=1;i<m;i++){
//         array[i-1] = array[i];
//     }
//    array[m-1] = pom;
    


    
// }
// void ispis(int array[],int m){
//     int i;
//     for(i=0;i<m;i++){
//         printf("%d  ", array[i]);
//     }
    
// }
// int main()
// {
//     int m,x,i;
    
//     printf("Unesite duzinu niza");
//     scanf("%d",&m);
//     printf("Unesite do koliko treba da se rotira \n");
//     scanf("%d",&x);
//     int array[m];
   
//     upis(array,m);
//     for(i=0;i<x;i++){
//         rotiranje(array,m);
//     }
//     ispis(array,m);
//     return 0;
// }


/////////////////////////////////////////////////////////////////////////////
//STRINGOVI
// 18 )
// #define MAX 100
// #include <stdio.h>
// #include <ctype.h> 
// #include <string.h>


// void brisanje(char item[],char slovo){
//     int i,j=0,max;
//     int len;
//     int k =0;
//     len = strlen(item);
   
//     for(i=0;i<len;i++){
//         if(item[i] != slovo){
//             item[j] = item[i];
//             j++;
            
//         }
//     }
//     item[j]='\0';
    
    
    
// }

// int main()
// {
//     char item[MAX];
//     char slovo;
//     printf("Unesite recenicu\n");
//     gets(item);
//     printf("Unesite slovo\n");
//     scanf("%c",&slovo);
    
    
//     brisanje(item,slovo);
//     printf("%s",item);

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////

// 20) zbirka 1.29

// #include <stdio.h>
// #define MAX 100
// #include <string.h>
// #include <ctype.h>

// int main(){
//     int i;
//     char word[MAX];
    
//     gets(word);
    
//     int len = strlen(word);
//     for(i=len;i>=0;i--){
        
//         printf("%c",word[i]);
        
        
//     }
    
//     return 0;
// }


///////////////////////////////////////////////////////////////////////////
// 21) Napraviti program koji ce da rotira za odredjen broj slogova

// #include <stdio.h>
// #include <ctype.h>


// void premestanje(char word[]){
//     int i;
//     int len = strlen(word);
//     char pomocna = word[0];
//     for(i=0;i<len;i++){
//         word[i] = word[i+1];
        
//     }
//     word[len-1] = pomocna;
    
// }

// int main(){
//     char word[100];
    
//     int i,rot;
//     printf("Unesite recenicu");
//     gets(word);
//     printf("Unesite za koilko elementa zelite da pomerite");
//     scanf("%d",&rot);
//     for(i=0;i<rot;i++){
//         premestanje(word);
//     }
//     printf("%s",word);
//     return 0;
// }

////////////////////////////////////////////////////////////////////
//18)
// void unos(int niz[],int m){
//     int i ,j,el;
//     printf("Unesite elemente niza");
//     for(i=0;i<m;i++){
//         scanf("%d",&niz[i]);
      
//     }
    
// }
// #include <stdio.h>

// int main()
// {
//     int niz[100];
//     int m,i;
//     printf("Unesite duzinu");
//     scanf("%d",&m);
//     int brojac=1;
    
//     unos(niz,m);
//     printf("array kad je sam %d \n",niz[2]);
//     for(i=1;i<=m;i++){
//         if(niz[i-1] < niz[i]){
//             printf("niz[%d] < niz[%d]",niz[i-1] ,niz[i]);
//             brojac++;
            
//         }
//     }
//     if(brojac == m){
//         printf("niz je rastuci");
//     }
//     printf("ovo je brojac %d",brojac);
    

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////
// 23)

// #include <stdio.h>
// #include <string.h>

// void brisanje(char item[]){
    
//     int len;
    
//     len = strlen(item);
//     int k;
//     int i,j=0,max;
//     k=len-1;
//     int brojac = 0;
    
//     printf("item %c \n",item[k]);
   
//     for(i=0;i<len;i++){
//         if(item[i] != ' '){
//             item[j] = item[i];
//             j++;
            
//         }
//     }
//     printf("Ovo je rec\n");
//     item[j]='\0';
//      for(i=0;i<len-1;i++){
//          printf("%c",item[i]);
       
            

//     }
//     printf("\n");

    

    
    
    
// }
// void polindrom(char item[]){
//     int i,j=0,max;
  
//     int brojac = 0;
//     int len = strlen(item);
//      int k=len-1;
    
//    for(i=0;i<len;i++){
//             printf("niz[%c] == niz[%c] \n",item[i],item[k]);
//             if(item[i] == item[k]){
//                 brojac ++;  
//             }
//             k--;
//         }
//         if(brojac == len){
//             printf("Rec je polindrom");
//         }
    
//     printf("%d %d",brojac,len);
    
//     printf("OVO JE DUZINA ");
//     printf("%d",len);
// }



// int main()
// {
//     char item[] = "ana voli milovana";
//     int m,i;

//     brisanje(item);
    
//     printf("OVO JE DUZINA ");
//     polindrom(item);



//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////
// 24) Zbirka 9.27

// #include <stdio.h>
// void crtanje(int m,int n){
//     int i,j;
//     for(j=0;j<n;j++){
//         printf("\n");
//         if(j==0 || j==n-1){
            
//             for(i=0;i<m+2;i++){
//                 if(i == 0 || i == m+1){
//                     printf("+");
//                 }else{
//                     printf("-");
//                 }
        
        
//             }
//         }else{
//             for(i=0;i<m+2;i++){
//                 if(i == 0 || i == m+1){
//                     printf("|");
//                 }else{
//                     printf(" ");
//                 }
            
//         }
//     }
// }}

// int main()
// {
//     int n,m;
//     printf("Unesite sirinu");
//     scanf("%d",&n);
//     printf("Unesite visinu");
//     scanf("%d",&m);
    
//     crtanje(m,n);
    
    
    

//     return 0;
// }


////////////////////////////////////////////////////////////////////////////////////////////
//25) Proveriti da li je rec anagram

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// // vukan kuvan

// int provera(char item[],char svaki,int len,int zbir){
//     int i;
    
    
//     for(i=0;i<len;i++){
//         printf("%c==%c \n",svaki,item[i]);
//         if(svaki == item[i]){
//             zbir ++;
//             printf("%d \n",zbir);
            
//         }
//     }
//     if(zbir == 1){
//         return zbir;
//     }else{
//         return 0;
//     }
    
// }

// int main()
// {
//     int n,i;
//     char item[100];
//     char item2[100];
//     int zbir = 0;
//     int zajednicki = 0;
//     gets(item);
//     gets(item2);
    
//     int len = strlen(item);
//     int len2 = strlen(item2);

//     for(i=0;i<len;i++){

//         zajednicki += provera(item2,item[i],len,zbir);
        
//     }
//     if(zajednicki == len){
//         printf("Rec ja angaram");
//     }
//     printf("%d ovo su ",zajednicki);
    
    
   

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////////
//26) Pointers 
// #include <stdio.h>
// #include <stdlib.h>
// void funkcija(float *kolickin,float *razlika,float x,float y){
    
//     *kolickin = x / y;
//     *razlika = x-y;
    
// }

// int main(){
    
//     float x,y ,kolickin,razlika;
//     scanf("%f",&x);
//     scanf("%f",&y);
    

//     funkcija(&kolickin,&razlika,x,y);
    
    
//     printf("%2.f /// %2.f",razlika,kolickin);
    
    
    
    
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////

// 27)Zadatak radionica domaci


// #include <stdio.h>
// #include <stdlib.h>

// void unos(int **radionica,int m,int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&radionica[i][j]);
            
//         }
//     }
// }

// int popravljen(int ** radionica,int m,int n){
//     int i,j,popravljenih,br=0;
//     for(i=0;i<n;i++){
//         popravljenih = 1;
//         for(j=0;j<m;j++){
//             if(radionica[i][j] == 1){
//                 popravljenih = 0;
//             }
            
//         }
//         if(popravljenih == 1){
//             br++;
//         }
//     }
//     return br;
    
// }

// int najvisePokvaren(int ** radionica,int m,int n){
//     int i,j,semafor,brojac,max=0,imax=0;
//     for(i=0;i<n;i++){
//         brojac = 0;
//         for(j=0;j<n;j++){
//             if(radionica[i][j] !=0 && radionica[i][j] !=2){
//                 brojac ++;
//             } 
            
//         }
        
//         if(brojac > max){
//             max = brojac;
//             imax = i;
//         }
        
//     }
//     return imax;
// }


// int najvcestijiKvar (int **radionica,int m,int n){
    
//     int i,j,kvar2=0,kvar1=0;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(radionica[i][j] == 2){
//                 kvar2++;
//             }
//             if(radionica[i][j] == 1){
//                 kvar1++;
                
//             } 
//         }
//     }
//     if(kvar1 > kvar2){
//         return 1;
//     }
//     return 2;
// }


// void ispis(int ** radionica,int m,int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             printf(" %d " ,radionica[i][j]);
            
//         }
//         printf("\n");
//     }
    
// }
// int main()
// {
//     int j,i,m,n;
//     int **radionica;
    
//         printf("Unesite broj automobila");
//         scanf("%d",&n);
//                 printf("Unesite broj kvarova");
//         scanf("%d",&m);
        
        
//      radionica = (int**)malloc(n * sizeof(int));
     
//         if(radionica == NULL){
//             printf("Doslo je do greske");
//         }
        
//         for(i=0;i<n;i++){
//             radionica[i] = (int*)(malloc(m*sizeof(n)));
//             if(radionica[i] == NULL){
//                 printf("Doslo je do greske");
//                  for(j=0;j<i;j++)

//                     free(radionica[j]);

//                     free(radionica);
//             }
//         }
        
    
//     unos(radionica,m,n);
    
//     printf("koliko je popravljenih %d \n",popravljen(radionica,m,n));
//     printf("najvise pokvaren je %d \n",najvisePokvaren(radionica,m,n));
//         printf("najucstaliji kvaj je %d \n",najvcestijiKvar(radionica,m,n));
    
//     ispis(radionica,m,n);

//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////
// 29 )Poredjenje stringova 

// #include <stdio.h>
// #define MAX 100
// main()
// {
//  char s[MAX], *p;
//  printf("\n Unesite string: ");
//  gets(s);
//  p=s;
//  printf("%d",&s);
 
 
//  printf("ovde je p %d \n",*p <= 'd');
 
 
//  while(*p)
//  {
//  if(*p >='a' && *p<='z')
//  *p= *p-('a'-'A');
//  p++;
//  }
//  printf(" Novi string: ");
//  puts(s);
//  return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////
//30)Allocating memory with strings

// #include <stdio.h>
// #define MAX 100
// #include <stdlib.h>
// #include <string.h>
// main()
// {

// char **recenica;
// int n,i;

// printf("Unesite duzinu recenice");
// scanf("%d",&n);

// recenica = malloc(n*sizeof(char**));


// while(getchar() != '\n');

//     char rec[MAX];
    
// for(i=0;i<n;i++){

    
//     fgets(rec,MAX,stdin);
//     int leng = strlen(rec);
//     recenica[i] = malloc(leng * sizeof(char));
//     strcpy(recenica[i],rec);
    
    
// }

// printf("Printed \n");
// for(i=0;i<n;i++){
//     printf("%s",recenica[i]);
    
// }
// printf("\n");

//  return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////
// 31) ne zavrsen  lift
// #include <stdio.h>
// #define MAX 100
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// int kapacitet(int masa,int brojLjudi,int maxMasa,int maxLjudi){
//     if(masa > maxMasa){
//         printf("presli se masu");
//         return 0;
//     }
//     if(maxLjudi < brojLjudi){
//         printf("presli ste ljude");
//         return 0;
//     }else{
//         return 1;
//     }
    
// }
// int proverava(char ** ljudi,int brojLjudi,char *osobaIzlazi){
//     int i ,j;
//     for(i=0;i<brojLjudi;i++){
        
//         ///////d ovde sam stigo
//         printf("%s==========%s",osobaIzlazi,ljudi[i]);
//         if(strcmp(osobaIzlazi,ljudi[i]) ==0){
//             return 1;
//         }else{
//             return 0;
//         }

        
//     }
    
    
// }
// void filter(char **ljudi,int brojLjudi,char *osobaIzlazi,int naIndexu){
//     int i,j,saveI;

//     for(i=naIndexu;i<brojLjudi;i++){
//         strcpy(ljudi[i],ljudi[i+1]);
//     }
    
//      for(i=0;i<brojLjudi;i++){
//         printf("%s",ljudi[i]);
//     }
//     printf("\n");


// }
// int spratovi(char **ljudi,int spratovi,int brojLjudi){
//     int i,j;
//     char *osobaIzlazi;
//     char pomocna[MAX];
//     while(getchar() != '\n');
//     for(i=0;i<spratovi;i++){
//         printf("Ime osobe koja izlazi na %d spratu" ,i+1);
//         gets(pomocna);
//         int len = sizeof(pomocna);
//         osobaIzlazi = malloc(len * sizeof(char));
//         strcpy(osobaIzlazi,pomocna);
        
//         if(proverava(ljudi,brojLjudi,osobaIzlazi)){
            
//             brojLjudi --;
//             filter(ljudi,brojLjudi,osobaIzlazi,i);
            
//         }else{
//             printf(" \n ok \n");
//         }
//     }
// }
// main()
// {

// char **ljudi;
// int brojLjudi=0,i,j,*p,*kilaze,masa=0,maxMasa,maxLjudi=0,brojSpratova;

// printf("Unesite broj spratova");
// scanf("%d",&brojSpratova);
    

// printf("Unesite maximalnu kilazu");

// scanf("%d",&maxMasa);

// printf("Unesite maksimalan broj ljudi");
// scanf("%d",&maxLjudi);

// printf("Koliko ljudi ce uci u lift");
// scanf("%d",&brojLjudi);

// ljudi = malloc(brojLjudi * sizeof(char*));
// kilaze = (int**) malloc(brojLjudi *sizeof(int));

// if(kapacitet(masa,brojLjudi,maxMasa,maxLjudi)){
    



// if(ljudi == NULL){
//     printf("Error");
// }


// char covek[MAX];

// for(i=0;i<brojLjudi;i++){
//     printf("Unesit %d osobu",i+1);
//     while(getchar() != '\n');
//     gets(covek);
    
//     printf("Unesite kilazu korisnika");
//     scanf("%d",&kilaze[i]);
    
//     masa +=kilaze[i];
    
//     int len = sizeof(covek);
    
//     ljudi[i] = malloc(len * sizeof(char));
    
//     strcpy(ljudi[i],covek);
// }
// printf("\n");
// kapacitet(masa,brojLjudi,maxMasa,maxLjudi);

// for(i=0;i<brojLjudi;i++){
//     printf("\n");
    
//     printf("%s",ljudi[i]);
//     printf("%d",kilaze[i]);
// }
// printf("\n");
// spratovi(ljudi,brojSpratova,brojLjudi);

// }



//  return 0;
// }

///////////////////////////////////////////////////////////////////////

//32)
// #include <stdio.h>
// #define MAX 100
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// int kapacitet(int masa,int brojLjudi,int maxMasa,int maxLjudi){
//     if(masa > maxMasa){
//         printf("presli se masu");
//         return 0;
//     }
//     if(maxLjudi < brojLjudi){
//         printf("presli ste ljude");
//         return 0;
//     }else{
//         return 1;
//     }
    
// }






//  void spratovi(char **ljudi,int spratovi,int brojLjudi,char ** ostaliLjudi){

    
//     int i,j=0,k=0,l;
//     char *osobaIzlazi;
//     char pomocna[MAX];
//     while(getchar() != '\n');
//     for(i=0;i<spratovi;i++){
//         printf("Ime osobe koja izlazi na %d spratu \n" ,i+1);
//         gets(pomocna);
//         int len = sizeof(pomocna);
//         osobaIzlazi = malloc(len * sizeof(char));
//         strcpy(osobaIzlazi,pomocna);

//         for(l=0;l<brojLjudi;l++){

//         if(strcmp(osobaIzlazi,ljudi[l]) != 0){
//             ostaliLjudi[l] = ljudi[j];
//             j++;
//         }else{
//             ostaliLjudi[i] = "prazno";
            
//         }
        

//     }
        
//     }
//     return 0;
    
// }





// main()
// {

// char **ljudi;
// char **ostaliLjudi;


// int brojLjudi=0,i,j,*p,*kilaze,masa=0,maxMasa,maxLjudi=0,brojSpratova;

// printf("Unesite broj spratova");
// scanf("%d",&brojSpratova);
    

// printf("Unesite maximalnu kilazu");

// scanf("%d",&maxMasa);

// printf("Unesite maksimalan broj ljudi");
// scanf("%d",&maxLjudi);

// printf("Koliko ljudi ce uci u lift");
// scanf("%d",&brojLjudi);

// ljudi = malloc(brojLjudi * sizeof(char*));
// ostaliLjudi = malloc(brojLjudi * sizeof(char*));


// kilaze = (int**) malloc(brojLjudi *sizeof(int));

// if(kapacitet(masa,brojLjudi,maxMasa,maxLjudi)){
    



// if(ljudi == NULL){
//     printf("Error");
// }


// char covek[MAX];

// for(i=0;i<brojLjudi;i++){
//     printf("Unesit %d osobu",i+1);
//     while(getchar() != '\n');
//     gets(covek);
    
//     printf("Unesite kilazu korisnika");
//     scanf("%d",&kilaze[i]);
    
//     masa +=kilaze[i];
    
//     int len = sizeof(covek);
    
//     ljudi[i] = malloc(len * sizeof(char));
    
//     strcpy(ljudi[i],covek);
// }
// printf("\n");
// kapacitet(masa,brojLjudi,maxMasa,maxLjudi);

// for(i=0;i<brojLjudi;i++){
//     printf("\n");
    
//     printf("%s",ljudi[i]);
//     printf("%d",kilaze[i]);
// }
// printf("\n");
// spratovi(ljudi,brojSpratova,brojLjudi,ostaliLjudi);

// }

// printf("\n");
// printf("Ispis ostalih u lift \n");
// printf("U main \n");
//         for(i=0;i<brojLjudi;i++){
//             printf("%s",ostaliLjudi[i]);
//         }

//  return 0;
// }


////////////////////////////////////////////////////////////////////////////
//33) NIJE ZAVRSEN OCENE
// #include <stdio.h>
// #include <string.h>
// int main ( int argc, char **argv ) {
//     FILE *fp = fopen ( "ocene.txt", "r");
//     char line[1024];
//     int index = 0;
//     char nes[100];
//     char sve[500];
//     int bool = 1;
//     int i=0;
//     char topG[100][100];
//     int j=0;
//     int brojac=0;
// 	    if(fp ==NULL){
//     	printf("NE radi");
//     	return 1;
// 	}
//     int duzina=0;
//     while(1){
//     	fgets(nes,sizeof(nes),fp);
//     	printf("%s \n",nes);
    	
//     	duzina = strlen(nes);
    	
//     	for(i=0;i<duzina;i++){
//     		if(nes[i] != ' '){
//     			brojac++;
// 			}
    		
// 		}
// 		printf("()%d()",brojac);
    	
//     	if(feof(fp)){
//     		break;
// 		}
		
// 	}
//     fclose ( fp );

//     return 0;
// }
////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
//not working code
// int a[30][30];atricaPosle;
// 	int m,n,i,j;
// 	char naziv[100];
// 	char naziv2[100];
// 	printf("Unesite ime fajla \n");
// 	scanf("%s",&naziv);
// 	matrica = fopen(naziv,"r");
// 	int moveKolone;
// 	int moveVrstel;
// 	liko kolona da pomerimo")
	
	
	
// 	if(matrica == NULL){
// 		printf("Ne radi \n");
// 	}
// 	fscanf(matrica,"%d%d",&m,&n);
// 	printf("%d=m %d=n",m,n);
// 	printf("Unesite novokreirani fajl");
// 	scanf("%s",&naziv2m;
	
	
// 	matricaPosle = fopen(naziv2,"w");
// 	fprintf(matricaPosle ,"%d %d \n",n,m);
	
// 	%d \n",n,m);
// 	printf("%dm,matrica[0][0]);fopen
// 	for(i=0;i<nni++){
// 		ffscanfor(j=0;jmatrica<m;j+)&a{
// 			fprintf(matricaPoslenaziv2,"%d ",matrica[i][j]);
	
// 	for(i=0;i<m;i++){
// 		for(j=0;j<n;j++){
// 			printfscan f(atrica,"%d",&a[i][j]);
// 		} 	
// 		printf("\n");
// 	}
// 	fclose(matrica);
	
// 	int max = a[0][0];
// 	int min = a[0][0];
// 	int imax,imin;
// 	for(i=0;i<m;i++){
// 		int suma =0;
// 		for(j=0;j<m;j++){
// 			suma+=a[i][j];
// 		}
// 		if(suma > max){
// 			max = suma;
// 			imax=i;
// 		}
// 		if(suma < min){
// 			imin = suma;
// 			imin=i;
// 		}
// 	}	for(i=0;i<m;i++){
// 			for(j-
// 		}
		
// 		printf("Najveca kolona je %d ,najmanja kolona je %d",imax,imin);
// 		fprintf(matricaPosle,"%d %d \n",n,m);
// 		for(i=0;i<m;i++){
// 		for(j=0;j<n;j++){
// 			fprintfscanf(maPosletric a,%d",&a[i][j]);
// 		} 	
// 		fprintf(matricaPosle,"\n");
// 	}
		
// 		fprintf("\n",matricaPosle)naziv2;
		
// 	}atricaPos)
// 	return 0;
// }


////////////////////////////////////////////////////////////////////
//Elevator with files
// #include <stdio.h>
// #include <stdlib.h>
// struct Korisnik{
// 	char ime[12];
// 	int kg;
// 	int sprat;
// };

// int main(int argc, char *argv[]) {
// 	int j,i=0,brojMax,kilazaMax,suma=0;
	
// 	FILE* Podaci = fopen("podaci.txt","w");
// 	if(Podaci == NULL){
// 		printf("Ne radi");
// 		exit(1);
// 	}
// 	printf("Unesite koliko korisnika moze uci u lift i maksimalnu kilazu lifta \n");
// 	scanf("%d",&brojMax);
// 	scanf("%d",&kilazaMax);
// 	fprintf(Podaci, "U liftu najvise moze uci %d ljud sa ukupnom kilazom od %d \n",brojMax,kilazaMax);
// 	char korisnikMaker[12];
// 	while(i < brojMax && suma < kilazaMax){
	
// 		i++;
// 		strcpy(korisnikMaker,"korisnik" + i);
// 		struct Korisnik korisnikMaker;
		
		
// 		printf("Unesite ko ulazi u lift \n");
// 		scanf("%s",&korisnikMaker.ime);
// 		if(korisnikMaker.ime[0] == 'f'){
// 			break;
// 		}
// 		printf("Koliko je %s tezak \n",korisnikMaker.ime);
// 		scanf("%d",&korisnikMaker.kg);
// 		printf("Na kom spratu izlazi %s \n",korisnikMaker.ime);
// 		scanf("%d",&korisnikMaker.sprat);

		
// 		fprintf(Podaci,"Ime:%s \n kilaza:%d \n izlazi na %d spratu \n",korisnikMaker.ime,korisnikMaker.kg,korisnikMaker.sprat);
// 		suma += korisnikMaker.kg;
	
		
// 	}
// 		fprintf(Podaci," \n Ukupno su teski %d",suma);
// 	return 0;
// }





///////////////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// #include <stdlib.h>


// int main(int argc, char *argv[]) {
// 	int *array;
// 	int n,i,j;
// 	printf("unesite duzinu niza \n");
// 	scanf("%d",&n);
// 	array = (int*) malloc(n*sizeof(int*));
// 	for(i=0;i<n;i++){
// 		scanf("%d",&array[i]);
// 	}
// 	int pom;
// 	for(i=0;i<n;i++){
// 		for(j=0;j<n;j++){
// 			if(array[i] < array[j]){
// 				pom = array[i];
// 				array[i] = array[j];
// 				array[j] = pom;
				
				
// 			}
// 		}
