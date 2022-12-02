#include "bank_data.h"

// print client
void print_client (int id)
        {
             int temp=S+1; char k=0;
            for (k=0;k<S;k++)
                {
                    if(c1[k].id==id)
                    {
                        temp =k;
                        break;
                    }
                }

                if (temp==S+1)
                {
                    printf("This id  not found\n");
                }
                else
                {
                  printf("\n Name : %s",c1[temp].name);
                  printf("\n Cash : %lf",c1[temp].cash);
                  printf("\n Type : %s",c1[temp].type);
                  printf("\n id   : %i",c1[temp].id);
                }


        }

