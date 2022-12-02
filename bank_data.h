#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define S 3
typedef struct customer
{   char name[50];
    double cash;
    char type[7];
      int id;
}customer_t ;
 customer_t c1[S];

void scan_new (void);
void edit_client (int id);
void delete_client (int id);
void print_client (int id);
void transfer (int id);
