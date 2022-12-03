# error-state

Blink error pattern using builtin LED of an Arduino MCU board

## Usage:

``` cpp
#include <error-state.h>

void loop() {
  if(allSystemsNominal) {
    doStuff();
  } else {
    error_state(ERROR_STATE_SOS); // AKA  "S O S" (... --- ...)
    // Unreachable code
  }
```

## Notes:

* Use for non-recoverable errors only.
* `error_state()` should be the last function you call, after any
  clean up. It will not return, so effectively your code execution
  halts.

