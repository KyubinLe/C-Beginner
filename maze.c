#include <ncurses.h>
#include <stdio.h>
#include <locale.h>

void GotoXY(int x, int y)
{
		move(y,x);
}

int main(void) 
{
		setlocale(LC_ALL, "");
		initscr();

    GotoXY(40, 5);
    printw("Hello, World!\n\n");
		refresh();

		addstr("\npress any key to exit...");
    refresh();
    getch();

		endwin();

    return 0;
}