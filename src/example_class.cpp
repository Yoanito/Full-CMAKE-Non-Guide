/**
 * @file example_class.cpp
 * @brief Implementation of ExampleClass
 */

#include "example_class.h"

MyClass::MyClass(int value) : val(value) {}

int Myclass::getValue() const {
	return val;
}

void MyClass::setValue(int value) {
	val = value;
}
