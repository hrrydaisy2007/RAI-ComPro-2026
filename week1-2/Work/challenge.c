#include <stdio.h>
int main()
{
    printf("+---------------+--------+--------+\n");
    printf("%-16s","| Name");
    printf("%8s","| Score  | Score2 |\n");
    printf("+---------------+--------+--------+\n");
    printf("%-16s","| Alice");
    printf("%8s","|    85  |     90 |\n");
    printf("%-16s","| Bob");
    printf("%8s","|    78  |     82 |\n");
    printf("%-16s","| Charlie");
    printf("%8s","|    92  |     88 |\n");
    printf("+---------------+--------+--------+\n");


    return 0;
}