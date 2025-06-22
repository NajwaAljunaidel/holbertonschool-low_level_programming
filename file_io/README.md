  <img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" alt="C logo" width="60" height="60"/>
  &nbsp;&nbsp;
  <img src="https://github.com/user-attachments/assets/5f8d33ce-fed8-438a-935c-a9916afef26e" alt="Holberton logo" width="110" height="55"/>
  &nbsp;&nbsp;   
<h1 align="center">C - Sorting Algorithms & Big O</h1>
<br>
<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/head_low-level.png"  
    alt="Holberton School"/>  
</div>

![Willy Wonk](https://raw.githubusercontent.com/RaghadAlbeladi1/holbertonschool-sorting_algorithms/main/willy-wonk.png)

---

## 🧠 Description

This team project focuses on implementing classic sorting algorithms using the C programming language.  
The goal is to deeply understand how different algorithms perform, compare their time complexities using **Big O notation**, and master low-level programming techniques such as pointer manipulation and memory management.

In addition to implementation, we learned to test, debug, analyze performance, and collaborate effectively using Git and GitHub.

---

## 📁 Project Files

| File Name                | Description |
|--------------------------|-------------|
| `sort.h`                | Header file: struct definition & function prototypes |
| `bubble_sort.c`         | Bubble Sort algorithm implementation |
| `insertion_sort_list.c` | Insertion Sort using Doubly Linked List |
| `selection_sort.c`      | Selection Sort implementation |
| `quick_sort.c`          | Quick Sort using Lomuto partition scheme |
| `0-O`                   | Big O for Bubble Sort |
| `1-O`                   | Big O for Insertion Sort |
| `2-O`                   | Big O for Selection Sort |
| `3-O`                   | Big O for Quick Sort |

---

## ⚙️ Requirements

- No use of global variables
- No use of standard library functions (e.g., `printf`, `puts`) unless specified
- Follow the short Big O notation format:
  - `O(1)`, `O(n)`, `O(n^2)`, `O(nlog(n))`, `O(log(n))`, `O(n!)`
- All `.c` and `.h` files must comply with Betty coding style
- All answers must end with a newline

---

## 💻 Compilation & Usage

To compile all files and generate an executable `sort`:

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sort

