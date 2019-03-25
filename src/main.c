#include <include/input.h>
#include <string.h>

static
void InitInput(ecs_rows_t *rows) {
    EcsInput *input = ecs_column(rows, EcsInput, 1);
    int i;
    for (i = 0; i < rows->count; i ++) {
        memset(&input[i], 0, sizeof(EcsInput));
    }
}

void EcsComponentsInput(
    ecs_world_t *world,
    int flags,
    void *handles_out)
{
    EcsComponentsInputHandles *handles = handles_out;

    ECS_COMPONENT(world, EcsInput);

    ECS_SYSTEM(world, InitInput, EcsOnAdd, EcsInput);

    ECS_SET_COMPONENT(handles, EcsInput);
}
