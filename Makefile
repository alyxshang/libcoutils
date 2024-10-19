build_unix: ; clang -c -o coutils.o ./src/coutils.c -fPIC -Wall -Werror && clang -shared -o coutils.so coutils.o -Wall -Werror && rm -rf *.o
build_win: ; clang -c -o coutils.o ./src/coutils.c -fPIC -Wall -Werror; clang -shared -o coutils.dll coutils.o; Remove-Item *.o -Force
test_unix: ; clang ./tests/tests.c ./src/coutils.c -o lc-tests -Wall -Werror && ./lc-tests
test_win: ; clang ./tests/tests.c ./src/coutils.c -o lc-tests -Wall -Werror; ./lc-tests.exe
clean_unix: ; rm -rf *.so *.o lc-tests
clean_win: ; Remove-Item *.o *.so lc-tests -Force

