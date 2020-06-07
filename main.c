#define SSD1306_RST    PIN_B2
#include <18f4550.h>
#device PASS_STRINGS = IN_RAM
#include <string.h>
#include <stdio.h> 
#include <stdlib.h>

#fuses NOMCLR, INTRC_IO, NOBROWNOUT, NOLVP
#use delay(clock = 8MHz)
#use rs232(UART1, baud = 9600)

#fuses NOMCLR, INTRC_IO, NOWDT, NOPROTECT, NOLVP
#use fast_io(B)
#use I2C(MASTER, I2C1, FAST = 8000000, stream = SSD1306_STREAM)
 

#include <SSD1306OLED.c>

void DisplayBars(int a[],n){
SSD1306_ClearDisplay();
int i;
for(i=0;i<n;i++){
SSD1306_FillRect(0+i*10,0,5,a[i]);
}
  SSD1306_Display();
  delay_ms(200);
}



void bubbleSort(int arr[],int n)
{
//Bubble sort
  SSD1306_DrawText(2, 7, "Bubble Sort", 1);
  SSD1306_Display();
  delay_ms(1000);
  int i, j;
  DisplayBars(arr,n);
  
  
  
  //Algorithm
  for (i = 0; i < n-1; i++)
    {
      for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            DisplayBars(arr,n);
            delay_ms(500);
        }      
    }
}

void selectionSort(int arr[],int n)
{
//selection sort
  SSD1306_DrawText(2, 7, "Selection Sort", 1);
  SSD1306_Display();
  delay_ms(1000);
  int i, j,min_idx;
  
  DisplayBars(arr,n);
  
  for (i = 0; i < n-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
              min_idx = j;
  
        
      
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
        
        DisplayBars(arr,n);
        delay_ms(500);
    }
}




void insertionSort(int arr[],int n)
{
//insertion sort
  SSD1306_DrawText(2, 7, "insertion Sort", 1);
  SSD1306_Display();
  delay_ms(1000);
  int i, j,key;
  
  DisplayBars(arr,n);
  for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
            DisplayBars(arr,n);
            delay_ms(500);
        } 
        arr[j + 1] = key; 
       
        
        
    }
}

void mergeSort(int arr[],int n){
SSD1306_DrawText(2, 7, "merge Sort", 1);
  SSD1306_Display();
  delay_ms(1000);


int temp[20],i,j,k,size,l1,h1,l2,h2;

   for(size=1; size < n; size=size*2 )
   {
      l1=0;
      k=0;
      while( l1+size < n)
      {
         h1=l1+size-1;
         l2=h1+1;
         h2=l2+size-1;
         
         if( h2>=n ) 
            h2=n-1;
         
      
         i=l1;
         j=l2;
         
         while(i<=h1 && j<=h2 )
         {
            if( arr[i] <= arr[j] )
               temp[k++]=arr[i++];
            else
               temp[k++]=arr[j++];
         }
         
         while(i<=h1)
            temp[k++]=arr[i++];
         while(j<=h2)
            temp[k++]=arr[j++];
         
         l1=h2+1; 
         
         
      }

     
      for(i=l1; k<n; i++) 
         temp[k++]=arr[i];

      for(i=0;i<n;i++)
        arr[i]=temp[i];

       DisplayBars(arr,n);delay_ms(500);
      
   }
}


void shellSort(int array[],int size)
{
SSD1306_DrawText(2, 7, "Shell Sort", 1);
  SSD1306_Display();
  delay_ms(1000);
  DisplayBars(array,size);
    int i = 0, j = 0, k = 0, mid = 0;
    for (k = size / 2;k > 0;k /= 2)
    {
        for (j = k;j < size;j++)
        {
            for (i = j - k;i >= 0;i -= k)
            {
                if (array[i + k] >= array[i])
                {
                    break;
                }
                else
                {
                    mid = array[i];
                    array[i] = array[i + k];
                    array[i + k] = mid;
                    DisplayBars(array,size);delay_ms(500);
                }
            }
        }
    }
    
}

void copyMatrix(int xxx[],int arr[],int n){
int i;
for(i=0;i<n;i++){
  arr[i]=xxx[i];
  }
}


void main(){
setup_oscillator(OSC_8MHZ);
 
  delay_ms(1000);
  SSD1306_Begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);
  SSD1306_Display();
  delay_ms(2000);
 

  SSD1306_ClearDisplay();
 
  
 
  SSD1306_DrawText(2, 7, "Waiting for Inputs....", 1);
  SSD1306_Display();




  delay_ms(500);                                
  
  printf("How Many Numbers to sort??(<=13)");
  
  printf("\n\r");
    
    int count=0;
    char number[5];
    while(TRUE){
    if(kbhit()){                             
      scanf("%s",number);                               
      puts(number);
      count++;
      if(count==1){
       
      break;
      }
    }
  }
    int n=atoi(number); 
    count=0;
    printf("\n\r");  
    printf("Value of n is %d\n", n);
    printf("\n\r");  
  
  int xxx[]={};
  char Array[100]="";
  char str[20];
  int cnt=0;
  while(TRUE){
    if(kbhit()){    
      scanf("%s",str); 
      puts(str);
      xxx[cnt++]=atoi(str);
      
      count++;
      if(count==n){
     
      break;
      }
    }
  }





   

printf("\nNumbers Received....Look At OLED for sorting");

SSD1306_ClearDisplay();
DisplayBars(xxx,n);
delay_ms(1000);
SSD1306_ClearDisplay();





//OLED Command Section
  
int arr[13]={};
  
copyMatrix(xxx,arr,n);  
selectionSort(arr,n);
SSD1306_ClearDisplay();
delay_ms(500);
 

copyMatrix(xxx,arr,n);
bubbleSort(arr,n);
SSD1306_ClearDisplay();
delay_ms(500);
  
 copyMatrix(xxx,arr,n);
 insertionSort(arr,n);
 SSD1306_ClearDisplay();
 delay_ms(500);
   
 copyMatrix(xxx,arr,n);
 mergeSort(arr,n);
 SSD1306_ClearDisplay();
 delay_ms(500);
   
 copyMatrix(xxx,arr,n);
 shellSort(arr,n);
 SSD1306_ClearDisplay();  
 delay_ms(500);
 
 SSD1306_ClearDisplay(); 
 SSD1306_DrawText(2, 7, "ALL SORTED", 1);
 SSD1306_Display();

}


