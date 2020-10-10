//* Program Billing Warnet *//
/* RAFI AULIA PERMANA (20051397071) */
#include <stdio.h>
#include <conio.h>

main ()
{
int sisa,Total_detik_mulai,Total_detik_selesai,jam_mulai,menit_mulai,detik_mulai,jam_selesai,menit_selesai,detik_selesai,lama_pemakaian,menit_pemakaian,detik_pemakaian,durasi,	tot_bayar;

printf ("BILLING WARNET RAFI AULIA PERMANA\n");
printf ("D4 Manajemen Informatika\n");
printf ("Kelas 2020A NIM 20051397071\n");
printf ("Pemrograman Dasar\n");
printf ("\n \n");

printf ("MULAI\n");
printf ("JAM MULAI   =10\n",jam_mulai);
printf ("MENIT MULAI =00\n",menit_mulai);
printf ("DETIK MULAI =00\n",detik_mulai);
Total_detik_mulai=(jam_mulai*3600)+(menit_mulai*60)+detik_selesai;
printf ("\n \n");

printf ("SELESAI\n");
printf ("JAM SELESAI     =12\n",jam_selesai);
printf ("MENIT SELESAI   =00\n",menit_selesai);
printf ("DETIK SELESAI   =00\n",detik_selesai);
Total_detik_selesai=(jam_selesai*3600)+(menit_selesai*60)+detik_selesai;
durasi=Total_detik_selesai-Total_detik_mulai;

tot_bayar=5000*1.5;
    lama_pemakaian=3600/1800;
    sisa=1800%3600;
    menit_pemakaian=0/60;
    detik_pemakaian=0%60;
    printf ("\n \n");
    
printf ("LAMA PEMAKAIAN");
    printf("\n: %i jam\n",lama_pemakaian);
    printf(": %i menit\n",menit_pemakaian);
    printf(": %i detik\n",detik_pemakaian);
    printf("\n \n");
printf ("Tarif = Rp. 5.000,- per jam\n");
    printf ("TOTAL BAYAR : Rp. %i",tot_bayar);
    printf ("\n");
    printf ("TERIMA KASIH");
    printf ("\n");
    getch  ();
}
