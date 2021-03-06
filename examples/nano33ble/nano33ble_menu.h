/*
    The code in this file uses open source libraries provided by thecoderscorner

    DO NOT EDIT THIS FILE, IT WILL BE GENERATED EVERY TIME YOU USE THE UI DESIGNER
    INSTEAD EITHER PUT CODE IN YOUR SKETCH OR CREATE ANOTHER SOURCE FILE.

    All the variables you may need access to are marked extern in this file for easy
    use elsewhere.
*/

#ifndef MENU_GENERATED_CODE_H
#define MENU_GENERATED_CODE_H

#include <Arduino.h>
#include <tcMenu.h>
#include <Wire.h>
#include <LiquidCrystalIO.h>
#include <IoAbstractionWire.h>
#include "tcMenuLiquidCrystal.h"

void setupMenu();  // forward reference of the menu setup function.
extern const PROGMEM ConnectorLocalInfo applicationInfo;  // defines the app info to the linker.

// Global variables that need exporting

extern LiquidCrystal lcd;
extern LiquidCrystalRenderer renderer;

// Callback functions must always include CALLBACK_FUNCTION after the return type
#define CALLBACK_FUNCTION

// Global Menu Item exports

void CALLBACK_FUNCTION onPWMChanged(int id);
extern AnalogMenuItem menuAnalogReadingsOutputPWM;
extern FloatMenuItem menuAnalogReadingsInA0;
extern SubMenuItem menuAnalogReadings;
extern FloatMenuItem menuAccelerometerAccelZ;
extern FloatMenuItem menuAccelerometerAccelY;
extern FloatMenuItem menuAccelerometerAccelX;
extern FloatMenuItem menuAccelerometerMagZ;
extern FloatMenuItem menuAccelerometerMagY;
extern FloatMenuItem menuAccelerometerMagX;
extern SubMenuItem menuAccelerometer;
extern AnalogMenuItem menuBPressure;
extern AnalogMenuItem menuHumidity;
extern AnalogMenuItem menuTemp;

#endif // MENU_GENERATED_CODE_H
