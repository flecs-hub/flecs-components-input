#include <include/input.h>

void EcsComponentsInput(
    EcsWorld *world,
    int flags,
    void *handles_out)
{
    EcsComponentsInputHandles *handles = handles_out;

    ECS_COMPONENT(world, EcsInput);

    handles->Input = EcsInput_h;
}
