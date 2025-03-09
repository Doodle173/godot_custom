#ifndef TEST_NODE_H
#define TEST_NODE_H
#include "core/object/ref_counted.h"

class TestNode : public RefCounted{
	GDCLASS(TestNode, RefCounted)
public:
	TestNode();

	void TestFunction();

protected:
	static void _bind_methods();
};
#endif
