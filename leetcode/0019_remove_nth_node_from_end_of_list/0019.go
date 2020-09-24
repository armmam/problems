package removenthnodefromendoflist

// ListNode represents a node of a signly-linked list
type ListNode struct {
	Val  int
	Next *ListNode
}

// RemoveNthFromEnd removes the n-th node from the end of list and returns its head
func RemoveNthFromEnd(head *ListNode, n int) *ListNode {
	dummy := &ListNode{Next: head}
	end := dummy
	for i := 0; i < n; i++ {
		end = end.Next
	}
	nth := dummy
	for end.Next != nil {
		end = end.Next
		nth = nth.Next
	}
	nth.Next = nth.Next.Next
	return dummy.Next
}
