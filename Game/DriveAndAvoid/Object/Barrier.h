#pragma once

#include "../Utility/Vector2D.h"

calss Barrier
{
private:
	int image;   //ƒoƒŠƒA‰æ‘œ
	float life_span;  //ƒoƒŠƒA‚Ìõ–½

public:
	Barrier();
	`Barrier();

	void Draw(const Vector2D& location);  //•`‰æˆ—
	bool IsFinished(float speed);  //õ–½‚ªs‚«‚½‚©?
};