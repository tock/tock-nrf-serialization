
#ifndef SENSYS_STRUCTS
#define SENSYS_STRUCTS

typedef struct
{
    int16_t acc_x;
    int16_t acc_y;
    int16_t acc_z;
    int16_t mag_x;
    int16_t mag_y;
    int16_t mag_z;
    uint16_t lux;
    uint16_t fdest[8];
    uint16_t fnhop[8];
    uint8_t pfxlen[8];
    uint8_t ftable_len;
} __attribute__((__packed__))  node_data_t;


typedef struct
{
    uint8_t idents[32];
    uint8_t len;
} ble_data_t;

#endif
