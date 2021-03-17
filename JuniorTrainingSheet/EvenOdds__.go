package main

import "fmt"

func main() {
	n, which := 0, 0
	fmt.Scan(&n, &which)

	numbers := make([]int, n)
	// evens := make([]int, 0)
	k := 0
	for i, j := 1, n-1; i<=n; i++ {
		if i % 2 == 0 {
			numbers[j] = i
			j--
		} else {
			numbers[k] = i
			k++
		}
	}
	fmt.Println(numbers)
	fmt.Println(numbers[which-1])
}