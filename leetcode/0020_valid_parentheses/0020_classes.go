package validparentheses

import "fmt"

// Stack is a trivial stack implementation
type stack struct {
	stack []rune
}

// Push a new element into the stack
func (s *stack) push(item rune) {
	s.stack = append(s.stack, item)
}

// Pop an element from the stack
func (s *stack) pop() (item rune, err error) {
	if len(s.stack) > 0 {
		item = s.stack[len(s.stack)-1]
		s.stack = s.stack[:len(s.stack)-1]
	} else {
		err = fmt.Errorf("stack is empty")
	}
	return
}

// IsEmpty tells whether the stack is empty
func (s *stack) isEmpty() bool {
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

// IsValidWithStack determines if the input string is valid
func IsValidWithStack(s string) bool {
	stack := &stack{}
	for _, c := range s {
		if c == '(' || c == '{' || c == '[' {
			stack.push(c)
		} else {
			match, err := stack.pop()
			if err != nil || brackets[match] != c {
				return false
			}
		}
	}
	if stack.isEmpty() {
		return true
	}
	return false
}
