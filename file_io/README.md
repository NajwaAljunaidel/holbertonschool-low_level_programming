
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
```

To run a specific sorting algorithm:

```bash
./sort
```

Or you can test specific algorithms using the provided `main` files:

```bash
gcc -Wall -Wextra -Werror -pedantic print_array.c bubble_sort.c 0-main.c -o bubble
./bubble
```

---

## 📈 Big O Complexity

| Algorithm        | Best Case | Average Case | Worst Case |
|------------------|-----------|--------------|-------------|
| Bubble Sort      | O(n)      | O(n^2)       | O(n^2)      |
| Insertion Sort   | O(n)      | O(n^2)       | O(n^2)      |
| Selection Sort   | O(n^2)    | O(n^2)       | O(n^2)      |
| Quick Sort       | O(nlog(n))| O(nlog(n))   | O(n^2)      |

---

## 📌 Development & Git Flow

- All changes were made via **Pull Requests** and reviewed by the other teammate.  
- When conflicts occurred, they were resolved **through team coordination**.  
- One major challenge was repeated failure with **Betty style** checks:  
  - Despite merging, Holberton showed 91% due to Betty errors.  
  - We created **3 separate branches** to isolate and fix style issues.  
  - After repeated peer review and debugging, we reached **100%** score.  

This process improved our understanding of version control, team communication, and debugging under pressure.

---

## 🧪 Testing

To test each algorithm:  
Run the corresponding main file with the algorithm and `print_array.c` / `print_list.c`

Example for testing Quick Sort:

```bash
gcc -Wall -Wextra -Werror -pedantic print_array.c quick_sort.c 3-main.c -o quick
./quick
```

---

## 👥 Team & Contributions

### Raghad Albeladi

| File | Description |
|------|-------------|
| `quick_sort.c`     | Quick Sort implementation (Lomuto) |
| `selection_sort.c` | Selection Sort implementation |
| GitHub Review      | Code review & Git flow coordination |

### Najwa Aljunaidel

| File | Description |
|------|-------------|
| `bubble_sort.c`         | Bubble Sort implementation |
| `insertion_sort_list.c` | Insertion Sort for DLL |
| `README.md`             | Full documentation & formatting |
| Betty Fixes             | Debugging & style corrections |

---

## 🙋 Authors

<table align="center">
  <tr>
    <td align="center">
      <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExd25mdmozcjhzbzRhc3BnNGg3bDdpOTg3Z3Jla3gwdHZuaXM4bWhzdiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9cw/otuYfiaJeYSM05ECs5/giphy.gif" width="100" height="100" style="border-radius: 50%;" alt="Raghad GIF" /><br />
      <a href="https://github.com/RaghadAlbeladi1">Raghad Albeladi</a>
    </td>
    <td align="center">
      <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExd25mdmozcjhzbzRhc3BnNGg3bDdpOTg3Z3Jla3gwdHZuaXM4bWhzdiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9cw/otuYfiaJeYSM05ECs5/giphy.gif" width="100" height="100" style="border-radius: 50%;" alt="Najwa GIF" /><br />
      <a href="https://github.com/NajwaAljunaidel">Najwa Aljunaidel</a>
    </td>
  </tr>
</table>

---

