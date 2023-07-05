// first curses program
// based off guide found here:
// https://tldp.org/HOWTO/NCURSES-Programming-HOWTO/helloworld.html
// compilation instructions:
// g++ helloCurses.cpp -lncurses


#include <ncurses.h>

int main()
{
    initscr();			// initScreen; starts curses mode
    printw("Hello ncurses!");	// print to "buffer" screen
    refresh();			// print "buffer" screen to real screen
    getch();			// hang screen for input so we can see
    endwin();			// endWindow? exits curses mode

    return 0;
}
