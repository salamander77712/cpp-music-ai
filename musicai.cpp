#include "musicai.h"
#include <iostream>
Music::Music(){}
Music::~Music() {
}
void Music::initNotes() {
	for (int i = 0; i < 36; i++) {
		notes.push_back({ 1000 });
		for (int j = 0; j < 100; j++) {
			notes[i].push_back(1000);
		}
	}
}//set all note porababilities to starting value
void Music::takeFeedback(bool good) {
	result.push_back(good);
}// take feedback on song reception
void Music::updateNotes() {
	int a = -1;
	std::vector<int> b = music[music.size() - 1];
	if (result[result.size() - 1] == true) {
		a = 1;
	}
	for (int i = 0; i < 100; i++) {
		int t = b[i];
		notes[t][i] += a;
	}
}// add to note porbability if song good, take away if bad
int Music::makeNote(int position) {
	int a = 0;
	int t = 0;
	for (int i = 0; i < 36; i++) {
		a += notes[i][position];
	}
	int r = rand() % a;
	for (int j = 0; j < 36; j++) {
		if (0 + t < r && r < notes[j][position] + t) {
			return(j);
		}
		else {
			t += notes[j][position];
		}
	}
}// generate random note based off probabilities
std::vector<int> Music::makeSong() {
	std::vector<int> output;
	for (int i = 0; i < 100; i++) {
		output.push_back(makeNote(i));
	}
	music.push_back(output);
	return(output);
}
