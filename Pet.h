#pragma once
#include "Entity.h"
#include <string>

class Slime final: public Entity
{
public:
	Slime(const unsigned char* imagedata, const int format, const int height, const int width, int fps, const int frame_size) :
		Entity(imagedata, format, height, width, fps, frame_size)
	{}
	~Slime() = default;

	//Movement
	void move_towards(const float x) {
		if (x > pos.x) {
			pos.x++;
		}
		if (x < pos.x) {
			pos.x--;
		}

		if (pos.x <= 0) {
			pos.x = 0;
			return;
		}
		if (pos.x >= 400 - 32) {
			pos.x = 400 - 32;
			return;
		}
	}

private:
	

};

