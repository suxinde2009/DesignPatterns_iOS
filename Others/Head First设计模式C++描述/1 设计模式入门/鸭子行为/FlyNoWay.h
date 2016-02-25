#pragma once
#include "flybehavior.h"

//具体飞行行为
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay(void);

	void fly();

	~FlyNoWay(void);
};
