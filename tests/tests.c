/*
LibCoutils by Alyx Shang.
Licensed under the FSL v1.
*/

#include <stdio.h>
#include "../src/coutils.h"

int main(){
    int result = 0;
    int strlen_test = c_strlen("hello");
    int power_test = power(2,3);
		int is_digit_true = is_digit('1');
		int is_digit_false = is_digit('c');
		int is_num_sequence_true = is_num_sequence("123456");
		int is_num_sequnece_false = is_num_sequence("1234ABC");
    int is_equal_true = strcomp("hello", "hello");
    int is_equal_false = strcomp("hello", "Hello");
		const char* reversed = reverse_string("hello");
    if (strlen_test == 5 &&
        power_test == 8 &&
        is_equal_false == 1 &&
        is_equal_true == 0 &&
				is_digit_true == 0 &&
				is_digit_false == 1 &&
				is_num_sequence_true == 0 &&
				is_num_sequnece_false == 1
       )
    {
			printf("%d\n", result);
		}
    else {
      printf("%d\n", result);
    }
		printf("%s\n", reversed);
    return result;
}
