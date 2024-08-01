#include <stdio.h>

int main(void){
	int chest;
    char size;

    if ( chest <= 90)
    {
        size = 'S';
    }
    // else if (( chest > 90) && ( chest <= 100))
    else if (chest <= 100)
    {
        size = 'M';
    }
    else
    {
        size = 'L';
    }

    printf("%c\n", size);

	return 0;
}
