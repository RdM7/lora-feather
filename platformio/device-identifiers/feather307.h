#include <lmic.h>
#include <hal/hal.h>

// OTAA/ABP: defines activation method for the device
#define OTAA

// DEVEUI: Unique device ID (LSBF)
static const u1_t DEVEUI[8] PROGMEM = { 0x07, 0xC3, 0xC7, 0xF7, 0xC3, 0x59, 0x34, 0x12 };

// APPEUI: Application ID (LSBF)
static const u1_t APPEUI[8] PROGMEM = { 0xC3, 0x00, 0x00, 0x00, 0x49, 0x59, 0x34, 0x12 };

// APPKEY: Device-specific AES key.
static const u1_t APPKEY[16] PROGMEM = { 0xB7, 0x09, 0xC6, 0xDD, 0x56, 0x43, 0xE5, 0x33, 0x93, 0xB6, 0x7F, 0x74, 0x13, 0xC1, 0x23, 0xCD };

// DEVADDR: Unique device ID
static const u4_t DEVADDR = 0x00000000;

// NWKSKEY: network specific session key
static const u1_t NWKSKEY[16] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

// APPSKEY: Application specific session key
static const u1_t APPSKEY[16] PROGMEM = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };