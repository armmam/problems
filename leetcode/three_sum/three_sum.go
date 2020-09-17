package threesum

import "sort"

// ThreeSum finds all unique triplets in the array which give the sum of zero
func ThreeSum(nums []int) [][]int {
	var res [][]int
	sort.Ints(nums)
	for i := 0; i < len(nums)-2; i++ {
		if i == 0 || nums[i] != nums[i-1] {
			// j -- lower bound for bi-directional sweep
			// k -- upper bound
			sum, j, k := -nums[i], i+1, len(nums)-1
			for j < k {
				if nums[j]+nums[k] == sum {
					res = append(res, []int{nums[i], nums[j], nums[k]})
					for j < k && nums[j] == nums[j+1] {
						j++
					}
					for j < k && nums[k] == nums[k-1] {
						k--
					}
					j++
					k--
				} else if nums[j]+nums[k] < sum {
					j++
				} else {
					k--
				}
			}
		}
	}
	return res
}
