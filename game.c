/*
** game.c for  in /home/thomas/Documents/epitech/CPE_2015_Allum1
**
** Made by Thomas HENON
** Login   <thomas.henon@epitech.net>
**
** Started on  Mon Feb 15 16:12:37 2016 Thomas HENON
** Last update Sun Feb 21 12:08:18 2016 thomas
*/

#include "allum.h"

char	win(int nbr_lines, int *allums)
{
  int	i;

  i = 0;
  while (i < nbr_lines)
    {
      if (allums[i] != 0)
	return (0);
      i++;
    }
  return (1);
}

void	init_allums(int nbr_lines, int *allums)
{
  int	i;

  i = 0;
  while (i < nbr_lines)
    {
      allums[i] = i * 2 + 1;
      i++;
    }
}

char	my_turn(int nbr_lines, int *allums, int *turn)
{
  int	line;
  int	matches;

  matches = 0;
  my_putstr("Your turn:\n");
  while (!matches)
    {
      if (-1 == (line = line_user_input(nbr_lines, allums)))
	return (0);
      if (-1 == (matches = matches_user_input(nbr_lines, allums, line)))
	return (0);
    }
  allums[line-1] -= matches;
  my_putstr("Player removed ");
  my_put_nbr(matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putchar('\n');
  *turn = AI_TURN;
  return (1);
}

char	ai_turn(int nbr_lines, int *allums, int *turn)
{
  int	matches;
  int	line;

  matches = 0;
  line = 0;
  if (!ai(allums, nbr_lines, &line, &matches))
    return (0);
  my_putstr("AI's turn...\n");
  my_putstr("AI removed ");
  my_put_nbr(matches);
  my_putstr(" match(es) from line ");
  my_put_nbr(line);
  my_putstr("\n");
  *turn = MY_TURN;
  return (1);
}
