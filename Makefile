build_unix: ; clang -c -o coutils.o ./src/coutils.c -fPIC -Wall -Werror && clang -dynamiclib -o coutils.dylib coutils.o -Wall -Werror && rm -rf *.o
build_win: ; clang -c -o coutils.o ./src/coutils.c -fPIC -Wall -Werror; clang -dynamiclib -o coutils.dll coutils.o; Remove-Item *.o -Force
setup_test_unix: ; mkdir test_lib && mv coutils.dylib test_lib && cp -f src/coutils.h test_lib
setup_test_win: ; mkdir test_lib && move /y coutils.dll test_lib && copy /y /v ./src/coutils.h test_lib
test_unix: ; clang ./tests/tests.c -I test_lib -o lc-tests -Wall -Werror && ./lc-tests
test_win: ; clang ./tests/tests.c -I test_lib -o lc-tests -Wall -Werror; ./lc-tests.exe
clean_unix: ; rm -rf *.so *.o lc-tests test_lib
clean_win: ; Remove-Item *.o *.so lc-tests test_lib -Force

