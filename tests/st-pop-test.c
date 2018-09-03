#include "suite.h"
#include "st.h"

void st_pop(CuTest * tc)
{
    struct st * stack = st_new(10,sizeof(int));
    for(int i =0; i < 10; i++){
        stack->push(stack,&i);
    }
    int i;
    while(stack->top != 0) {
        stack->pop(stack, &i);
    }
    CuAssertIntEquals(tc, 0, stack->top);
    st_delete(stack);
}


int main(void) { return execute(st_pop);}