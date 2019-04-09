#include <iostream>
#include "FuncionesHighScore.h"
using namespace std;

/*void Test();
void NuevoScore(string name, int score);
void EliminarScore(string name);
void GetScore(string name);
void GetHighScore();
void GetTop5();*/

void main() {
	Test();
	cout << "Añadiendo 6 Scores" << endl;
	NuevoScore("Alex", 10);
	NuevoScore("Betty", 20);
	NuevoScore("Carlos", 30);
	NuevoScore("Danny", 40);
	NuevoScore("Elias", 50);
	NuevoScore("Fernando", 60);
	cin.get();
	cout << "Eliminando a Danny" << endl;
	EliminarScore("Danny");
	cin.get();
	cout << "Consiguiendo el Score de Elias" << endl;
	GetScore("Elias");
	cin.get();
	cout << "Mostrando el High Score (Tiene que ser Fernando)" << endl;
	GetHighScore();
	cin.get();
	cout << "Mostrando el TOP 5 de Scores" << endl;
	GetTop5();
	cin.get();
}