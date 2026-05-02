#include "binary_tree.h"
#include <gtest/gtest.h>

TEST(BinaryTreeTest, NewTreeIsEmpty) {
    BinaryTree tree;

    EXPECT_TRUE(tree.empty());
    EXPECT_EQ(tree.size(), 0);
}

TEST(BinaryTreeTest, PushAddsElement) {
    BinaryTree tree;

    tree.push(10);

    EXPECT_TRUE(tree.search(10));
    EXPECT_EQ(tree.size(), 1);
}

TEST(BinaryTreeTest, SearchReturnsFalseForMissingElement) {
    BinaryTree tree;

    tree.push(10);
    tree.push(20);

    EXPECT_FALSE(tree.search(30));
}

TEST(BinaryTreeTest, PopRemovesExistingElement) {
    BinaryTree tree;

    tree.push(10);
    tree.push(20);

    EXPECT_TRUE(tree.pop(10));
    EXPECT_FALSE(tree.search(10));
    EXPECT_TRUE(tree.search(20));
}

TEST(BinaryTreeTest, PopReturnsFalseForMissingElement) {
    BinaryTree tree;

    tree.push(10);

    EXPECT_FALSE(tree.pop(99));
}