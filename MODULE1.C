#include <stdio.h>
//#include <"status.h">
#include"controls.h"
//#include<"communication.h">

int main()
{
    printf("program initiated.... \n");
    printf("Enter the command:");
    scanf("%d",&cmd);
    
    switch (cmd)       
   {
       case 1:
            printf("valve 1 opened\n");
            valve1open();
             main();
        case 2:
            printf("valve 1 closed\n");
            main();
        case 3:
            printf("valve 2 opened\n");
            main();
        case 4:
            printf("valve 2 closed\n");
            main();
         default: 
            printf("Um! Please enter command between 1-4."); 
          
    }
        
       return 0;
}
