#pragma once

#include "Pipe.h"
#include <vector>
#include "Flapper.h"
using namespace std;
class PipeManager
{
public:
	PipeManager();
	~PipeManager();

	void Update();
	void Render();

	bool CheckCollision(Flapper& flapper); 

	void Reset();
private:
	void CreatePipe();
	vector<Pipe*> pipes;

	float xStartSeparation;
	float yStartSeparation;

	float xSeparation;
	float ySeparation;
	float minXSeparation;
	float minYSeparation;
	float xSeparationSpeed;
	float ySeparationSpeed;

	int minSpawnY;
	int maxSpawnY;

	int totalPipes;
	int points;
};