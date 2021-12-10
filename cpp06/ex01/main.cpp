#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t i;
	i = reinterpret_cast<uintptr_t> (ptr);

	return (i);
}

Data* deserialize(uintptr_t raw)
{
	Data *dt;

	dt = reinterpret_cast<Data *> (raw);
	return (dt);
}

int	main()
{
	Serialize dt;
	uintptr_t i;
	Data *ptr;

	dt.dt_show();
	std::cout << std::endl;

	i = serialize(dt.getValue());

	std::cout << "Serialize : " << i << std::endl;

	ptr = deserialize(i);

	std::cout << "Deserialize : " << ptr << std::endl;
	return (0);
}
