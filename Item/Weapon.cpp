#include "Weapon.h"

void Weapon::setDamage(int weaponDamage)
{
	m_weaponDamage = weaponDamage;
}

int Weapon::getDamage()
{
	return m_weaponDamage;
}
bool Weapon::getState()
{
	return m_isInHand;
}
void Weapon::setState(bool isInHand)
{
	//���ɣ���Ҫ���ӿڣ��˷�����һ����
	m_isInHand = isInHand;
	//�ڱ����е�ʱ������ģ�⣬��û��������������ģ��
	m_pSprite->getPhysicsBody()->setEnabled(!isInHand);
}

float Weapon::getInterval()
{
	return m_attackInterval;
}

int Weapon::getBulletCount()
{
	return m_bulletCount;
}
void Weapon::setInterval(float interval)
{
	m_attackInterval = interval;
}
void Weapon::setBulletCount(int count)
{
	m_bulletCount = count;
}

Bullet* Weapon::createBullet()
{
	return nullptr;
}