#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *argc)
{
	int i;
	i = 0;
	while(argc[i] != '\0')
	{
		i++;
	}
	return(i);
}
int	returnchar(char c)
{
	int flag;
	flag = 0;
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
	flag = 1;
	if (c >= '0' && c<='9')
	flag = 0;
	return (flag);
}
int	main(int argv,char **argc)
{
	char *str;
	int dlina;
	int j,k;
	j = 0;
	k = 0;
	if (argv != 2)
	return(0);
	dlina = ft_strlen(argc[1]);
	str=(char*)malloc(dlina*(sizeof(char)));
	while(j < dlina  )
	{
			if((returnchar(argc[1][j]) == 1)&&(returnchar(argc[1][j+1]) == 0))
			{
				str[k] = argc[1][j+1];
				str[k+1] = argc[1][j];
				j++;
				k++;
			}
		
			else
			{
				str[k] = argc[1][j];
			}
				
		printf("%c\n",str[k]);
		k++;
		j++;

	}
	str[k]='\0';
	printf("\n");
	printf("%s",str);	
	return(0);
}
	
