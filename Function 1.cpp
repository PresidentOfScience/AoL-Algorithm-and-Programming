#include <stdio.h>
#include <string.h>
#include <windows.h>

struct housing{
	char loc1[50];
	char loc2[50];
	double price;
	int room;
	int bathrooms;
	int carparks;
	char type[50];
	long long int area;
	char furnish[50];
};

struct housing data[5000];

void loc1(int total){
	int frequency[total];
	for(int i=0; i<total; i++){
		int count = 1;
		for(int j=i+1; j<total; j++){
			if(strcmp(data[i].loc1, data[j].loc1) == 0){
				count++;
				frequency[j] = -1;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count;
		}
	}
	for(int i=0; i<total; i++){
		if(frequency[i] != -1){
			printf("%s : %d\n", data[i].loc1, frequency[i]);
		}
	}
	int max = 0, min = total+1, idx;
	for(int i=0; i<total; i++){
		if(frequency[i] > max){
			max = frequency[i];
			idx = i;
		}
	}
	printf("Maximum value: %s with frequency: %d\n", data[idx].loc1, max);
	for(int i=0; i<total; i++){
		if(frequency[i] < min && frequency[i] != -1){
			min = frequency[i];
			idx = i;
		}
	}
	printf("Minimum value: %s with frequency: %d\n", data[idx].loc1, min);
}

void loc2(int total){
	int frequency[total];
	for(int i=0; i<total; i++){
		int count = 1;
		for(int j=i+1; j<total; j++){
			if(strcmp(data[i].loc2, data[j].loc2) == 0){
				count++;
				frequency[j] = -1;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count;
		}
	}
	for(int i=0; i<total; i++){
		if(frequency[i] != -1){
			printf("%s : %d\n", data[i].loc2, frequency[i]);
		}
	}
	int max = 0, min = total+1, idx;
	for(int i=0; i<total; i++){
		if(frequency[i] > max){
			max = frequency[i];
			idx = i;
		}
	}
	printf("Maximum value: %s with frequency: %d\n", data[idx].loc2, max);
	for(int i=0; i<total; i++){
		if(frequency[i] < min && frequency[i] != -1){
			min = frequency[i];
			idx = i;
		}
	}
	printf("Minimum value: %s with frequency: %d\n", data[idx].loc2, min);
}

void room(int total){
	int frequency[total];
	for(int i=0; i<total; i++){
		int count = 1;
		for(int j=i+1; j<total; j++){
			if(data[i].room == data[j].room){
				count++;
				frequency[j] = -1;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count;
		}
	}
	for(int i=0; i<total; i++){
		if(frequency[i] != -1){
			printf("%d : %d\n", data[i].room, frequency[i]);
		}
	}
	int max = 0, min = total+1, idx;
	for(int i=0; i<total; i++){
		if(frequency[i] > max){
			max = frequency[i];
			idx = i;
		}
	}
	printf("Maximum value: %d with frequency: %d\n", data[idx].room, max);
	for(int i=0; i<total; i++){
		if(frequency[i] < min && frequency[i] != -1){
			min = frequency[i];
			idx = i;
		}
	}
	printf("Minimum value: %d with frequency: %d\n", data[idx].room, min);
}

void bathrooms(int total){
	int frequency[total];
	for(int i=0; i<total; i++){
		int count = 1;
		for(int j=i+1; j<total; j++){
			if(data[i].bathrooms == data[j].bathrooms){
				count++;
				frequency[j] = -1;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count;
		}
	}
	for(int i=0; i<total; i++){
		if(frequency[i] != -1){
			printf("%d : %d\n", data[i].bathrooms, frequency[i]);
		}
	}
	int max = 0, min = total+1, idx;
	for(int i=0; i<total; i++){
		if(frequency[i] > max){
			max = frequency[i];
			idx = i;
		}
	}
	printf("Maximum value: %d with frequency: %d\n", data[idx].bathrooms, max);
	for(int i=0; i<total; i++){
		if(frequency[i] < min && frequency[i] != -1){
			min = frequency[i];
			idx = i;
		}
	}
	printf("Minimum value: %d with frequency: %d\n", data[idx].bathrooms, min);
}

void carparks(int total){
	int frequency[total];
	for(int i=0; i<total; i++){
		int count = 1;
		for(int j=i+1; j<total; j++){
			if(data[i].carparks == data[j].carparks){
				count++;
				frequency[j] = -1;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count;
		}
	}
	for(int i=0; i<total; i++){
		if(frequency[i] != -1){
			printf("%d : %d\n", data[i].carparks, frequency[i]);
		}
	}
	int max = 0, min = total+1, idx;
	for(int i=0; i<total; i++){
		if(frequency[i] > max){
			max = frequency[i];
			idx = i;
		}
	}
	printf("Maximum value: %d with frequency: %d\n", data[idx].carparks, max);
	for(int i=0; i<total; i++){
		if(frequency[i] < min && frequency[i] != -1){
			min = frequency[i];
			idx = i;
		}
	}
	printf("Minimum value: %d with frequency: %d\n", data[idx].carparks, min);
}

void type(int total){
	int frequency[total];
	for(int i=0; i<total; i++){
		int count = 1;
		for(int j=i+1; j<total; j++){
			if(strcmp(data[i].type, data[j].type) == 0){
				count++;
				frequency[j] = -1;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count;
		}
	}
	for(int i=0; i<total; i++){
		if(frequency[i] != -1){
			printf("%s : %d\n", data[i].type, frequency[i]);
		}
	}
	int max = 0, min = total+1, idx;
	for(int i=0; i<total; i++){
		if(frequency[i] > max){
			max = frequency[i];
			idx = i;
		}
	}
	printf("Maximum value: %s with frequency: %d\n", data[idx].type, max);
	for(int i=0; i<total; i++){
		if(frequency[i] < min && frequency[i] != -1){
			min = frequency[i];
			idx = i;
		}
	}
	printf("Minimum value: %s with frequency: %d\n", data[idx].type, min);
}

void furnish(int total){
	int frequency[total];
	for(int i=0; i<total; i++){
		int count = 1;
		for(int j=i+1; j<total; j++){
			if(strcmp(data[i].furnish, data[j].furnish) == 0){
				count++;
				frequency[j] = -1;
			}
		}
		if(frequency[i] != -1){
			frequency[i] = count;
		}
	}
	for(int i=0; i<total; i++){
		if(frequency[i] != -1){
			printf("%s : %d\n", data[i].furnish, frequency[i]);
		}
	}
	int max = 0, min = total+1, idx;
	for(int i=0; i<total; i++){
		if(frequency[i] > max){
			max = frequency[i];
			idx = i;
		}
	}
	printf("Maximum value: %s with frequency: %d\n", data[idx].furnish, max);
	for(int i=0; i<total; i++){
		if(frequency[i] < min && frequency[i] != -1){
			min = frequency[i];
			idx = i;
		}
	}
	printf("Minimum value: %s with frequency: %d\n", data[idx].furnish, min);
}

void area(int total){
	long long int max = 0, min = data[0].area, idx, sum = 0;
	for(int i=0; i<total; i++){
		if(max < data[i].area){
			max = data[i].area;
			idx = i;
		}
	}
	printf("Maximum value: %lld\n", data[idx].area);
	for(int i=0; i<total; i++){
		if(min > data[i].area){
			min = data[i].area;
			idx = i;
		}
	}
	printf("Minimum value: %lld\n", data[idx].area);
	for(int i=0; i<total; i++){
		sum += data[i].area;
	}
	double average = sum/total;
	printf("Average value: %.2lf\n", average);	
}

void price(int total){
	double max = 0, min = data[0].price, sum = 0;
	int idx;
	for(int i=0; i<total; i++){
		if(max < data[i].price){
			max = data[i].price;
			idx = i;
		}
	}
	printf("Maximum value: %.0lf\n", data[idx].price);
	for(int i=0; i<total; i++){
		if(min > data[i].price){
			min = data[i].price;
			idx = i;
		}
	}
	printf("Minimum value: %.0lf\n", data[idx].price);
	for(int i=0; i<total; i++){
		sum += data[i].price;
	}
	double average = sum/total;
	printf("Average value: %.2lf\n", average);
}

void describe(int total){
	char input[20];
	printf("Option: loc1 | loc2 | price | room | bathrooms | carparks | type | area | furnish\n\n");
	printf("Input column to view information : ");
	scanf("%s", input); getchar();
	system("cls");
	if(strcmp(input, "loc1") == 0) loc1(total);
	else if(strcmp(input, "loc2") == 0) loc2(total);
	else if(strcmp(input, "room") == 0) room(total);
	else if(strcmp(input, "bathrooms") == 0) bathrooms(total);		
	else if(strcmp(input, "carparks") == 0) carparks(total);		
	else if(strcmp(input, "type") == 0) type(total);
	else if(strcmp(input, "furnish") == 0) furnish(total);
	else if(strcmp(input, "area") == 0) area(total);
	else if(strcmp(input, "price") == 0) price(total);	
}

int main(){
	int total = 0;
	char header[500];
	
	FILE *fptr = fopen("file.csv", "r");
	fscanf(fptr, "%[^\n]\n", header);
	
	while(!feof(fptr)){
		fscanf(fptr, "%[^,],%[^,],%lf,%d,%d,%d,%[^,],%lld,%[^\n]\n", data[total].loc1, data[total].loc2, &data[total].price, &data[total].room, &data[total].bathrooms, &data[total].carparks, data[total].type, &data[total].area, data[total].furnish);
		total++;
	}

	printf("                        HOUSING DATA IN MALAYSIA PROGRAM\n");
	printf("----------------------------------------------------------------------------------\n\n");
	
	describe(total);
		
	fclose(fptr);
	
	return 0;
}
