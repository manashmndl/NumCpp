#ifndef ARRAY3D_H
#define ARRAY3D_H

#include <iostream>
#include <vector>

using namespace std;

namespace numcpp{
	template <class T> class array3D{
	public:
		//typedefs
		typedef vector <T> oneDimensionalArray;
		typedef vector < oneDimensionalArray > twoDimensionalArray;
		typedef vector < twoDimensionalArray > threeDimensionalArray;
		
		//ctors
		array3D(threeDimensionalArray &arr);
		array3D(oneDimensionalArray &arr);
		array3D(twoDimensionalArray &arr);
		
	private:
		oneDimensionalArray var1D;
		twoDimensionalArray var2D;
		threeDimensionalArray var3D;
		
		
	};
	
	template <class T> array3D<T>::array3D(threeDimensionalArray &arr){
		var3D = arr;
	}
	
	template <class T> array3D<T>::array3D(oneDimensionalArray &arr){
		var1D = arr;
	}
	
	template <class T> array3D<T>::array3D(twoDimensionalArray &arr){
		var2D = arr;
	}
}

#endif