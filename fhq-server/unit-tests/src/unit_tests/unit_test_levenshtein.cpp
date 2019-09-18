#include <unit_test_levenshtein.h>
#include <utils_levenshtein.h>
#include <vector>
#include <iostream>

REGISTRY_UNIT_TEST(UnitTestLevenshtein)


UnitTestLevenshtein::UnitTestLevenshtein()
    : UnitTestBase("UnitTestLevenshtein") {
    //
}

void UnitTestLevenshtein::init() {
    // nothing
}

bool UnitTestLevenshtein::run() {

    struct LTest {
        LTest(std::string s1, std::string s2, int n) : s1(s1), s2(s2), n(n) {}
        std::string s1;
        std::string s2;
        int n;
    };

    std::vector<LTest *> tests;
    tests.push_back(new LTest("test", "test", 0));
    tests.push_back(new LTest("tttt", "aaaa", 4));
    tests.push_back(new LTest("ta", "t0", 1));
    tests.push_back(new LTest("taf", "t0", 2));
    tests.push_back(new LTest("111111111111111", "1111111112111111", 1));
    tests.push_back(new LTest("!@#$%^&*()_+", "!@#%$^&*()+", 3));

    unsigned int nSuccess = 0;
    for (unsigned int i = 0; i < tests.size(); i++) {
        std::string s1 = tests[i]->s1;
        std::string s2 = tests[i]->s2;
        int n = tests[i]->n;
        int n1 = UtilsLevenshtein::distance(s1, s2);
        if (n1 != n) {
            std::cout << "Test levenshtein distance between " << s1 << " and " << s2 << "\n"
                      << " (expected " << n << ", but got " << n1 << ")";
        } else {
            nSuccess++;
        }
    }
    return nSuccess == tests.size();
}
