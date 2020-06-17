# Sorting-Algorithm-Visualizer-Using-PIC-Microcontroller

Following sorting algorithms are implemented in C using PIC Microntroller and displayed using OLED(SSD1306)
  1.  Selection Sort
  2.  Bubble Sort
  3.  Insertion Sort
  4.  Merge Sort
  5.  Shell Sort

Tools Used:
  1.  PIC18F4550
  2.	SSD1306 OLED (128x64)
  3.	UART
  4.	CCS C Compiler
  5.	Proteus Software

Libraries Used:
  1.	18f4550.h
  2.	SSD1306OLED.c
  3.	string.h
  4.	stdio.h 
  
  
  ![](RackMultipart20200617-4-5nr195_html_a824c53f7d924610.png)

# **SENSE**

**ECE3003: Microcontroller and its applications**

#
**– FINAL REPORT**

# **REPORT TITLE**

**Sorting Algorithm Visualizer**

**By**

**Anshul Goyal(17BEC0524)**

**Achal (18BEC0605)**

**Under the Guidance of**

**Prof. Padmini T N**

# **Abstract**

There are various sorting algorithms available and they are a topic of discussion in computer science community from decades. A visual representation of these algorithms can help learners get to know the working of these algorithms. This project is a visual representation of many famous sorting algorithms, like Selection Sort, Bubble Sort, Insertion Sort, Merge Sort, Shell Sort. We are using PIC microcontroller and OLED screen along with UART connection to send signals to microcontroller. Programming language used here is Embedded C and the compiler is used is CCS compiler. A simulation of the project is done using Proteus software.

# **Introduction**

Sorting is nothing but alphabetizing, categorizing, arranging or putting items in an ordered sequence. It is a key fundamental operation in the field of computer science. It is of extreme importance because it adds usefulness to data. overnight development. Its footprints can be traced back in 7th century BCE. Abdul Wahab and O.Issa (2009) state that King of Assyria used the idea of arranging clay tablets for Royal Library sorted according to their shape. Sorting is not a jaguar leap but it has emerged in parallel with the development of human mind. In computer science, alphabetizing, arranging, categoring or putting data items in an ordered sequence on the basis of similar properties is called sorting. Sorting is of key importance because it optimizes the usefulness of data. We can observe plenty of sorting examples in our daily life, e.g. we can easily find required items in a shopping maal or utility store because the items are kept categorically. Finding a word from dictionary is not a tideous task because all the words are given in sorted form. Similarly, finding a telephone number, name or address from a telephone directory is also very easy due to the blessings of sorting. In computer science, sorting is one of the most important fundamental operations because of its pivotal applications. Priority scheduling and shortest job first scheduling are examples of sorting. Thomas Cormen, Charlese Ronald, Clifford Stein and Rivest Leiserson (2001) state &quot;An algorithms is any well-defined computational procedure that takes some value, or set of values, as input and produces some value or set of values as output&quot;. A number of sorting algorithms are available with pros and cons. Alfred Aho, John Hopcroft and Jeffrey Ullman (1974) has classified algorithms on the basis of computational complexity, number of swaps, stability, usage of extra resources and recursion.

We have implement a visualization tool which take input as numbers and sort them in ascending order, it displays each step of the algorithm visually so the algorithm can be better understood. ![](RackMultipart20200617-4-5nr195_html_b98db7689be37aad.png)

# **Overview of the Hardware**

![](RackMultipart20200617-4-5nr195_html_1da0d24be8b3457c.gif) ![](RackMultipart20200617-4-5nr195_html_fdf580e65ab3d594.gif) ![](RackMultipart20200617-4-5nr195_html_6d915f50d439bb00.gif) ![](RackMultipart20200617-4-5nr195_html_70faf22d7bab9b41.gif) ![](RackMultipart20200617-4-5nr195_html_6d4ae89b82e5e8ec.gif) ![](RackMultipart20200617-4-5nr195_html_935a5cd3c58097b4.gif)

# UART

# OLED

# Microcontroller

# **Flow of Working**

![](RackMultipart20200617-4-5nr195_html_9911d115a5a60a65.gif)

Input numbers

![](RackMultipart20200617-4-5nr195_html_edda3c35143e0ce1.gif) ![](RackMultipart20200617-4-5nr195_html_473eef9890ffb4d.gif) ![](RackMultipart20200617-4-5nr195_html_9911d115a5a60a65.gif) ![](RackMultipart20200617-4-5nr195_html_fd1361c67a946c2a.gif) ![](RackMultipart20200617-4-5nr195_html_3b41bd7677d9e174.gif)

Number of digits to sort

Data sorting step by step

Step Visualization

![](RackMultipart20200617-4-5nr195_html_7d7a6dff8c8051ae.gif)

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

# **Methodology**

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

**PIC18F4550 Pinout Configuration**

![](RackMultipart20200617-4-5nr195_html_91531a57812c42d4.jpg)

It is a 40 pin device as shown in **PIC18F4550 pin diagram**. There are so many features for a controller the manufacturer cannot provide that many I/O pins. So many pins of controller have multiple features. These features can be enabled through programming depending on requirement. We will describe each pin functions briefly below.

| Program Memory Type | Flash |
| --- | --- |
| Program Memory Size (KB) | 32 |
| CPU Speed (MIPS/DMIPS) | 12 |
| SRAM (B) | 2,048 |
| Data EEPROM/HEF (bytes) | 256 |
| Pin Count | 40 |
| Temperature Range (°C) | -40 to 85 |
| Timers | 1 x 8-bit, 3 x 16-bit |

# **Project Code:**

_#define SSD1306\_RST PIN\_B2_

_#include \&lt;18f4550.h\&gt;_ _ **//PIC header file** _

_#device PASS\_STRINGS = IN\_RAM_

_#include \&lt;string.h\&gt;_

_#include \&lt;stdio.h\&gt;_

_#include \&lt;stdlib.h\&gt;_

_ **//Inirialization if PIC Microcontroller and OLED screen** _

_#fuses NOMCLR, INTRC\_IO, NOBROWNOUT, NOLVP_

_#use delay(clock = 8MHz)_

_#use rs232(UART1, baud = 9600)_

_#fuses NOMCLR, INTRC\_IO, NOWDT, NOPROTECT, NOLVP_

_#use fast\_io(B)_

_#use I2C(MASTER, I2C1, FAST = 8000000, stream = SSD1306\_STREAM)_

_#include \&lt;SSD1306OLED.c\&gt;_ _ **//OLED Screen library file** _

_void DisplayBars(int a[],n){_ _ **//Function to display the bars** _

_SSD1306\_ClearDisplay();_

_int i;_

_for(i=0;i\&lt;n;i++){_

_SSD1306\_FillRect(0+i\*10,0,5,a[i]);_ _**//Make a rectangle at (0+i\*10, 0) location**_

_}_

_SSD1306\_Display();_

_delay\_ms(200);_

_}_

_ **//Code for Bubble Sort** _

_void bubbleSort(int arr[],int n)_

_{_

_SSD1306\_DrawText(2, 7, &quot;Bubble Sort&quot;, 1);_

_SSD1306\_Display();_

_delay\_ms(1000);_

_int i, j;_

_DisplayBars(arr,n);_

_for (i = 0; i \&lt; n-1; i++)_

_{_

_for (j = 0; j \&lt; n-i-1; j++)_

_if (arr[j] \&gt; arr[j+1]){_

_int temp=arr[j];_

_arr[j]=arr[j+1];_

_arr[j+1]=temp;_

_DisplayBars(arr,n);_

_delay\_ms(500);_

_}_

_}_

_}_

_ **//Code for Selection Sort** _

_void selectionSort(int arr[],int n)_

