#include "bank_data.h"

void edit_client (int id)
{
    char temp_edit=S+1,kE=0;
            for (kE=0;kE<S;kE++)
                {
                    if(c1[kE].id==id)
                    {
                        temp_edit =kE;
                        break;
                    }
                }

                if (temp_edit==S+1)
                {
                    printf("This id  was not found\n");
                }
                else
                {
                   printf(" Enter name of client %i: ",temp_edit+1);
                   fflush(stdin);
                   gets(c1[temp_edit].name);
                   printf(" Enter cash of client %i: ",temp_edit+1);
                   scanf("%lf",&c1[temp_edit].cash);
                   printf(" Enter type (credit or debit) of client %i: ",temp_edit+1);
                   fflush(stdin);
                   gets(c1[temp_edit].type);
                   printf(" Enter id of client %i: ",temp_edit+1);
                   scanf("%i",&c1[temp_edit].id);
                   fflush(stdin);
                }
}


