#ifndef FLECS_COMPONENTS_INPUT_H
#define FLECS_COMPONENTS_INPUT_H

/* This generated file contains includes for project dependencies */
#include <flecs-components-input/bake_config.h>

// Reflection system boilerplate
#undef ECS_META_IMPL
#ifndef FLECS_COMPONENTS_INPUT_IMPL
#define ECS_META_IMPL EXTERN // Ensure meta symbols are only defined once
#endif

#define ECS_INPUT_MAX_CLASS_COUNT (64)

FLECS_COMPONENTS_INPUT_API
ECS_STRUCT(ecs_key_state_t, {
    bool up;
    bool down;
    bool state;
    bool current;
});

FLECS_COMPONENTS_INPUT_API
ECS_STRUCT(ecs_mouse_coord_t, {
    float x;
    float y;
});

FLECS_COMPONENTS_INPUT_API
ECS_STRUCT(ecs_mouse_state_t, {
    ecs_key_state_t left;
    ecs_key_state_t right;
    ecs_mouse_coord_t screen;
    ecs_mouse_coord_t window;
    ecs_mouse_coord_t view;
    ecs_mouse_coord_t scroll;
    bool moved;
});

FLECS_COMPONENTS_INPUT_API
ECS_STRUCT(EcsInput, {
    ecs_key_state_t keys[128];
    ecs_mouse_state_t mouse;
});

FLECS_COMPONENTS_INPUT_API
ECS_STRUCT(EcsInputState, {
    bool hover;
    bool drag;
    bool lmb_down;
    bool rmb_down;
    float mouse_x;
    float mouse_y;
    float drag_anchor_x;
    float drag_anchor_y;
});

typedef struct EcsEventListener {
    ecs_iter_action_t on_enter;
    ecs_iter_action_t on_leave;
    ecs_iter_action_t on_lmb_down;
    ecs_iter_action_t on_lmb_up;
    ecs_iter_action_t on_rmb_down;
    ecs_iter_action_t on_rmb_up;
    ecs_iter_action_t on_drag;

    void *ctx;
    void *binding_ctx;

    ecs_ctx_free_t ctx_free;
    ecs_ctx_free_t binding_ctx_free;
} EcsEventListener;

FLECS_COMPONENTS_INPUT_API
extern ECS_COMPONENT_DECLARE(EcsEventListener);

ECS_STRUCT(ecs_classlist_added_by_t, {
    ecs_id_t added;
    ecs_entity_t by;
});

typedef struct EcsClassList {
    ecs_vec_t classes;
    ecs_vec_t added_by;
} EcsClassList;

FLECS_COMPONENTS_INPUT_API
extern ECS_COMPONENT_DECLARE(EcsClassList);

