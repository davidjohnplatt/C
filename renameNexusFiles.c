#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(argc,argv)
int argc;
char *argv[];
{
        int count;
//      char holdString = argv[1];
        printf("%s",argv[1]);
	printf("\n");
        printf("%s",argv[2]);
	printf("\n");
        char Comm[80];

        strcpy(Comm,"mv ");
        printf("%s",Comm);
	printf("\n");

        for (int i = 0; i < sizeof(argv[1]); i++) 
        {
          printf("%s",argv[i]);
	  printf("\n");
        }
/*
        strcat(Comm,holdString);
        strcat(Comm," ");
        printf("%s",holdString);
	printf("\n");
        replace(workString,' ','_');
        printf("%s",workString);
	printf("\n");
        strcat(Comm,workString);

        printf("%s",Comm);
char source[] = "This is an example.";
        int i;

        for (i = 0; i < sizeof(source); i++) {

            printf("%c", source[i]);
        }
	printf("\n");
*/
//      system(Comm);
       
        return 0;
}
