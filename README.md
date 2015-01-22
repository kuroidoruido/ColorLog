# ColorLog

This source code is under Apache Licence 2.0.

### Usage of ColorLog

ColorLog is a very simple way to add some colored log into your C or C++ program.

To use it, just include the colorlog.h header and activate logging by defining some of these constants : _VERBOSE, _WARNING, _ALERT, _INFO, _SUCCESS or for all level you could just define _FULL_LOG.

You have 2 choises to define these pre-processor constants :
- #define _LVL (exp: #define _VERBOSE) before include the header
- add definition to gcc/g++ compile command, with C(XX)FLAGS with -D_LVL (exp: -D_FULL_LOG).

For add a log display, just choice level (for example info) and use it like this :
```
INFO(context,text_to_print)
```
with *context* a word (or very short expression) to indicate context of log, for example if you add some log in the socket listener of your program say something like "listener". And text\_to\_print a simple string that will be print.

So we could write :
```
INFO("listener","new connection")
```

### Colors

- verbose -> white
- warning -> yellow
- alert   -> red
- info    -> blue
- success -> green

### Compatibility

At this time, it's fully compatible with all Unix and Linux systems but not with Windows systems.

### Examples

You can find two examples, one in C and the other in C++, in examples directory.

### ChangeLog

**0.0.2** (01/22/2015)
- rename flags for unifing naming
- add _LOG_NO_COLOR flag to disabling coloration
- add _LOG_COLOR flag to force enabling coloration
- auto disable color for windows systems
- print all type with %s,%d,%p,etc. like in printf (for example)

**0.0.1** (01/21/2015)
- log basic string with a context
- color for each level of log
- flags for enable all levels or each level separately
