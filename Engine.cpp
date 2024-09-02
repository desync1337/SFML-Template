#include "Engine.h"

using namespace sf;

void Engine::initializeVariables()
{
	this->window = nullptr;
}

void Engine::initWindow()
{

	videoMode.height = 800;
	videoMode.width = 1400;


	//this->videoMode.getDesktopMode; /  get the dimenstions of screen

	this->window = new sf::RenderWindow(this->videoMode, "fucking hell", Style::Titlebar | Style::Close);

	this->window->setFramerateLimit(60);
}

//Constructors / Destructors

Engine::Engine()
{
	this->initializeVariables();
	this->initWindow();
}

Engine::~Engine() // this prevents memory leaks!!
{
	delete this->window;
}

//Functions

const bool Engine::getWindowIsOpen() const
{
	return this->window->isOpen();
}

void Engine::PollEvents() // INPUT 
{
	while (this->window->pollEvent(ev))
	{
		switch (ev.type)
		{

			case Event::Closed():
				this->window->close();
				break;






		}
	}
}

void Engine::update()
{
	PollEvents();
}

void Engine::render()
{
	this->window->clear();



	this->window->display();
}

