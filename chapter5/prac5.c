int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit);


int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit){
    value_to_store <<= ending_bit;
    unsigned tmp = -1;
    for (int i = 0; starting_bit >= i + ending_bit ; i++){
        tmp -= (1 << (i + ending_bit));
    }
    original_value &= tmp;
    return value_to_store | original_value;
}