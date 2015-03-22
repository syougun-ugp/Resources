#pragma once
#include <iostream>
#include <string>
#include "Transform.hpp"

//	スプライトクラス
class Sprite
{
public:
	Sprite() :texture(), transform(Transform()){}
	Sprite(const std::string& drawTexture):
		texture(drawTexture),transform(Transform())
	{
		if (texture.empty())
		{
			std::cout << "読み込み失敗" << std::endl;
		}

	}

	//	描画
	void Sprite::Draw()
	{
		if (texture.empty()) return;

		std::cout << texture.c_str() << " を描画した。" << std::endl;
		std::cout << "X座標 : " << transform.Position().x << " Y座標 : " << transform.Position().y << std::endl;
		std::cout << "Xスケール : " << transform.Scale().x << " Yスケール : " << transform.Scale().y << std::endl;
		std::cout << "X軸回転 : " << transform.Rotation().x << " Y軸回転 : " << transform.Rotation().y << std::endl;
	}

	//	Transform情報
	Transform transform;
private:
	//	テクスチャ情報
	std::string texture;

};


