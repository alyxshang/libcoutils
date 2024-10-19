/*
LibCoutils by Alyx Shang.
Licensed under the FSL v1.
*/

#include <stdlib.h>
#include "coutils.h"

// Checks whether the supplied
// string is an integer or not.
int is_digit(char subject){
	char alphabet[10] = "1234567890";
	int result = 0;
	for (int i = 0; i < 10; i++){
		if (subject == alphabet[i]){}
		else {
			result = 1;
		}
	}
	return result;
}

// Checks whether the supplied string
// is a digit sequence or not.
int is_num_sequence(char subject[]){
	int result = 0;
	for (int i = 0; i < c_strlen(subject); i++){
		if (is_digit(subject[i]) == 0){}
		else {
			result = 1;
		}
	}
	return result;
}

// Calculates the n-th power
// of the supplied base and returns
// it.
int power(int base, int exponent){
    int result = 1;
    int range_end = exponent + 1;
    for (int i = 1; i < range_end; i++){
        result = result * base;
    }
    return result;
}

// Calculates the length
// of the supplied string.
int c_strlen(char subject[]){
    int result = 0;
    int idx = 0;
    char my_char = subject[idx];
    while (my_char != '\0'){
        idx++;
        result++;
        my_char = subject[idx];
    }
    return result;
}

// Compares strings "one" and "two".
// If they are equal, 0 is returned.
// If they are not equal, 1 is returned.
int strcomp(char one[], char two[]){
    int result = 0;
    int one_len = c_strlen(one);
    int two_len = c_strlen(two);
    if (one_len == two_len){
        for (int i = 0; i < c_strlen(one); i++){
            if (one[i] == two[i]){}
            else {
                result = 1;
            }
        }
    }
    else {
        result = 1;
    }
    return result;
}

// A string is fed into this function and the
// the order of the string's characters is reversed.
// This reversed string is returned.
char* reverse_string(char subject[]){
    int subject_len = c_strlen(subject);
		char * result = malloc(subject_len + 1);
    int idx = subject_len - 1;
    int res_idx = 0;
    while (idx >= 0){
			char to_replace = subject[idx];
			result[res_idx] = to_replace;
      idx = idx - 1;
      res_idx = res_idx + 1;
    }
    return result;
}
