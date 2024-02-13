
// PREPROCESSOR DIRECTIVES
#include <iostream> // For 'cout' and 'endl' functions
//// For STL containers.
////// Dynamic Access Memory.
#include <array>
#include <vector>
#include <deque>
////// Non-Dynamic Access Memory.
#include <list>
#include <stack>
#include <queue>

using namespace std ;



// GLOBAL STATEMENTS
//// Functions.
bool boolFunction_auxList ( const int& value ) { return ( value%2 != 0 ) ; }


// PROTOTYPES
//// Lists
void function_array ( void ) ;
void function_vector ( void ) ;
void function_deque ( void ) ;
void function_list ( void ) ;
//// LIFO
void function_stack ( void ) ;
//// FIFO
void function_queue ( void ) ;
void function_priorityQueue ( void ) ;


/* MAIN FUNCTION DEFINITION */

int main ( void ) {

    cout << "\n\n\n" << endl ;

    
    function_array() ;

    cout << endl << endl ;

    function_vector() ;

    cout << endl << endl ;

    function_deque() ;

    cout << endl << endl ;

    function_list() ;

    cout << endl << endl ;

    function_stack() ;

    cout << endl << endl ;

    function_queue() ;
    

    cout << "\n\n\n\tALL RIGHT!\n\n\n\n" << endl ;

return 0;
}


// OTHER FUNCTIONS DEFINITION

