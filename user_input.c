/*
** user_input.c for  in /home/thomas/Documents/epitech/CPE_2015_Allum1
**
** Made by Thomas HENON
** Login   <thomas.henon@epitech.net>
**
** Started on  Tue Feb  9 14:16:30 2016 Thomas HENON
** Last update Sun Feb 21 12:17:32 2016 thomas
*/

#include "allum.h"

int	line_user_input(int nbr_lines, int *allums)
{
  int	line;
  char	*buffer;

  line = 0;
  while (line < 1 || line > nbr_lines)
    {
      my_putstr("Line: ");
      if (NULL == (buffer = get_next_line(0)))
        return (-1);
      line = my_getnbr(buffer);
      if (line < 0)
	my_putstr("Error: invalid input (position number expected)\n");
      else if (line < 1 || line > nbr_lines)
	my_putstr("Error: this line is out of range\n");
    }
  return (line);
}

int	matches_user_input(int nbr_lines, int *allums, int line)
{
  int	matches;
  char	*buffer;

  my_putstr("Matches: ");
  if (NULL == (buffer = get_next_line(0)))
    return (-1);
  matches = my_getnbr(buffer);
  if (matches == 0)
    my_putstr("Error: you have to remove at least one match\n");
  else if (matches < 0)
    my_putstr("Error: invalid input (position number expected)\n");
  else if (matches < 1)
    my_putstr("Error: this line is out of range\n");
  else if (matches > allums[line-1])
    my_putstr("Error: not enough matches on this line\n");
  if (matches < 1 || matches > allums[line-1])
    return (0);
  return (matches);
}
