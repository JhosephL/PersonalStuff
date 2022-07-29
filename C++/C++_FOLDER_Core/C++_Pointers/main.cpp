
#include <iostream> // cout and endl functions
#include <stdint.h> // Address (hex) to int
#include <cstring> // strlen (content pointer)
#include <math.h> // pow and log functions

using namespace std;


void ALL_FROM () {

	// https://www.youtube.com/watch?v=zuegQmMdy8M
	// https://www.youtube.com/watch?v=iChalAKXffs&t=949s

}

void fSizeDataTypes();
void fWorkingWithPointers();
void fPointersArithmetic();
void fPointersToPointers();
void fCallByReference();			void fCallByReference_AUX(int*p);
void fPointersANDarrays();
void fArraysAsFA();					void fArraysAsFA_AUX(int array[],int size);
void fCharactersAandP();			void fCharactersAandP_AUX(char*aux);
void f2Dpointers();
void fMultiDimArrays();				void fMultiDimArrays_AUX(int (*p)[2][2][2],int size);
void fDynamicMemory();
void fPointersAsFunctions();		int*fPointersAsFunctions_AUX(int*base,int*expo);
void fFunctionPointers();			double fFunctionPointers_AUX(int base,int arg);					double fFunctionPointers_AUX2(int ind,int rad);				void fFunctionPointers_AUX3(string text);
void fCallbacks();					void fCallbacks_AUX(void(*p)());								void fCallbacks_AUX2();										int fCallbacks_AUX3(const void*a,const void*b);
void fSOF();						void fMemoryLeak();

void fPrubing();



int main() {


	cout << endl;
	cout << " \n\n\n & *** \t LET'S LEARN ABOUT POINTERS. \t *** & \n\n\n " ;


	fSizeDataTypes();
	fWorkingWithPointers();
	fPointersArithmetic();
	fPointersToPointers();
	fCallByReference();
	fPointersANDarrays();
	fArraysAsFA();
	fCharactersAandP();
	f2Dpointers();
	fMultiDimArrays();
	fDynamicMemory();
	fPointersAsFunctions();
	fFunctionPointers();
	fCallbacks();
	fSOF();
	fMemoryLeak();

	// fPrubing();


	cout << " \n\n & *** \t END OF THE SESSION. \t *** & \n\n " << endl ;

	cout << endl << endl;


return 0;
}



void fSizeDataTypes () {


	cout << "\nSIZE OF DATA TYPES (IN BYTES)\n" << endl ;


	cout << " \t Size of char = \t\t " << sizeof ( char ) << endl ;
	cout << " \t Size of short int = \t\t " << sizeof ( short int ) << endl ;
	cout << " \t Size of int = \t\t\t " << sizeof ( int ) << endl ;
	cout << " \t Size of long = \t\t " << sizeof ( long ) << endl ;
	cout << " \t Size of long int = \t\t " << sizeof ( long int ) << endl ;
	cout << " \t Size of long long = \t\t " << sizeof ( long long ) << endl ;
	cout << " \t Size of long long int = \t " << sizeof ( long long int ) << endl ;
	cout << " \t Size of float = \t\t " << sizeof ( float ) << endl ;
	cout << " \t Size of double = \t\t " << sizeof ( double ) << endl ;
	cout << " \t Size of long double = \t\t " << sizeof ( long double ) << endl ;
	cout << " \t Size of string = \t\t " << sizeof ( string ) << endl ;
	cout << endl;
	cout << " \t Size of ANY pointer = \t\t " << sizeof ( void* ) << endl;


	cout << endl;


}


