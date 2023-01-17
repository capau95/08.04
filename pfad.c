#include <stdio.h>
#include <string.h>

int main() {

	char pfad[100] = "C:\\EigeneDateien\\meinOrdner\\Uni\\KPP\\main.c";
	
	char *extension = strrchr(pfad, '.') + 1;
	printf("Dateiendung: %s\n", extension);

	char *dateiname = strrchr(pfad, '\\') + 1;
	printf("Dateiname: %s\n", dateiname);

	*dateiname = '\0';
	printf("Verzeichnis: %s\n", pfad);
}
