#include<stdio.h>         /* header file included */

/*----------------------main function start-------------------------*/
int main()
{
    int i,j;  /* Declared variable to use in loop  */

    char string_one[20], string_two[20];
    /* string one and string two declare for input */

    printf("Enter String One: ");  /* Message for user */
    scanf("%[^\n]s",string_one);  
    /* taking input from user (%[^\n]s) using for taking space form user */ 
    
    printf("Enter String Two: ");  /* Message for user */
    scanf(" %[^\n]s",string_two);  
    /* taking input from user (%[^\n]s) using for taking space form user */ 

/*----------------------Loop one for sring one start --------------------------------------*/
    /* using loop to find non alphabest and removing from string */

    for (int i = 0, j; string_one[i] != '\0'; i++) 
   {

      /* enter in the loop if the character is not an alphabet
       or not the null character */
      while (!(string_one[i] >= 'a' && string_one[i] <= 'z') && !(string_one[i] >= 'A' && string_one[i] <= 'Z') && !(string_one[i] == '\0')) 
      {
        for (j = i; string_one[j] != '\0'; ++j) 
         {
            /* if jth element of string_one is not an alphabet,
            assign the value of (j+1)th element to the jth element */
            string_one[j] = string_one[j + 1];
         }
         string_one[j] = '\0'; /* after removing non_alphabet adding null 
            character to end of the string */
      }
   }


/*---------------------------Loop one ends here----------------------------*/

/*----------------------Loop one for sring one start --------------------------------------*/
    /* using loop to find non alphabest and removing from string */

    for (int i = 0, j; string_one[i] != '\0'; i++) 
   {

      /* enter in the loop if the character is not an alphabet
       or not the null character */
      while (!(string_two[i] >= 'a' && string_two[i] <= 'z') && !(string_two[i] >= 'A' && string_two[i] <= 'Z') && !(string_two[i] == '\0')) 
      {
        for (j = i; string_two[j] != '\0'; ++j) 
         {
            /* if jth element of string_two is not an alphabet,
            assign the value of (j+1)th element to the jth element */
            string_two[j] = string_two[j + 1];
         }
         string_two[j] = '\0'; /* after removing non_alphabet adding null 
            character to end of the string */
      }
   }


/*---------------------------Loop one ends here----------------------------*/
    printf("Output String_one: %s \n",string_one);
    printf("Output String_one: %s \n",string_two);
    
    return 0;

}
/*-------------------------main function ends here--------------------*/