void fWorkingWithPointers () {


	cout << "\nPOINTERS INCEPTION\n" << endl ;


	/* --->-->-> */ int a = 0; /* <-<--<--- */
	/* --->-->-> */ int * p = &a; /* <-<--<--- */ // int*p == int *p == int* p

	cout << " \t Evaluating 'a'. \t The value of the variable 'a' is \t ==> \t "       << a   << endl ;  // a
	cout << " \t Evaluating '&a'. \t The address of the variable 'a' is \t ==> \t "  << &a  << endl ;  // address of a
	cout << " \t Evaluating 'p'. \t The address of the variable 'a' is \t ==> \t "   << p   << endl ;  // where is pointing p, it means to a
	cout << " \t Evaluating '*p'. \t The value of the variable 'a' is \t ==> \t "      << *p  << endl ;  // the content of a
	cout << " \t Evaluating '&p'. \t The address of the pointer 'p' is \t ==> \t "   << &p  << endl ;  // address of p (pointer)
	cout << " \t Evaluating '&*p'. \t The address of the variable 'a' is \t ==> \t " << &*p << endl ;  // where is pointing p, it means to a

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	cout << " \t a \t == \t *p \t\t ==> \t\t\t"    <<  a   << " \t == \t " << *p  << endl ;
	cout << " \t *&*p \t == \t *p \t\t ==> \t\t\t" << *&*p << " \t == \t " << *p  << endl ;
	cout << " \t p \t == \t &*p \t\t ==> \t\t "    <<  p   << " \t == \t " << &*p << endl ;
	cout << " \t *&p \t == \t &*p \t\t ==> \t\t "  << *&p  << " \t == \t " << &*p << endl ;
	
	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;
	
	/* --->-->-> */ *p = 1; /* <-<--<--- */

	cout << " \t Evaluating '*p = 1'. The value that holds '*p' is ==> " << *p << endl ;
	cout << " \t Evaluating '*p = 1'. The new assigned value to 'a' is ==> " << a << endl ;
	cout << " \t Evaluating '*p = 1'. The pointer directon of 'p' keep being ==> " << p << ". The address of 'a'. " << endl ;

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	cout << " \t It's possible to do arithmetic operations with the pointer 'p' (int*p)." << endl ;
	cout << " \t Original pointer address \t ==> \t " << p << " == " << reinterpret_cast<uintptr_t> (p) << endl ; // Just '+' and '-' are valid to do pointers arithmetic operations
	cout << " \t\tEvaluating 'p + 1' \t ==> \t " << p+1 << " == " << reinterpret_cast<uintptr_t> (p+1) << endl ; // The pointer's address adds 4 to itself 'cause the pointer (that is pointing to an integer) receive 4 bytes
	cout << " \t\tEvaluating 'p - 1' \t ==> \t " << p-1 << " == " << reinterpret_cast<uintptr_t> (p-1) << endl ; // The pointer's address subtracts 4 to itself 'cause the pointer (that is pointing to an integer) receive 4 bytes

	cout << endl;

	cout << " \t It's possible to do another arithmetic operations with the value at the pointer is pointing." << endl ;
	cout << " \t Evaluating '*p + 1' when 'a' is " << a << " ==> " << *p+1 << endl ;

	cout << endl;

	cout << " \t Also it is possible to know the value of an (unknown) address." << endl ;
	cout << " \t Evaluating '*(p+1)' at " << p+1 << ", its value is ==> " << *(p+1) << endl ;

	cout << endl;


}


