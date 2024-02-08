#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main()
{
    char s[] = "скажи друг и проходи";
    encrypt(s);
    printf("зашифровано в '%s'\n", (s));
    printf ("контрольная сумма %i\n", checksum(s));
    encrypt(s);
    printf("расшифровано обратно в '%s'\n", s);
    printf("контрольная сумма %i\n", checksum(s));
    return 0;
}
