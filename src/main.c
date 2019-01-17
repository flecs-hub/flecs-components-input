#include <include/input.h>
#include <string.h>

static
void InitInput(EcsRows *rows) {
    void *row;
    for (row = rows->first; row < rows->last; row = ecs_next(rows, row)) {
        EcsInput *input = ecs_data(rows, row, 0);
        memset(input, 0, sizeof(EcsInput));
    }
}

void EcsComponentsInput(
    EcsWorld *world,
    int flags,
    void *handles_out)
{
    EcsComponentsInputHandles *handles = handles_out;

    ECS_COMPONENT(world, EcsInput);

    ECS_SYSTEM(world, InitInput, EcsOnAdd, EcsInput);

    handles->Input = EcsInput_h;
}
