#include "EventLoop.h"

EventLoop *t_loopInCurrent = NULL;

EventLoop::EventLoop()
	: looping_(false),
{
	if (t_loopInCurrent)
	{
		// error
	}
	else
	{
		t_loopInCurrent = this;
	}
}

EventLoop::~EventLoop()
{
	assert(!looping_);
	t_loopInCurrent = NULL;
}