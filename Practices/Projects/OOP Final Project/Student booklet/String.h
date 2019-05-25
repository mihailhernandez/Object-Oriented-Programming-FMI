#pragma once

#include <iostream>

class String
{
public:
	String();
	String(const char*);
	String(const String&);
	
	~String();

	String& operator=(const String&);
	String& operator+=(const String&);
	String operator+(const String&);
	
	const char operator[](const int) const;
	
	friend std::ostream& operator<<(std::ostream&, const String&);

	int get_length() const;
	const char* get_string() const;
private:
	char* string;
	int length;

	void copy_from(const String&);
	void free();
};