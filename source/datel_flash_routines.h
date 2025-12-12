#ifndef DATEL_FLASH_ROUTINES
#define DATEL_FLASH_ROUTINES

#include <nds/ndstypes.h>

enum DATEL_TYPE {
	ACTION_REPLAY_DS 	= 0x00,
	GAMES_N_MUSIC 		= 0x01,
	ACTION_REPLAY_DS_2 	= 0x02,
};

uint16_t init();
void writeSector(uint32_t sectorAddr, uint8_t* sectorBuff);
void readSector(uint32_t sectorAddr, uint8_t* outBuff);
void eraseChip();
void eraseSector(uint32_t sectorAddr);
const char* productName();
uint16_t getFlashSectorsCount();
uint16_t checkFlashID();

#endif // DATEL_FLASH_ROUTINES

