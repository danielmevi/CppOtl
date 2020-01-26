/*
 * MIT License
 *
 * Copyright (c) 2018-2020 Viktor Kireev
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include <otn/v1/deleter/names.hpp>

#include <otn/v1/support/type_traits.hpp>

namespace otn
{

inline namespace v1
{

namespace deleter
{

template <class Deleter>
inline constexpr bool is_none_v = std::is_same_v<Deleter, none>;
template <class Deleter>
inline constexpr bool is_default_v = std::is_same_v<Deleter, by_default>;

} // namespace deleter

namespace traits
{

template <class Token, class = void>
struct deleter
{ using type = otn::deleter::none; };

template <class Token>
using deleter_t = typename deleter<otn::remove_cvref_t<Token>>::type;

} // namespace traits

template <class Token, class Deleter>
inline constexpr bool deleter_is_v =
    std::is_same_v<traits::deleter_t<Token>, Deleter>;

} // namespace v1

} // namespace otn