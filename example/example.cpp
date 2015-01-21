#include "../colorlog.h"

/* compile this example with :
 * g++ example.cpp -o example_cpp -D_FULL_LOG
 *   to print all log line
 * or
 * g++ example.cpp -o example_cpp -D_WARNING -D_INFO
 *   to print only warning and info levels
 */

int main(int argc, char* argv[]) {

	VERBOSE("main","start log");
	WARNING("main","start warning");
	ALERT("main","start alert");
	INFO("main","start info");
	SUCCESS("main","start success");

	return 0;
}
