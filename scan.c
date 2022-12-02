#include "bank_data.h"
 // scan new account
char k=0;
char i=0;
void scan_new (void)
    {

          if (i>=S)
            {
                printf("cannot add new account ,The max number of clients are %i",S);
            }
        else
            {
           printf(" Enter name of client %i: ",i+1);
           fflush(stdin);
           gets(c1[i].name);
           printf(" Enter cash of client %i: ",i+1);
           scanf("%lf",&c1[i].cash);
           printf(" Enter type (credit or debit) of client %i: ",i+1);
           fflush(stdin);
           gets(c1[i].type);
           id_again:
           printf(" Enter id of client %i: ",i+1);
           scanf("%i",&c1[i].id);
           fflush(stdin);
           for (k=0;k<S;k=k+1)
            {
                if (k==i)
                {
                  continue;
                }
                if (c1[i].id==c1[k].id)
                {
                  printf("This id is used , Enter other id \n");
                  goto id_again;
                }
            }
           i++;
            }
    }
void delete_client (int id)
{
    char temp_delete=S+1,kD=0;
    for (kD=0;kD<S;kD++)
                {
                    if(c1[kD].id==id)
                    {
                        temp_delete =kD;
                        break;
                    }
                }

                if (temp_delete==S+1)
                {
                    printf("This id  was not found\n");
                }
                else
                {
                 i--;
                  kD=0;
                  for(kD=0;kD<S-1 ;kD++)
                  {
                     strcpy(c1[temp_delete].name,c1[temp_delete+1].name);
                      c1[temp_delete].cash = c1[temp_delete+1].cash;
                      strcpy(c1[temp_delete].type ,c1[temp_delete+1].type);
                      c1[temp_delete].id = c1[temp_delete+1].id;
                  }
                }
}


