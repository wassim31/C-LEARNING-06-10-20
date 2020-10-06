#include <stdio.h>
#include <stdlib.h>

  int main (int argc , char *argv[])
      {

printf("Bonjour \n");    /* THIS INSTRUCTION IS USED FOR SHOWING TEXT IN SCREEN
            THIS TYPE OF COMMENT IS USED FOR LONG COMMENT
*/
        // WE USE THE TWO SLASH FOR SHORT COMMENT
    int number;
            number = 2;

printf("%d \n\n", number);

    float dic;

            dic = 5.554; /* THE FIRST VALUE OF VARIABLE-DIC */

printf("%f\n\n", dic); /* WE CAN CHANGE THE VALUE OF VARIABLE */

                dic = 5.553; /* THE SECOND VALUE OF VARIABLE-DIC */

printf("%f\n\n", dic);

        printf("I can write an Integer :  %d \n Also a decimal number :  %f \n", number, dic);

    /* I DECLARED FLOAT VARIABLE TYPE INSTEAD DOUBLE ,  FOR RAM OPTIMIZATION
BECAUSE float is a single precision (32 bit) floating point data type
AND :  double is a double precision (64 bit) floating point data type */







    return 0;
    }
