package validparenthesesclasses

import "fmt"

// Stack is a trivial stack implementation
type Stack struct {
	stack []rune
}

// Push a new element into the stack
func (s *Stack) Push(item rune) {
	s.stack = append(s.stack, item)
}

// Pop an element from the stack
func (s *Stack) Pop() (item rune, err error) {
	if len(s.stack) > 0 {
		item = s.stack[len(s.stack)-1]
		s.stack = s.stack[:len(s.stack)-1]
	} else {
		err = fmt.Errorf("stack is empty")
	}
	return
}

// IsEmpty tells whether the stack is empty
func (s *Stack) IsEmpty() bool {
	if len(s.stack) == 0 {
		return true
	}
	return false
}

var brackets = map[rune]rune{
	'(': ')',
	'{': '}',
	'[': ']',
}

func isValid(s string) bool {
	stack := &Stack{}
	for _, c := range s {
		if c == '(' || c == '{' || c == '[' {
			stack.Push(c)
		} else {
			match, err := stack.Pop()
			if err != nil || brackets[match] != c {
				return false
			}
		}
	}
	if stack.IsEmpty() {
		return true
	}
	return false
}
