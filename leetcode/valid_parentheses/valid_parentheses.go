package validparentheses

func isValid(s string) bool {
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
			if len(st) >= 1 {
				if brackets[st[len(st) - 1]] == c {
						st = st[:len(st) - 1] 
				} else {
					return false
				}
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
