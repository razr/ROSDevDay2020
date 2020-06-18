#include <stdio.h>
#include <sys/utsname.h>

int main() {
	struct utsname data;

	uname(&data);
	printf("Hello, %s %s\n", data.sysname, data.machine);
	return 0;
}
