#ifndef STRUCTURES
#define STRUCTURES

typedef enum {
        malbec, tinto, blanco;
} WineType;

typedef struct {
        int day, month, year;
} Date;

typedef struct {
        char[20] name;
        int phone, DNI;
} ProviderData;

typedef struct {
        int code;
        char[20] name;
        char[20] brand;
        Date manufacturing_d;
        WineType type;
        float price;
        float sale_price;
        ProviderData provider_data;
} Wine;

#endif
