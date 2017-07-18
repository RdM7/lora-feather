#include <lmic.h>
#include <hal/hal.h>

// OTAA/ABP: defines activation method for the device
#define OTAA

// DEVEUI: Unique device ID (LSBF)
static const u1_t DEVEUI[8] PROGMEM = { 0x01, 0x03, 0xB7, 0x44, 0x24, 0x59, 0x34, 0x12 };

// APPEUI: Application ID (LSBF)
static const u1_t APPEUI[8] PROGMEM = { 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00 };

// APPKEY: Device-specific AES key.
static const u1_t APPKEY[16] PROGMEM = { 0x69, 0xAF, 0x25, 0x08, 0x5A, 0x4B, 0xDF, 0xC1, 0x3E, 0x65, 0xFA, 0x27, 0xDD, 0xA0, 0x3B, 0x9A };

// DEVADDR: Unique device ID
static const u4_t DEVADDR = 0x0;

// NWKSKEY: network specific session key
static const u1_t NWKSKEY[16] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

// APPSKEY: Application specific session key
static const u1_t APPSKEY[16] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