_{_

_//selection sort_

_SSD1306\_DrawText(2, 7, &quot;Selection Sort&quot;, 1);_

_SSD1306\_Display();_

_delay\_ms(1000);_

_int i, j,min\_idx;_

_DisplayBars(arr,n);_

_for (i = 0; i \&lt; n-1; i++)_

_{_

_min\_idx = i;_

_for (j = i+1; j \&lt; n; j++)_

_if (arr[j] \&lt; arr[min\_idx])_

_min\_idx = j_

_int temp=arr[i];_

_arr[i]=arr[min\_idx];_

_arr[min\_idx]=temp;_

_DisplayBars(arr,n);_

_delay\_ms(500);_

_}_

_}_

_ **//Code for Insertion Sort** _

_void insertionSort(int arr[],int n)_

_{_

_//insertion sort_

_SSD1306\_DrawText(2, 7, &quot;insertion Sort&quot;, 1);_

_SSD1306\_Display();_

_delay\_ms(1000);_

_int i, j,key;_

_DisplayBars(arr,n);_

_for (i = 1; i \&lt; n; i++) {_

_key = arr[i];_

_j = i - 1;_

_while (j \&gt;= 0 &amp;&amp; arr[j] \&gt; key) {_

_arr[j + 1] = arr[j];_

_j = j - 1;_

_DisplayBars(arr,n);_

_delay\_ms(500);_

_}_

_arr[j + 1] = key;_

_}_

_}_

_ **//Code for Merge Sort** _

_void mergeSort(int arr[],int n){_

_SSD1306\_DrawText(2, 7, &quot;merge Sort&quot;, 1);_

_SSD1306\_Display();_

_delay\_ms(1000);_

_int temp[20],i,j,k,size,l1,h1,l2,h2;_

_for(size=1; size \&lt; n; size=size\*2 )_

_{_

_l1=0;_

_k=0;_

_while( l1+size \&lt; n)_

_{_

_h1=l1+size-1;_

_l2=h1+1;_

_h2=l2+size-1;_

_if( h2\&gt;=n )_

_h2=n-1;_

_i=l1;_

_j=l2_

_while(i\&lt;=h1 &amp;&amp; j\&lt;=h2 )_

_{_

_if( arr[i] \&lt;= arr[j] )_

_temp[k++]=arr[i++];_

_else_

_temp[k++]=arr[j++];_

_}_

_while(i\&lt;=h1)_

_temp[k++]=arr[i++];_

_while(j\&lt;=h2)_

_temp[k++]=arr[j++];_

_l1=h2+1;_

_}_

_for(i=l1; k\&lt;n; i++)_

_temp[k++]=arr[i];_

_for(i=0;i\&lt;n;i++)_

_arr[i]=temp[i];_

_DisplayBars(arr,n);delay\_ms(500);_

_}_

_}_

_ **//Code for Shell Sort** _

_void shellSort(int array[],int size)_

_{_

_SSD1306\_DrawText(2, 7, &quot;Shell Sort&quot;, 1);_

_SSD1306\_Display();_

_delay\_ms(1000);_

_DisplayBars(array,size);_

_int i = 0, j = 0, k = 0, mid = 0;_

_for (k = size / 2;k \&gt; 0;k /= 2)_

_{_

_for (j = k;j \&lt; size;j++)_

_{_

_for (i = j - k;i \&gt;= 0;i -= k)_

_{_

_if (array[i + k] \&gt;= array[i])_

_{_

_break;_

_}_

_else_

_{_

_mid = array[i];_

_array[i] = array[i + k];_

_array[i + k] = mid;_

_DisplayBars(array,size);delay\_ms(500);_

_}_

_}_

_}_

_}_

_}_

_void copyMatrix(int X[],int arr[],int n){_

_int i;_

_for(i=0;i\&lt;n;i++){_

_arr[i]=X[i];_

_}_

_}_