void function_array ( void ) {

    cout << "ARRAY" ;
    
    // - Declaration - //
    //// Empty declaration.
    array<int,0> array_empty ;
    //// Sized declaration.
    array<int,5> array_sized ;
    
    // - Initialization - //
    array<int,5> array_initialized = { 1,2,3,4,5 } ;

    // - Assignment - //
    //// Filled assignment.
    array_sized.fill ( {0} ) ;
    //// Aggregate assignment.
    array_initialized = { 0,1,2,3,4 } ;

    // - Iterations - //
    array<int,5>::const_iterator arrayIterator ;
    array<int,5>::const_reverse_iterator arrayReverseIterator ;
    //// for-loop forward.
    cout << "\n\n\tarray_empty:" << endl ;
    for ( int counter = 0 ; counter <= array_empty.size() ; counter++ )
        if ( ! array_empty.empty() )
            cout << '\t' << array_empty.at(counter) << ' ' ;
        else
            cout << "\t_" ;
    //// for-loop backward.
    cout << "\n\n\tarray_empty:" << endl ;
    for ( int counter = array_empty.size() ; counter >= 0 ; counter-- )
        if ( ! array_empty.empty() )
            cout << '\t' << array_empty[counter] << ' ' ;
        else
            cout << "\t_" ;
    //// for-each.
    cout << "\n\n\tarray_sized:" << endl ;
    for ( const int& iterator : array_sized )
        cout << '\t' << iterator << ' ' ;
    //// Iterator from Head to Tail.
    cout << "\n\n\tarray_initialized:" << endl ;
    for ( arrayIterator = array_initialized.cbegin() ; arrayIterator != array_initialized.end() ; arrayIterator++ )
        cout << '\t' << *arrayIterator << ' ' ;
    //// Reverse iterator from Head to Tail.
    cout << "\n\n\tarray_initialized:" << endl ;
    for ( arrayReverseIterator = array_initialized.crend()-1 ; arrayReverseIterator != array_initialized.crbegin()-1 ; arrayReverseIterator-- )
        cout << '\t' << *arrayReverseIterator << ' ' ;
    //// Iterator from Tail to Head.
    cout << "\n\n\tarray_initialized:" << endl ;
    for ( arrayIterator = array_initialized.end()-1 ; arrayIterator != array_initialized.cbegin()-1 ; arrayIterator-- )
        cout << '\t' << *arrayIterator << ' ' ;
    //// Reverse iterator from Tail to Head.
    cout << "\n\n\tarray_initialized:" << endl ;
    for ( arrayReverseIterator = array_initialized.crbegin() ; arrayReverseIterator != array_initialized.crend() ; arrayReverseIterator++ )
        cout << '\t' << *arrayReverseIterator << ' ' ;

    cout << endl << endl ;

    // - Modifications - //
    //// Swap: container.
    bool bool_lastElementsEqual = false ;
    arrayIterator = prev ( array_initialized.end() ) ;
    bool_lastElementsEqual = ( *arrayIterator == array_initialized.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;
    array_initialized.swap ( array_sized ) ;
    bool_lastElementsEqual = ( *arrayIterator != array_sized.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;

}


void function_vector ( void ) {

    cout << "VECTOR" ;

    // - Declarations - //
    //// Empty declaration.
    vector<int> vector_empty ;
    //// Sized declaration.
    vector<int> vector_sized(5) ;

    // - Initialization - //
    vector<int> vector_initialized = { 1,2,3,4,5 } ;

    // - Assignment - //
    vector_initialized = { 0,1,2,3,4 } ;

    // - Iterations - //
    vector<int>::iterator vectorIterator ;
    vector<int>::reverse_iterator vectorReverseIterator ;
    //// for-loop forward.
    cout << "\n\n\tvector_empty:" << endl ;
    if ( ! vector_empty.empty() )
        for ( int counter = 0 ; counter < vector_empty.size() ; counter++ )
            cout << '\t' << vector_empty.at(counter) << ' ' ;
    else
        cout << "\t_" ;
    //// for-loop backward.
    cout << "\n\n\tvector_empty:" << endl ;
    if ( ! vector_empty.empty() )
        for ( int counter = vector_empty.size() ; counter >= 0 ; counter-- )
            cout << '\t' << vector_empty[counter] << ' ' ;
    else
        cout << "\t_" ;
    //// for-each.
    cout << "\n\n\tvector_sized:" << endl ;
    for ( const int& iterator : vector_sized )
        cout << '\t' << iterator << ' ' ;
    //// Iterator from Head to Tail.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorIterator = vector_initialized.begin() ; vectorIterator != vector_initialized.end() ; vectorIterator++ )
        cout << '\t' << *vectorIterator << ' ' ;
    //// Reverse iterator from Head to Tail.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorReverseIterator = vector_initialized.rend()-1 ; vectorReverseIterator != vector_initialized.rbegin()-1 ; vectorReverseIterator-- )
        cout << '\t' << *vectorReverseIterator << ' ' ;
    //// Iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorIterator = vector_initialized.end()-1 ; vectorIterator != vector_initialized.begin()-1 ; vectorIterator-- )
        cout << '\t' << *vectorIterator << ' ' ;
    //// Reverse iterator from Tail to Head.
    cout << "\n\n\tvector_initialized:" << endl ;
    for ( vectorReverseIterator = vector_initialized.rbegin() ; vectorReverseIterator != vector_initialized.rend() ; vectorReverseIterator++ )
        cout << '\t' << *vectorReverseIterator << ' ' ;

    cout << endl << endl ;

    // - Modifications - //
    //// Insert: iterator, value.
    vectorIterator = vector_initialized.end() ;
    vectorIterator = vector_initialized.insert ( vectorIterator , 5 ) ;
    cout << "\tThe value returned by the operation is: " << *vectorIterator << endl ;
    //// Insert range: position, container's range.
    vectorIterator = next ( vector_initialized.begin() ) ;
    vectorIterator = vector_initialized.insert ( vectorIterator , vector_sized.begin() , vector_sized.end() ) ;
    cout << "\tThe value returned by the operation is: " << *vectorIterator << endl ;
    //// Push back: value.
    vector_initialized.push_back ( 6 ) ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << endl ;
    //// Pop back: none.
    vector_initialized.pop_back() ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << endl ;
    //// Erase: position.
    vectorIterator = prev ( vector_initialized.end() ) ;
    vectorIterator = prev ( vector_initialized.erase ( vectorIterator ) ) ;
    cout << "\tThe last element of the container is: " << *vectorIterator << ", " << boolalpha << ( *vectorIterator == vector_initialized.back() ) << endl ;
    //// Erase: range.
    vectorIterator = vector_initialized.begin() ;
    vectorIterator = vector_initialized.erase ( vectorIterator , vectorIterator+5 ) ;
    cout << "\tThe first element of the container is: " << *vectorIterator << ", " << boolalpha << ( *vectorIterator == vector_initialized.front() ) << endl ;
    //// Resize: new size, values assigment.
    vector_empty.resize ( 5 , 0 ) ;
    //// Swap: container.
    bool bool_lastElementsEqual = false ;
    vectorIterator = prev ( vector_initialized.end() ) ;
    bool_lastElementsEqual = ( *vectorIterator == vector_initialized.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;
    vector_initialized.swap ( vector_empty ) ;
    bool_lastElementsEqual = ( *vectorIterator == vector_empty.back() ) ;
    cout << "\tLast elements equal?: " << boolalpha << bool_lastElementsEqual << endl ;
    //// Clean: none.
    vector_empty.clear() ;
    bool bool_containerEmpty = vector_empty.empty() ;
    cout << "\tContainer empty?: " << boolalpha << bool_containerEmpty << endl ;

}


void function_deque ( void ) {

    cout << "DEQUE" ;

    // - Declarations - //
    //// Empty declaration.
    deque<int> deque_empty ;
    //// Sized declaration.
    deque<int> deque_sized(5) ;

    // - Initialization - //
    //// Filled initialization.
    deque<int> deque_initialized(5,0) ;
    //// Copied initialization.
    deque<int> deque_copied(deque_initialized) ;

    // - Assigment - //
    //// Filled assignment.
    deque_sized.assign(5,0) ;
    //// Resized assignment.
    deque_sized.resize(3) ;
    deque_sized.resize(3,0) ;
    //// Aggredate assigment.
    deque_initialized = { 0,1,2,3,4 } ;

    // - Iterations - //
    deque<int>::const_iterator dequeConstIterator ;
    deque<int>::const_reverse_iterator dequeConstReverseIterator ;
    //// for-loop forward.
    cout << "\n\n\tdeque_empty:" << endl ;
    if ( ! deque_empty.empty() )
        for ( int counter = 0 ; counter < deque_empty.size() ; counter++ )
            cout << '\t' << deque_empty.at(counter) << ' ' ;
    else
        cout << "\t_" ;
    //// for-loop backward.
    cout << "\n\n\tdeque_empty:" << endl ;
    if ( ! deque_empty.empty() )
        for ( int counter = deque_empty.size() ; counter >= 0 ; counter-- )
            cout << '\t' << deque_empty[counter] << ' ' ;
    else
        cout << "\t_" ;
    //// for-each.
    cout << "\n\n\tdeque_sized:" << endl ;
    for ( const int& iterator : deque_sized )
        cout << '\t' << iterator << ' ' ;
    //// Iterator from Head to Tail.
    cout << "\n\n\tdeque_initialized:" << endl ;
    for ( dequeConstIterator = deque_initialized.cbegin() ; dequeConstIterator != deque_initialized.cend() ; dequeConstIterator++ )
        cout << '\t' << *dequeConstIterator << ' ' ;
    //// Reverse iterator from Head to Tail.
    cout << "\n\n\tdeque_initialized:" << endl ;
    for ( dequeConstReverseIterator = deque_initialized.crend()-1 ; dequeConstReverseIterator != deque_initialized.crbegin()-1 ; dequeConstReverseIterator-- )
        cout << '\t' << *dequeConstReverseIterator << ' ' ;
    //// Iterator from Tail to Head.
    cout << "\n\n\tdeque_initialized:" << endl ;
    for ( dequeConstIterator = deque_initialized.cend()-1 ; dequeConstIterator != deque_initialized.cbegin()-1 ; dequeConstIterator-- )
        cout << '\t' << *dequeConstIterator << ' ' ;
    //// Reverse iterator from Tail to Head.
    cout << "\n\n\tdeque_initialized:" << endl ;
    for ( dequeConstReverseIterator = deque_initialized.crbegin() ; dequeConstReverseIterator != deque_initialized.crend() ; dequeConstReverseIterator++ )
        cout << '\t' << *dequeConstReverseIterator << ' ' ;

    cout << endl << endl ;

    // - Modifications - //
    deque<int>::iterator dequeIterator ;
    deque<int>::reverse_iterator dequeReverseIterator ;
    //// Insert: iterator, element.
    dequeIterator = deque_initialized.end() ;
    dequeIterator = deque_initialized.insert ( dequeIterator , 5 ) ;
    cout << "\tThe value returned by the operation is: " << *dequeIterator << endl ;
    //// Insert: iterator, number of elements, elements.
    dequeIterator = deque_initialized.end() ;
    dequeIterator = deque_initialized.insert ( dequeIterator , 1 , 6 ) ;
    cout << "\tThe value returned by the operation is: " << *dequeIterator << endl ;
    //// Insert: iterator, iterator of second container, iterator of second container.
    dequeIterator = deque_initialized.begin() ;
    dequeIterator = deque_initialized.insert ( dequeIterator , deque_sized.begin() , deque_sized.end() ) ;
    cout << "\tThe value returned by the operation is: " << *dequeIterator << endl ;
    //// Push back: value.
    deque_initialized.push_back ( 7 ) ;
    cout << "\tThe last element of the container is: " << deque_initialized.back() << endl ;
    //// Pop back: none.
    deque_initialized.pop_back() ;
    cout << "\tThe last element of the container is: " << deque_initialized.back() << endl ;
    //// Push front: value.
    deque_initialized.push_front ( -1 ) ;
    cout << "\tThe first element of the container is: " << deque_initialized.front() << endl ;
    //// Pop front: none.
    deque_initialized.pop_front() ;
    cout << "\tThe first element of the container is: " << deque_initialized.front() << endl ;
    //// Swap: containter.
    deque_sized.swap ( deque_initialized ) ;
    cout << "\tThe last element of the container is: " << deque_initialized.back() << endl ;
    deque_initialized.swap ( deque_sized ) ;
    cout << "\tThe last element of the container is: " << deque_initialized.back() << endl ;
    //// Erase: iterator.
    dequeIterator = deque_initialized.begin() ;
    dequeIterator = deque_initialized.erase ( dequeIterator ) ;
    cout << "\tThe location of the iterator: " << boolalpha << ( dequeIterator == deque_initialized.begin() ) << endl ;
    //// Erase: iterator, iterator.
    dequeIterator = deque_initialized.begin() ;
    advance ( dequeIterator , 3 ) ;
    dequeIterator = deque_initialized.erase ( deque_initialized.begin() , dequeIterator ) ;
    cout << "\tThe first element of the container is: " << deque_initialized.front() << endl ;
    //// Clear: none.
    deque_empty.clear() ;
    bool bool_containerEmpty = deque_empty.empty() ;
    cout << "\tContainer empty?: " << boolalpha << bool_containerEmpty << endl ;

}


void function_list ( void ) {

    cout << "LIST" ;

    // - Declarations - //
    //// Empty declaration.
    list<int> list_empty ;
    //// Sized declaration.
    list<int> list_sized(5) ;

    // - Initialization - //
    list<int> list_initialized(5,0) ;

    // - Assignment - //
    //// Filled assignment.
    list_sized.assign(5,0) ;
    //// Aggregate assignment.
    list_initialized = { 0,1,2,3,4 } ;

    // - Iterations - //
    list<int>::iterator listIterator ;
    list<int>::reverse_iterator listReverseIterator ;
    //// NO for-loops forward neither backward.
    cout << "\n\n\tlist_empty:" << endl ;
    if ( list_empty.empty() )
        cout << "\t_" ;
    //// for-each.
    cout << "\n\n\tlist_sized:" << endl ;
    for ( const int& iterator : list_sized )
        cout << '\t' << iterator << ' ' ;
    //// Iterator from Head to Tail.
    cout << "\n\n\tlist_initialized:" << endl ;
    for ( listIterator = list_initialized.begin() ; listIterator != list_initialized.end() ; listIterator++ )
        cout << '\t' << *listIterator << ' ' ;
    //// Reverse iterator from Tail to Head.
    cout << "\n\n\tlist_initialized:" << endl ;
    for ( listReverseIterator = list_initialized.rbegin() ; listReverseIterator != list_initialized.rend() ; listReverseIterator++ )
        cout << '\t' << *listReverseIterator << ' ' ;

    cout << endl << endl ;

    // - Modifications - //
    //// Insert: iterator, element.
    listIterator = list_initialized.end() ;
    listIterator = list_initialized.insert ( listIterator , 5 ) ;
    cout << "\tThe value returned by the operation is: " << *listIterator << endl ;
    //// Insert: iterator, number of elements, elements.
    listIterator = list_initialized.end() ;
    listIterator = list_initialized.insert ( listIterator , 1 , 6 ) ;
    cout << "\tThe value returned by the operation is: " << *listIterator << endl ;
    //// Insert: iterator, iterator of second container, iterator of second container.
    listIterator = list_initialized.begin() ;
    listIterator = list_initialized.insert ( listIterator , list_sized.begin() , list_sized.end() ) ;
    cout << "\tThe value returned by the operation is: " << *listIterator << endl ;
    //// Push back: value.
    list_initialized.push_back ( 7 ) ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    //// Pop back: none.
    list_initialized.pop_back() ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    //// Push front: value.
    list_initialized.push_front ( -1 ) ;
    cout << "\tThe first element of the container is: " << list_initialized.front() << endl ;
    //// Pop front: none.
    list_initialized.pop_front() ;
    cout << "\tThe first element of the container is: " << list_initialized.front() << endl ;
    //// Swap: containter.
    list_sized.swap ( list_initialized ) ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    list_initialized.swap ( list_sized ) ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    //// Erase: iterator.
    listIterator = list_initialized.begin() ;
    listIterator = list_initialized.erase ( listIterator ) ;
    cout << "\tThe location of the iterator: " << boolalpha << ( listIterator == list_initialized.begin() ) << endl ;
    //// Erase: iterator, iterator.
    listIterator = list_initialized.begin() ;
    advance ( listIterator , 5 ) ;
    listIterator = list_initialized.erase ( list_initialized.begin() , listIterator ) ;
    cout << "\tThe first element of the container is: " << list_initialized.front() << endl ;
    //// Clear: none.
    list_empty.clear() ;
    bool bool_containerEmpty = list_empty.empty() ;
    cout << "\tContainer empty?: " << boolalpha << bool_containerEmpty << endl ;

    cout << endl ;

    // - Operations - //
    //// Remove: value.
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    list_initialized.remove ( list_initialized.back() ) ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    //// Remove if: function.
    cout << "\tThe size of the container is: " << list_initialized.size() << endl ;
    list_initialized.remove_if ( boolFunction_auxList ) ;
    //// Unique: none.
    cout << "\tThe size of the sized container is: " << list_sized.size() << endl ;
    list_sized.unique() ;
    cout << "\tThe size of the sized container is: " << list_sized.size() << endl ;
    //// Merge: container.
    cout << "\tThe size of the initialized container is: " << list_initialized.size() << endl ;
    list_initialized.merge ( list_sized ) ;
    cout << "\tThe size of the initialized container is: " << list_initialized.size() << endl ;
    //// Sort: none.
    list_initialized = { 4,3,2,1,0 } ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    list_initialized.sort() ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    //// Reverse: none.
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;
    list_initialized.reverse() ;
    cout << "\tThe last element of the container is: " << list_initialized.back() << endl ;

}


void function_stack ( void ) {

    cout << "STACK" ;

}


void function_queue ( void ) {

    cout << "QUEUE" ;

}




// To rest -->      