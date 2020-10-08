build: battleship.c
	gcc battleship.c -Wall -o battleship -lncurses 
run:
	./battleship harta1.txt
clean:
	rm battleship