void fPointersArithmetic () {


	cout << "\nPOINTERS ARITHMETIC\n" << endl ;

	
	/* --->-->-> */ int a = 233; /* <-<--<--- */
	/* --->-->-> */ int * p_Int = &a; /* <-<--<--- */

	cout << " \t The address that holds 'p_Int' is \t ==> \t " << p_Int << endl ;
	cout << " \t The value of 'a' is \t\t\t ==> \t " << *p_Int << endl ;

	cout << endl;

	/* --->-->-> */ char bb = '@'; /* <-<--<--- */
	/* --->-->-> */ char * p_Char = &bb; /* <-<--<--- */

	cout << " \t The value of 'b' is \t\t\t ==> \t " << *p_Char << endl ;
	cout << " \t The address of 'b' is \t\t\t ==> \t " << &bb << endl ;
	cout << " \t The address that holds 'p_Char' is \t ==> \t " << &p_Char << endl ; // Char Pointers are address memory
	cout << " \t Chain of characters by 'p_Char' is \t ==> \t " << p_Char << endl ; // Thanks to p_Char is a char*, it also can be used as a string // p_Char is holding the content of b

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	// p_Char = p_Int; Cannot be valid, so the assignation has to be done thru casting

	/* --->-->-> */ p_Char = (char*) p_Int; /* <-<--<--- */

	cout << " \t Evaluating 'p_Char = (char*) p_Int'. The value (address) of 'p_Char' is \t ==> \t " << &p_Char << endl ; // Char Pointers are address memory
	cout << " \t Evaluating 'p_Char = (char*) p_Int'. The value at 'p_Char' is pointing is \t ==> \t " << (int) *p_Char << endl ; // The number that holds a
	cout << " \t Evaluating 'p_Char = (char*) p_Int'. The value at 'p_Char' is pointing is \t ==> \t " << *p_Char << endl ; // ASCII character
	cout << " \t Evaluating 'p_Char = (char*) p_Int'. The value that 'p_Char' is holding is \t ==> \t " << p_Char << endl ; // Thanks to p_Char is a char*, it also can be used as a string // p_Char is holding the content of p_Int

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	cout << " \t Evaluating 'p_Char + 0'. The value at p_Char is pointing is \t ==> \t " << p_Char[0] << endl ; // *(p_Char+i) == p_Char[i] // ASCII character
	cout << " \t Evaluating 'p_Char + 0'. The value at p_Char is pointing is \t ==> \t " << (int) p_Char[0] << endl ; // *(p_Char+i) == p_Char[i] // The number that holds a

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	/* --->-->-> */ int c = 987; /* <-<--<--- */
	/* --->-->-> */ int * p_c = &c; /* <-<--<--- */

	cout << " \t The address of 'p_c' is ==> " << &p_c << endl ;
	cout << " \t The address that holds 'p_c' (and where 'c' is allocated) is ==> " << p_c << endl ;
	cout << " \t The value of 'c' is ==> " << *p_c << endl ;

	cout << endl;

	/* --->-->-> */ void * p_Void = p_c; /* <-<--<--- */
	
	cout << " \t Evaluating 'p_Void = p_c'. The address of 'p_Void' is ==> " << &p_Void << endl ;
	cout << " \t Evaluating 'p_Void = p_c'. The content of 'p_Void' (the address that holds 'p_c' and the address where is allocated 'c') is ==> " << p_Void << endl ;

	cout << endl;

	/* --->-->-> */ p_Void = &p_c; /* <-<--<--- */

	cout << " \t Evaluating 'p_Void = &p_c'. The address of 'p_Void' is ==> " << &p_Void << endl ;
	cout << " \t Evaluating 'p_Void = &p_c'. The content of 'p_Void' (the address of 'p_c') is ==> " << p_Void << endl ;

	/* VOID* HOLDS NOTHING BUT ADRESSES */

	cout << endl;


}


void fPointersToPointers () {


	cout << "\nPOINTERS TO POINTERS\n" << endl ;


	/* --->-->-> */ int num = 123; /* <-<--<--- */

	/* --->-->-> */ int * p1 = &num; /* <-<--<--- */
	/* --->-->-> */ int ** p2 = &p1; /* <-<--<--- */
	/* --->-->-> */ int *** p3 = &p2; /* <-<--<--- */
	/* --->-->-> */ int **** p4 = &p3; /* <-<--<--- */
	/* --->-->-> */ int ***** p5 = &p4; /* <-<--<--- */

	cout << " \t The content of 'num' is \t ==> \t " << num << endl ;

	cout << endl;

	cout << " \t The address of 'p1' is \t ==> \t " << &p1 << endl ; // A
	cout << " \t The content of 'p1' is \t ==> \t " << p1 << endl ; // B
	cout << " \t The value at 'p1' is pointing \t ==> \t " << *p1 << endl ; // *

	cout << endl;

	cout << " \t The address of 'p2' is \t ==> \t " << &p2 << endl ; // C
	cout << " \t The content of 'p2' is \t ==> \t " << p2 << endl ; // A
	cout << " \t The value at 'p2' is pointing \t ==> \t " << *p2 << endl ; // B
	cout << " \t Toward 'num' from 'p2' \t ==> \t " << ( *( *p2 ) ) << endl ; // *

	cout << endl;

	cout << " \t The address of 'p3' is \t ==> \t " << &p3 << endl ; // D
	cout << " \t The content of 'p3' is \t ==> \t " << p3 << endl ; // C
	cout << " \t The value at 'p3' is pointing \t ==> \t " << *p3 << endl ; // A
	cout << " \t Toward 'num' from 'p3' \t ==> \t " << ( *( *( *p3 ) ) ) << endl ; // *

	cout << endl;

	cout << " \t The address of 'p4' is \t ==> \t " << &p4 << endl ; // E
	cout << " \t The content of 'p4' is \t ==> \t " << p4 << endl ; // D
	cout << " \t The value at 'p4' is pointing \t ==> \t " << *p4 << endl ; // C
	cout << " \t Toward 'num' from 'p4' \t ==> \t " << ( *( *( *( *p4 ) ) ) ) << endl ; // *

	cout << endl;

	cout << " \t The address of 'p5' is \t ==> \t " << &p5 << endl ; // F
	cout << " \t The content of 'p5' is \t ==> \t " << p5 << endl ; // E
	cout << " \t The value at 'p5' is pointing \t ==> \t " << *p5 << endl ; // D
	cout << " \t Toward 'num' from 'p5' \t ==> \t " << ( *( *( *( *( *p5 ) ) ) ) ) << endl ; // *

	cout << endl;


}


