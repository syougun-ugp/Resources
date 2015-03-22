#include "Sprite.hpp"
#include "Resources.hpp"

int main()
{
	auto sprite = Resources::GetInstance().GetSprite(Resources::Graphic::Hoge);

	sprite->transform.TransformPosition(Vector2(10, 600));

	sprite->Draw();

	return 0;
}


