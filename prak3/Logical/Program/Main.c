
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed=500;
	EVIRD.enable=1;
}

void _CYCLIC ProgramCyclic(void)
{
	DRIVE(&EVIRD);
}

void _EXIT ProgramExit(void)
{

}