void fCallByReference () {


	cout << "\nCALLING BY REFERENCE\n" << endl ;

	/* --->-->-> */ int a = 100; /* <-<--<--- */

	cout << " \t The value that holds 'a' is ==> " << a << endl ;

	fCallByReference_AUX(&a);

	cout << " \t Evaluating 'fCallByReferenceAUX(&a)'. The new that holds 'a' is ==> " << a << endl ;

	cout << endl;


}

void fCallByReference_AUX ( int * p_a ) {

	*p_a = *p_a + 1 ; // *p_a++ doesn't work

}


void fPointersANDarrays () {


	cout << "\nPOINTERS AND ARRAYS\n" << endl ;
	
	/* --->-->-> */ int a[5] = {1,2,3,4,5}; /* <-<--<--- */
	/* --->-->-> */ int * p_a = &a[0]; /* <-<--<--- */

	cout << " \t The address of 'int a[]' is \t ==> \t " << a << endl ;

	cout << " \t\tThe size of 'a[]' is \t ==> \t " << sizeof(a) << endl;

	cout << " \n\t The addresses of each position inside 'int a[]' is: \n" ;

	/* --->-->-> */ int sizeOf_a = sizeof(a); /* <-<--<--- */ // size = data type (bytes) x variables (or elements)
	
	for(int i=0; i<=sizeOf_a ;i++){ // Thanks to each integer costs 4 bytes, sizeOf_a is reduced 4 times (each cycle)
		cout << " \t a [" << i << "] \t " << p_a << " == " << *p_a << endl ;
		p_a++;
		sizeOf_a = sizeOf_a - 4;
	}

	cout << endl;

	cout << " \t Another way to foring it. " << endl ;

	for(int i=0; i < sizeof(a)/4 ;i++){ // The size is divides by 4 'cause the size memory of each integer
		cout << " \t a [" << i%5 << "] \t " << &a[i] << " == " << a[i] << endl ; // FOR ADDRESS: &a[i] == (a+i) // FOR HOLDING VALUES: a[i] == *(a+i)
	}

	cout << endl;


}


void fArraysAsFA () {


	cout << "\nARRAYS BETWEEN FUNCTIONS\n" << endl ;

	/* --->-->-> */ int a[5] = {1,2,3,4,5}; /* <-<--<--- */
	/* --->-->-> */ int array_size = sizeof(a)/sizeof(a[0]); /* <-<--<--- */

	cout << " \t Initially, the values of 'int a[] are: \n " << endl ;

	for ( int i : a ){
		cout << " \t " << i << endl ;
	}

	cout << endl;

	fArraysAsFA_AUX(a,array_size); // Array size to the function, not from it

	cout << " \t Then, evaluating 'fArraysAsFA_AUX()' function, the values of 'int a[]' are: \n " << endl ;

	for ( int i : a ){
		cout << " \t " << i << endl ;
	}

	cout << endl;


}

void fArraysAsFA_AUX ( int array_int[] , int array_size ) {
	
	for(int i; i<array_size ;i++){
		array_int[i] += array_int[i+1];
	}

}


