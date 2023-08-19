#ifndef STRUCTURES
#define STRUCTURES

typedef enum {
        malbec, tinto, blanco
} WineType;

typedef struct {
        int day, month, year;
} Date;

typedef struct {
        char name[20];
        int phone, DNI;
} ProviderData;

typedef struct {
        int code;
        char name[20];
        char brand[20];
        Date manufacturing_d;
        WineType type;
        float price;
        float sale_price;
        ProviderData provider_data;
} Wine;

#endif
