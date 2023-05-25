/*
 * bit_math.c
 *
 * Created: 5/25/2023 11:18:41 AM
 *  Author: Youssef Abbas
 */ 
/*macro to set a specific bit*/
#define SET_BIT(byte,bit_num) (byte |= (1<<bit_num))

/*macro to clear a specific bit*/
#define CLEAT_BIT(byte,bit_num) (byte &= (~(1<<bit_num)))

/*macro to toggle a specific bit*/
#define TOGGLE_BIT(byte,bit_num) (byte ^= (1<<bit_num))

/*macro to check if a bit is set*/
#define BIT_IS_SET(byte,bit_num) (byte & (1<<bit_num))

/*macro to check if bit is cleared*/
#define BIT_IS_CLEAR(byte,bit_num) (!(byte & (1<<bit_num)))

/*macro to perform right circular*/
#define cir_right(byte,bits) (byte = (byte >> bits) | (byte << (8-bits)))

/*macro to perform left circular*/
#define cir_left(byte,bits) (byte = (byte << bits) | (byte >> (8-bits)))

/*macro to display a specific flag*/
#define GET_BIT(byte,flag_num) (byte = ((byte >> flag_num) & 0X01))