void fCharactersAandP () {


	cout << "\nCHARACTERS AND ARRAY POINTERS\n" << endl ;

	/* --->-->-> */ char a[6] = {'H','e','l','l','o','\0'}; /* <-<--<--- */ // Explicit way to put null character at initialize
	/* --->-->-> */ char b[6] = "World"; /* <-<--<--- */ // Implicit way to put null charater at initialize

	cout << " \t While the 'a' address is " << &a << ", it's content is: " << a << endl ;
	cout << " \t About 'a': Size = " << sizeof(a) << ". Lenght = " << strlen(a) << endl ;

	cout << endl; // The null character costs 1 byte, and it is not part of the chain though

	cout << " \t While the 'b' address is " << &b << ", it's content is: " << b << endl ;
	cout << " \t About 'b': Size = " << sizeof(b) << ". Lenght = " << strlen(b) << endl ;

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	/* --->-->-> */ char * p = a;  /* <-<--<--- */ // p points directly to the content of a

	cout << " \t Evaluating 'p = a'. The content of 'p' is: " << p << endl ; // p stores the address of a
	cout << " \t About 'p': Size = " << sizeof(p) << ". Lenght = " << strlen(p) << endl ;
	
	cout << endl;

	/* --->-->-> */ p[4] = '\0'; /* <-<--<--- */

	cout << " \t Modifing 'p'. The content of 'p' is: " ; fCharactersAandP_AUX(p) ; cout << endl ;
	cout << " \t About 'p': Size = " << sizeof(p) << ". Lenght = " << strlen(p) << endl ;

	cout << endl;
	
	cout << " \t Modifing 'p'. The content of 'a' is: " ; fCharactersAandP_AUX(a) ; cout << endl ;
	cout << " \t About 'a': Size = " << sizeof(a) << ". Lenght = " << strlen(a) << endl ;

	cout << endl;

	cout << " \t Then the content of 'a' is modified directly thanks to 'p' is pointing directly to 'a'. " << endl ;

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	// 'p' CAN BE A CONSTANT POINTER CHARACTER (conts char * p) BUT IF IT WERE, 'p' COULDN'T MODIFY 'a'
	// char* is a mutable pointer to a mutable character/string. const char* is a mutable pointer to an immutable character/string

	cout << endl;


}

void fCharactersAandP_AUX (char * aux) {

	while ( *aux != '\0' ) { // \0 is because thru that character compiler knows where array's lenght finishes
		cout << *aux ; aux++ ;
	}

}


void f2Dpointers () {


	cout << "\nTWO DIMENSIONAL POINTERS\n" << endl ;

	/* --->-->-> */ int m[3][3] = {1,2,3,4,5,6,7,8,9}; /* <-<--<--- */

	cout << " \t The matrix address is ==> \t " << m << endl ;
	cout << " \t The matrix size is ==> \t " << sizeof(m) << endl ; // size = rows x columns x int (bytes)

	cout << endl;

	cout << " \t The firsts address of matrix's rows are: " << endl ;

	for(int i=0; i < ( ( ( sizeof(m) ) / 3 ) / 4 ) ;i++){ // columns: 3. int size: 4
		cout << " \t Matrix position = " << i*4 << ". Row number = " << i << ". Address = " << m[i] <<  ". Content = " << *m[i] << endl ;
	}

	cout << endl;

	cout << " \t The whole matrix info is: " << endl ;

	for(int i=0; i < ( ( ( ( sizeof(m) ) / 3 ) / 4 ) / 3 ) ;i++){

		for(int ii=0; ii < ( ( ( sizeof(m) ) / 3 ) / 4 ) ;ii++){

			for(int iii=0; iii < ( ( ( sizeof(m) ) / 3 ) / 4 ) ;iii++){

				for(int j=0; j < ( ( ( sizeof(m) ) / 3 ) / 4 ) ;j++){

					cout << " \t Position = \t " << i+j ;

				}

				cout << endl;

				for(int j=0; j < ( ( ( sizeof(m) ) / 3 ) / 4 ) ;j++){

					cout << " \t Address = " << &m[ii][iii+j] ;

				}

				cout << endl;

				for(int j=0; j < ( ( ( sizeof(m) ) / 3 ) / 4 ) ;j++){

					cout << " \t Content = \t " << m[ii][iii+j] ;

				}

				i += 3; iii += 3;
				cout << endl; cout << endl;

			}

		}

	}

	// m[i][ii] == *(m[i]+ii) == *(*(m+i)+ii)

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	/* --->-->-> */ int ( * p_m ) [3] = m; /* <-<--<--- */ // [3] corresponds to the column dimension of the matrix 'm'
	// int * p_m = m; IS WRONG

	cout << " \t 'p_m' address : 'm' address " << " \t ==> \t " << p_m << " == " << m << endl ;

	cout << endl;


}


void fMultiDimArrays () {


	cout << "\nMULTI-DIMENSIONAL ARRAYS\n" << endl ;

	/* --->-->-> */ int m[2][2][2][2] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16}; /* <-<--<--- */
	/* --->-->-> */ int size_m = sizeof(m) / 4;  /* <-<--<--- */

	cout << " \t The whole content of 'm' is: \n " << endl ;

	fMultiDimArrays_AUX(m,size_m);

	cout << endl;


}

