<h1 align='center'><u><b> Kth-largest-Element</b> </u></h1>

<h2> <u>Problem Link:</u> https://leetcode.com/problems/kth-largest-element-in-a-stream/</h2>

<h1 ><u> Idea Used: </u></h1>

## In this we use Min-heap of size k, so that the top element of min-heap will show the kth-largest element.

## So as we add k+1 elements the kth-element will be our answer so we pop out top one.In this way at any instant the top element will be kh-largest.

<h1 ><u> Time and Space Analysis </u></h1>

## Time-Complexity: O(Nlogk)

## Space-Compexity: O(logk)
