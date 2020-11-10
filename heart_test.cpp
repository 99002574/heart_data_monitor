#include "heart.h"
#include <gtest/gtest.h>
namespace {
TEST(heart_test, displayBetween) {  
  EXPECT_EQ(34, displayBetween(75038,75157, "heart_data_csv.csv"));
}

} // namespace