void fMultiDimArrays_AUX ( int (*aux_m)[2][2][2] , int size_m ) {

	for(int i=0; i < ( size_m / 8 ) ;i++){

		for(int ii=0; ii < ( size_m / 8 ) ;ii++){

			for(int j=0; j < ( size_m / 8 ) ;j++){

				for(int jj=0; jj < ( size_m / 8 ) ;jj++){


					for(int k=0; k < ( size_m / 8 ) ;k++){
						

						for(int kk=0; kk < ( size_m / 8 ) ;kk++){
							cout << " \t " << aux_m[i][ii][j+k][jj+kk] ;
						}

						cout << "\t";


					}

					j += 2; jj += 2;
					cout << endl;

					
				}

			}

		}

		cout << endl;

	}

}


void fDynamicMemory () {


	cout << "\nDYNAMIC MEMORY\n" << endl ;

	/* --->-->-> */ int * p = new int;  /* <-<--<--- */

	cout << " \t The address at 'p' is pointing ==> " << p << endl ;
	cout << " \t The content of 'p' is ==> " << *p << endl ;

	cout << endl;

	/* --->-->-> */ *p = 1;  /* <-<--<--- */

	cout << " \t Evaluating '*p = 1'. The address at 'p' is pointing ==> " << p << endl ;
	cout << " \t Evaluating '*p = 1'. The content of 'p' is ==> " << *p << endl ;

	cout << endl;

	/* --->-->-> */ delete p;  /* <-<--<--- */

	cout << " \t Evaluating 'delete p'. The address at 'p' is pointing ==> " << p << endl ;
	cout << " \t Evaluating 'delete p'. The content of 'p' is ==> " << *p << endl ;

	cout << endl;

	/* --->-->-> */ p = new int [10];  /* <-<--<--- */

	cout << " \t Evaluating 'p = new int [10]'. The address at 'p' is pointing ==> " << p << endl ;
	cout << " \t Evaluating 'p = new int [10]'. The content of 'p' is ==> " << *p << endl ;

	cout << endl;

	/* --->-->-> */ delete [] p; /* <-<--<--- */

	cout << " \t Evaluating 'delete [] p'. The address at 'p' is pointing ==> " << p << endl ;
	cout << " \t Evaluating 'delete [] p'. The content of 'p' is ==> " << *p << endl ;

	cout << endl;


}


void fPointersAsFunctions () {


	cout << "\nPOINTERS AS FUNCTION RETURN\n" << endl ;

	/* --->-->-> */ int a = 2, b = 3; /* <-<--<--- */

	cout << " \t The value that holds 'a' is ==> " << a << endl ;
	cout << " \t The address of 'a' is ==> " << &a << endl ;
	cout << " \t The value that holds 'b' is ==> " << b << endl ;
	cout << " \t The address of 'b' is ==> " << &b << endl ;

	cout << endl;

	/* --->-->-> */ int * p; /* <-<--<--- */

	cout << " \t The address at 'p' is pointing ==> " << p << endl ; // p has no content or is NULL

	cout << endl;

	p = fPointersAsFunctions_AUX(&a,&b);

	cout << " \t Evaluating 'fPointersAsFunctions_AUX'. The address at 'p' is pointing ==> " << p << endl ;
	cout << " \t Evaluating 'fPointersAsFunctions_AUX'. The value in " << p << " is " << *p << endl ;

	cout << endl;


}

int * fPointersAsFunctions_AUX ( int * base , int * exponent ) {

	int * result = new int;

	double aux_b = (double) *base;
	double aux_exp = (double) *exponent;

	*result = (int) pow(aux_b,aux_exp);


return result;
}


