#include <catch2/catch_all.hpp>

#include <algorithm>
#include <string>
#include <vector>

SCENARIO("Testing sort algorithm"){
    GIVEN("vector v = 3,2,1"){
        std::vector v = {3,2,1};

        WHEN("sort is called"){
            std::sort(begin(v), end(v));

            THEN("v is {1,2,3}"){
                std::vector expected = {1,2,3};
                REQUIRE(v == expected);
                REQUIRE_THAT(v, Catch::Matchers::Equals(expected));
            }
        }
    }
}


SCENARIO("Testing sort algorithm char"){
    GIVEN("vector v = c,b,a"){
        std::vector v = {'a', 'b', 'c'};

        WHEN("sort is called"){
            std::sort(begin(v), end(v));

            THEN("v is {a,b,c}"){
                std::vector expected = {'a', 'b', 'c'};
                REQUIRE(v == expected);
                REQUIRE_THAT(v, Catch::Matchers::Equals(expected));
            }
        }
    }
}

SCENARIO("Testing sort algorithm string"){
    GIVEN("string"){
      
  std::string s = "textTEXT";
        WHEN("sort is called"){
          
            std::sort(begin(s), end(s));
            THEN("result is ETTXettx"){
                REQUIRE(s == "ETTXettx");
            }
        }
    }
}


SCENARIO("Testing sort algorithm comparator"){
    GIVEN("vector v = 3,2,1"){
        std::vector v = {3,2,1};

        WHEN("sort is called with std::greater"){
            std::sort(begin(v), end(v), std::greater{});
            std::sort(begin(v), end(v), [](auto lhs, auto rhs){return lhs > rhs});
            THEN("v is {1,2,3}"){
                std::vector expected = {1,2,3};
                REQUIRE(v == expected);
              
            }
        }
    }
}

