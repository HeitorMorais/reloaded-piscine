int ft_sqrt(int nb){
	if(nb <= 0) {
		return 0;
	}	

	int q = 1;

	while(q <= (nb / 2)){
		if(q * q == nb){
			return q;
		}
		q++;
	}

	return 0;
}

int main(){
#include <stdio.h>
	printf("%d", ft_sqrt(64));
	printf("%d", ft_sqrt(32));
	printf("%d", ft_sqrt(-2));
	printf("%d", ft_sqrt(25));
}
