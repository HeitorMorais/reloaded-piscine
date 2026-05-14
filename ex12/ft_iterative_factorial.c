int ft_iterative_factorial(int nb){
	int n = nb;
	nb -= 1;
	while(nb){
		n *= nb;
		nb--;
	}

	return n;
}

int main(){
#include <stdio.h>
	printf("%d", ft_iterative_factorial(5));
}
