#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include "schema_validator.h"
#include "instance_validator.h"

int main(int argc, char *argv[])
{
	printf("Checking schema_validator!\n");
	if (argc < 2)
		return -1;
	return json_validate_instance_from_file(argv[1], argv[2]);
}
