#pragma once
#include "Sprite.hpp"
#include <map>

//	���\�[�X�Ǘ�
class Resources
{
public:
	static Resources GetInstance()
	{
		static Resources resources;
		return resources;
	}


	//	�O���t�B�b�N���
	enum Graphic
	{
		Hoge,
		MaxGraphic,	//	�ԕ�
	};

	// Sprite���擾����B
	Sprite* GetSprite(Graphic graphicID)
	{
		auto it = sprite.find(graphicID);
		return it->second;
	}


private:
	Resources()
	{
		std::cout << "���\�[�X�Ǘ��̃R���X�g���N�^" << std::endl;
		LoadTexture(Graphic::Hoge, "hogeTexture");
	}


	//	�e�N�X�`����ǂݍ���
	void LoadTexture(Graphic graphicID, const std::string& loadTexture)
	{
		sprite.insert(std::make_pair(graphicID, new Sprite(loadTexture)));
	}

	
	std::map<Graphic, Sprite*> sprite;

};

