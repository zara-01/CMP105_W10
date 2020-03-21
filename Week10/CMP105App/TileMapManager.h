#pragma once
#include "Framework/TileMap.h"
#include "Framework/GameObject.h"

class TileMapManager
{
public:
	
	TileMapManager(sf::RenderWindow* window);
	~TileMapManager();

	//functions
	void render();

private:

	sf::RenderWindow* window;
	TileMap tileMap;
	GameObject tile;
	std::vector<GameObject>tiles;

};

