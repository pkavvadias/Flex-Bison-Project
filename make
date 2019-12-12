bison -d myscanner.y
flex myscanner.l
gcc myscanner.tab.c lex.yy.c -lfl
./a.exe config.txt
./a.exe config2.txt
./a.exe config3.txt