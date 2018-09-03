#include "suite.h"
#include "st.h"

void st_create(CuTest * tc)
{
    struct st * stack = st_new(5,sizeof(int));
    CuAssertIntEquals(tc, 0, stack->top);
    CuAssertIntEquals(tc, sizeof(int), stack->_elemsize);
    CuAssertIntEquals(tc, 5, stack->_capacity);
    
    st_delete(stack);
}


int main(void) { return execute(st_create);}