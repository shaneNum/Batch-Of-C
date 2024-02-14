#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
//FullScreen Better Info
char aprooval;

struct manni{
	char local1[100];
	char local2[100];
	int price;
	int room;
	int bath;
	int park;
	char type[15];
	char furnish[15];
};

void display(FILE* read){
	int numRows;
	
	printf("Number of rows?: ");
	scanf("%d",&numRows);getchar();
	
	struct manni info;
	
	printf("==Data displayed==\n");
	printf("===============================================================================================================================\n");
	printf("%-24s\t%-15s\t%s\t\t%s\t%s\t%s\t%-10s\t%-10s\n","Location","City","Price","Rooms","Bathrooms","Car Parks","Type","Furnish");
	for(int i=0;i<numRows;i++){
		fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
		printf("%-24s\t%-15s\t%-8d\t%d\t%d\t\t%d\t\t%-10s%\t%-10s\n",info.local1,info.local2,info.price,info.room,info.bath,info.park,info.type,info.furnish);
	}
	printf("===============================================================================================================================\n");
	
	printf("\n==Input any to exit view==\n");
	scanf("%c",&aprooval);getchar();
	system("cls");
}

void search(FILE* read){
	char column[50];
	char findChar[50];
	int findInt;
	bool valid = true;
	
	printf("Choose a column: ");
	scanf("%[^\n]",column);getchar();
	
	printf("What data do you want to find?: ");
	
	if(strcmp(column,"Location") == 0 || strcmp(column,"City") == 0 || strcmp(column,"Type") == 0 || strcmp(column,"Furnish") == 0){
		scanf("%[^\n]",findChar);getchar();
	}else if(strcmp(column,"Price") == 0 || strcmp(column,"Rooms") == 0 || strcmp(column,"Bathroom") == 0 || strcmp(column,"CarParks") == 0){
		scanf("%d",&findInt);getchar();
	}
	
	int i = 0;
	struct manni info;
	struct manni keep[5000];
		
	if(strcmp(column,"Location") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(strcmp(findChar,info.local1) == 0){
				keep[i] = info;
				i++;
			}
		}
	}else if(strcmp(column,"City") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(strcmp(findChar,info.local2) == 0){
				keep[i] = info;
				i++;
			}
		}
	}else if(strcmp(column,"Price") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(findInt == info.price){
				keep[i] = info;
				i++;
			}
		}
	}else if(strcmp(column,"Rooms") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(findInt == info.room){
				keep[i] = info;
				i++;
			}
		}
	}else if(strcmp(column,"Bathroom") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(findInt == info.bath){
				keep[i] = info;
				i++;
			}
		}
	}else if(strcmp(column,"CarParks") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(findInt == info.park){
				keep[i] = info;
				i++;
			}
		}
	}else if(strcmp(column,"Type") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(findChar == info.type){
				keep[i] = info;
				i++;
			}
		}
	}else if(strcmp(column,"Furnish") == 0){
		while(!feof(read)){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
			if(findChar == info.furnish){
				keep[i] = info;
				i++;
			}
		}
	}
		
	if(i == 0){
		printf("Data does not exist\n");
	}else{
		printf("==Data found. Detail of data==\n");
		printf("===============================================================================================================================\n");
		printf("%-24s\t%-15s\t%s\t\t%s\t%s\t%s\t%-10s\t%-10s\n","Location","City","Price","Rooms","Bathrooms","Car Parks","Type","Furnish");
		for(int j = 0; j < i; j++){
			printf("%-24s\t%-15s\t%-8d\t%d\t%d\t\t%d\t\t%-10s%\t%-10s\n",keep[j].local1,keep[j].local2,keep[j].price,keep[j].room,keep[j].bath,keep[j].park,keep[j].type,keep[j].furnish);
		}
		printf("===============================================================================================================================\n");
	}
	
	printf("\n==Input any to exit view==\n");
	scanf("%c",&aprooval);getchar();
	system("cls");
}

