#include <iostream>
#include <iterator>
#include <list>
using namespace std;

list <pair <int,string>> HighScores;
list<pair<int,string>>::iterator it;

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
			break;
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
	it = HighScores.end();
	it--;
	cout << "HIGH SCORE: " << it->second.c_str() << " con " << it->first << endl;
}

void GetTopGroup(int cant) {	
	if (HighScores.size() < cant){
		cout << "TOP " << HighScores.size() << " SCORES" << endl;
		it = HighScores.end();
		it--;
		for (size_t i = HighScores.size(); i > 0; i--){
			cout << it->second.c_str() << ": " << it->first << endl;
			it--;
		}
	}
	else if (HighScores.size() >= cant){
		cout << "TOP "<<cant<<" SCORES" << endl;
		it = HighScores.begin();
		for (size_t i = 0; i < cant - 1; i++) {
				it++;
		}
		for (size_t i = cant; i > 0; i--) {
			cout << it->second.c_str() << ": " << it->first << endl;
			if (i > 1) {
				it--;
			}
		}
	}
}