////////////////////////////////////////////////////////////////////////////////
// euml_typeof.hpp
// Copyright 2008 Christophe Henry
// henry UNDERSCORE christophe AT hotmail DOT com
// This is an extended version of the state machine available in the boost::mpl library
// Distributed under the same license as the original.
// Copyright for the original version:
// Copyright 2005 David Abrahams and Aleksey Gurtovoy. Distributed
// under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MSM_FRONT_EUML_TYPEOF_H
#define BOOST_MSM_FRONT_EUML_TYPEOF_H

#include <boost/typeof/typeof.hpp>

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TEMPLATE(::boost::mpl::vector0, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(::boost::mpl::vector50, 50)
BOOST_TYPEOF_REGISTER_TYPE(::boost::mpl::na)
BOOST_TYPEOF_REGISTER_TEMPLATE(::boost::fusion::vector, 10)
BOOST_TYPEOF_REGISTER_TYPE(::boost::fusion::void_)
BOOST_TYPEOF_REGISTER_TEMPLATE(::boost::mpl::vector, 20)
BOOST_TYPEOF_REGISTER_TYPE(std::string)
BOOST_TYPEOF_REGISTER_TEMPLATE(::boost::mpl::size_t, (unsigned int))

BOOST_TYPEOF_REGISTER_TYPE(::boost::msm::front::default_base_state)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::detail::inherit_attributes, 1)

BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::func_state, 6)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::entry_func_state, (int)(typename)(typename)(typename)(typename)(typename)(typename))
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::explicit_entry_func_state, (int)(typename)(typename)(typename)(typename)(typename)(typename))
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::exit_func_state, 7)

BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::define_flag, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::attribute, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::define_defer, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::define_init, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Source_, (int))
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Target_, (int))
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Current_, (int))
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Event_, (int))
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::State_Attribute_, (typename)(int))
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::State_Machine_, (int))
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::none)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::Row, 5)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::ActionSequence_, 1)

BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::NoAction)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::And_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Or_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Not_, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::If_Else_, 3)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::If)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::If_Then_, 2)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::If_Then)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::While_Do_, 2)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::While_)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Do_While_, 2)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Do_While_)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::For_Loop_, 4)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::For_Loop_)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Process_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Process_)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Process2_, 2)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Process2_)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Get_Flag_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Get_Flag_)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Begin_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Begin_Helper)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::End_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::End_Helper)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Deref_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Deref_Helper)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Push_Back_, 2)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Push_Back_Helper)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Clear_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Clear_Helper)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Empty_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Empty_Helper)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Find_, 2)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Find_Helper)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Npos_, 1)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::False_)
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::True_)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Int_, (int))
BOOST_TYPEOF_REGISTER_TYPE(boost::msm::front::euml::Int)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Pre_inc_, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Pre_dec_, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Post_inc_, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Post_dec_, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Plus_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Minus_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Multiplies_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Divides_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Modulus_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Bitwise_And_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Bitwise_Or_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Bitwise_Xor_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Subscript_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Plus_Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Minus_Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Multiplies_Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Divides_Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Modulus_Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::ShiftLeft_Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::ShiftRight_Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::ShiftLeft_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::ShiftRight_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Assign_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Unary_Plus_, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Unary_Minus_, 1)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Less_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::LessEqual_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::Greater_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::GreaterEqual_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::EqualTo_, 2)
BOOST_TYPEOF_REGISTER_TEMPLATE(boost::msm::front::euml::NotEqualTo_, 2)

#endif //BOOST_MSM_FRONT_EUML_TYPEOF_H


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

