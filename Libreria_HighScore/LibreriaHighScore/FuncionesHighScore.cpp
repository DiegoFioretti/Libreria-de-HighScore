#include <iostream>
#include <iterator>
#include <list>
using namespace std;

list <pair <int,string>> HighScores;
list<pair<int, string>>::iterator it;

void Test() {
	cout << "Esto es una prueba" << endl;
}

void NuevoScore(string name, int score) {
	HighScores.push_back(make_pair(score,name));
	HighScores.sort();
}

void EliminarScore(string name) {
	it = HighScores.begin();
	for (size_t i = 0; i < HighScores.size(); i++){
		if (it->second == name){
			HighScores.remove(*it);
		}
		it++;
	}
	HighScores.sort();
}

void GetScore(string name) {
	it = HighScores.begin();
	for (size_t i = 0; i < HighScores.size(); i++) {
		if (it->second == name) {
			cout<<it->second.c_str()<<": "<<it->first<<endl;
		}
		it++;
	}
}

void GetHighScore() {
	it = HighScores.begin();
	cout << "HIGH SCORE:" << it->second.c_str() << " con " << it->first << endl;
}

void GetTop5() {
	it = HighScores.begin();
	if (HighScores.size() < 5)
	{
		cout << "TOP " << HighScores.size() << " SCORES" << endl;
		for (size_t i = 0; i < HighScores.size(); i++) {
			cout << it->second.c_str() << ": " << it->first << endl;
			it++;
		}
	}
	else if (HighScores.size() >= 5)
	{
		cout << "TOP 5 SCORES" << endl;
		for (size_t i = 0; i < 5; i++) {
			cout << it->second.c_str() << ": " << it->first << endl;
			it++;
		}
	}
}