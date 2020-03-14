#include "musicai.h"
#include <iostream>
#include <Windows.h>
#include <MMSystem.h>
#pragma comment(lib, "winmm.lib")
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
void Music::playNote(int note) {
	if (note == 0) {
		PlaySound(TEXT("note1.wav"), NULL, SND_FILENAME);
	}
	else if (note == 1) {
		PlaySound(TEXT("note2.wav"), NULL, SND_FILENAME);
	}
	else if (note == 2) {
		PlaySound(TEXT("note3.wav"), NULL, SND_FILENAME);
	}
	else if (note == 3) {
		PlaySound(TEXT("note4.wav"), NULL, SND_FILENAME);
	}
	else if (note == 4) {
		PlaySound(TEXT("note5.wav"), NULL, SND_FILENAME);
	}
	else if (note == 5) {
		PlaySound(TEXT("note6.wav"), NULL, SND_FILENAME);
	}
	else if (note == 6) {
		PlaySound(TEXT("note7.wav"), NULL, SND_FILENAME);
	}
	else if (note == 7) {
		PlaySound(TEXT("note8.wav"), NULL, SND_FILENAME);
	}
	else if (note == 8) {
		PlaySound(TEXT("note9.wav"), NULL, SND_FILENAME);
	}
	else if (note == 9) {
		PlaySound(TEXT("note10.wav"), NULL, SND_FILENAME);
	}
	else if (note == 10) {
		PlaySound(TEXT("note11.wav"), NULL, SND_FILENAME);
	}
	else if (note == 11) {
		PlaySound(TEXT("note12.wav"), NULL, SND_FILENAME);
	}
	else if (note == 12) {
		PlaySound(TEXT("note13.wav"), NULL, SND_FILENAME);
	}
	else if (note == 13) {
		PlaySound(TEXT("note14.wav"), NULL, SND_FILENAME);
	}
	else if (note == 14) {
		PlaySound(TEXT("note15.wav"), NULL, SND_FILENAME);
	}
	else if (note == 15) {
		PlaySound(TEXT("note16.wav"), NULL, SND_FILENAME);
	}
	else if (note == 16) {
		PlaySound(TEXT("note17.wav"), NULL, SND_FILENAME);
	}
	else if (note == 17) {
		PlaySound(TEXT("note18.wav"), NULL, SND_FILENAME);
	}
	else if (note == 18) {
		PlaySound(TEXT("note19.wav"), NULL, SND_FILENAME);
	}
	else if (note == 19) {
		PlaySound(TEXT("note20.wav"), NULL, SND_FILENAME);
	}
	else if (note == 20) {
		PlaySound(TEXT("note21.wav"), NULL, SND_FILENAME);
	}
	else if (note == 21) {
		PlaySound(TEXT("note22.wav"), NULL, SND_FILENAME);
	}
	else if (note == 22) {
		PlaySound(TEXT("note23.wav"), NULL, SND_FILENAME);
	}
	else if (note == 23) {
		PlaySound(TEXT("note24.wav"), NULL, SND_FILENAME);
	}
	else if (note == 24) {
		PlaySound(TEXT("note25.wav"), NULL, SND_FILENAME);
	}
	else if (note == 25) {
		PlaySound(TEXT("note26.wav"), NULL, SND_FILENAME);
	}
	else if (note == 26) {
		PlaySound(TEXT("note27.wav"), NULL, SND_FILENAME);
	}
	else if (note == 27) {
		PlaySound(TEXT("note28.wav"), NULL, SND_FILENAME);
	}
	else if (note == 28) {
		PlaySound(TEXT("note29.wav"), NULL, SND_FILENAME);
	}
	else if (note == 29) {
		PlaySound(TEXT("note30.wav"), NULL, SND_FILENAME);
	}
	else if (note == 30) {
		PlaySound(TEXT("note31.wav"), NULL, SND_FILENAME);
	}
	else if (note == 31) {
		PlaySound(TEXT("note32.wav"), NULL, SND_FILENAME);
	}
	else if (note == 32) {
		PlaySound(TEXT("note33.wav"), NULL, SND_FILENAME);
	}
	else if (note == 33) {
		PlaySound(TEXT("note34.wav"), NULL, SND_FILENAME);
	}
	else if (note == 34) {
		PlaySound(TEXT("note35.wav"), NULL, SND_FILENAME);
	}
	else if (note == 35) {
		PlaySound(TEXT("note1.wav"), NULL, SND_FILENAME);
	}
}
