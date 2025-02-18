#ifndef SPAREPART_H
#define SPAREPART_H

typedef struct
{
    char name[50];
    int partNumber;
    double price;
} Sparepart;

extern Sparepart *spareparts;
extern int sparepartCount;

void initializeSpareparts();
void loadSparepartsFromFile();
void addSparepart();
void listSpareparts();

#endif