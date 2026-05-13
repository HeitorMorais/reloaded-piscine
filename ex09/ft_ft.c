#include <unistd.h>

void ft_ft(int *nbr){
	*nbr = 42;
}

int main(){
#include <stdio.h>
	int nbr = 0;
	int *p = &nbr;
	ft_ft(p);
	printf("%d", nbr);
}
