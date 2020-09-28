package searchinrotatedsortedarray

// Search for an integer in a sorted and rotated array
func Search(nums []int, target int) int {
	lo, hi := 0, len(nums)-1
	var mid int
	for lo < hi {
		mid = (hi + lo) / 2
		if nums[mid] > nums[hi] {
			lo = mid + 1
		} else {
			hi = mid
		}
	}
	rot := lo
	lo, hi = 0, len(nums)-1
	for lo <= hi {
		mid = (hi + lo) / 2
		realmid := (mid + rot) % len(nums)
		if nums[realmid] > target {
			hi = mid - 1
		} else if nums[realmid] < target {
			lo = mid + 1
		} else {
			return realmid
		}
	}
	return -1
}
