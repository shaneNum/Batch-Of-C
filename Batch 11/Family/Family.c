#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	int dosen;
	scanf ("%d", &dosen);
	getchar ();
	char namedosen[dosen][100];
	char kodedosen[dosen][100];
	char genderdosen[dosen][100];
	int sum_ajar[dosen];
	
	char kodemahasiswa[dosen][100][100];
	char namamahasiswa[dosen][100][100];
	char gendermahasiswa[dosen][100][100];
	char ayahmahasiswa[dosen][100][100];
	char ibumahasiswa[dosen][100][100];
	int saudaramahasiswa[dosen][100];
	
	for (int i=0;i<dosen;i++){
		scanf ("%[^\n]",kodedosen[i]);getchar();
		scanf ("%[^\n]",namedosen[i]);getchar();
		scanf("%[^\n]",genderdosen[i]);getchar();
		scanf("%d", &sum_ajar[i]);getchar();
		
		for (int j=0;j<sum_ajar[i];j++){
			scanf ("%[^\n]",kodemahasiswa[i][j]);getchar();
			scanf ("%[^\n]",namamahasiswa[i][j]);getchar();
			scanf ("%[^\n]",gendermahasiswa[i][j]);getchar();
			scanf ("%[^\n]",ayahmahasiswa[i][j]);getchar();
			scanf ("%[^\n]",ibumahasiswa[i][j]);getchar();
			scanf ("%d",&saudaramahasiswa[i][j]);getchar();
		}
		
	}
	int datadipilih;
	scanf ("%d",&datadipilih);getchar();
	
	char namadosenpilih[100];
	char kodepilih[100];
	char genderpilih[100];
	int sum_ajarpilih=0;
	
	char kodemahasiswapilih[100][100];
	char namamahasiswapilih[100][100];
	char gendermahasiswapilih[100][100];
	char ayahmahasiswapilih[100][100];
	char ibumahasiswapilih[100][100];
	int saudaramahasiswapilih[100];
	
	
	for (int i = 0; i < dosen; i++) {
        if ((i + 1) == datadipilih) {
        	
            strcpy(kodepilih, kodedosen[i]);
            strcpy(namadosenpilih, namedosen[i]);
            strcpy(genderpilih, genderdosen[i]);
            sum_ajarpilih = sum_ajar[i];
            
			printf ("Kode Dosen: %s\n",kodepilih);
    		printf ("Nama Dosen: %s\n",namadosenpilih);
    		printf ("Gender Dosen: %s\n",genderpilih);
    		printf ("Jumlah Mahasiswa: %d\n",sum_ajarpilih);
    	
            for (int j = 0; j < sum_ajar[i]; j++) {
            	
                strcpy(kodemahasiswapilih[j], kodemahasiswa[i][j]);
                strcpy(namamahasiswapilih[j], namamahasiswa[i][j]);
                strcpy(gendermahasiswapilih[j], gendermahasiswa[i][j]);
                strcpy(ayahmahasiswapilih[j], ayahmahasiswa[i][j]);
                strcpy(ibumahasiswapilih[j], ibumahasiswa[i][j]);
                saudaramahasiswapilih[j] = saudaramahasiswa[i][j];
                
                printf ("Kode Mahasiswa: %s\n",kodemahasiswapilih[j]);
    			printf ("Nama Mahasiswa: %s\n",namamahasiswapilih[j]);
    			printf ("Gender Mahasiswa: %s\n",gendermahasiswapilih[j]);
    			printf ("Nama Ayah: %s\n",ayahmahasiswapilih[j]);
    			printf ("Nama Ibu: %s\n",ibumahasiswapilih[j]);
    			printf ("Jumlah Saudara Kandung: %d\n",saudaramahasiswapilih[j]);
    			
            }
        }
    }
    
	return 0;
}
