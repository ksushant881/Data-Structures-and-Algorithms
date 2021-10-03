/*

* program to test a inform use of thing about the current

* C language and Machine Environment.

*/

#include <stdio.h>

/*

* Definitions for byte order,

* according to byte significance from low address to high.

*/

/* least-significant byte first (vax, x86, alpha) */

#define LITTLE_ENDIAN 0x03020100

/* most-significant byte first (IBM 370, 68K, net) */

#define BIG_ENDIAN 0x00010203

/* LSB first in word, MSW first in long (pdp) */

#define PDP_ENDIAN 0x01000302

union endian
{

    unsigned char ue_uchars[4];

    unsigned short ue_ushorts[2];

    unsigned long ue_ulong;
};

union endian endian_test;

typedef char *ptr;

main(int argc, char *argv[])

{

    endian_test.ue_uchars[0] = (char)0x0;

    endian_test.ue_uchars[1] = (char)0x1;

    endian_test.ue_uchars[2] = (char)0x2;

    endian_test.ue_uchars[3] = (char)0x3;

    printf("Byte Sex: ");

    switch (endian_test.ue_ulong)
    {

    case LITTLE_ENDIAN:

        printf("Little Endian - least-significant byte first (vax, x86, alpha)\n");

        break;

    case BIG_ENDIAN:

        printf("Big Endian - most-significant byte first (IBM 360, 68K, Internetwork Order)\n");

        break;

    case PDP_ENDIAN:

        printf("PDP-11 Endian - Least significant byte first in 16 bit word, most-significant word 32 bit long\n");

        break;

    default:

        printf("unknown\n");

        break;
    }

    printf("sizeof char: %d\n", sizeof(char));

    printf("sizeof short: %d\n", sizeof(short));

    printf("sizeof int: %d\n", sizeof(int));

    printf("sizeof long: %d\n", sizeof(long));

    printf("sizeof ptr: %d\n", sizeof(ptr));
}