# 📌 push_swap
This project involves sorting data on a stack, with a limited set of instructions, and the smallest number of moves. To make this happen, you will have to manipulate various sorting algorithms and choose the most appropriate solution(s) for optimized data sorting.

The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted. You have at your disposal a set of int values, stacks and a set ofinstructions to manipulate both stacks.

## 🎮 Game rules 

The game is composed of 2 stacks named a and b.

- To start with:
  - ***a*** contains a random number of either positive or negative numbers without any duplicates.
  - ***b*** is empty.

The goal is to sort in ascending order numbers into stack a.

To do this you have the following operations at your disposal:
- **sa**: (*swap a*) - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- **sb**: (*swap b*) - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- **ss**: sa and sb at the same time.
- **pa**: (*push a*) - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **pb**: (*push b*) - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **ra**: (*rotate a*) - shift up all elements of stack a by 1. The first element becomes the last one.
- **rb**: (*rotate b*) - shift up all elements of stack b by 1. The first element becomes the last one.
- **rr**: ra and rb at the same time.
- **rra**: (*reverse rotate a*) - shift down all elements of stack a by 1. The last element becomes the first one.
- **rrb**: (*reverse rotate b*) - shift down all elements of stack b by 1. The last element becomes the first one.
- **rrr**: rra and rrb at the same time.

## 💻 Compilation

Compile push_swap: `make`

## ❗ Execute

push_swap: `./push_swap 0 2 3 1`
