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
	cout << "Añadiendo 6 Scores" << endl;
	NewScore("Alex", 10);
	NewScore("Betty", 20);
	NewScore("Carlos", 30);
	NewScore("Danny", 40);
	NewScore("Elias", 50);
	NewScore("Fernando", 60);
	cin.get();
	cout << "Eliminando a Danny" << endl;
	DeleteScore("Danny");
	cin.get();
	cout << "Consiguiendo el Score de Elias" << endl;
	cout<<"El score de Elias es "<<GetScoreByName("Elias")<<endl;
	cin.get();
	cout << "Mostrando el High Score (Tiene que ser Fernando)" << endl;
	GetHighScore();
	cin.get();
	cout << "Mostrando el TOP 5 de Scores" << endl;
	cout << "Posicion 1 -> " << GetNameByPosition(1).c_str() << " " << GetScoreByPosition(1) << endl;
	cout << "Posicion 2 -> " << GetNameByPosition(2).c_str() << " " << GetScoreByPosition(2) << endl;
	cout << "Posicion 3 -> " << GetNameByPosition(3).c_str() << " " << GetScoreByPosition(3) << endl;
	cout << "Posicion 4 -> " << GetNameByPosition(4).c_str() << " " << GetScoreByPosition(4) << endl;
	cout << "Posicion 5 -> " << GetNameByPosition(5).c_str() << " " << GetScoreByPosition(5) << endl;
	cout << "Posicion 6 -> " << GetNameByPosition(6).c_str() << " " << GetScoreByPosition(6) << endl;
	fflush(stdin);
	cin.get();
}