/* ncurses.c */

#include<ncurses.h>

int main()
{

 char letter;

 initscr();
 printw("Press any key");
 refresh();
 letter=getch();
 clear();
 printw("you pushed :'%e'",letter);
 refresh();
 
 getch(); 
 endwin();


return 0;
}