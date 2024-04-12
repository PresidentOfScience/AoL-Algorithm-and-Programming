#include <stdio.h>
#include <string.h>
#include <windows.h>

struct housing{
	char loc1[50];
	char loc2[50];
	char price[20];
	char room[20];
	char bathrooms[20];
	char carparks[20];
	char type[50];
	char area[20];
	char furnish[50];
};

struct housing data[5000];

void alphabetize(struct housing data[5000], int total){
	for(int i=0; i<total-1; i++){
		for(int j=0; j<total-1-i; j++){
			struct housing temp;
			if(strcmp(data[j].loc1, data[j+1].loc1) > 0){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
}

int main(){
	int total = 0;
	char header[500];
	
	FILE *fptr = fopen("file.csv", "r");
	fscanf(fptr, "%[^\n]\n", header);
	
	while(!feof(fptr)){
		fscanf(fptr, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", data[total].loc1, data[total].loc2, &data[total].price, &data[total].room, &data[total].bathrooms, &data[total].carparks, data[total].type, &data[total].area, data[total].furnish);
		total++;
	}

	printf("                                        HOUSING DATA IN MALAYSIA PROGRAM\n");
	printf("--------------------------------------------------------------------------------------------------------------\n\n");
	
	alphabetize(data, total);
		
	for(int i=0; i<total; i++){
		printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
	}
	
	fclose(fptr);
	
	return 0;
}
