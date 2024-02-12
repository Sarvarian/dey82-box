#include "bmain.hpp"

#include "bonsdl.hpp"
#include "blife.hpp"

namespace ab
{ namespace box
{

sub int box_main(int argc, char** argv)
{
	// return onsdl_main(argc, argv);
	return life::life_main(argc, argv);

} // sub: box_main

} // space: box
} // space: ab

namespace ab
{
namespace de {} // design
namespace en {} // engine
namespace sy {} // system

namespace box {}
/*namespace set {}*/
/*namespace way {}*/
}