_void main(){_

_setup\_oscillator(OSC\_8MHZ);_

_ **//Initialize OLED Screen** _

_delay\_ms(1000);_

_SSD1306\_Begin(SSD1306\_SWITCHCAPVCC, SSD1306\_I2C\_ADDRESS);_

_SSD1306\_Display();_ _ **//Display default image** _

_delay\_ms(2000);_

_SSD1306\_ClearDisplay();_ _ **//Clear the display** _

_SSD1306\_DrawText(2, 7, &quot;Waiting for Inputs....&quot;, 1);_

_SSD1306\_Display();_

_delay\_ms(500);_

_printf(&quot;How Many Numbers to sort??(\&lt;=13)&quot;);_ _ **//Print text on screen** _

_printf(&quot;\n\r&quot;);_

_int count=0;_

_char number[5];_ _ **//Array to store input numbers** _

_while(TRUE){_ _ **//Loop to get Number inputs from the UART** _

_if(kbhit()){_

_scanf(&quot;%s&quot;,number);_

_puts(number);_

_count++;_

_if(count==1){_

_break;_

_}_

_}_

_}_

_int n=atoi(number);_

_count=0;_

_printf(&quot;\n\r&quot;);_

_printf(&quot;Value of n is %d\n&quot;, n);_

_printf(&quot;\n\r&quot;);_

_ **//Numbers inside array number are in the form of chars, convert them to integers** _

_int X[]={};_

_char Array[100]=&quot;&quot;;_

_char str[20];_

_int cnt=0;_

_while(TRUE){_

_if(kbhit()){_

_scanf(&quot;%s&quot;,str);_

_puts(str);_

_X[cnt++]=atoi(str);_

_count++;_

_if(count==n){_

_break;_

_}_

_}_

_}_

_printf(&quot;\nNumbers Received....Look At OLED for sorting&quot;);_

_**//Start displaying numbers stored in array X[]**_

_SSD1306\_ClearDisplay();_

_DisplayBars(X,n);_ _**//Call display bar function to display X[] matrix**_

_delay\_ms(1000);_ _ **//Give a delay of 1000ms** _

_SSD1306\_ClearDisplay();__ **//Clear the display** _

_int arr[13]={};_

_copyMatrix(X,arr,n);_

_selectionSort(arr,n);_ _ **//Call selection sort function and display the bars** _

_SSD1306\_ClearDisplay();_

_delay\_ms(500);_

_copyMatrix(X,arr,n);_

_bubbleSort(arr,n);_ _ **//Call bubble sort function and display the bars** _

_SSD1306\_ClearDisplay();_

_delay\_ms(500);_

_copyMatrix(X,arr,n);_

_insertionSort(arr,n);_ _ **//Call insertion sort function and display the bars** _

_SSD1306\_ClearDisplay();_

_delay\_ms(500);_

_copyMatrix(X,arr,n);_

_mergeSort(arr,n);_ _ **//Call merge sort function and display the bars** _

_SSD1306\_ClearDisplay();_

_delay\_ms(500);_

_copyMatrix(X,arr,n);_

_shellSort(arr,n);_ _ **//Call shell sort function and display the bars** _

_SSD1306\_ClearDisplay();_

_delay\_ms(500);_

_SSD1306\_ClearDisplay();_

_SSD1306\_DrawText(2, 7, &quot;ALL SORTED&quot;, 1);_

_SSD1306\_Display();_

_}_

# **Proteus Simulation:**

![](RackMultipart20200617-4-5nr195_html_d8e98866cebba345.png)

_Fig. Sorting Algorithm Visualizer front Screen_

![](RackMultipart20200617-4-5nr195_html_5cc9797b0fa11e22.png)

_Fig. Enter Number to be Sorted_

![](RackMultipart20200617-4-5nr195_html_9aa1bc4f5c65c211.png)

_Fig. Sorting of numbers initiated_

![](RackMultipart20200617-4-5nr195_html_497d23f73f7e6069.png)

_Fig. Sorting in progress_

![](RackMultipart20200617-4-5nr195_html_81d040c00d5fc95a.png)

_Fig. Numbers sorted in order_

# **Conclusion:**

Five famous sorting algorithms are implemented in Embedded C programming language. Quick Sort is the fastest of all the algorithms simulated. And Bubble has the worst time complexity as it is taking the most amount of time in the visualization.

We understood the working of the sorting algorithms by looking at step by step processes in algorithm.
