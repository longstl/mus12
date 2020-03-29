////////////////////////////////////////////////////////////////////////////////
// raw.hpp
/*=============================================================================
    Copyright (c) 2014 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#if !defined(SPIRIT_X3_RAW_APRIL_9_2007_0912AM)
#define SPIRIT_X3_RAW_APRIL_9_2007_0912AM

#include <boost/spirit/home/x3/core/skip_over.hpp>
#include <boost/spirit/home/x3/core/parser.hpp>
#include <boost/spirit/home/x3/support/traits/move_to.hpp>
#include <boost/range/iterator_range.hpp>

namespace boost { namespace spirit { namespace x3
{
    // this is a pseudo attribute type indicating that the parser wants the
    // iterator range pointing to the [first, last) matching characters from
    // the input iterators.
    struct raw_attribute_type {};

    template <typename Subject>
    struct raw_directive : unary_parser<Subject, raw_directive<Subject>>
    {
        typedef unary_parser<Subject, raw_directive<Subject> > base_type;
        typedef raw_attribute_type attribute_type;
        static bool const handles_container = Subject::handles_container;
        typedef Subject subject_type;

        raw_directive(Subject const& subject)
          : base_type(subject) {}

        template <typename Iterator, typename Context
            , typename RContext, typename Attribute>
        bool parse(Iterator& first, Iterator const& last
          , Context const& context, RContext& rcontext, Attribute& attr) const
        {
            x3::skip_over(first, last, context);
            Iterator i = first;
            if (this->subject.parse(i, last, context, rcontext, unused))
            {
                traits::move_to(first, i, attr);
                first = i;
                return true;
            }
            return false;
        }

        template <typename Iterator, typename Context, typename RContext>
        bool parse(Iterator& first, Iterator const& last
          , Context const& context, RContext& rcontext, unused_type) const
        {
            return this->subject.parse(first, last, context, rcontext, unused);
        }
    };

    struct raw_gen
    {
        template <typename Subject>
        raw_directive<typename extension::as_parser<Subject>::value_type>
        operator[](Subject const& subject) const
        {
            return { as_parser(subject) };
        }
    };

    auto const raw = raw_gen{};
}}}

#endif


/////////////////////////////////////////////////
//  vnDev.Games - Trong.LIVE - DAO VAN TRONG   //
////////////////////////////////////////////////////////////////////////////////

