// TIDAK WORKKKKKKKKKKKKKK
#include<stdio.h>

int bar,kol,matrix[10][10];

int a,b,atas,bawah,nol;

int pilihan;

char lanjut;

int input(){

printf("masukkan baris = ");scanf("%i", &amp;bar);

printf("masukkan kolom = ");scanf("%i", &amp;kol);

//membuat matrix

for(a=0;a&lt;bar;a++){

for(b=0;b&lt;kol;b++){

printf("INDEX[%d,%d] = ",a,b);scanf("%d",&amp;matrix[a][b]);

}

}

//menampilkan matrix

for(a=0;a&lt;bar;a++){

for(b=0;b&lt;kol;b++){

printf("%d ",matrix[a][b]);

}

printf("\n");

}

}

int Cekatas(){

a=0;

atas=1;

while ((a&lt;bar &amp;&amp; a&lt;kol)&amp;&amp;(atas==1))

{

b=0;

while ((b&lt;bar &amp;&amp; b&lt;kol)&amp;&amp;(atas==1))

{

if (a &lt; b)

{

if(matrix[a][b]== 0)

{

atas=1;

b++;

}

else

atas=0;

}

else

b++;

}

a++;

}

if (atas==0)

printf("Matriks bukan matriks segitiga atas");

else

printf("Matriks merupakan matriks segitiga atas");

}

int CekBawah(){

a=0;

bawah=1;

while ((a&lt;bar &amp;&amp; a&lt;kol)&amp;&amp;(bawah==1))

{

b=0;

while ((b&lt;bar &amp;&amp; b&lt;kol)&amp;&amp;(bawah==1))

{

if (a &lt; b)

{

if(matrix[a][b]== 0)

{

bawah=1;

b++;

}

else

bawah=0;

}

else

b++;

}

a++;

}

if (bawah==0)

printf("Matriks bukan matriks segitiga bawah");

else

printf("Matriks merupakan matriks segitiga bawah");

}

int Ceknol(){

a=0;

nol=1;

while ((a&lt;bar &amp;&amp; a&lt;kol)&amp;&amp;(nol==1))

{

b=0;

while ((b&lt;bar &amp;&amp; b&lt;kol)&amp;&amp;(nol==1))

{

if (a == b)

{

if(matrix[a][b]== 0)

{

nol=1;

b++;

}

else

nol=0;

}

else

b++;

}

a++;

}

if (nol==0)

printf("Matriks bukan matriks nol");

else

printf("Matriks merupakan matriks nol");

}

int Cekdiagonal(){

a=0;

atas=1;

bawah=1;

while ((a&lt;bar &amp;&amp; a&lt;kol)&amp;&amp;((atas==1)&amp;&amp;(bawah==1)))

{

b=0;

while ((b&lt;bar &amp;&amp; b&lt;kol)&amp;&amp;((atas==1)&amp;&amp;(bawah==1)))

{

if ((a&lt;b)&amp;&amp;(a&gt;b))

{

if(matrix[a][b]== 0)

{

atas=1;

bawah=1;

b++;

}

else

atas=0;

bawah=0;

}

else

b++;

}

a++;

}

if (atas==0 &amp;&amp; bawah==0)

printf("Matriks bukan matriks diagonal");

else

printf("Matriks merupakan matriks diagonal");

}

int main(){

do{

//Memasukkan Pilihan user

printf("\nSilahkan Pilih Menu :\n");

printf("\cek matriks segitiga bawah\n");

printf("\cek matriks segitiga atas\n");

printf("\cek matriks nol\n");

printf("\cek matriks diagonal\n");

printf("\cek matriks simetris\n");

printf("pilih = ");

scanf("%d", &amp;pilihan);

switch(pilihan){

case 1 :

input();

//tampil();

CekBawah();

break;

case 2 :

input();

//tampil();

Cekatas();

break;

case 3 :

input();

//tampil();

Ceknol();

break;

case 4 :

input();

//tampil();

Cekdiagonal();

break;

default: printf("\nMaaf, pilihan tidak tersedia..!"); break;

}

printf("\nMau coba lagi(Y/N)? "); scanf("%s", &amp;lanjut);

}while((lanjut=='y')||(lanjut=='Y'));

return 0;

}
