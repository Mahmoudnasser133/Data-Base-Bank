#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"bank_data.h"

int main()
{
    char choice;int id;
    while(1)
    {
        printf( " press 1 to Create new account \n"
                " press 2 to Edit customer\n"
                " press 3 to Delete customer\n"
                " press 4 to Print customer\n"
                " press 5 to Cash transfer from customer to another\n"
                " press 6 to Exit \n\n"
                " Enter your choice : ");
        scanf("%i",&choice);
        printf("\n*****************************************\n");
//scan new customer
        if (1==choice)
        {
            scan_new();
        }
//edit client
        if (choice==2)
            {
                printf(" Enter id : ");
                fflush(stdin);
                scanf("%i",&id);
                edit_client(id);

            }
// delete customer
            if (choice==3)
            {
                printf(" Enter id : ");
                fflush(stdin);
                scanf("%i",&id);
                delete_client(id);

            }
// print client
        if (choice==4)
            {
                printf(" Enter id ");
                fflush(stdin);
                scanf("%i",&id);
                print_client(id);
            }
// transfer customer
            if (choice==5)
            {
                printf(" Enter id which you want to transfer from it : ");
                fflush(stdin);
                scanf("%i",&id);
                transfer(id);
                }
// Exit from program
        if (choice==6)
            {
            break;
            }
          printf("\n*****************************************\n");
    }
    return 0;
}
