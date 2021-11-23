// 
// Создание и обход дерева двоичного поиска
// preorder, inorder, and postorder
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Узел дерева                           
struct treeNode {                                           
   struct treeNode *leftPtr; // указатель не левое поддерево
   int data; // значение узла                             
   struct treeNode *rightPtr; // указатель не правое поддерево
}; // конец  struct treeNode                             

typedef struct treeNode TreeNode; //  типа struct treeNode
typedef TreeNode *TreeNodePtr; // указатель на узел TreeNode*

// прототипы функций
void insertNode( TreeNodePtr *treePtr, int value );
void inOrder( TreeNodePtr treePtr );
void preOrder( TreeNodePtr treePtr );
void postOrder( TreeNodePtr treePtr );

// функция  main 
int main( void )
{ 
   unsigned int i; // счетчик 
   int item; // переменная - значение
   TreeNodePtr rootPtr = NULL; // корень дерева сначала - empty

   srand( time( NULL ) ); 
   puts( "The numbers being placed in the tree are:" );

   // псевдослучайные числа  0 and 14 - значения в узлах
   for ( i = 1; i <= 10; ++i ) { 
      item = rand() % 15;
      printf( "%3d", item );
      insertNode( &rootPtr, item );
   } // конец for

   //обойти дерево в прямом порядке
   puts( "\n\nThe preOrder traversal is:" );
   preOrder( rootPtr );

   // бойти дерево inOrder
   puts( "\n\nThe inOrder traversal is:" );
   inOrder( rootPtr );

   // обойти дерево в обратном postOrder
   puts( "\n\nThe postOrder traversal is:" );
   postOrder( rootPtr );
} //конец  main

// вставить узел в дерево
void insertNode( TreeNodePtr *treePtr, int value )
{ 
   // если дерево - пустое
   if ( *treePtr == NULL ) {   
      *treePtr = malloc( sizeof( TreeNode ) );

      // если память выделена - присвоить значение
      if ( *treePtr != NULL ) { 
         ( *treePtr )->data = value;
         ( *treePtr )->leftPtr = NULL;
         ( *treePtr )->rightPtr = NULL;
      } // конец if
      else {
         printf( "%d not inserted. No memory available.\n", value );
      } // конец ошибка размещения else
   } // конец if
   else { // дерево не пустое
      // значение для вставки меньше значения текущего узла
      if ( value < ( *treePtr )->data ) {                   
         insertNode( &( ( *treePtr )->leftPtr ), value );   
      } // конец if                                        

      // значение для вставки больше значения текущего узла
      else if ( value > ( *treePtr )->data ) {                 
         insertNode( &( ( *treePtr )->rightPtr ), value );     
      } // конец else if                                      
      else { //   повторяющиеся значения - пропускаем
         printf( "%s", "dup" );
      } // конец else
   } // конец else
} // конец функции insertNode

// выполняет симметричный обход дерева
void inOrder( TreeNodePtr treePtr )
{ 
   // если дерево не пустое, выполнить обход
   if ( treePtr != NULL ) {                
      inOrder( treePtr->leftPtr );         
      printf( "%3d", treePtr->data );      
      inOrder( treePtr->rightPtr );        
   } // конец if                          
} //конец функции inOrder

// выполняет обход дерева в прямом порядке
void preOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {                
      printf( "%3d", treePtr->data );      
      preOrder( treePtr->leftPtr );        
      preOrder( treePtr->rightPtr );       
   } // end if                          
} // конец функции preOrder

//  выполняет обход дерева в обратном порядке
void postOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {                
      postOrder( treePtr->leftPtr );       
      postOrder( treePtr->rightPtr );      
      printf( "%3d", treePtr->data );      
   } // end if                          
} // конец функции postOrder

