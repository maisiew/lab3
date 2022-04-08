
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif

void DRIVE(struct DRIVE* inst)
{
	UINT mask=inst->STATE & 0x6f;
	if(!inst->enable)
	{
		inst->COMMAND = CMD_SHUTDOWN;
	}
	else 
	{
		switch(mask)
		{
			case STATE_DISABLED:
				inst->COMMAND=CMD_SHUTDOWN;
				break;
			case STATE_READY:
				inst->COMMAND=CMD_ENABLED;
				break;
			case CMD_SWITCHED_ON:
				inst->COMMAND=CMD_SWITCHED_ON;
				break;
		}
	}
}
