#include <assert.h>
#include "d2p4.h"

int main()
{
    assert(palindrome(123454321) == 0);
    assert(palindrome(123456789) == 1);
    assert(palindrome(12345679) == 1);
    return 0;
}
