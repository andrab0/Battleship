# Battleship
Minimal BATTLESHIP game using C language and ncurses graphic library. First-year of my bachelor degree studies, programming course's assignment.

# Additional files
A README file, written in Romanian, which compresses implementation details. A Makefile file that includes three rules build, clean, and run. The build rule creates the executable, including the ncurses library, run starts the game and uses the "harta1.txt" map for the player, and clean, which deletes the executable. One txt, "harta1.txt" file that is the player's game configuration.

# How to use the Makefile file/ start the game
Given the current Makefile file, you will run the following commands:

```sh
$ make build
$ make run
$ make clean
```
Use the "make clean" rule only after you finish playing the game and quit, or you exit from the app.

# How to download the ncurses library
Open your linux terminal and write the following command:

```sh
$ apt-get install libncurses5-dev
```
