#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "headerinput.h"
int findcol(int i,int j,char **str)
{
	int x;
	int y;
	int flag;
	x=0;
	flag = 0;
	while(x < 9)
	{
		if(str[i][j]==str[i][x] && str[i][x] != '0')
		flag++;
		x++;
	}
	if(flag > 1)
	return (0);
	x=0;
	flag = 0;
	while(x < 9)
	{
		if(str[i][j] == str[x][j] && str[i][x] != '0' )
			flag++;
		x++;
	}
	if(flag > 1)
	return (0);
	flag = 0;
	if(i >= 0 && i <= 2 && j >= 0 && j <= 2)
	{
		x = 0;
		while(x <= 2)
		{
			y = 0;
			while(y <= 2)
			{
				if(str[i][j] == str[x][y] && str[x][y] != '0')
				flag++;
				y++;
			}
			x++;
		}
		if(flag > 1)
		return (0);
	}
	if(i <= 2 && i >= 0 && j >= 3 && j <= 5)
	{
		
		x = 0;
                while(x <= 2)
                {
                        y = 3;
                        while(y <= 5)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }
	if(i <= 2 && i>=0 && j >= 6 && j <= 8)
        {
        
                x = 0;
                while(x <= 2)
                {
                        y = 6;
                        while(y <= 8)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }
	if(i >= 3 && i <=5 && j <=2&& j >= 0)
        {
        
                x = 3;
                while(x <= 5)
                {
                        y = 0;
                        while(y <= 2)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }
	 if(i >= 6 && i <= 8 && j <=2 &&j >= 0)
        {

                x = 6;
                while(x <= 8)
                {
                        y = 0;
                        while(y <= 2)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }
	  if(i >= 3 && i <= 5 && j >= 3 && j<= 5)
        {

                x = 3;
                while(x <= 5)
                {
                        y = 3;
                        while(y <= 5)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }

	 if(i >= 6 && i <= 8 && j >= 3 && j<= 5)
        {

                x = 6;
                while(x <= 8)
                {
                        y = 3;
                        while(y <= 5)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }
	  if(i >= 3 && i <= 5 && j >= 6 && j<= 8)
        {

                x = 3;
                while(x <= 5)
                {
                        y = 6;
                        while(y <= 8)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }
	 if(i >= 6 && i <= 8 && j >= 6 && j<= 8)
        {

                x = 6;
                while(x <= 8)
                {
                        y = 6;
                        while(y <= 8)
                        {
                                if(str[i][j] == str[x][y] && str[x][y] != '0')
                                flag++;
                                y++;
                        }
                        x++;
                }
                if(flag > 1)
                return (0);
        }
	
	 return (2);
}


int     main(int argc,char **argv)
{
        char **str;
        int i;
	int j;

        if(argc != 10)
        {
                write(1,"Error numbers parametrs\n",24);
                return (0);
        }
        i = ft_returnmas(argv);
        i=0;
	str = (char**)malloc(9*sizeof(char*));
	while(i < 9)
	{
		str[i]=(char*)malloc(9*sizeof(char));
		i++;
	}
	i=0;
	while(i < 9)
	{
		j = 0;
		while(j < 9)
		{
			if(argv[i+1][j] == '.')
			str[i][j] = '0';
			else
			str[i][j] = argv[i+1][j];
			j++;
		}
 	i++;
	}
	i = 8;	
	while(i >= 0)
	{
		j = 8;
		while(j >= 0)
		{
			
			if(str[i][j] == '0')
			{
				printf("i %i ",i);
				printf("j %i ",j);
				while(str[i][j] < '9')
				{
					
					str[i][j]++;
					printf("%i ",findcol(i,j,str));
					if(findcol(i,j,str) == 2)
						break;
					}
				printf("%c  ",str[i][j]);
				if(findcol(i,j,str) == 0)
                                                printf("oshibka");


			
			}
			j--;
			printf("\n");
		}
		i--;
		printf("\n");
	}
	





	//pechat
	i=0;
	while(i < 9)
	{
		j=0;
		while(j < 9)
		{
			printf(" %c",str[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}

	return (0);
}

