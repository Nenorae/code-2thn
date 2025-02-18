#ifndef SPAREPART_H
#define SPAREPART_H

#define SPAREPART_BUFFER_SIZE 100

typedef struct {
    char name[SPAREPART_BUFFER_SIZE];
    int partNumber; // Mengubah part number menjadi bertipe int
    double price;
} Sparepart;

extern Sparepart *spareparts;
extern int sparepartCount;

void initializeSpareparts();
void loadSparepartsFromFile();
void addSparepart();
void listSpareparts();
void saveSparepartsToFile();

#endif

