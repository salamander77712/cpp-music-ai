#include <iostream>
#include "musicai.h"
#include "musicai.cpp"
#include <time.h>
#include <Windows.h>
#include <MMSystem.h>
#pragma comment(lib, "winmm.lib")
int main(){
	Music m;
	m.initNotes();
	m.playNote(0);
	std::string input = "";
	srand(time(0));
	while (true){
		std::vector<int> output = m.makeSong();
		for (int i = 0; i < 100; i++) {
			m.playNote(output[i]);
		}
		std::cout << "\ngood? (y/n)\n";
		std::cin >> input;
		if (input == "y") {
			m.takeFeedback(true);
		}
		if (input == "n") {
			m.takeFeedback(false);
		}
		m.updateNotes();
	}
}
