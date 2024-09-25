#pragma once
#include <raylib.h>
#include <vector>

// Renderable Entity
class Entity {
public:
	Entity(const char* path, const int fps, const int frame_size) : fps(fps), pos{}, frame_size(frame_size) {
		atlas = LoadTexture(path);
	}
	Entity(const unsigned char* imagedata, const int format, const int height, const int width, const int fps, const int frame_size) :
		fps(fps), pos{}, frame_size(frame_size)
	{
		Image pet_atlas = {};
		pet_atlas.format = format;
		pet_atlas.width = width;
		pet_atlas.height = height;
		pet_atlas.data = static_cast<void*>(const_cast<unsigned char*>(imagedata));
		pet_atlas.mipmaps = 1;

		atlas = LoadTextureFromImage(pet_atlas);
	}
	virtual ~Entity() {
		UnloadTexture(atlas);
	}

	inline void render_frame(int index = 0, float scale = 32) const {
		DrawTexturePro(atlas, frames[index], { pos.x, pos.y, scale, scale }, { 0, 0 }, 0, WHITE);
	}

	inline void insert_frame(Rectangle frame) {
		frames.push_back(frame);
	}

	void animate() const {
		int index = static_cast<int>(GetTime() * fps) % frames.size();
		render_frame(index);
	}

	inline long getx() const {
		return pos.x;
	}
	inline long gety() const {
		return pos.y;
	}
	inline void setx(const long x) {
		pos.x = x;
	}
	inline void sety(const long y) {
		pos.y = y;
	}

protected:
	//Position of Entity
	Vector2 pos;

private:
	//Animation
	const int fps;
	const int frame_size;
	Texture2D atlas;
	std::vector<Rectangle> frames;

};