int partitionASC(struct manni da[], int compare[], int i, int k){
	int l = i, h = k, midpoint;
	struct manni temporal;
	int temporalcomp;
	int pivot;
	bool done = false;
	
	midpoint = i + (k - i) / 2;
	pivot = compare[midpoint];
	
	while(!done){
		
		while(compare[l] < pivot){
			++l;
		}
		
		while(pivot < compare[h]){
			--h;
		}
		
		if(l >= h){
			done = true;
		}else{
			temporal = da[l];
			da[l] = da[h];
			da[h] = temporal;
			
			temporalcomp = compare[l];
			compare[l] = compare[h];
			compare[h] = temporalcomp;
			
			++l;
			--h;
		}	
	}
	return h;
}

void quicksortASC(struct manni da[], int compare[], int i, int k){
	int j;
	
	if(i >= k){
		return;
	}
	
	j = partitionASC(da, compare, i, k);
	
	quicksortASC(da, compare, i, j);
	quicksortASC(da, compare, j+1, k);
}

int partitionDES(struct manni da[], int compare[], int i, int k){
	int l = i, h = k, midpoint;
	struct manni temporal;
	int temporalcomp;
	int pivot;
	bool done = false;
	
	midpoint = i + (k - i) / 2;
	pivot = compare[midpoint];
	
	while(!done){
		
		while(compare[l] > pivot){
			++l;
		}
		
		while(pivot > compare[h]){
			--h;
		}
		
		if(l >= h){
			done = true;
		}else{
			temporal = da[l];
			da[l] = da[h];
			da[h] = temporal;
			
			temporalcomp = compare[l];
			compare[l] = compare[h];
			compare[h] = temporalcomp;
			
			++l;
			--h;
		}	
	}
	return h;
}

void quicksortDES(struct manni da[], int compare[], int i, int k){
	int j;
	
	if(i >= k){
		return;
	}
	
	j = partitionDES(da, compare, i, k);
	
	quicksortDES(da, compare, i, j);
	quicksortDES(da, compare, j+1, k);
}

void sort(FILE* read){
	char column[50];
	char chos[10];
	int numRows;
	
	printf("Choose a column: ");
	scanf("%[^\n]",column);getchar();
	
	printf("How many rows?: ");
	scanf("%d",&numRows);getchar();
		
	printf("Ascending or descending order?: ");
	scanf("%s",chos);getchar();
		
	if(strcmp(column,"Price") == 0 || strcmp(column,"Rooms") == 0 || strcmp(column,"Bathroom") == 0 || strcmp(column,"CarParks") == 0){
		struct manni keep[5000];
		int whatType[5000];
		int i = 0;
		int j = 0;
				
		for(int j = 0; j < numRows ; j++){
			fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",keep[j].local1,keep[j].local2,&keep[j].price,&keep[j].room,&keep[j].bath,&keep[j].park,keep[j].type,keep[j].furnish);
		}
			
		if(strcmp(chos,"asc") == 0){
			
			
			if(strcmp(column,"Price") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].price;
				}
			}else if(strcmp(column,"Rooms") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].room;
				}
			}else if(strcmp(column,"Bathroom") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].bath;
				}
			}else if(strcmp(column,"CarParks") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].park;
				}
			}
			
			quicksortASC(keep, whatType, 0, numRows-1);
			
			printf("==Data sorted. Detail of data==\n");
			printf("===============================================================================================================================\n");
			printf("%-24s\t%-15s\t%s\t\t%s\t%s\t%s\t%-10s\t%-10s\n","Location","City","Price","Rooms","Bathrooms","Car Parks","Type","Furnish");
			for(int j = 0; j < numRows; j++){
				printf("%-24s\t%-15s\t%-8d\t%d\t%d\t\t%d\t\t%-10s%\t%-10s\n",keep[j].local1,keep[j].local2,keep[j].price,keep[j].room,keep[j].bath,keep[j].park,keep[j].type,keep[j].furnish);
			}
			printf("===============================================================================================================================\n");
			printf("\n==Input any to exit view==\n");
			scanf("%c",&aprooval);getchar();
			system("cls");
			
			
		}else if(strcmp(chos,"des") == 0){
			
			
			if(strcmp(column,"Price") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].price;
				}
			}else if(strcmp(column,"Rooms") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].room;
				}
			}else if(strcmp(column,"Bathroom") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].bath;
				}
			}else if(strcmp(column,"CarParks") == 0){
				for(int j = 0; j < numRows ; j++){
					whatType[j] = keep[j].park;
				}
			}
			
			quicksortDES(keep, whatType, 0, numRows-1);
			
			printf("==Data sorted. Detail of data==\n");
			printf("===============================================================================================================================\n");
			printf("%-24s\t%-15s\t%s\t\t%s\t%s\t%s\t%-10s\t%-10s\n","Location","City","Price","Rooms","Bathrooms","Car Parks","Type","Furnish");
			for(int j = 0; j < numRows; j++){
				printf("%-24s\t%-15s\t%-8d\t%d\t%d\t\t%d\t\t%-10s%\t%-10s\n",keep[j].local1,keep[j].local2,keep[j].price,keep[j].room,keep[j].bath,keep[j].park,keep[j].type,keep[j].furnish);
			}
			printf("===============================================================================================================================\n");
			
			printf("\n==Input any to exit view==\n");
			scanf("%c",&aprooval);getchar();
			system("cls");
			
		}
		
		
	}else{
		printf("That column / order cannot be manipulated\n");
	}
}

