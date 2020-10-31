cmake_minimum_required(VERSION 2.6)

PROJECT(jsonschema C)
ADD_DEFINITIONS(-Os -ggdb -Wextra -Wall -Werror --std=gnu99 -Wmissing-declarations -Wno-unused-parameter)

SET(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS "")

SET(SOURCES jsonschema.c instance_validator.c schema_validator.c utils.c)

ADD_EXECUTABLE(jsonschema ${SOURCES})

TARGET_LINK_LIBRARIES(jsonschema json-c)

INSTALL(TARGETS jsonschema
	RUNTIME DESTINATION sbin
)
