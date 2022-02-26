gcc -O3 -Wall -Wno-deprecated-declarations $(pkg-config --cflags vte-2.91) src/kermit.c -o kermit $(pkg-config --libs vte-2.91)
