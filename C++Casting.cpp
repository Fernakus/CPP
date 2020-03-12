/*******************************************************************************************************************************************/
dynamic_cast <new_type> (expression)
/*
	dynamic_cast can be used only with pointers and references to objects.
	Its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.
	Therefore, dynamic_cast is always successful when we cast a class to one of its base classes.
*/
class CBase { };
class CDerived: public CBase { };

CBase b; 
CBase* pb;
CDerived d; 
CDerived* pd;

pb = dynamic_cast<CBase*>(&d);
/*******************************************************************************************************************************************/
reinterpret_cast <new_type> (expression)
/*
	reinterpret_cast converts any pointer type to any other pointer type, even of unrelated classes. 
	The operation result is a simple binary copy of the value from one pointer to the other. 
	All pointer conversions are allowed: neither the content pointed nor the pointer type itself is checked.
	It can also cast pointers to or from integer types. The format in which this integer value represents a pointer is platform-specific. 
	The only guarantee is that a pointer cast to an integer type large enough to fully contain it, is granted to be able to be cast back to a valid pointer.
	The conversions that can be performed by reinterpret_cast but not by static_cast are low-level operations, 
	whose interpretation results in code which is generally system-specific, and thus non-portable. 
	For example:
*/
class A {};
class B {};
A* a = new A;
B* b = reinterpret_cast<B*>(a);
/*******************************************************************************************************************************************/
static_cast <new_type> (expression)
/*
	static_cast can perform conversions between pointers to related classes, not only from the derived class to its base, but also from a base class to its derived. 
	This ensures that at least the classes are compatible if the proper object is converted, but no safety check is performed during runtime to check 
	if the object being converted is in fact a full object of the destination type. Therefore, it is up to the programmer to ensure that the conversion is safe. 
	On the other side, the overhead of the type-safety checks of dynamic_cast is avoided.
*/
class CBase {};
class CDerived: public CBase {};
CBase* a = new CBase;
CDerived* b = static_cast<CDerived*>(a);

double d = 3.14159265;
int i = static_cast<int>(d);
/*******************************************************************************************************************************************/
const_cast <new_type> (expression)
/*
	This type of casting manipulates the constness of an object, either to be set or to be removed. 
	For example, in order to pass a const argument to a function that expects a non-constant parameter
*/
const char* c = "sample text";
cout << const_cast<char*>(c) << endl;
 