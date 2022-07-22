

#include <stdio.h>


main() {

	char Est_Civil;
	printf("Qual o seu estado civil: ");
	scanf(" %c", &Est_Civil);

	swtich(Est_Civil)
	{

		case 'C': pritnf("Casado "); break;
		case 'S': pritnf("Solteiro "); break;
		case 'D': pritnf("Divorciado "); break;
		case 'V': pritnf("Viuvo "); break;
		default: printf("Estado civil incorreto");
	}

}