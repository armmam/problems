package mergeksortedlists

// ListNode represents a node of a signly-linked list
type ListNode struct {
	Val  int
	Next *ListNode
}

// MergeKLists into one sorted linked list and return it
func MergeKLists(lists []*ListNode) *ListNode {
	switch len(lists) {
	case 0:
		return nil
	case 1:
		return lists[0]
	default:
		MergeKLists(lists[:len(lists)/2])
		MergeKLists(lists[len(lists)/2:])
		lists[0] = MergeTwoLists(lists[0], lists[len(lists)/2])
		return lists[0]
	}
}

// MergeTwoLists and return it as a new sorted list
func MergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
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
