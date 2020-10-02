package mergetwosortedlists

// ListNode represents a node of a signly-linked list
type ListNode struct {
	Val  int
	Next *ListNode
}

// MergeTwoLists and return it as a new sorted list
func MergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
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

// MergeTwoListsAnotherSolution and return it as a new sorted list
func MergeTwoListsAnotherSolution(l1 *ListNode, l2 *ListNode) *ListNode {
	res := &ListNode{}
	prev := res
	for l1 != nil || l2 != nil {
		if l1 == nil || (l2 != nil && l1.Val > l2.Val) {
			tmp := l1
			l1 = l2
			l2 = tmp
		}
		if l1 != nil {
			prev.Next = l1
			l1 = l1.Next
			prev = prev.Next
		}
	}
	return res.Next
}
