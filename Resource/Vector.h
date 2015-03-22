#pragma once


struct Vector2
{
public:
	Vector2(float x,float y):
		x(x),y(y)
	{
	}

	static Vector2 Zero(){ return Vector2(0, 0); }
	
	float x, y;

};

