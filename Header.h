#pragma once


template <class...Args>
class SomeType {
public:

	void sum_all(Args... args) {
	
		auto sum = (args+...);
		std::cout << "Sum = " << sum << std::endl;
	};
};	