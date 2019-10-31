#ifndef DOTNET_IOT_H__
#define DOTNET_IOT_H__

#include "System/String.h"


//
//	Built-in types (1)
//

#define null	nullptr

using byte = unsigned char;
using sbyte = signed char;
//using decimal = float_128_t;
using uint = unsigned int;
using ushort = unsigned short;
using ulong = unsigned long;

using object = System::Object;
using string = System::String;





//
//	Literals - Suffix table (2)
//

//	d - double
//	f - float
//	l - long
//	u - unsigned int
//	ul - unsigned long
//	* M/m - decimal (not in c++)
//	\TODO: literal conversion for M/m


#endif // !DOTNET_IOT_H__




//	References
//	------------------------------------------------------------
//	(1) https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/built-in-types-table
//	(2) https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/value-types-table