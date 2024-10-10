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
    int is_equal_true = strcomp("hello", "hello");
    int is_equal_false = strcomp("hello", "Hello");
    if (strlen_test == 5 &&
        power_test == 8 &&
        is_equal_false == 1 &&
        is_equal_true == 0 
       )
    {}
    else {
        result = 1;
    }
    //const char* my_pow = reverse_string("hello");
    return result;
}