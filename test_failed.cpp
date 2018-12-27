#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE Failed

#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(failed)
{
    BOOST_CHECK_EQUAL(1, 2);
}