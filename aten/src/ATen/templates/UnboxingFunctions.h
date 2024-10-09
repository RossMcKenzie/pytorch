// ${generated_comment}

// Generated by tools/jit/gen_unboxing.py. This file declares code generated boxed C++ functions for operators,
// base off of native_functions.yaml (or similar yaml file with the same syntax). The definition of such a boxed
// function will pop out IValues from the stack then convert them into the correct C++ types based on given schema. This
// unboxing logic is an alternative to template-based metaprogramming unboxing.

#pragma once

#include <ATen/ATen.h>
namespace at {
namespace unboxing {
namespace {

template<typename T, size_t N>
std::array<T, N> as_array(const c10::List<c10::IValue>& list) {
    std::array<T, N> res;
    TORCH_INTERNAL_ASSERT(list.size() == N);
    std::vector<T> vec;
    for (c10::IValue elem : list) {
        vec.push_back(elem.to<T>());
    }
    std::copy(vec.begin(), vec.end(), res.begin());
    return res;
}
}  // namespace <anonymous>
using Stack = std::vector<c10::IValue>;
// Generated function declaration
${declarations}

} // namespace unboxing
} // namespace at
