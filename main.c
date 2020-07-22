#include <stdio.h>

int main(void) {
	int total,lanc,esp;
	lanc = 0;
	esp = 0;
	scanf("%d",&total);
	while(((lanc*25 + esp*15) > (int)(total * 0.5769 + 5)) || ((lanc*25 + esp*15) < (int)(total * 0.5769 - 5))){
		while((lanc*25 + esp*15) < (total * 0.5769 - 5)){
			lanc++;
			esp++;
		}
		if((lanc*25 + esp*15) > (int)(total * 0.5769 + 5)){
			esp--;
		}
	}
	printf ("Total:%d, Peq Col:%d\n",total,(int)(total * 0.5769));
	printf ("Lanc:%d, Esp:%d\n",lanc,esp);
	printf ("Real:%d\n\n",(lanc*25 + esp*15));
	
//---------------------

	lanc = 0;
	esp = 0;
	while(((lanc*25 + esp*15) > (int)(total * 0.2308 + 5)) || ((lanc*25 + esp*15) < (int)(total * 0.2308 - 5))){
		while((lanc*25 + esp*15) < (total * 0.2308 - 5)){
			lanc++;
			esp++;
		}
		if((lanc*25 + esp*15) > (int)(total * 0.2308 + 5)){
			esp--;
		}
	}

	
	printf ("Total:%d, Med Col:%d\n",total,(int)(total * 0.2308));
	printf ("Lanc:%d, Esp:%d\n",lanc,esp);
	printf ("Real:%d\n",(lanc*25 + esp*15));

  //---------------------

	lanc = 0;
	esp = 0;
	while(((lanc*25 + esp*15) > (int)(total * 0.1154 + 5)) || ((lanc*25 + esp*15) < (int)(total * 0.1154 - 5))){
		while((lanc*25 + esp*15) < (total * 0.1154 - 5)){
			lanc++;
			esp++;
		}
		if((lanc*25 + esp*15) > (int)(total * 0.1154 + 5)){
			esp--;
		}
	}

	
	printf ("Total:%d, Grd Col:%d\n",total,(int)(total * 0.1154));
	printf ("Lanc:%d, Esp:%d\n",lanc,esp);
	printf ("Real:%d\n",(lanc*25 + esp*15));
	
	return 0;
}
