#include<stdio.h>
int main()
{
	int islem;
	int islem2;
	int islem3;
	printf("Dolabi tamir etmek ister misiniz?\n1.Evet\n2.Hayir\n:");
	scanf("%d",&islem);

 	switch (islem)
	{
		case 1 :
			printf("Dolap tamir etmeye deger mi?\n1.Deger\n2.Degmez\n:");
			scanf("%d",&islem2);
			switch (islem2)
			{
				case 1 :
				printf("Arac-Gerec var mi?\n1.Var\n2.Yok\n:");
				scanf("%d",&islem3);
					switch(islem3)
					{
					case 1 :
						printf("Dolap tamir edildi.\n");
						return 0;
					case 2 :
						printf("Dolap tamir edilmedi.\n");
						return 0;

					}

				case 2 :
				printf("Dolap tamir edilmedi.\n");
				return 0;
			}
		case 2:
			printf("Dolap tamir edilmedi.\n");
			return 0;




	}
	return 0;
}
