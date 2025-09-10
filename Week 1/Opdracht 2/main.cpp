#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t n);

int main(void) {
	uint8_t BIT0 = 0b00000001;
	uint8_t BIT1 = 0b00000010;
	uint8_t BIT2 = 0b00000100;
	uint8_t BIT3 = 0b00001000;
	uint8_t BIT4 = 0b00010000;
	uint8_t BIT5 = 0b00100000;
	uint8_t BIT6 = 0b01000000;
	uint8_t BIT7 = 0b10000000;
	printBinary(BIT7);
}

void printBinary(uint8_t n) {
	for (int i = 7; i >= 0; i--) {
		printf("%u", (n >> i) & 1);
		}
	printf("\n");
}