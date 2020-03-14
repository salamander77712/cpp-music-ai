#pragma once
#include <string>
#include <vector>
#include <Windows.h>
#include <MMSystem.h>
#pragma comment(lib, "winmm.lib")
class Music {
	std::vector<std::vector<int>> music;
	std::vector<bool> result;
	std::vector<std::vector<int>> notes;
public:
	Music();
	~Music();
	std::vector<std::string> getMusic();
	std::vector<bool> getResult();
	void initNotes();
	void updateNotes();
	void takeFeedback(bool good);
	int makeNote(int position);
	std::vector<int> makeSong();
	void playNote(int note);
};
