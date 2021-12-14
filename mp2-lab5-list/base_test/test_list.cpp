#include "../base/list.h"
#include "../gtest/gtest/gtest.h"

TEST(TList, can_create_list)
{
  ASSERT_NO_THROW(TList<int> ls);
}

TEST(TList, can_throw_when_need)
{
  TList<int> ls;
  ASSERT_ANY_THROW(ls.ForGoogleTest(true));
}

TEST(TList, cant_throw_when_need)
{
  TList<int> ls;
  ASSERT_NO_THROW(ls.ForGoogleTest(false));
}
