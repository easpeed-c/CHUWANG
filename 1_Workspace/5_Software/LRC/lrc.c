#include "stdio.h"
#include "stdint.h"

uint8_t data[7];

int main(void)
{
    uint8_t lrc = 0x01;
    uint8_t sum = 0;
    for (uint8_t i = 0; i < 6; i++)
    {
#if 0
        if (i == 5)
        {
            scanf("%x", &data[i]);
        }
        else
        {
            scanf("%x-", &data[i]);
        }
#else
        scanf("%x", &data[i]);
#endif
    }
    for (uint8_t i = 0; i < 6; i++)
    {
        sum += data[i];
    }
    lrc = (uint8_t)~sum + 1;
    data[6] = lrc;
    printf("lrc=%x", data[6]);
    return 0;
}
