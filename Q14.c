/*Q14.PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, 
LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.*/ 

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Character %c is a Capital Letter.\n", ch);

    }else if(ch >= 'a' && ch <= 'z')
    {
        printf("Character %c is a Small Case Letter.\n", ch);

    }else if(ch >= '0' && ch <= '9')
    {
        printf("Character %c is a Digit.\n", ch);

    }else
    {
        printf("Character %c is a Special Character.\n", ch);
    } //((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
    return 0;
}