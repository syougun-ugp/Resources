#pragma once
#include "Sprite.hpp"
#include <map>

//	リソース管理
class Resources
{
public:
	static Resources GetInstance()
	{
		static Resources resources;
		return resources;
	}


	//	グラフィック情報
	enum Graphic
	{
		Hoge,
		MaxGraphic,	//	番兵
	};

	// Spriteを取得する。
	Sprite* GetSprite(Graphic graphicID)
	{
		auto it = sprite.find(graphicID);
		return it->second;
	}


private:
	Resources()
	{
		std::cout << "リソース管理のコンストラクタ" << std::endl;
		LoadTexture(Graphic::Hoge, "hogeTexture");
	}


	//	テクスチャを読み込む
	void LoadTexture(Graphic graphicID, const std::string& loadTexture)
	{
		sprite.insert(std::make_pair(graphicID, new Sprite(loadTexture)));
	}

	
	std::map<Graphic, Sprite*> sprite;

};

