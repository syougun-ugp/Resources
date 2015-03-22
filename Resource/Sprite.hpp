#pragma once
#include <iostream>
#include <string>
#include "Transform.hpp"

//	�X�v���C�g�N���X
class Sprite
{
public:
	Sprite() :texture(), transform(Transform()){}
	Sprite(const std::string& drawTexture):
		texture(drawTexture),transform(Transform())
	{
		if (texture.empty())
		{
			std::cout << "�ǂݍ��ݎ��s" << std::endl;
		}

	}

	//	�`��
	void Sprite::Draw()
	{
		if (texture.empty()) return;

		std::cout << texture.c_str() << " ��`�悵���B" << std::endl;
		std::cout << "X���W : " << transform.Position().x << " Y���W : " << transform.Position().y << std::endl;
		std::cout << "X�X�P�[�� : " << transform.Scale().x << " Y�X�P�[�� : " << transform.Scale().y << std::endl;
		std::cout << "X����] : " << transform.Rotation().x << " Y����] : " << transform.Rotation().y << std::endl;
	}

	//	Transform���
	Transform transform;
private:
	//	�e�N�X�`�����
	std::string texture;

};


