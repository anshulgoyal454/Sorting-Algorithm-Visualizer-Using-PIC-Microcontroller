# Sorting-Algorithm-Visualizer-Using-PIC-Microcontroller

There are various sorting algorithms available and they are a topic of discussion in computer science community from decades. A visual representation of these algorithms can help learners get to know the working of these algorithms. This project is a visual representation of many famous sorting algorithms, like Selection Sort, Bubble Sort, Insertion Sort, Merge Sort, Shell Sort. We are using PIC microcontroller and OLED screen along with UART connection to send signals to microcontroller. Programming language used here is Embedded C and the compiler is used is CCS compiler. A simulation of the project is done using Proteus software.



Following sorting algorithms are implemented in C using PIC Microntroller and displayed using OLED(SSD1306)
  1.  Selection Sort
  2.  Bubble Sort
  3.  Insertion Sort
  4.  Merge Sort
  5.  Shell Sort
  
# **Tools Used:**

- PIC18F4550
- SSD1306 OLED (128x64)
- UART
- CCS C Compiler
- Proteus Software

**Libraries Used:**

- 18f4550.h
- SSD1306OLED.c
- string.h
- stdio.h


**Algorithms Implementation:**

**Selection Sort:**

Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list_._ _ **The smallest element is selected from the unsorted array and swapped with the leftmost element** _, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right. This algorithm is not suitable for large data sets as its average and worst case complexities are of Ο(n2), where n is the number of items.

_ **Steps for selection sort:** _

**Step 1** − Set MIN to location 0

**Step 2** − Search the minimum element in the list

**Step 3** − Swap with value at location MIN

**Step 4** − Increment MIN to point to next element

**Step 5** − Repeat until list is sorted

**Bubble Sort:**

Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent elements is compared and the elements are swapped if they are not in order. This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2) where n is the number of items.

_ **Steps for bubble sort:** _

**Step 1** – Select two adjacent numbers

**Step 2** – If left number is greater than right number, swap the two numbers

**Step 3** – Otherwise choose other pair of numbers

**Step 4** – Repeat the process for Number of numbers – 1

**Insertion Sort**

This is an in-place comparison-based sorting algorithm. Here, a sub-list is maintained which is always sorted. For example, the lower part of an array is maintained to be sorted. An element which is to be &#39;insert&#39;ed in this sorted sub-list, has to find its appropriate place and then it has to be inserted there. Hence the name, insertion sort.

The array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list (in the same array). This algorithm is not suitable for large data sets as its average and worst case complexity are of Ο(n2), where n is the number of items.

_ **Steps for Insertion sort:** _

**Step 1** − If it is the first element, it is already sorted. return 1;

**Step 2** − Pick next element

**Step 3** − Compare with all elements in the sorted sub-list

**Step 4** − Shift all the elements in the sorted sub-list that is greater than the value to be sorted

**Step 5** − Insert the value

**Step 6** − Repeat until list is sorted

**Merge Sort**

Merge sort is a sorting technique based on divide and conquer technique. With worst-case time complexity being Ο(n log n), it is one of the most respected algorithms.

Merge sort first divides the array into equal halves and then combines them in a sorted manner.

_ **Steps for** _ **Merge S** _ **ort:** _

**Step 1** − if it is only one element in the list it is already sorted, return.

**Step 2** − divide the list recursively into two halves until it can no more be divided.

**Step 3** − merge the smaller lists into new list in sorted order.

**Shell Sort**

Shell sort is a highly efficient sorting algorithm and is based on insertion sort algorithm. This algorithm avoids large shifts as in case of insertion sort, if the smaller value is to the far right and has to be moved to the far left.

This algorithm uses insertion sort on a widely spread elements, first to sort them and then sorts the less widely spaced elements. This spacing is termed as interval.

**Steps for Shell Sort:**

**Step 1** − Initialize the value of h

**Step 2** − Divide the list into smaller sub-list of equal interval h

**Step 3** − Sort these sub-lists using insertion sort

**Step 4** − Repeat until complete list is sorted

# **PIC Microcontroller**

PIC microcontrollers (Programmable Interface Controllers), are electronic circuits that can be programmed to carry out a vast range of tasks. They can be programmed to be timers or to control a production line and much more. They are found in most electronic devices such as alarm systems, computer control systems, phones, in fact almost any electronic device.

You will need a computer to run software, such as Circuit Wizard, allowing you to program a PIC microcontroller circuit. A fairly cheap, low specification computer should run the software with ease. The computer will need a serial port or a USB port. This is used to connect the computer to the microcontroller circuit.

**PIC18F4550** belongs to &#39; **PIC18F**&#39; family of microcontrollers. PIC18F4550 is one of popular Microcontrollers from the microchip technology, comes with a High-Performance, Enhanced flash, USB Microcontroller with nano-Watt-Technology. This is an 8-bit microcontroller popular among makers and engineers due its features and easy applications. PIC18F4550 comes in various packages like DIP, QPF and QPN and can be selected according to the project requirement.


| Program Memory Type | Flash |
| --- | --- |
| Program Memory Size (KB) | 32 |
| CPU Speed (MIPS/DMIPS) | 12 |
| SRAM (B) | 2,048 |
| Data EEPROM/HEF (bytes) | 256 |
| Pin Count | 40 |
| Temperature Range (°C) | -40 to 85 |
| Timers | 1 x 8-bit, 3 x 16-bit |

# **Proteus Simulation:**

![](https://i.ibb.co/ySRjpjq/Screenshot-813-FILEminimizer.png)

_Fig. Sorting Algorithm Visualizer front Screen_

![](https://i.ibb.co/cTsLXhC/Screenshot-814-FILEminimizer.png)

_Fig. Enter Number to be Sorted_

![](https://i.ibb.co/tKHQdc7/Screenshot-816-FILEminimizer.png)

_Fig. Sorting in progress_

![](https://i.ibb.co/nBMcCRv/Screenshot-817-FILEminimizer.png)

_Fig. Numbers sorted in order_
