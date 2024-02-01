
unsigned int BinaryToDecimal(unsigned int binary){
	unsigned int remainder, decimal=0, base=1;
	while(binary != 0) {
        remainder = binary % 10;
        decimal = decimal + remainder*base;
        binary /= 10;
		base *= 2;
    }
	return decimal;
}