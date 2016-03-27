#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	srand(atoi(argv[2]));			
	drawCharSquare(charSquare(n), n);	
}

char **charSquare(int n)
{
	char **square = new char*[n];
	for(int i = 0; i < n; i++)
	{
		square[i] = new char [n];
	}
	for(int f = 0; f < n*n; f++)
	{
		square[f/n][f%n] = (rand()%25)+97;	
	}
	return square;
}

void drawCharSquare(char **square, int n)
{
	int sum = 0;
	for(int f = 0; f < n*n; f++)
	{	
		printf("%c ", square[f/n][f%n]);

		if(f%n == n-1)
		{
			printf("\n");
		}	
	}
	for(int i = 0; i < n; i++)
	{
		delete [] square[i];
	}
	delete [] square;
} //ładnie mi poszło