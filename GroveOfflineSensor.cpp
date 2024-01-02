#include "commandBase.h"
#include <SoftwareSerial.h>
extern CommandData commandData[];


String getCommandInString(uint8_t* hexCode) {
  //Extract the second element from the input hex code
  // Find the command with the given dynamic hex code
  for (int i = 0; i < numCommands; i++) {
   //  Compare dynamic hex codes
    if (hexCode[1] == commandData[i].dynamicHexCode) {
      // Return the corresponding response
      return commandData[i].reply;
    }
 
  }
   // If no match is found, return an empty string or an error message
  return "Command not found, improper Hex code found";
}



uint8_t* detectVoiceFromGroveSensor(SoftwareSerial *groveSerial) {
  uint8_t *receivedData = new uint8_t[5];

  if (groveSerial->available()) {
    // Read data from SoftwareSerial
    for (int i = 0; i < 5; i++) {
      receivedData[i] = groveSerial->read();
    }
    // Return a pointer to the dynamically allocated data array
    return receivedData;
  }
  // If there is not enough data available, return NULL
  delete[] receivedData; // Free the memory before returning NULL
  return NULL;
}
