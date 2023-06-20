
# // 3 partes 1.- objetivos, 2.- dependecias y 

# Esta tarea nos sirve para compilar el programa

bin/dungeon.exe : src/main.cpp
    g++ -o bin/dungeon src/main.cpp -Iinclude

run : bin/dungeon.exe
	./bin/dungeon.exe 

clean : bin/dungeon.exe 
	rm -f bin/*.exe