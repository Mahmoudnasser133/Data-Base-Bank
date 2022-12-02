#include "bank_data.h"
void transfer (int id)
{
    int id_trans_2,k_trans_2,temp_trans_2=S+1;
    char k_t1=0,temp_t1=S+1;
            for (k_t1=0;k_t1<S;k_t1++)
                    {
                        if(c1[k_t1].id==id)
                        {
                            temp_t1 =k_t1;
                            break;
                        }
                    }

                if (temp_t1==S+1)
                {
                    printf("This id  was not found\n");
                }
                else if (temp_t1!=S+1)
            {
                printf(" Enter id which you want to transfer to it : ");
                fflush(stdin);
                scanf("%i",&id_trans_2);
                for (k_trans_2=0;k_trans_2<S;k_trans_2++)
                {
                    if(c1[k_trans_2].id==id_trans_2)
                    {
                        temp_trans_2 =k_trans_2;
                        break;
                    }
                }

                if (temp_trans_2==S+1)
                {
                    printf("This id  was not found\n");
                }
                else
                {
                 double cash_trans;
                  cash_again:
                  printf(" Enter cash you want to transfer ");
                  fflush(stdin);
                  scanf("%lf",&cash_trans);
                    if (cash_trans > c1[temp_t1].cash)
                    {
                        printf("I can't transfer that amount of money ,you do not have enough money\n ");
                        goto cash_again;
                    }
                    else
                    {
                        c1[temp_t1].cash -=  cash_trans;
                        c1[temp_trans_2].cash += cash_trans;
                    }

                }

              }

}
