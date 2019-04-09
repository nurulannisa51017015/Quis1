#include<iostream.h>
#include<conio.h>

main () {
char nama[30], jrs [30];
float nk,nt1,nt2,nt3,nm,nq,tnt,na,nf,a,b,c,d,e;
cout <<"nama mahasiswa 	: ";cin>>nama;
cout <<"jurusan  			: "; cin>>jrs;
cout <<"nilai kehadiran	: ";cin>>nk;
cout <<"nilai tugas 1	: ";cin>>nt1;
cout <<"nilai tugas 2 	: ";cin>>nt2;
cout <<"nilai tugas 3 	: ";cin>>nt3;
cout <<"nilai mid 		: ";cin>>nm;
cout <<"nilai Quis		: ";cin>>nq;
cout <<"nilai final 		: ";cin>>nf;
getch ();
clrscr();
a = nk*20/100;
b = nm*20/100;
c = nq*20/100;
d = nf*20/100;
tnt =(nt1+nt2+nt3)/3;
e = tnt*20/100;
na = a+b+c+d+e;
cout <<"\nmahasiswa yang bernama : " <<nama<<endl;
cout <<"\njurusan : " <<jrs<<endl;
cout <<"\nnilai akhir yang diperoleh: " <<na<<endl;
getch();
}

