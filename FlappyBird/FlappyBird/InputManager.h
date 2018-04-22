#pragma once

#include "../Engine/Engine.h"
#include "../Engine/IO/Keyboard.h"
#include "../Engine/IO/mouse.h"
#include "Flapper.h"
#include "Pipe.h"
class InputManager
{
public:
	InputManager();
	InputManager(Flapper* _flapper);

	void Update();
private:
	Flapper* flapper;
};