void fFunctionPointers () {


	cout << "\nFUNCTION POINTERS\n" << endl ;

	/* --->-->-> */ double ( * p )( int , int ); /* <-<--<--- */

	cout << " \t The content at 'p' is pointing ==> " << p << " == " << *p << endl ;

	cout << endl;

	/* --->-->-> */ p = &fFunctionPointers_AUX; /* <-<--<--- */

	cout << " \t Evaluating 'p = &fFunctionPointers_AUX'. The content at 'p' is pointing ==> " << p << " == " << *p << endl ;

	cout << endl;

	/* --->-->-> */ double result_log = (*p)(2,3); /* <-<--<--- */

	cout << " \t The value that holds 'result_log' is " << result_log << endl ;

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	/* --->-->-> */ double ( * p2 )( int , int ); /* <-<--<--- */

	cout << " \t The content at 'p2' is pointing ==> " << p2 << " == " << *p2 << endl ;

	cout << endl;

	/* --->-->-> */ p2 = fFunctionPointers_AUX2; /* <-<--<--- */

	cout << " \t Evaluating 'p2 = &fFunctionPointers_AUX2'. The content at 'p2' is pointing ==> " << p2 << " == " << *p2 << endl ;

	cout << endl;

	/* --->-->-> */ double result_root = p2(3,36); /* <-<--<--- */

	cout << " \t The value that holds 'result_root' is " << (*p2)(3,36) << endl ;

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	/* --->-->-> */ void ( * p3 )( string ) = fFunctionPointers_AUX3; /* <-<--<--- */ // WARNING: if it's used char* instead of string

	/* --->-->-> */ (*p3)("'fFunctionPointers'"); /* <-<--<--- */

	cout << endl;


}

double fFunctionPointers_AUX ( int base , int argument ) {

	double aux_b = (double) base;
	double aux_arg = (double) argument;
	
return log(aux_b) / log(aux_arg);
}

double fFunctionPointers_AUX2 ( int index , int radicand ) {

	double aux_ind = (double) 1/index;
	double aux_rad = (double) radicand;
	
return pow ( aux_rad , aux_ind );
}

void fFunctionPointers_AUX3 ( string text ) {

	cout << "\t \"ur 'fFunctionPointers_AUX3' on: " << text << " \" " << endl;

}


void fCallbacks () {


	cout << "\nFUNCTION POINTERS AND CALLBACKS\n" << endl ;

	/* --->-->-> */ fCallbacks_AUX(fCallbacks_AUX2); /* <-<--<--- */

	cout << endl;
	cout << "      ----------------------------------------------------------------------------------------------------------------       " << endl;
	cout << endl;

	/* --->-->-> */ int a[5] = {1,-3,2,-4,-5}; /* <-<--<--- */

	cout << " \t The content that 'int a[]' holds is ==> { " ;

	for(int i=0; i < ( ( sizeof(a) ) / 4 ) ;i++){

		if(i==0){
			cout << a[i] ;
		} else {
			cout << " , " << a[i] ;
		}

	}

	cout << " } " << endl ;

	cout << endl;

	/* --->-->-> */ qsort ( a , 5 , sizeof(int) , fCallbacks_AUX3 ); /* <-<--<--- */
	/* void __cdecl qsort ( vector , elements_vector , size_elements , compare_function ) */

	cout << " \t Evaluating 'qsort' function. The content that 'int a[]' holds is ==> { " ;

	for(int i=0; i < ( ( sizeof(a) ) / 4 ) ;i++){

		if(i==0){
			cout << a[i] ;
		} else {
			cout << " , " << a[i] ;
		}

	}

	cout << " } " << endl ;

	cout << endl;


}

void fCallbacks_AUX ( void ( * p )( ) ) {

	p();

}

void fCallbacks_AUX2 () {

	cout << " \t This is 'fCallbacks_AUX2' " << endl;

}

int fCallbacks_AUX3 ( const void * a , const void * b ) {

	int aux_a = *((int*)a); // content ( typecasting )
	int aux_b = *((int*)b); // content ( typecasting )


return abs(aux_a) - abs(aux_b); // a-b ascending // b-a descending // abs: absolute value
}


void fSOF () {


	cout << "\nSTACK OVERFLOW\n" << endl ;
	cout << "\tSTACK MEMORY SECTION\n" ;

	// Everything from STACK MEMORY SECTION is deallocated automatically
	// Stack overflow (STACK MEMORY SECTION): https://pvs-studio.com/en/blog/terms/0087/

	cout << endl;


}


void fMemoryLeak () {


	cout << "\nMEMORY LEAK\n" << endl ;
	cout << "\tHEAP MEMORY SECTION\n" ;

	// The improper use of dynamic memory is called MEMORY LEAK
	// The allocated memory of depuration goes to HEAP MEMORY SECTION
	// It's efficient deallocate variables from memory
	// The no deallocated and unused variables are called GARBAGE

	cout << endl;


}



void fPrubing () {

	cout << "\n| xxxxx THIS IS A TRYING, NUMBSKULL xxxxx |\n" << endl ;
	
	// CODE

	cout << "\n| xxxxx END OF THE TRYING, KNUCKLEHEAD xxxxx |\n" << endl ;

}




// To rest -->		