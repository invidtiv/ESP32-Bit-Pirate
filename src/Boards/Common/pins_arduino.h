#pragma once

#include_next <pins_arduino.h>

// Override the default USB PID for boards to avoid conflicts with Windows drivers cache

#undef USB_PID
#define USB_PID 0x1002
