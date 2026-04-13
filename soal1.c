/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 01 - Overview of C Language
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : Beatrice Corryn Pangestu (13224038)
 *   Nama File           : soal1.c
 *   Deskripsi           : Sebuah gerbang keamanan memproses data satu peneliti. Tentukan status akhir peneliti berdasarkan 
level izin, suhu tubuh, kadar radiasi, dan jam kedatangan.
 * 
 */


 #include <stdio.h>
 void cek(int izin,int suhu,int radiasi,int jam){
  if (radiasi >=6){
    printf("TOLAK\n");
  }else if (suhu >= 390){
    printf("KARANTINA\n");
  }else if ((izin ==1 && jam <6) || jam >20){
    printf("TOLAK\n");
  }else if (izin ==1){
    printf("MASUK\n");
  }else if (izin == 2 && radiasi <=2){
    if(jam>=8 && jam<=18){
        printf("MASUK\n");
    }
  }else if (izin ==2){
    printf("PEMERIKSAAN\n");
  }else if ((izin == 3 && radiasi ==0) && suhu<380 ){
    printf("MASUK\n");
  }else{
    printf("TOLAK\n");
  }

 }
 int main() {
  int izin,suhu,radiasi,jam;
  scanf("%d %d %d %d",&izin,&suhu,&radiasi,&jam);
  if ((((izin<1 || izin>3)||radiasi<0)||jam<0)||jam>23){
    printf("Input tak valid/n");
    scanf("%d %d %d %d",&izin,&suhu,&radiasi,&jam);
  
 }
 cek(izin,suhu,radiasi,jam);
}
 
