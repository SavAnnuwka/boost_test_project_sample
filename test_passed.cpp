#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE Passed

#include <boost/test/included/unit_test.hpp>


BOOST_AUTO_TEST_CASE(passed)
{
    BOOST_CHECK_EQUAL(1, 1);
}