#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	freopen("myfile.txt", "w", stdout);
	printf("This sentence is redirected to a file.");
	fclose(stdout);

	_getch();
	return 0;
}