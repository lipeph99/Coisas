#include <stdio.h>

int main(void) {
	int total,lanc,esp;
	lanc = 0;
	esp = 0;
	scanf("%d",&total);
	while(((lanc*25 + esp*15) > (int)(total * 0.625 + 5)) || ((lanc*25 + esp*15) < (int)(total * 0.625 - 5))){
		while((lanc*25 + esp*15) < (total * 0.625 - 5)){
			lanc++;
			esp++;
		}
		if((lanc*25 + esp*15) > (int)(total * 0.625 + 5)){
			esp--;
		}
	}
	printf ("Total:%d, Peq Col:%d\n",total,(int)(total * 0.625));
	printf ("Lanc:%d, Esp:%d\n",lanc,esp);
	printf ("Real:%d\n\n",(lanc*25 + esp*15));
	
//---------------------

	lanc = 0;
	esp = 0;
	while(((lanc*25 + esp*15) > (int)(total * 0.25 + 5)) || ((lanc*25 + esp*15) < (int)(total * 0.25 - 5))){
		while((lanc*25 + esp*15) < (total * 0.25 - 5)){
			lanc++;
			esp++;
		}
		if((lanc*25 + esp*15) > (int)(total * 0.25 + 5)){
			esp--;
		}
	}

	
	printf ("Total:%d, Med Col:%d\n",total,(int)(total * 0.25));
	printf ("Lanc:%d, Esp:%d\n",lanc,esp);
	printf ("Real:%d\n",(lanc*25 + esp*15));
	
	return 0;
}
