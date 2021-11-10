# push_swap
This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, you will have to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting.


## push_swap instructions

- **sa**: *swap a* - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- **sb**: *swap b* - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- **ss**: sa and sb at the same time.
- **pa**: *push a* - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **pb**: *push b* - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **ra**: *rotate a* - shift up all elements of stack a by 1. The first element becomes the last one.
- **rb**: *rotate b* - shift up all elements of stack b by 1. The first element becomes the last one.
- **rr**: ra and rb at the same time.
- **rra**: *reverse rotate a* - shift down all elements of stack a by 1. The last element becomes the first one.
- **rrb**: *reverse rotate b* - shift down all elements of stack b by 1. The last element becomes the first one.
- **rrr**: rra and rrb at the same time.

## Compilation

Compile checker: `make checker`

Compile push_swap: `make push_swap`

Compile both: `make`

## Execute

checker: `./checker 0 2 3 1` then program's waiting for user input

push_swap: `./push_swap 0 2 3 1`

Note: You can also use debug option `-v` as first parameter to see stacks operations

![alt text](https://github.com/ska42/push_swap/blob/main/img/option_debug_example.png?raw=true)
