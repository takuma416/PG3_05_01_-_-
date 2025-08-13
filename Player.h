#pragma once
#include "math.h"
#include "Vector2.h"

class Player
{
private:
	Vector2 position_;

	float speed_ = 2.0f;

public:

	void Initialize();

	void Update();

	void Draw();

	void MoveRight();

	void MoveLeft();
};

