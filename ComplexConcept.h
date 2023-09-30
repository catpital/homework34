#pragma once

#include <concepts>
#include <string>

template <class T>
concept ComplexConcept = requires(T obj) {
	{ obj.hash() } -> std::convertible_to<long>;
	{ obj.toString() } -> std::same_as<std::string>;
	requires !std::has_virtual_destructor_v<T>;
};
