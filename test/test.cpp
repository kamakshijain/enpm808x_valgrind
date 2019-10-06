/**
 *  @file    ../test/test.icpp
 *  @author  Kamakshi Jain
 *  @copyright Kamakshi Jain
 *  @brief Valgrind exercise enpm808x
 */
#include <gtest/gtest.h>
#include"AnalogSensor.hpp"
/**
*@brief Test checks if the Read() method outputs the right value or not.
*/
AnalogSensor test(10);
TEST(AnalogSensorTest, Read_Test) {
  EXPECT_EQ(10, test.Read());
}
