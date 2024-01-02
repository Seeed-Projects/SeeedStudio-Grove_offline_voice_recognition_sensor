

#ifndef GROVEOFFLINESENSOR_H
#define GROVEOFFLINESENSOR_H

#include <Arduino.h>
#include <SoftwareSerial.h>


uint8_t* detectVoiceFromGroveSensor(SoftwareSerial *groveSerial);

String getCommandInString(uint8_t* inputHexCode);

#endif
