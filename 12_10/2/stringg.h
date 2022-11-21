#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>



class String
{
	private:
		char *str;
		int len;
		static int num_strings;
		static const int CINLIM = 80;

	public:
		String(const char *s);
		String();
		String(const String &st);
		~String();
		int length() const{return len;}

		String &operator=(const String &st);
		String &operator=(const char *s);
		char &operator[](int i);
		const char &operator[](int i) const;

		friend bool operator<(const String &str1, const String &str2);
		friend bool operator>(const String &str1, const String &str2);
		friend bool operator==(const String &str1, const String &str2);
		friend std::ostream &operator<<(std::ostream &os, const String &st);
		friend std::istream &operator>>(std::istream &is, String &st);

		static int HowMany();

		friend String operator+(const char *s, const String &st);
		String operator+(const String &st);
		void stringlow();
		void stringup();
		int has(char ch) const;

};

#endif
