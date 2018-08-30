#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int opcion;
int rival;

void piedra();
void papel();
void tijera();
void rivali();

int main()
{
	cout << "Elija: 1. para piedra, 2. para para papel o 3. para tijera" << endl;
	cin >> opcion;
	
	rivali();
	
	if (opcion == 1 )
	{
		piedra();
	}
	else if (opcion == 2)
	{
		papel();
	}
	else
	{
		tijera();
	}
	
	system("pause");
}


void piedra()
{
   if (rival == 1)
   {
   cout << "Rival eligio papel, ¡Haz perdido! " << endl;
   }
   else if (rival == 2) 
   {
   cout << "Rival eligio tijeras, ¡Haz ganado¡" << endl;
   }
   else
   {
   cout << "Rival eligio pierda, ¡empate!" << endl;
   }

}

void papel()
{
	if (rival == 0)
	{
		cout << "Rival eligio piedra, ¡Haz ganado!" << endl;
    }
    else if (rival == 2)
    {
	cout << "Rival eligio tijeras, ¡Haz perdido! " << endl;
	}
	else
	{
	cout << "Rival eligio papel, ¡empate!" << endl;
	}
}

void tijera()
{
   if (rival == 0) 
   {
   cout << "Rival eligio piedra, ¡Haz perdido!" << endl;
   }
   else if (rival == 1) 
   {
   cout << "Rival eligio papel, !Haz ganado" << endl;
   }
   else 
   {
   cout << "Rival eligio tijeras, ¡empate!" << endl;
   }

} 

void rivali()
{
	srand(time(NULL));
	rival = rand() % 3;
}

