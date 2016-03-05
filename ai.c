/*
** ai.c for  in /home/thomas/Documents/epitech/CPE_2015_Allum1
** 
** Made by Thomas HENON
** Login   <thomas.henon@epitech.net>
** 
** Started on  Mon Feb 15 16:12:10 2016 Thomas HENON
** Last update Mon Feb 15 16:12:11 2016 Thomas HENON
*/

#include "allum.h"

char	is_pair(int *allums, int nbr_lines)
{
  int	q;
  int	r;

  q = (allums[0] ^ allums[1] ^ allums[2] ^ allums[3]) == 0;
  r = (allums[0] | allums[1] | allums[2] | allums[3]) == 1;
  return (q ^ r);
}

char	ai(int *allums,
	   int nbr_lines,
	   int *line,
	   int *matches)
{
  int	i;
  int	tmp;

  i = 0;
  while (i < nbr_lines)
    {
      tmp = allums[i];
      while (allums[i] > 0)
	{
	  allums[i]--;
	  if (is_pair(allums, nbr_lines))
	    {
	      *line = i + 1;
	      *matches = tmp - allums[i];
	      return (1);
	    }
	}
      allums[i] = tmp;
      i++;
    }
  return (0);
}
