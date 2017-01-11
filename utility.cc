#include "utility.hh"


int rand_a_b(int a, int b){               //randomise entre a et b
    return rand()%(b-a) +a;
}

int max(int nb1,int nb2)
	{
		if (nb1 > nb2)
			return nb1;
		return nb2;
	

	}
