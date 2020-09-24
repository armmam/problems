package validparentheses

// IsValid determines if the input string is valid
func IsValid(s string) bool {
	brackets := map[rune]rune{
		'{': '}',
		'(': ')',
		'[': ']',
	}
	var st []rune
	for _, c := range s {
		if c == '{' || c == '(' || c == '[' {
			st = append(st, c)
		} else {
			if len(st) >= 1 && brackets[st[len(st) - 1]] == c {
				st = st[:len(st) - 1]
			} else {
				return false
			}
		}
	}
	if len(st) == 0 {
		return true
	}
	return false
}
