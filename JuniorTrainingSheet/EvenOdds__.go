package main

import "fmt"

func main() {
	var n = 0
	which := 0
	fmt.Scan(&n, &which)
	if which > n/2 {
		i := 0
		for ; i<=(which - n/2); i+=2 {}
		fmt.Println(i)
	} else {
		k := 1
		for i := 1; i<which; i++ { k+=2}
		fmt.Println(k)
	}
}
