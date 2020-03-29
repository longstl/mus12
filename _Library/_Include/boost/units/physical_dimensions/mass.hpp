////////////////////////////////////////////////////////////////////////////////
// mass.hpp
// Boost.Units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2008 Matthias Christian Schabel
// Copyright (C) 2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNITS_MASS_BASE_DIMENSION_HPP
#define BOOST_UNITS_MASS_BASE_DIMENSION_HPP

#include <boost/units/config.hpp>
#include <boost/units/base_dimension.hpp>

namespace boost {

namespace units { 

/// base dimension of mass
struct mass_base_dimension : 
    boost::units::base_dimension<mass_base_dimension,-8> 
{ };

} // namespace units

} // namespace boost

#if BOOST_UNITS_HAS_BOOST_TYPEOF

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TYPE(boost::units::mass_base_dimension)

#endif

namespace boost {

namespace units {

/// dimension of mass (M)
typedef mass_base_dimension::dimension_type   mass_dimension;           

} // namespace units

} // namespace boost

#endif // BOOST_UNITS_MASS_BASE_DIMENSION_HPP


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

