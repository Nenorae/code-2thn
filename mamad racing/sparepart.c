#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sparepart.h"

#define INITIAL_CAPACITY 10

Sparepart *spareparts = NULL;
int sparepartCount = 0;
int sparepartCapacity = 0;

void initializeSpareparts()
{
    sparepartCapacity = INITIAL_CAPACITY;
    spareparts = (Sparepart *)malloc(sparepartCapacity * sizeof(Sparepart));
    if (spareparts == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
}

void saveSparepartsToFile()
{
    FILE *file = fopen("spareparts.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < sparepartCount; i++)
    {
        fprintf(file, "%s %d %.2f\n", spareparts[i].name, spareparts[i].partNumber, spareparts[i].price);
    }

    fclose(file);
}

void loadSparepartsFromFile()
{
    FILE *file = fopen("spareparts.txt", "r");
    if (file == NULL)
    {
        printf("File not found, creating a new one.\n");
        file = fopen("spareparts.txt", "w");
        if (file == NULL)
        {
            printf("Error creating file.\n");
            exit(1);
        }
        fclose(file);
        return;
    }

    // Check if file is empty
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    if (fileSize == 0)
    {
        printf("File is empty.\n");
        fclose(file);
        return;
    }

    // Reset sparepartCount and capacity
    sparepartCount = 0;
    sparepartCapacity = INITIAL_CAPACITY;

    // Initial memory allocation
    spareparts = (Sparepart *)malloc(sparepartCapacity * sizeof(Sparepart));
    if (spareparts == NULL)
    {
        printf("Memory allocation failed.\n");
        fclose(file);
        exit(1);
    }

    // Read data from file
    while (fscanf(file, "%s %d %lf", spareparts[sparepartCount].name, &spareparts[sparepartCount].partNumber, &spareparts[sparepartCount].price) != EOF)
    {
        sparepartCount++;
        if (sparepartCount >= sparepartCapacity)
        {
            // Reallocate memory if capacity is exceeded
            sparepartCapacity *= 2;
            spareparts = (Sparepart *)realloc(spareparts, sparepartCapacity * sizeof(Sparepart));
            if (spareparts == NULL)
            {
                printf("Memory allocation failed.\n");
                fclose(file);
                exit(1);
            }
        }
    }

    fclose(file);
}

void addSparepart()
{
    if (sparepartCount >= sparepartCapacity)
    {
        // Reallocate memory if capacity is exceeded
        sparepartCapacity *= 2;
        spareparts = (Sparepart *)realloc(spareparts, sparepartCapacity * sizeof(Sparepart));
        if (spareparts == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }

    printf("Add New Sparepart\n");
    printf("Name: ");
    scanf("%s", spareparts[sparepartCount].name);

    printf("Part Number: ");
    scanf("%d", &spareparts[sparepartCount].partNumber); // Menggunakan %d untuk membaca angka

    printf("Price: ");
    scanf("%lf", &spareparts[sparepartCount].price);
    sparepartCount++;
    printf("Sparepart added successfully!\n");

    // Save spareparts to file
    saveSparepartsToFile();
}

void listSpareparts()
{
    printf("List of Spareparts:\n");
    for (int i = 0; i < sparepartCount; i++)
    {
        printf("%s %d %.2f\n", spareparts[i].name, spareparts[i].partNumber, spareparts[i].price);
    }
}
