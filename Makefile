build: ; mkdir libcoutils && cp -rf src/coutils.c src/coutils.h libcoutils && tar -cvzf libcoutils-v.0.1.0.tar.gz libcoutils
test: ; clang ./tests/tests.c -I ./src/*/*