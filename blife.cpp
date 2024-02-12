#include "blife.hpp"

namespace ab
{ namespace box
{ namespace life
{

struct World
{

};

struct Presenter
{

};

struct Controller
{

};

World* new_world()
{
	return new World();
}

Presenter* new_presenter()
{
	return new Presenter();
}

Controller* new_controller()
{
	return new Controller();
}

void delete_world(World* world)
{
	if (world != null)
	{
		delete world;
	}
}

void delete_presenter(Presenter* presenter)
{
	if (presenter != null)
	{
		delete presenter;
	}
}

void delete_controller(Controller* controller)
{
	if (controller != null)
	{
		delete controller;
	}
}

sub int life_main(int argc, char** argv)
{
	World* world = null;
	Presenter* presenter = null;
	Controller* controller = null;

	world = new_world();
	presenter = new_presenter();
	controller = new_controller();


	delete_controller(controller);
	delete_presenter(presenter);
	delete_world(world);

	return 0;

} // sub: life_main

} // space: life
} // space: box
} // space: ab
