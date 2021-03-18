package main

import "fmt"

func main() {
	n, input, q, nToScan := 0, 0, 2, 0
	fmt.Scan(&n)
	visited := make(map[int]bool, n)
	for  q > 0 {
		fmt.Scan(&nToScan)
		for i:=0; i< nToScan; i++ {
			fmt.Scan(&input)
			if _, ok := visited[input]; !ok && input > 0 {
				visited[input] = true
			}
		}
		q--
	}
	if len(visited) == n {
		fmt.Println("I become the guy.")
	} else {
		fmt.Println("Oh, my keyboard!")
	}
}