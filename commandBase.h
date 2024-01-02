#include <Arduino.h>

struct CommandData {
  const char* reply;
  uint8_t dynamicHexCode;
};

CommandData commandData[] = {
  {"Hi, how can I help?|Hi, what's up?", 0x0},
  {"see you later", 0x1},
  {"ok, match the air conditioner", 0x2},
  {"ok, turn on the air conditioner", 0x3},
  {"ok, turn off the air conditioner", 0x4},
  {"ok, automatic mode", 0x5},
  {"ok, cold mode", 0x6},
  {"ok, heat mode", 0x7},
  {"ok, dry mode", 0x8},
  {"ok, fan mode", 0x9},
  {"ok, sleeping mode", 0xa},
  {"ok, automatic fan", 0xb},
  {"ok, low fan", 0xc},
  {"ok, medium fan", 0xd},
  {"ok, high fan", 0xe},
  {"ok, higher the fan", 0xf},
  {"ok, lower the fan", 0x10},
  {"ok, sixteen centigrade", 0x11},
  {"ok, seventeen centigrade", 0x12},
  {"ok, eighteen centigrade", 0x13},
  {"ok, nineteen centigrade", 0x14},
  {"ok, twenty centigrade", 0x15},
  {"ok, twenty one centigrade", 0x16},
  {"ok, twenty two centigrade", 0x17},
  {"ok, twenty three centigrade", 0x18},
  {"ok, twenty four centigrade", 0x19},
  {"ok, twenty five centigrade", 0x1a},
  {"ok, twenty six centigrade", 0x1b},
  {"ok, twenty seven centigrade", 0x1c},
  {"ok, twenty eight centigrade", 0x1d},
  {"ok, twenty nine centigrade", 0x1e},
  {"ok, thirty centigrade", 0x1f},
  {"ok, warmer", 0x20},
  {"ok, cooler", 0x21},
  {"ok, start to fan", 0x22},
  {"ok, stop to fan", 0x23},
  {"ok, air swing up and down", 0x24},
  {"ok, air swing left and right", 0x25},
  {"ok, air conditioner reset", 0x26},
  {"ok, turn on the light", 0x27},
  {"ok, turn off the light", 0x28},
  {"ok, cold light turn on", 0x29},
  {"ok, cold light turn off", 0x2a},
  {"ok, warm light turn on", 0x2b},
  {"ok, warm light turn off", 0x2c}
};

const int numCommands = sizeof(commandData) / sizeof(commandData[0]);
