package mergetwosortedlists

// ListNode represents a node of a signly-linked list
type ListNode struct {
	Val  int
	Next *ListNode
}

func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	res := &ListNode{}
	tmp := res
	for l1 != nil && l2 != nil {
		if l1.Val < l2.Val {
			tmp.Next = l1
			tmp = tmp.Next
			l1 = l1.Next
		} else {
			tmp.Next = l2
			tmp = tmp.Next
			l2 = l2.Next
		}
	}
	if l1 != nil {
		tmp.Next = l1
	} else {
		tmp.Next = l2
	}
	return res.Next
}
