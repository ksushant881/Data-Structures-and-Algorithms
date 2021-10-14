/*

Each fork() statement creates a child process. Numbering each fork() statement, we can visualize 
a tree of child process as shown below:

P
\
C1 //fork-1
/ \
C2 C2 //fork-2
/ \ / \
C3 C3 C3 C3 //fork-3

Thus, a total of 7 child processes are generated.
We can figure out of direct formula too. Each time fork is called, 2 processes are created. 
Therefore, n fork calls will generate a total of 2n processes, of which one is the original parent. 
Thus, we get the final answer as 2n - 1.


In the extreme condition, all processes acquire (Si - 1) resources and need 1 more resource. 
So the following condition must be true to make sure that deadlock never occurs.sum1 < m 
The above expression can be written as follows. sum2 < (m + n).


Due to thrashing, excessive page-faults occur, because of which most of the useful time is 
wasted in swapping pages with the disk ~ excessive page I/O, or option (C).

*/