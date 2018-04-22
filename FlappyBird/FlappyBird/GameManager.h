#pragma once

#include "../Engine/Engine.h"
#include "../Engine/Graphics/Sprite.h"


#include "Flapper.h"
#include "PipeManager.h"

class GameManager
{
public:
	enum class State
	{
		START,
		GAMEPLAY,
		GAMEOVER,
		COUNT
	};
public:
	GameManager();
	~GameManager();

	void Start();
private:
	void SetState(State state);
private:
	Engine* mEngine;
	Flapper* mFlapper;
	PipeManager* mPipeManager;
	Sprite mStartSprite;
	Sprite mGameOverSprite;

	State mState;
};