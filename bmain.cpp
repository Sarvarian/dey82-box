#include "bmain.hpp"

namespace ab
{ namespace box
{

sub int box_main(int argc, char** argv)
{
	ptr x = null;

	if (SDL_Init(SDL_INIT_VIDEO)==-1)
	{
		fprintf(stderr,"Could not initialize SDL!\n");
	}
	else
	{
		fprintf(stdout,"SDL initialized properly!\n");
		SDL_Quit();
	}

	return (0);

} // sub: box_main

} // space: box
} // space: ab
