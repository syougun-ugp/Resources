#pragma once

//	色情報
struct Color
{
public:
	Color(float r, float g, float b, float a):
		r(r),g(g),b(b),a(a)
	{
	}

	Color(float r, float g, float b):
		r(r), g(g), b(b), a(1.0f)
	{
	}

	float GetRed()const{ return r; }
	float GetGreen()const{ return g; }
	float GetBule()const{ return b; }
	float GetAlpha()const{ return a; }

private:
	float r, g, b, a;

};

//	マテリアル
class Material
{
public:
	Material(const Color& color):
		color(color)
	{
	}
	
	Color GetColor()const{ return color; }

private:
	Color color;

};

