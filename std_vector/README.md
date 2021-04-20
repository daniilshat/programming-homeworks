 # How to use it
 Description of the use of the main methods of the class (на самом деле я хотел завернуть все в Doxygen, но у меня не хватило времени, так и появилось это подобие документации).  
 ![И так сойдет](https://github.com/daniilshat/programming-homeworks/blob/main/std_vector/sourse/impmeme.jpg)


## Vector initialization
You can use several ways to initialize a vector:
* initialization of several identical elements `Vector vectorname (3, 4);`.   
  Will create a vector with 3 elements equal to 4;  
* initializing multiple elements with different values `Vector vectorname {1, 2, 3, 4};`.  
  Will create a vector with 4 elements equal 1, 2, 3, 4 everyone;
* initialization of a vector with elements equal to another vector `Vector vectorname (vector2name);`.  
  Will create a vector with elements equal ***vector2name*** vector's elements.  

## Print vector to console
To print the vector you can use `<<` operator: `std::cout << vectorname;`.

## Vector Push- Pop- Back
You can Pusing and Poping Back vector's elements:
* push back `vectorname.pushBack(1);`.  
  A new element equal 1 is added to the end of the vector;  
* pop back `vectorname.popBack();`.  
  The last element of the vector will be removed.  
   
## Index manipulation
   Some functions for getting an element by index and other things with indexes of a vector:  
* Getting an element by index `std::cout << vectorname[2];` or `std::cout << vectorname.At(2);`.    
  Print to the console the vector element at index 2;  
* Getting the value of the first element of a vector `std::cout << vectorname.Front();`.  
  Print to the console the value of the first element of the vector;  
* Getting the value of the last element of a vector `std::cout << vectorname.Back();`.    
  Print to the console the value of the last element of the vector;  
* Getting the size of the vector `std::cout << vectorname.Size();`.    
  Print to the console size of the vector ***vectorname**;    
* Getting the capacity of the vector `std::cout << vectorname.Capacity();`.    
  Print to the console capacity of the vector ***vectorname**;    
* Checking an empty vector `std::cout << vectorname.Empty();`.  
  Print 1 if vector empty or print 0.  
  
## Copy, insert and cleanup
Some functions for managing the content of a vector:  
* Copying elements from one vector to another `vectorname = vector2name;`.    
  Copy vector ***vector2name*** elements to vector ***vectorname***;  
* Inserting an element by index `vectorname.Insert(0, 1);`.  
  Insert element equal to 1 at index 0 in the vector ***vectorname***;  
* erasing a vector element by index `vectorname.Erase(0);`.  
  Will erase the element at index 0 in the vector ***vectorname***;  
* cleaning the vector without deleting the object `vectorname.Clear();`.  
  Will clear the vector but not delete the object.  
