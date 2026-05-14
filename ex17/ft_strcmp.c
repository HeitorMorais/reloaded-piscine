int ft_strcmp(char *s1, char *s2){
	while(*s1 || *s2){
		if(*s1 != *s2) return (*s1 - *s2);
		s1++;
		s2++;
	}

	return 0;
}

int main(){
#include <stdio.h>
	printf("%d\n", ft_strcmp("ABC", "ABC"));
	printf("%d\n", ft_strcmp("ABC", "AB"));
	printf("%d\n", ft_strcmp("AB", "ABC"));
	printf("%d\n", ft_strcmp("ABC", "ABZ"));
	printf("%d\n", ft_strcmp("ABC", ""));
	printf("%d\n", ft_strcmp("", "ABC"));
}
