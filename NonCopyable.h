#ifndef NONCOPYABLE_H_
#define NONCOPYABLE_H_

class NonCopyable
{
public:
	NonCopyable() = default;
	~NonCopyable() = default;

private:
	NonCopyable(const NonCopyable &) = delete;
	void operator=(const NonCopyable &) = delete;
};

#endif // NONCOPYABLE_H_