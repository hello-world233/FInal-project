/**
*@file Warrior.h
*@author 彭浩(peng hao)
*@time 2021-05-26
*/

#pragma once
#ifndef _WARRIOR_H_
#define _WARRIOR_H_
#include "Role.h"
#include "Hero.h"
#include "cocos2d.h"
USING_NS_CC;

class Warrior :public Hero
{
public:
	//initialization attribute(初始化属性)
	Warrior();
	//warrior action
	bool moveLeft();
	bool moveRight();
	bool moveUp();
	bool moveDown();
	
	bool Attack();
	int  damageNum(){ return m_baseDamage * grade; }
	//upgrade
	void upGrade();

	const char* roleName();
protected:
	

	static std::string s_roleName;
};

#endif//// !_Warrior_H__