void exporion(FILE* read){
	char fileName[100];
	
	printf("File name: ");
	scanf("%[^\n]",fileName);getchar();
	
	strcat(fileName,".csv");
	
	FILE* write;
	write = fopen(fileName,"w");
	
	struct manni info;
	
	fprintf(write,"Location 1,Location 2,Price,Rooms,Bathrooms,CarParks,Type,Furnish\n");
	
	while(!feof(read)){
		fscanf(read,"%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",info.local1,info.local2,&info.price,&info.room,&info.bath,&info.park,info.type,info.furnish);
		fprintf(write,"%s,%s,%d,%d,%d,%d,%s,%s\n",info.local1,info.local2,info.price,info.room,info.bath,info.park,info.type,info.furnish);
	}
	printf("Loading....\n",fileName);
	sleep(10);
	printf("Data successfully written to file \"%s\"!\n",fileName);
	sleep(3);
	system("cls");
	fclose(write);
}

int main(void){
	char a[50],b[50],c[50],d[50],e[50],f[50],g[50],h[50]; //decoy
	int userChoice;
	
	FILE* read;
	
	int choose, i;
	bool end = true;
	system("Color 02");
	
	do{
		read = fopen("file.csv","r");
		fscanf(read,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",a,b,c,d,e,f,g,h);
		
		printf("==File Management Console==\n");
		printf("###############################\n");
		printf("#\t1. Display Data       #\n");
		printf("#\t2. Search Data        #\n");
		printf("#\t3. Sort Data          #\n");
		printf("#\t4. Export Data        #\n");
		printf("#\t5. Exit               #\n");
		printf("###############################\n");
		printf(">");
		scanf("%d", &choose);getchar();
		
		switch(choose){
			case 1:
				system("cls");
				display(read);
				fclose(read);
			break;
			
			case 2:
				system("cls");
				search(read);
				fclose(read);
			break;
			
			case 3:
				system("cls");
				sort(read);
				fclose(read);
			break;
			
			case 4:
				exporion(read);
				fclose(read);
			break;
			
			case 5:
				end = false;
				printf("Coder: Shane, Nisa, Bryan, Joshua\n");
			break;
			
			default:
				printf("\n==Please choose from the menu==\n");
				sleep(3);
				system("cls");
				fclose(read);
			break;
		}
	}while(end);
	
	fclose(read);

	return 0;
}
