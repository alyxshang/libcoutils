build: ; clang -c -o coutils.o ./src/coutils.c -fPIC && clang -shared -o coutils.so coutils.o && rm -rf *.o
test: ; clang ./tests/tests.c ./src/coutils.c -o lc-tests
