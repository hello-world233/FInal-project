#pragma once
/*
* author: peng hao
* 
*/
#ifndef _MONSTER_H_
#define _MONSTER_H_

#include "Role\Role.h"

class Monster :
    public Role
{
    //
public:
    //getPos
    Sprite* getSprite();

    virtual void monsterPositionInit(cocos2d::Point position);

    virtual Animate* createAnimate(const std::string  pActionName) ;

    virtual Monster* createMonster(cocos2d::Point position) ;

    MoveBy* createRandAction();
    virtual bool init() override;

    void backIntoMap(int nowFacing);

    void resetUI();

    void judgeMonsterDie();

    CC_SYNTHESIZE(int, m_health, Health);
    /*virtual inline void setHealth(int var, bool signal)
    {
        m_health = var;
        if (this->getHealth() != m_presentHP)
        {
            m_presentHP = this->getHealth();
            m_pHealth->setPercentage(static_cast<float>(this->getHealth())
                / static_cast<float>(this->getMaxHealth()) * 100);
        }
    }*/
    CC_SYNTHESIZE(int, m_maxHealth, MaxHealth);
    CC_SYNTHESIZE(int, m_defence, Defence);
    CC_SYNTHESIZE(int, m_Attack, Attack);
    CC_SYNTHESIZE(int, m_monsterFacing, MonsterFacing);


protected:

    ProgressTimer* m_pHealth;

    int m_presentHP;
    Sprite* m_pBackground;
    Sprite* m_pMonsterSprite;
    Animate* m_pMoveAnimation;
};

#endif//!_MONSTER_H_