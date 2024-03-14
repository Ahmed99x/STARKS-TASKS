#ifndef ImportantMacros_H
#define ImportantMacros_H

// Set Bit Macro
#define SET_BIT(X, BIT_NO) X |= (1 << BIT_NO)

// Clear Bit Macro
#define CLEAR_BIT(X, BIT_NO) X &= ~(1 << BIT_NO)

// Read Bit Macro
#define READ_BIT(X, BIT_NO) ((X & (1 << BIT_NO)) >> BIT_NO)

// Toggle Bit Macro
#define TOGGLE_BIT(X, BIT_NO) X ^= (1 << BIT_NO)

#endif