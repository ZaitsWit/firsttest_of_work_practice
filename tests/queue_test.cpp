#include <gtest/gtest.h>
#include "queue.h"

TEST(QueueTest, NewQueueIsEmpty) {
    Queue q;

    EXPECT_TRUE(q.empty());
    EXPECT_EQ(q.size(), 0);
}

TEST(QueueTest, PushIncreasesSize) {
    Queue q;

    q.push(10);

    EXPECT_FALSE(q.empty());
    EXPECT_EQ(q.size(), 1);
}

TEST(QueueTest, PopReturnsElementsInFIFOOrder) {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    EXPECT_EQ(q.pop(), 10);
    EXPECT_EQ(q.pop(), 20);
    EXPECT_EQ(q.pop(), 30);
}

TEST(QueueTest, PopFromEmptyThrowsException) {
    Queue q;

    EXPECT_THROW(q.pop(), std::out_of_range);
}