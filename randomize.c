#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); 	// Generating random number
    char arr[26];
    int random, temp;

	char names[47][40] = {"Alok Khadka","Astha Shrestha", "Amish Chaudhary", "Anmol Shrestha", "Lasta Pudasaini", "Nirdeshika Chuhan", "Nulok Rai", "Perisha Koirala", "Pranjal Neupane", "Rachana Shrestha", "Raseek Shrestha", "Reebhu Adhikary", "Rohan Taujale", "Sailesh Acchami", "Saransh Sharma", "Saurav Khatayat", "Sayal Karki", "Shreya Shrestha", "Sirish Shrestha", "Smarika Shrestha", "Sulav Karki", "Suzana Pyakurel", "Suchak Niraula"};
    char tempName[40];

    for (int i = 0; i < 47; i++){
        for (int j = 0; j < 46 - i; j++){
            if (strcmp(names[j], names[j + 1]) > 0) {		// Bubble sort algorithm
                strcpy(tempName, names[j + 1]);
                strcpy(names[j + 1], names[j]);
                strcpy(names[j], tempName);
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        arr[i] = 65 + i;
    }


    for (int i = 0; i < 26; i++){
        random = rand() % 26;
        temp = arr[i];
        arr[i] = arr[random];
        arr[random] = temp;
    }

    for (int i = 0; i < 26; i++){
        for (int j = 0; j < 47; j++){
            // checking the letter from arr[i] to position
            if (arr[i] == names[j][0]){
                printf("%s\n", names[j]);
            }
        }
    }
}