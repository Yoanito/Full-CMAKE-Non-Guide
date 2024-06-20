#ifndef EXAMPLE_H
#define EXAMPLE_H

/**
 * @file example_class.h
 * @brief A simple example class
 *
 * This class is a simple example of class for this project
 */
class Myclass {
public:
	/**
	 * @brief Constructor
	 *
	 * Initializes the class with a value
	 * @param value An int value to init the class
	 */
	Myclass(int value);

	/**
	 * @brief Gets the value
	 * @return The current value
	 */
	int getValue() const;

	/**
	 * @brief Sets the value.
	 * @param value The new value
	 */
	void setValue(int value);

private:
	int val; ///< The value stored in the class.
};

#endif // EXAMPLE_H
