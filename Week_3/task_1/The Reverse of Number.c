
unsigned int ReversedNumber(unsigned int num){
	unsigned int reversedNumber = 0, remainder;
	while(num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
	return reversedNumber;
}