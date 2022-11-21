#include"election.h"
#include <windows.h>

int main(){
    printf("\n\n\n");
    printf("\t\t\t  *******  VELALAR COLLEGE OF ENGINEERING AND TECHNOLOGY  *******\n\n");
    printf("\t\t\t      ******    DEPARTMENT ELECTION BASIC PORTAL      ****** \n\n");
    printf("\t\t\t             **************************************** \n");
    Sleep(1000);

    while(1){
        printf("\n\t\t\t   1.Student panel \n\t\t\t   2.Admin panel \n\t\t\t   3.Exit \n\t\t\t   Option:");
		char input;
        scanf(" %c",&input);

        switch(input){
            case '1':
                studentPanel();
                break;
            case '2':
                adminPanel();
                break;
            case '3':
                return 0;
            default:
                printf("\nInvalid option");
                getch();
        }
    }
    return 0;
}
