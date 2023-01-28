#pragma once


template <class...Args>
class SomeType {
public:

	void sum_all(Args... args) {
		Args sum = 0;
		sum = args + args + args;
		std::cout << "Sum = " << sum << std::endl;
	};

private:
	Args _num;
};	