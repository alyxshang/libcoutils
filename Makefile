build_unix: ; clang -c -o coutils.o ./src/coutils.c -fPIC && clang -shared -o coutils.so coutils.o && rm -rf *.o
build_win: ; clang -c -o coutils.o ./src/coutils.c -fPIC; clang -shared -o coutils.dll coutils.o; Remove-Item *.o -Force
test: ; clang ./tests/tests.c ./src/coutils.c -o lc-tests
clean_unix: ; rm -rf *.so *.o lc-tests
clean_win: ; Remove-Item *.o *.so lc-tests -Force

