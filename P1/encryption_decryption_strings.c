#include <stdio.h>
// void incrypt(char * c ){
// char *ptr = c;
// while (*ptr != '\0')
// {
//     *ptr = *ptr+1;
//     ptr++;
// }

// }
// int main(){
//     char str[]= "fuck you b";
//     incrypt(str);
//     printf("The encrypted message is %s", str);
// ***now decrypt this shit****
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char str[] = "gvdl!zpv!c";
    decrypt(str);
    printf("The decrypted message is %s", str);

    return 0;
}