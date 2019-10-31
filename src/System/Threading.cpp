#include <System\\Threading.h>
#include <Arduino.h>

namespace System
{
	namespace Threading
	{
		void Thread::Sleep(int millisecondsTimeout)
		{
			delay(millisecondsTimeout);
		}
	}
}
