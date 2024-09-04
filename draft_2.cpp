#include <stdio.h>
#include <string.h>

int my_strlen (const char* str);

int main(void)
{
    char str[] = "max_gud"; 

    int n = my_strlen(str);

    printf("strlen (%s) = %d\n", str, n);

    return 0;

}

int my_strlen (const char* str)
{
    const char* srgpdr = str;
    int result = 0;
    while (*str != '\0')
    {
        /*printf(">>> str = %d\n", str);*/
        str++;
        //printf("<< str = %d\n", str);
        //printf(">>> result = %d\n", result);
        result++;
        //printf("<< result = %d\n", result);
    }

    return str - srgpdr;
}
