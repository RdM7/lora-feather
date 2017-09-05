#include <lmic.h>
#include <hal/hal.h>

// OTAA/ABP: defines activation method for the device
#define OTAA

// DEVEUI: Unique device ID (LSBF)
static const u1_t DEVEUI[8] PROGMEM = { 0x05, 0x02, 0xA8, 0x44, 0x24, 0x59, 0x34, 0x12 };

// APPEUI: Application ID (LSBF)
static const u1_t APPEUI[8] PROGMEM = { 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00 };

// APPKEY: Device-specific AES key.
static const u1_t APPKEY[16] PROGMEM = { 0x5E, 0x45, 0x2D, 0xBC, 0x23, 0xA5, 0x40, 0x6C, 0xE1, 0x23, 0x68, 0xEF, 0x78, 0xAE, 0x16, 0x55 };

// DEVADDR: Unique device ID
static const u4_t DEVADDR = 0x0;

// NWKSKEY: network specific session key
static const u1_t NWKSKEY[16] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

// APPSKEY: Application specific session key
static const u1_t APPSKEY[16] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };