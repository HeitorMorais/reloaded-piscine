int ft_strlen(char *str){
	int i = 0;
	while(*str){
		str++;
		i++;	
	}

	return i;
}

int main(){
#include <stdio.h>
	printf("%d",ft_strlen("cinco"));
	return 0;
}
