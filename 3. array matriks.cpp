#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	double ichwan;
	cout<<"Masukkan ukuran matriks : "; cin>>a;
	double matriks [a][a];
	//Menginput Matriks dan Menampilkannya
	for (int x=0;x<a;x++){
		for (int y=0;y<a;y++){
			cout<<"["<<x<<"]"<<"["<<y<<"]";
			cin>>matriks[x][y];}}
			cout<<endl;
	for (int x=0;x<a;x++){
		for (int y=0;y<a;y++){
			cout<<matriks[x][y]<<" ";}
		cout<<endl;}
		system("pause");
                cout<<endl;
	//Membuat Matriks Menjadi Matriks Segitiga Atas
	for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            ichwan=matriks[j][i]/matriks[i][i];
            for(int k=i;k<a;k++){
                matriks[j][k]=matriks[j][k]-(ichwan*matriks[i][k]);
                for(int p=0;p<a;p++){
                    for (int r=0;r<a;r++){
                        cout<<matriks[p][r]<<" ";
                    } cout <<endl;
                } cout<<endl;
            system("pause");
			}
        }
    }
	//Menghitung Determinan Matriks
	double hasil=1;
	for (int x=0;x<a;x++){
		hasil=hasil*matriks[x][x];}
		cout<<"Determinan = "<<hasil;
		getch();
}
