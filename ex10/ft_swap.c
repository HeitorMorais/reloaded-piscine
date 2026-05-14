void ft_swap(int *a, int *b){
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main(){
#include <stdio.h>
	int first = 1;
	int second = 2;
	int *a = &first;
	int *b = &second;

	ft_swap(a, b);
	printf("a: %d, b: %d", first, second);

	return 0;
}
