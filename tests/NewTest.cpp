#include "ApprovalTests.hpp"
#include "Catch.hpp"
#include "GildedRose.h"
#include <vector>

TEST_CASE("ApprovingText")
{
    Item item("test", 1, 1);
    std::vector<Item> vector_item = { item };
    GildedRose rose({ vector_item });

    Approvals::verify(item);

}




