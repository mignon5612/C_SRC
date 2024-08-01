#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if(argc != 3)
    {
        printf("using : ./main 10 20\n");
        return 0;
    }
    printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
    // if(argc < 3)
    // {
    //     return 0;
    // }
    // else
    // {
    //     printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
    // }


    // printf("%s + %s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));
    // printf("argc : %d\n", argc);

    // for(int i = 0; i < argc; i++){
    //     printf("argv[%d] : %s\n", i, argv[i]);
    // }
    // argv[0]
    // printf("argv[1] : %s\n", argv[1]);

    return 0;
}