#pragma once
#include "Vector.h"

//	座標、スケール、回転の情報
class Transform
{
public:
	Transform() :
		position(Vector2::Zero()), 
		scale(Vector2::Zero()), 
		rotation(Vector2::Zero())
	{
	}
	Transform(const Vector2& position, 
				const Vector2& scale, 
				const Vector2& rota) :
		position(position), 
		scale(scale), 
		rotation(rota)
	{
	}

	Transform& operator =(const Transform& transform)
	{
		position = transform.position;
		scale = transform.scale;
		rotation = transform.rotation;
		return *this;
	}


	void TransformPosition(const Vector2& position){ this->position = position; }
	void TransformScale(const Vector2& scale){ this->scale = scale; }
	void LookAt(const Vector2& rotation){ this->rotation = rotation; }

	Vector2 Position()const{ return position; }
	Vector2 Scale()const{ return scale; }
	Vector2 Rotation()const{ return rotation; }
private:
	Vector2 position;
	Vector2 scale;
	Vector2 rotation;
};

