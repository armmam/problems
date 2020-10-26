package leetcode

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func maxDepth(root *TreeNode) int {
    var depth, max int
    traverse(root, &depth, &max)
    return max
}

func traverse(node *TreeNode, depth *int, max *int) {
    if node == nil {
        if *depth > *max {
            *max = *depth
        }
        return
    }
    *depth++
    traverse(node.Left, depth, max)
    traverse(node.Right, depth, max)
    *depth--
}
