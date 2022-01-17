//143134868 Jan/17/2022 20:52UTC+6 ItsTHEAvro 785A - Anton and Polyhedrons GNU C11 Accepted 46 ms 0 KB

#include <stdio.h>

int main()
{
    int n, fCnt=0;
    scanf("%d", &n);
    while(n--)
    {
        char name[15];
        scanf("%s", &name);
        switch(toupper(name[0]))
        {
        case 'T':
            fCnt += 4;
            break;
        case 'C':
            fCnt += 6;
            break;
        case 'O':
            fCnt += 8;
            break;
        case 'D':
            fCnt += 12;
            break;
        case 'I':
            fCnt += 20;
            break;
        }
    }
    printf("%d", fCnt);
    return 0;
}
