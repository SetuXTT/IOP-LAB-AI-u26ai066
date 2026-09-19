/*Q19.PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS
 A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR.*/

 #include <stdio.h>

 int main()
 {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("Character %c is a Small Case Letter.\n", ch);
    }else
    {
        printf("Character %c is not a Small Case Letter.\n", ch);
    }
    
 }

