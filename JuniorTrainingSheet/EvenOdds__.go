package main

import (
	"fmt"
)

func main() {
	var n, which uint64 = 0, 0
	fmt.Scan(&n, &which)
	var midPoint uint64 = 0
	if n%2==0 { midPoint = n/2
	} else {
		midPoint = n/2 + 1
	}
	if which > midPoint {
		nn := uint64(which-midPoint)
		fmt.Println(uint64(nn * 2))
	} else {
		fmt.Println(uint64(2 * which -1))
	}
}
