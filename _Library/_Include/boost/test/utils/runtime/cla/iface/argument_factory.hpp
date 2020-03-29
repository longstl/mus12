////////////////////////////////////////////////////////////////////////////////
// argument_factory.hpp
//  (C) Copyright Gennadiy Rozental 2005-2014.
//  Use, modification, and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.
//
//  File        : $RCSfile$
//
//  Version     : $Revision$
//
//  Description : defines interface for argument_factory
// ***************************************************************************

#ifndef BOOST_TEST_UTILS_RUNTIME_CLA_IFACE_ARGUMENT_FACTORY_HPP
#define BOOST_TEST_UTILS_RUNTIME_CLA_IFACE_ARGUMENT_FACTORY_HPP

// Boost.Runtime.Parameter
#include <boost/test/utils/runtime/config.hpp>
#include <boost/test/utils/runtime/fwd.hpp>

#include <boost/test/utils/runtime/cla/fwd.hpp>

namespace boost {

namespace BOOST_TEST_UTILS_RUNTIME_PARAM_NAMESPACE {

namespace cla {

// ************************************************************************** //
// **************                argument_factory              ************** //
// ************************************************************************** //
// another name can be argument production policy

class argument_factory {
public:
    // Argument factory interface
    virtual argument_ptr produce_using( parameter& p, argv_traverser& tr ) = 0;  /// produce argument based on input
    virtual argument_ptr produce_using( parameter& p, parser const& )      = 0;  /// produce argument based on internal generator and/or values of other parameters
    virtual void         argument_usage_info( format_stream& fs )          = 0;  /// argument value format information
protected:
    BOOST_TEST_PROTECTED_VIRTUAL ~argument_factory() {}
};

} // namespace boost

} // namespace BOOST_TEST_UTILS_RUNTIME_PARAM_NAMESPACE

} // namespace cla

#endif // BOOST_TEST_UTILS_RUNTIME_CLA_IFACE_ARGUMENT_FACTORY_HPP


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

