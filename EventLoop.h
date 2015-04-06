#ifndef EVENT_LOOP_H
#define EVENT_LOOP_H 

#include "NonCopyable.h"

class EventLoop : NonCopyable
{
public:
	EventLoop();
	~EventLoop();

	void loop();
private:

	bool looping_;
};

#endif  /*EVENT_LOOP_H*/
