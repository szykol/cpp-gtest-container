#include <gtest/gtest.h>

#include "../src/Stack.hpp"

struct StackTest : public ::testing::Test {
    Stack<std::string, 10> m_stack;
};

TEST_F(StackTest, SpawnsEmpty) {
    ASSERT_EQ(m_stack.size(), 0);
}

TEST_F(StackTest, TopWorks) {
    ASSERT_THROW(m_stack.top(), EmptyStack);
}

TEST_F(StackTest, PushWorks) {
    m_stack.push("HELLO");
    EXPECT_EQ(m_stack.size(), 1);
    EXPECT_EQ(m_stack.top(), "HELLO");
}

TEST_F(StackTest, PopWorks) {
    m_stack.push("HELLO");

    EXPECT_EQ(m_stack.pop(), "HELLO");
    EXPECT_THROW(m_stack.pop(), EmptyStack);
}