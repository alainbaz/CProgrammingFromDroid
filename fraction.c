#include <stdio.h>
//nouveau type
typedef struct fraction
{
	int num,den;
	}fraction;
//fonction de saisie fraction
fraction saisif ()
{
	fraction maFrac;
	printf("entrez le nemerateur ESPACE. denominateur");
	scanf("%d %d",&maFrac.num, &maFrac.den);
	return maFrac;
}

//fonction de multiplication fraction
fraction timesf(fraction A, fraction B)
{
	fraction AB;
	AB.num = A.num*B.num; /* calcul numerateur*/
	AB.den = A.den*B.den; //calcul denominateur
	return AB;
}

//fonction addition
fraction addf(fraction A,  fraction B)
{
	fraction sum ;
	sum.num = A.num*B.den+B.num*A.den;
	sum.den =A.den*B.den;
	return sum;
}
// fonction daffichage
void affichagef (fraction x)
{
	printf("%d ,%d", x.num, x.den);
}

int main ()
{
	fraction A, B ,AB,Sum;
	A = saisif();
	B= saisif();
	AB = timesf(A,B);
	Sum =addf(A,B);
	printf("le produit AB est ");
	affichagef(AB);
	printf("  \n");
	printf("la somme A+B est ");
	affichagef(Sum);
	printf(" \n");
	return 0;
}