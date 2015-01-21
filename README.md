# ColorLog

This source code is under Apache Licence 2.0.

### Usage of ColorLog

ColorLog is a very simple way to add some colored log into your C or C++ program.

To use it, just include the colorlog.h header and activate logging by defining some of these constants : _VERBOSE, _WARNING, _ALERT, _INFO, _SUCCESS or for all level you could just define _FULL_LOG.

You have 2 choises to define these pre-processor constants :
- #define _LVL (exp: #define _VERBOSE) before include the header
- add definition to gcc/g++ compile command, with C(XX)FLAGS with -D_LVL (exp: -D_FULL_LOG).

### Colors

- verbose -> white
- warning -> yellow
- alert   -> red
- info    -> blue
- success -> green

### Compatibility

At this time, coloration of the output use the ANSI method, so it's currently not compatible to Windows OSs, maybe in a future version, but it's fully compatible with all Unix and Linux systems.

### Examples

You can find two examples, one in C and the other in C++, in examples directory.
