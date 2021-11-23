// 
// Очередь
#include <stdio.h>
#include <stdlib.h>

// элемент очереди                    
struct queueNode {                                   
   char data; // данные определены как символ -  char          
   struct queueNode *nextPtr; // указатель на следующий элемент
}; // определение структуры queueNode                     

typedef struct queueNode QueueNode; // элемент очереди
typedef QueueNode *QueueNodePtr; // указатель на элемент очереди

// прототипы функций
void printQueue( QueueNodePtr currentPtr );
int isEmpty( QueueNodePtr headPtr );
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr );
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, 
   char value );
void instructions( void );

// функция main
int main( void )
{ 
   QueueNodePtr headPtr = NULL; // инициализация указателя начала очереди headPtr
   QueueNodePtr tailPtr = NULL; // инициализация указателя конец очереди  tailPtr
   unsigned int choice; // меню
   char item; // char символ элемента очереди

   instructions(); //меню инструкций menu
   printf( "%s", "? " );
   scanf( "%u", &choice );

   // пока не введут choice = 3
   while ( choice != 3 ) { 

      switch( choice ) { 
         // вставки элемента в очередь
         case 1:
            printf( "%s", "Enter a character: " );
            scanf( "\n%c", &item );
            enqueue( &headPtr, &tailPtr, item );
            printQueue( headPtr );
            break;
         // удаление элемента из  очереди
         case 2:
            // если очередь не пуста

            if ( !isEmpty( headPtr ) ) { 

               item = dequeue( &headPtr, &tailPtr );
               printf( "%c has been dequeued.\n", item );
            } // end if

            printQueue( headPtr );
            break;
         default:
            puts( "Invalid choice.\n" );
            instructions();
            break;
      } // конец оператора switch

      printf( "%s", "? " );
      scanf( "%u", &choice );
   } //конец цикла while

   puts( "End of run." );
} // конец  main

// инструкции пользователю
void instructions( void )
{ 
   printf ( "Enter your choice:\n"
           "   1 to add an item to the queue\n"
           "   2 to remove an item from the queue\n"
           "   3 to end\n" );
} // конец функции - инструкции

// вставка элемента в конец очереди
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, 
   char value )
{ 
   QueueNodePtr newPtr; // указатель на новый элемент

   newPtr = malloc( sizeof( QueueNode ) );

   if ( newPtr != NULL ) { // успешно выделена память
      newPtr->data = value;
      newPtr->nextPtr = NULL;

      // if empty, insert node at head
      if ( isEmpty( *headPtr ) ) {
         *headPtr = newPtr;
      } // end if
      else {
         ( *tailPtr )->nextPtr = newPtr;

      } // end else

      *tailPtr = newPtr;
   } // end if
   else {
      printf( "%c not inserted. No memory available.\n", value );
   } // end else
} // конец функции enqueue

// удаление элемента из "головы" очереди  head
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr )
{ 
   char value; // символ элемента очереди
   QueueNodePtr tempPtr; //временный указатель на элемент очереди

   value = ( *headPtr )->data;      
   tempPtr = *headPtr;              
   *headPtr = ( *headPtr )->nextPtr;

   // если очередь пуста
   if ( *headPtr == NULL ) {
      *tailPtr = NULL;
   } // 

   free( tempPtr );
   return value;
} // конец функции dequeue

// возвращает 1, если очередь пустая и 0 в противном случае
int isEmpty( QueueNodePtr headPtr )
{ 
   return headPtr == NULL;
} // конец функции isEmpty

// вывод очереди
void printQueue( QueueNodePtr currentPtr )
{ 
   // если очередь пустая
   if ( currentPtr == NULL ) {
      puts( "Queue is empty.\n" );
   } // 
   else { 
      puts( "The queue is:" );

      // while not end of queue
      while ( currentPtr != NULL ) { 

         printf( "%c --> ", currentPtr->data );
         currentPtr = currentPtr->nextPtr;
      } // end while

      puts( "NULL\n" );
   } // end else
} // конец функции printQueue

