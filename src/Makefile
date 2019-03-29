battleship: battleship.o battleship_engine.o
	gcc -o battleship.o battleship_engine.o -Wall -Wextra -pedantic -ggdb
battleship.o: battleship.c
	gcc -c battleship.c -Wall -Wextra -pedantic -ggdb
battleship.c:
battleship_engine.o: battleship_engine.c
	gcc -c battleship_engine.c -Wall -Wextra -pedantic -ggdb
battleship_engine.c:

clean:
	rm *.o battleship
