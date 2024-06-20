cmake_minimum_required(VERSION 3.10)

project(FinalProject)

add_executable(FinalProject main.cpp src/fac.cpp src/fib.cpp src/pal.cpp src/prm.cpp src/example_class.cpp )
target_include_directories(FinalProject PRIVATE include)

enable_testing()
add_subdirectory(tests)

find_package(Doxygen REQUIRED)
if(DOXYGEN_FOUND)
	set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
	set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

	configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)

	add_custom_target(doc_doxygen ALL
		COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
		WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
		COMMENT "Generating API documentation with Doxygen"
		VERBATIM)
endif()
