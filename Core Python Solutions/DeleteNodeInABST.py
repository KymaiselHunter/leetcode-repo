"""
Name : Kyle Bautista
Januarary 2024
450. Delete Node in a BST
Medium
https://leetcode.com/problems/delete-node-in-a-bst/description/
"""
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if not root:
            return root

        if root.val > key:
            root.left = self.deleteNode(root.left, key)
        elif root.val < key:
            root.right = self.deleteNode(root.right, key)
        else:#if this the node that should be deleted
            #case 1: no children
            if not root.left and not root.right:
                return None
            #case 3: two children
            if root.right and root.left:
                it = root.right
                prev = root

                while it.left:
                    prev = it
                    it = it.left

                root.val = it.val
                if prev.val == root.val:
                    root.right = root.right.right
                    #print("test")
                else:
                    prev.left = it.right
                return root
            #case 2: one child
            if root.right:
                root.val = root.right.val
                root.left = root.right.left
                root.right = root.right.right
                return root

            if root.left:
                root.val = root.left.val
                root.right = root.left.right
                root.left = root.left.left
                return root
            

        return root