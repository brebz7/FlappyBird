#include "FlappyBird/GameManager.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	cout << "Hello, World " << endl;
	srand(time(NULL));
	
	GameManager gameManager;
	gameManager.Start();

	return (0);
}