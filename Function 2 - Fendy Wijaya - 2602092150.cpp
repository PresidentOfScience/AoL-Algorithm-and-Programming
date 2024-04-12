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

void loc1(char string[], int total){
	for(int i=0; i<total; i++){
		if(strstr(data[i].loc1, string)){
			printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
		}
	}
}

void loc2(char string[], int total){
	for(int i=0; i<total; i++){
		if(strstr(data[i].loc2, string)){
			printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
		}
	}
}

void room(char string[], int total){
	for(int i=0; i<total; i++){
		if(strcmp(string, data[i].room) == 0){
			printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
		}
	}
}

void bathrooms(char string[], int total){
	for(int i=0; i<total; i++){
		if(strcmp(string, data[i].bathrooms) == 0){
			printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
		}
	}
}

void carparks(char string[], int total){
	for(int i=0; i<total; i++){
		if(strcmp(string, data[i].carparks) == 0){
			printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
		}
	}
}

void type(char string[], int total){
	for(int i=0; i<total; i++){
		if(strstr(data[i].type, string)){
			printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
		}
	}
}

void furnish(char string[], int total){
	for(int i=0; i<total; i++){
		if(strstr(data[i].furnish, string)){
			printf("%-25s | %-14s | %-10s | %-2s | %-2s | %-2s | %-10s | %-6s | %s\n", data[i].loc1, data[i].loc2, data[i].price, data[i].room, data[i].bathrooms, data[i].carparks, data[i].type, data[i].area, data[i].furnish);
		}
	}
}

void searchData(char string[], char input[], int total){
	system("cls");
	if(strcmp(input, "loc1") == 0) loc1(string, total);
	else if(strcmp(input, "loc2") == 0) loc2(string, total);
	else if(strcmp(input, "room") == 0) room(string, total);
	else if(strcmp(input, "bathrooms") == 0) bathrooms(string, total);
	else if(strcmp(input, "carparks") == 0) carparks(string, total);
	else if(strcmp(input, "type") == 0) type(string, total);
	else if(strcmp(input, "furnish") == 0) furnish(string, total);
}

int main(){
	int total = 0;
	char header[500];
	
	FILE *fptr = fopen("file.csv", "r");
	fscanf(fptr, "%[^\n]\n", header);
	
	while(!feof(fptr)){
		fscanf(fptr, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", data[total].loc1, data[total].loc2, data[total].price, data[total].room, data[total].bathrooms, data[total].carparks, data[total].type, data[total].area, data[total].furnish);
		total++;
	}

	printf("                        HOUSING DATA IN MALAYSIA PROGRAM\n");
	printf("----------------------------------------------------------------------------------\n\n");
	
	char string[50], input[20];
	printf("Column: loc1 | loc2 | room | bathrooms | carparks | type | furnish\n\n");
	printf("Please input with this format : DataX in ColumnName\n");
	printf("Input : ");
	scanf("%s in %s", string, input); getchar();
	
	searchData(string, input, total);
		
	fclose(fptr);
	
	return 0;
}
