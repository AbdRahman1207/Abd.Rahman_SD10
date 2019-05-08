#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
    char nama [8][30];
    strcpy(nama[0],"Wahyu");
    strcpy(nama[1],"Yusril");
    strcpy(nama[2],"Rahman");
    strcpy(nama[3],"Yayat");
    strcpy(nama[4],"Fadly");
    strcpy(nama[5],"Desta");
    strcpy(nama[6],"Syahrul");
    strcpy(nama[7],"Ardian");
    strcpy(nama[8],"Adhan");

    for(int i=0;i<8;i++){

            int j,bd;
            j=i;
            for(int k=i+1;k<8;k++)
            {
                    bd=strcmp(nama[j],nama[k]);
                    if(bd==-1) j=k;        /* angka 1 merupakan urut data secara ascending, untuk descending ganti dengan -1 */
                    }
                                if(j!=i){
                             char temp[1][30]; /* Swapping */
                             strcpy(temp[0],nama[j]);
                             strcpy(nama[j],nama[i]);
                             strcpy(nama[i],temp[0]);}
                    }

    for (int i=0;i<8;i++){ /* Menampilkan hasil */
        puts(nama[i]);//untuk menampilkan string
        //cout<<nama[i]<<endl;
        }
    getchar();
    return 0;
}
