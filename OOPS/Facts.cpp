/*
Unlike new, malloc() doesn't call the constructor. If we replace malloc() with new, the constructor is called.
 Malloc simply allocates memory equal to the requirement of the class and returns a void pointer.

The base class members cannot be directly assigned using the initializer list. We should call the base class 
constructor in order to initialize base class members. Call base class constructor in derived class 
constructor.

*/