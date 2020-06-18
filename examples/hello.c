#include <stdio.h>
#include <sys/utsname.h>

int main() {
	struct utsname data;

	/* get name and information about current kernel */
	/* sysname[]; - Operating system name (e.g., "Linux") */
	/* machine[]; - Hardware identifier */

	uname(&data);
	printf("Hello, %s %s\n", data.sysname, data.machine);
	return 0;
}
