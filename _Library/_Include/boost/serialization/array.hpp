#ifndef BOOST_SERIALIZATION_ARRAY_HPP
#define BOOST_SERIALIZATION_ARRAY_HPP

// (C) Copyright 2005 Matthias Troyer and Dave Abrahams
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <boost/config.hpp> // msvc 6.0 needs this for warning suppression

#include <iostream>
#include <cstddef> // std::size_t
#ifndef BOOST_NO_CXX11_HDR_ARRAY
#include <array>
#endif

#if defined(BOOST_NO_STDC_NAMESPACE)
namespace std{ 
    using ::size_t; 
} // namespace std
#endif

#include <boost/serialization/nvp.hpp>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/wrapper.hpp>
#include <boost/mpl/always.hpp>
#include <boost/mpl/apply.hpp>
#include <boost/mpl/bool.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/array.hpp>

namespace boost { namespace serialization {

// traits to specify whether to use  an optimized array serialization

template <class Archive>
struct use_array_optimization : boost::mpl::always<boost::mpl::false_> {};

template<class T>
class array :
    public wrapper_traits<const array< T > >
{
public:    
    typedef T value_type;
    
    array(value_type* t, std::size_t s) :
        m_t(t),
        m_element_count(s)
    {}
    array(const array & rhs) :
        m_t(rhs.m_t),
        m_element_count(rhs.m_element_count)
    {}
    array & operator=(const array & rhs){
        m_t = rhs.m_t;
        m_element_count = rhs.m_element_count;
    }

    // default implementation
    template<class Archive>
    void serialize_optimized(Archive &ar, const unsigned int, mpl::false_ ) const
    {
      // default implemention does the loop
      std::size_t c = count();
      value_type * t = address();
      while(0 < c--)
            ar & boost::serialization::make_nvp("item", *t++);
    }

    // optimized implementation
    template<class Archive>
    void serialize_optimized(Archive &ar, const unsigned int version, mpl::true_ )
    {
      boost::serialization::split_member(ar, *this, version);
    }

    // default implementation
    template<class Archive>
    void save(Archive &ar, const unsigned int version) const
    {
      ar.save_array(*this,version);
    }

    // default implementation
    template<class Archive>
    void load(Archive &ar, const unsigned int version)
    {
      ar.load_array(*this,version);
    }
    
    // default implementation
    template<class Archive>
    void serialize(Archive &ar, const unsigned int version)
    {
      typedef typename 
          boost::serialization::use_array_optimization<Archive>::template apply<
                    typename remove_const< T >::type 
                >::type use_optimized;
      serialize_optimized(ar,version,use_optimized());
    }
    
    value_type* address() const
    {
      return m_t;
    }

    std::size_t count() const
    {
      return m_element_count;
    }
    
private:
    value_type* m_t;
    std::size_t m_element_count;
};

template<class T>
inline
const array< T > make_array( T* t, std::size_t s){
    return array< T >(t, s);
}

// implement serialization for boost::array
template <class Archive, class T, std::size_t N>
void serialize(Archive& ar, boost::array<T,N>& a, const unsigned int /* version */)
{
    ar & boost::serialization::make_nvp("elems", a.elems);
}

#ifndef BOOST_NO_CXX11_HDR_ARRAY
// implement serialization for std::array
template <class Archive, class T, std::size_t N>
void serialize(Archive& ar, std::array<T,N>& a, const unsigned int /* version */)
{
    ar & boost::serialization::make_nvp(
        "elems",
        *static_cast<T (*)[N]>(static_cast<void *>(a.data()))
    );
    
}
#endif

} } // end namespace boost::serialization

#define BOOST_SERIALIZATION_USE_ARRAY_OPTIMIZATION(Archive)           \
namespace boost { namespace serialization {                           \
template <> struct use_array_optimization<Archive> {                  \
  template <class ValueType>                                          \
  struct apply : boost::mpl::apply1<Archive::use_array_optimization   \
      , typename boost::remove_const<ValueType>::type   \
    >::type {};                                                       \
}; }}

#endif //BOOST_SERIALIZATION_ARRAY_HPP


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

