#pragma once

// Use https://cryptii.com/pipes/morse-code-translator
// (Representation: Timing; Signal on: 1; Signal off: 0)
#define ERROR_STATE_SOS 0b1010100001110111011100010101L // AKA  "S O S" (... --- ...)

void error_state(uint32_t morse);
