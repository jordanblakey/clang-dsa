#include <stdio.h>

void print_bits(char byte)
{
  for (int i = 7; i >= 0; i--)
  {
    // Shift bit to the right and mask it to see if it's 1 or 0
    printf("%d", (byte >> i) & 1);
  }
}

int main()
{
  // This string contains 'A' (1 byte) and '🚀' (4 bytes)
  char *text = "A🚀";

  for (int i = 0; text[i] != '\0'; i++)
  {
    printf("Byte %d: 0x%02X | Bits: ", i, text[i]);
    print_bits(text[i]);
    printf("\n");
  }
  return 0;
}