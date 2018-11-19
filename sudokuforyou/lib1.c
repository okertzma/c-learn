#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int j;

	j=0;
	while(str[j] != '\0')
	{
		j++;
	}
	return (j);
}

int	ft_input(char *str)
{
	int x;
	x = ft_strlen(str);
	if(x == 9)
	return (1);
	return (0);
}

int ft_inputcharrepeat(char *str)
{
	int i;
	int j;
	int flagrepeat;
	i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= '1' && str[i] <= '9') || (str[i] == '.')))
			return (0);
		i++;
	}
	i = 0;
	while(str[i] != '\0')
	{
		j = 0;
		flagrepeat = 0;
		while(str[j] != '\0')
		{
			if(str[i] == str[j] && str[i] >= '1' && str[i] <= '9')
			flagrepeat++;
			j++;
		}
		if(flagrepeat > 1)
		return (0);
		i++;
	}
	return (1);
}

int	ft_returnmas(char **argv)
{
	int i;

	i = 1;
        while(i < 10)
        {
                if(ft_input(argv[i]) == 0)
                {
                        write(1,"Error numbers parametrs\n",24);
                        return (0);
                }
                i++;
        }
        i = 1;
         while(i < 10)
        {
                if(ft_inputcharrepeat(argv[i]) == 0)
                {
                        write(1,"Error char or repeatchar\n",25);
                        return (0);
                }
                i++;
        }
        return (1);
}
