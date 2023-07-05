#include <ncurses.h>
#include <string.h>

int main()
{
    char message[] = "Hello nCurses!";
    int length = strlen(message);
    int row {0};
    int col {0};

    initscr();
    attron(A_BOLD); 
    for (int i = 0; i<length; i++)
    {
	mvaddch(row, col, message[i]);
	row+=1;	    // from top to bottom
	col+=2;	    // across left to right
    } 
    attroff(A_BOLD);
    refresh();
    getch();
    endwin();
    return 0;
}
