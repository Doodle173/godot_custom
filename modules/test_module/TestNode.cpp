#include "TestNode.h"

TestNode::TestNode() {
}

void TestNode::TestFunction() {
	print_line("TestNode::TestFunction()\n");
}

void TestNode::_bind_methods() {
	ClassDB::bind_method(D_METHOD("TestFunction"), &TestNode::TestFunction);
}
