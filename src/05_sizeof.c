#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("size_t %ld\n", sizeof(size_t));
  printf("sizeof(short): %ld\n", sizeof(short));
  printf("sizeof(int): %ld\n", sizeof(int));
  printf("sizeof(long): %ld\n", sizeof(long));
  printf("sizeof(char): %ld\n", sizeof(char));
  printf("sizeof(int[5]): %ld\n", sizeof(int[5]));
  int *my_array = malloc(5 * sizeof(int));

  // this is the size of the pointer, the memory location, 8 bytes
  printf("sizeof(my_array): %ld\n", sizeof(my_array));
  printf("my_array: %p\n", my_array);

  // 0x5654cbd56720
  // 0x hex prefix
  // PML4 - page map level 4 - 512 PDPs - 000101011 "Cabinet" #43 of 512
  // PDP - page directory pointer - 512 PDs - 001010100 Drawer #84 of 512
  // PD - page directory - 512 PTs - 110010111 Folder #407 of 512
  // PT - page table - 512 pages - 101010110 Page #342 of 512
  // Offset - byte address on page - 011100100000 Byte #1824 of 4096

  return 0;
}