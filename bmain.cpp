#include "bmain.hpp"

namespace ab
{ namespace box
{

SDL_Window* g_pMainWindow = null;
SDL_Surface* g_pMainSurface = null;
SDL_Event g_Event;

sub int box_main(int argc, char** argv)
{
	ptr x = null;

	if (SDL_Init(SDL_INIT_VIDEO)==-1)
	{
		fprintf(stderr,"Could not initialize SDL!\n");
		exit(0);
	}
	else
	{
		fprintf(stdout,"SDL initialized properly!\n");
		atexit(SDL_Quit);
	}

	g_pMainWindow = SDL_CreateWindow(
		"My Game Window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640, 480,
		0
	);

	if (g_pMainWindow == null)
	{
		fprintf(stderr, "Could not create main window!\n");
		exit(1);
	}

	g_pMainSurface = SDL_GetWindowSurface(g_pMainWindow);
	if (g_pMainSurface == null)
	{
		fprintf(stderr, "Could not get main surface!\n");
		exit(1);
	}

	for (;;) // main loop
	{
		if (SDL_WaitEvent(&g_Event)==0)
		{
			fprintf(stderr, "Error while waiting for an event!\n");
			exit(1);
		}

		//check the type of event
		if(g_Event.type==SDL_QUIT)
		{
			fprintf(stdout, "Quit event has occured.\n");
			break;
		}

	} // end of main loop.

	fprintf(stdout, "Terminating program normally.\n");
	return (0);



} // sub: box_main

} // space: box
} // space: ab
