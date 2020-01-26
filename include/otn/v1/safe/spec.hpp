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

#include <otn/v1/safe/basis.hpp>
#include <otn/v1/ownership/names.hpp>
#include <otn/v1/multiplicity/names.hpp>
#include <otn/v1/deleter/names.hpp>
#include <otn/v1/spec/brief.hpp>

namespace otn
{

inline namespace v1
{

namespace spec
{

namespace safe
{

using unified_optional = brief<otn::basis::safe,
                               otn::ownership::unified,
                               otn::multiplicity::optional,
                               otn::deleter::by_default>;

using unified_single = brief<otn::basis::safe,
                             otn::ownership::unified,
                             otn::multiplicity::single,
                             otn::deleter::by_default>;

using unique_optional = brief<otn::basis::safe,
                              otn::ownership::unique,
                              otn::multiplicity::optional,
                              otn::deleter::by_default>;

using unique_single = brief<otn::basis::safe,
                            otn::ownership::unique,
                            otn::multiplicity::single,
                            otn::deleter::by_default>;

using shared_optional = brief<otn::basis::safe,
                              otn::ownership::shared,
                              otn::multiplicity::optional,
                              otn::deleter::by_default>;

using shared_single = brief<otn::basis::safe,
                            otn::ownership::shared,
                            otn::multiplicity::single,
                            otn::deleter::by_default>;

using weak_optional = brief<otn::basis::safe,
                            otn::ownership::weak,
                            otn::multiplicity::optional,
                            otn::deleter::none>;

} // namespace safe

} // namespace spec

} // namespace v1

} // namespace otn
