#include <stdio.h>
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1

int main()
{
    int value;
    value = endian();
    if (value == 1)
        printf("Machine is little endian\n",value);
    else
        printf("Machine is Big Endian\n",value);
}

int endian()
{
    short int word = 0x0001;
    char *byte = (char *) &word;
    return (byte[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}