#ifdef __cplusplus
extern "C" {
#endif

#define ECS_KEY_UNKNOWN          ((int)0)
#define ECS_KEY_RETURN           ((int)'\r')
#define ECS_KEY_ESCAPE           ((int)'\033')
#define ECS_KEY_BACKSPACE        ((int)'\b')
#define ECS_KEY_TAB              ((int)'\t')
#define ECS_KEY_SPACE            ((int)' ')
#define ECS_KEY_EXCLAIM          ((int)'!')
#define ECS_KEY_QUOTEDBL         ((int)'"')
#define ECS_KEY_HASH             ((int)'#')
#define ECS_KEY_PERCENT          ((int)'%')
#define ECS_KEY_DOLLAR           ((int)'$')
#define ECS_KEY_AMPERSAND        ((int)'&')
#define ECS_KEY_QUOTE            ((int)'\'')
#define ECS_KEY_LEFT_PAREN       ((int)'(')
#define ECS_KEY_RIGHT_PAREN      ((int)')')
#define ECS_KEY_ASTERISK         ((int)'*')
#define ECS_KEY_PLUS             ((int)'+')
#define ECS_KEY_COMMA            ((int)',')
#define ECS_KEY_MINUS            ((int)'-')
#define ECS_KEY_PERIOD           ((int)'.')
#define ECS_KEY_SLASH            ((int)'/')

#define ECS_KEY_0                ((int)'0')
#define ECS_KEY_1                ((int)'1')
#define ECS_KEY_2                ((int)'2')
#define ECS_KEY_3                ((int)'3')
#define ECS_KEY_4                ((int)'4')
#define ECS_KEY_5                ((int)'5')
#define ECS_KEY_6                ((int)'6')
#define ECS_KEY_7                ((int)'7')
#define ECS_KEY_8                ((int)'8')
#define ECS_KEY_9                ((int)'9')

#define ECS_KEY_COLON            ((int)':')
#define ECS_KEY_SEMICOLON        ((int)';')
#define ECS_KEY_LESS             ((int)'<')
#define ECS_KEY_EQUAL            ((int)'=')
#define ECS_KEY_GREATER          ((int)'>')
#define ECS_KEY_QUESTION         ((int)'?')
#define ECS_KEY_AT               ((int)'@')
#define ECS_KEY_LEFT_BRACKET     ((int)'[')
#define ECS_KEY_RIGHT_BRACKET    ((int)']')
#define ECS_KEY_BACKSLASH        ((int)'\\')
#define ECS_KEY_CARET            ((int)'^')
#define ECS_KEY_UNDERSCORE       ((int)'_')
#define ECS_KEY_GRAVE_ACCENT     ((int)'`')
#define ECS_KEY_APOSTROPHE       ((int)'\'')

#define ECS_KEY_A                ((int)'a')
#define ECS_KEY_B                ((int)'b')
#define ECS_KEY_C                ((int)'c')
#define ECS_KEY_D                ((int)'d')
#define ECS_KEY_E                ((int)'e')
#define ECS_KEY_F                ((int)'f')
#define ECS_KEY_G                ((int)'g')
#define ECS_KEY_H                ((int)'h')
#define ECS_KEY_I                ((int)'i')
#define ECS_KEY_J                ((int)'j')
#define ECS_KEY_K                ((int)'k')
#define ECS_KEY_L                ((int)'l')
#define ECS_KEY_M                ((int)'m')
#define ECS_KEY_N                ((int)'n')
#define ECS_KEY_O                ((int)'o')
#define ECS_KEY_P                ((int)'p')
#define ECS_KEY_Q                ((int)'q')
#define ECS_KEY_R                ((int)'r')
#define ECS_KEY_S                ((int)'s')
#define ECS_KEY_T                ((int)'t')
#define ECS_KEY_U                ((int)'u')
#define ECS_KEY_V                ((int)'v')
#define ECS_KEY_W                ((int)'w')
#define ECS_KEY_X                ((int)'x')
#define ECS_KEY_Y                ((int)'y')
#define ECS_KEY_Z                ((int)'z')
#define ECS_KEY_DELETE           ((int)127)

#define ECS_KEY_RIGHT            ((int)'R')
#define ECS_KEY_LEFT             ((int)'L')
#define ECS_KEY_DOWN             ((int)'D')
#define ECS_KEY_UP               ((int)'U')
#define ECS_KEY_LEFT_CTRL        ((int)'C')
#define ECS_KEY_LEFT_ALT         ((int)'A')
#define ECS_KEY_LEFT_SHIFT       ((int)'S')
#define ECS_KEY_RIGHT_CTRL       ((int)'T')
#define ECS_KEY_RIGHT_ALT        ((int)'Z')
#define ECS_KEY_RIGHT_SHIFT      ((int)'H')
#define ECS_KEY_INSERT           ((int)'I')
#define ECS_KEY_HOME             ((int)'H')
#define ECS_KEY_END              ((int)'E')
#define ECS_KEY_PAGE_UP          ((int)'O')
#define ECS_KEY_PAGE_DOWN        ((int)'P')

FLECS_COMPONENTS_INPUT_API
void FlecsComponentsInputImport(
    ecs_world_t *world);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#ifndef FLECS_NO_CPP

namespace flecs {

namespace components {

class input {
public:
    using Input = EcsInput;
    using InputState = EcsInputState;

    struct EventListener : EcsEventListener {
    private:
        struct binding_ctx_t {
            void *on_enter = nullptr;
            void *on_leave = nullptr;
            void *on_lmb_down = nullptr;
            void *on_lmb_up = nullptr;
            void *on_rmb_down = nullptr;
            void *on_rmb_up = nullptr;
            void *on_drag = nullptr;

            ecs_ctx_free_t free_on_enter;
            ecs_ctx_free_t free_on_leave;
            ecs_ctx_free_t free_on_lmb_down;
            ecs_ctx_free_t free_on_lmb_up;
            ecs_ctx_free_t free_on_rmb_down;
            ecs_ctx_free_t free_on_rmb_up;
            ecs_ctx_free_t free_on_drag;
        };

        template <typename Delegate>
        static void run_on_enter(ecs_iter_t *it) {
            it->binding_ctx = static_cast<binding_ctx_t*>(it->binding_ctx)->on_enter;
            if (it->binding_ctx) {
                Delegate::run(it);
            }
        }

        template <typename Delegate>
        static void run_on_leave(ecs_iter_t *it) {
            it->binding_ctx = static_cast<binding_ctx_t*>(it->binding_ctx)->on_leave;
            if (it->binding_ctx) {
                Delegate::run(it);
            }
        }

        template <typename Delegate>
        static void run_on_lmb_down(ecs_iter_t *it) {
            it->binding_ctx = static_cast<binding_ctx_t*>(it->binding_ctx)->on_lmb_down;
            if (it->binding_ctx) {
                Delegate::run(it);
            }
        }

        template <typename Delegate>
        static void run_on_lmb_up(ecs_iter_t *it) {
            it->binding_ctx = static_cast<binding_ctx_t*>(it->binding_ctx)->on_lmb_up;
            if (it->binding_ctx) {
                Delegate::run(it);
            }
        }

        template <typename Delegate>
        static void run_on_rmb_down(ecs_iter_t *it) {
            it->binding_ctx = static_cast<binding_ctx_t*>(it->binding_ctx)->on_rmb_down;
            if (it->binding_ctx) {
                Delegate::run(it);
            }
        }

        template <typename Delegate>
        static void run_on_rmb_up(ecs_iter_t *it) {
            it->binding_ctx = static_cast<binding_ctx_t*>(it->binding_ctx)->on_rmb_up;
            if (it->binding_ctx) {
                Delegate::run(it);
            }
        }

        template <typename Delegate>
        static void run_on_drag(ecs_iter_t *it) {
            it->binding_ctx = static_cast<binding_ctx_t*>(it->binding_ctx)->on_drag;
            if (it->binding_ctx) {
                Delegate::run(it);
            }
        }

        static void free_binding_ctx(void *arg) {
            binding_ctx_t *ctx = static_cast<binding_ctx_t*>(arg);
            if (ctx->on_enter) ctx->free_on_enter(ctx->on_enter);
            if (ctx->on_leave) ctx->free_on_enter(ctx->on_leave);
            if (ctx->on_lmb_down) ctx->free_on_enter(ctx->on_lmb_down);
            if (ctx->on_lmb_up) ctx->free_on_enter(ctx->on_lmb_up);
            if (ctx->on_rmb_down) ctx->free_on_enter(ctx->on_rmb_down);
            if (ctx->on_rmb_up) ctx->free_on_enter(ctx->on_rmb_up);
            if (ctx->on_drag) ctx->free_on_enter(ctx->on_drag);
        }

        binding_ctx_t* get_binding_ctx() {
            if (this->binding_ctx) {
                return static_cast<binding_ctx_t*>(this->binding_ctx);
            } else {
                this->binding_ctx_free = free_binding_ctx;
                return static_cast<binding_ctx_t*>(
                    this->binding_ctx = new binding_ctx_t{});
            }
        }

    public:
        template <typename Func, typename Delegate = flecs::delegate<Func, InputState>>
        void on_enter(const Func& func) {
            this->EcsEventListener::on_enter = run_on_enter<Delegate>;
            binding_ctx_t *ctx = get_binding_ctx();
            ctx->on_enter = Delegate::make(func);
            ctx->free_on_enter = Delegate::free;
        }

        template <typename Func, typename Delegate = flecs::delegate<Func, InputState>>
        void on_leave(const Func& func) {
            this->EcsEventListener::on_leave = run_on_leave<Delegate>;
            binding_ctx_t *ctx = get_binding_ctx();
            ctx->on_leave = Delegate::make(func);
            ctx->free_on_leave = Delegate::free;
        }

        template <typename Func, typename Delegate = flecs::delegate<Func, InputState>>
        void on_lmb_down(const Func& func) {
            this->EcsEventListener::on_lmb_down = run_on_lmb_down<Delegate>;
            binding_ctx_t *ctx = get_binding_ctx();
            ctx->on_lmb_down = Delegate::make(func);
            ctx->free_on_lmb_down = Delegate::free;
        }

        template <typename Func, typename Delegate = flecs::delegate<Func, InputState>>
        void on_lmb_up(const Func& func) {
            this->EcsEventListener::on_lmb_up = run_on_lmb_up<Delegate>;
            binding_ctx_t *ctx = get_binding_ctx();
            ctx->on_lmb_up = Delegate::make(func);
            ctx->free_on_lmb_up = Delegate::free;
        }

        template <typename Func, typename Delegate = flecs::delegate<Func, InputState>>
        void on_rmb_down(const Func& func) {
            this->EcsEventListener::on_rmb_down = run_on_rmb_down<Delegate>;
            binding_ctx_t *ctx = get_binding_ctx();
            ctx->on_rmb_down = Delegate::make(func);
            ctx->free_on_rmb_down = Delegate::free;
        }

        template <typename Func, typename Delegate = flecs::delegate<Func, InputState>>
        void on_rmb_up(const Func& func) {
            this->EcsEventListener::on_rmb_up = run_on_rmb_up<Delegate>;
            binding_ctx_t *ctx = get_binding_ctx();
            ctx->on_rmb_up = Delegate::make(func);
            ctx->free_on_rmb_up = Delegate::free;
        }

        template <typename Func, typename Delegate = flecs::delegate<Func, InputState>>
        void on_drag(const Func& func) {
            this->EcsEventListener::on_drag = run_on_drag<Delegate>;
            binding_ctx_t *ctx = get_binding_ctx();
            ctx->on_drag = Delegate::make(func);
            ctx->free_on_drag = Delegate::free;
        }
    };

    struct ClassList : EcsClassList {
        void add(flecs::entity_t clss) {
            ecs_vec_t *vec = &this->classes;
            flecs::entity_t *arr = ecs_vec_first_t(vec, flecs::entity_t);
            int32_t count = ecs_vec_count(vec);

            // Ensure there are no duplicates
            for (int32_t i = 0; i < count; i ++) {
                if (arr[i] == clss) {
                    return;
                }
            }

            ecs_vec_append_t(NULL, vec, flecs::entity_t)[0] = clss;
        }

        void remove(flecs::entity_t clss) {
            ecs_vec_t *vec = &this->classes;
            flecs::entity_t *arr = ecs_vec_first_t(vec, flecs::entity_t);
            int32_t count = ecs_vec_count(vec);

            for (int32_t i = 0; i < count; i ++) {
                if (arr[i] == clss) {
                    /* Preserve order (vs. moving last element) */
                    int32_t to_move = count - i - 1;
                    if (to_move) {
                        ecs_os_memmove_n(
                            &arr[i], &arr[i + 1], flecs::entity_t, to_move);
                    }

                    /* Reduce length of vector by one */
                    ecs_vec_remove_last(vec);
                    break;
                }
            }
        }

        template <typename T>
        void add() {
            add(flecs::type_id<T>());
        }

        template <typename T>
        void remove() {
            remove(flecs::type_id<T>());
        }
    };

    input(flecs::world& ecs) {
        // Load module contents
        FlecsComponentsInputImport(ecs);

        // Bind C++ types with module contents
        ecs.module<flecs::components::input>();
        ecs.component<Input>();
        ecs.component<InputState>();
        ecs.component<EventListener>();
        ecs.component<ClassList>();
    }
};

}
}

#endif
#endif

#endif
