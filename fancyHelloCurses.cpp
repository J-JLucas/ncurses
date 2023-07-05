#include <ncurses.h>
#include <string.h>

int main()
{
    char message[] = "Hello nCurses!";
    int row {0};
    int col {0};

    initscr();

    getmaxyx(stdscr, row, col);				    // gets the number of rows/cols
    mvprintw(row/2, (col-strlen(message))/2, "%s", message);  // prints message to center of the screen
    mvprintw(row-2, 0, "This screen has %d rows, %d columns", row, col);
    

    refresh();
    getch();
    endwin();
    return 0;
}
