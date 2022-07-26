#include <stdio.h>
#include <stdint.h>

int main(int argc, int *argv[])
{
FILE * fp1 = fopen(argv[1],"rb");
FILE * fp2 = fopen(argv[2],"rb");

uint32_t thousand;
fread(&thousand, sizeof(uint32_t),1,fp1);
thousand = ntohl(thousand);

uint32_t five_hundred;
fread(&five_hundred, sizeof(uint32_t),1,fp2);
five_hundred = ntohl(five_hundred);

uint32_t sum = thousand + five_hundred;

printf("%d(%#x) + %d(%#x) = %d(%#x)\n",thousand,thousand,five_hundred,five_hundred,sum,sum);

}
