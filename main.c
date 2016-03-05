/*
** main.c for  in /home/thomas/Documents/epitech/CPE_2020_Allum1
**
** Made by Thomas HENON
** Login   <thomas.henon@epitech.net>
**
** Started on  Mon Feb  8 10:48:16 2016 Thomas HENON
** Last update Sun Feb 21 12:08:30 2016 thomas
*/

#include "allum.h"

int	main(int argc, char **argv)
{
  int	allums[NBR_LINES];
  int	turn;

  init_allums(NBR_LINES, allums);
  turn = MY_TURN;
  display(NBR_LINES, allums);
  while (!win(NBR_LINES, allums))
    {
      if (turn == MY_TURN)
	{
	  if (!my_turn(NBR_LINES, allums, &turn))
	    return (1);
	}
      else
	{
	  if (!ai_turn(NBR_LINES, allums, &turn))
	    return (1);
	}
      display(NBR_LINES, allums);
    }
  if (turn != AI_TURN)
    my_putstr("You lost, too bad...\n");
  else
    my_putstr("I lost.. snif.. but I'll get you next time !!\n");
  return (0);
}
