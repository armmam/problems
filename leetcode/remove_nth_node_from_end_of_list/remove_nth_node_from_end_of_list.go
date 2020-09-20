package removenthnode

// ListNode of a signly-linked list
type ListNode struct {
	Val  int
	Next *ListNode
}

func removeNthFromEnd(head *ListNode, n int) *ListNode {
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
