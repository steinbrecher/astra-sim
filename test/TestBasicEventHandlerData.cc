#include "gtest/gtest.h"
#include "astra-sim/system/Sys.hh"

// Make sure initialization does what it should
TEST(BasicEventHandlerDataTest, Init)
{
  int nodeId = 5;
  EventType eventType = EventType::Read_Port_Free;
  BasicEventHandlerData data(nodeId, eventType);
  EXPECT_EQ(data.nodeId, nodeId);
  EXPECT_EQ(data.event, eventType);
}
