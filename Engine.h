#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


class Engine
{

private:

	sf::Event ev;
	sf::VideoMode videoMode;
	sf::RenderWindow* window;


	//Private functions
	void initializeVariables();
	void initWindow();


public:
	// Constructors / Destructors
	Engine();
	virtual ~Engine();																												 
	const bool getWindowIsOpen() const;			

	void PollEvents();
	void update();
	void render();

};

