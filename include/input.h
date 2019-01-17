#ifndef REFLECS_COMPONENTS_INPUT_H
#define REFLECS_COMPONENTS_INPUT_H

/* This generated file contains includes for project dependencies */
#include "bake_config.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ECS_KEY_UNKNOWN (0)
#define ECS_KEY_RETURN ('\r')
#define ECS_KEY_ESCAPE ('\033')
#define ECS_KEY_BACKSPACE ('\b')
#define ECS_KEY_TAB ('\t')
#define ECS_KEY_SPACE (' ')
#define ECS_KEY_EXCLAIM ('!')
#define ECS_KEY_QUOTEDBL ('"')
#define ECS_KEY_HASH ('#')
#define ECS_KEY_PERCENT ('%')
#define ECS_KEY_DOLLAR ('$')
#define ECS_KEY_AMPERSAND ('&')
#define ECS_KEY_QUOTE ('\'')
#define ECS_KEY_LEFTPAREN ('(')
#define ECS_KEY_RIGHTPAREN (')')
#define ECS_KEY_ASTERISK ('*')
#define ECS_KEY_PLUS ('+')
#define ECS_KEY_COMMA (',')
#define ECS_KEY_MINUS ('-')
#define ECS_KEY_PERIOD ('.')
#define ECS_KEY_SLASH ('/')
#define ECS_KEY_0 ('0')
#define ECS_KEY_1 ('1')
#define ECS_KEY_2 ('2')
#define ECS_KEY_3 ('3')
#define ECS_KEY_4 ('4')
#define ECS_KEY_5 ('5')
#define ECS_KEY_6 ('6')
#define ECS_KEY_7 ('7')
#define ECS_KEY_8 ('8')
#define ECS_KEY_9 ('9')
#define ECS_KEY_COLON (':')
#define ECS_KEY_SEMICOLON (';')
#define ECS_KEY_LESS ('<')
#define ECS_KEY_EQUALS ('=')
#define ECS_KEY_GREATER ('>')
#define ECS_KEY_QUESTION ('?')
#define ECS_KEY_AT ('@')
#define ECS_KEY_LEFTBRACKET ('[')
#define ECS_KEY_BACKSLASH ('\\')
#define ECS_KEY_RIGHTBRACKET (']')
#define ECS_KEY_CARET ('^')
#define ECS_KEY_UNDERSCORE ('_')
#define ECS_KEY_BACKQUOTE ('`')
#define ECS_KEY_A ('a')
#define ECS_KEY_B ('b')
#define ECS_KEY_C ('c')
#define ECS_KEY_D ('d')
#define ECS_KEY_E ('e')
#define ECS_KEY_F ('f')
#define ECS_KEY_G ('g')
#define ECS_KEY_H ('h')
#define ECS_KEY_I ('i')
#define ECS_KEY_J ('j')
#define ECS_KEY_K ('k')
#define ECS_KEY_L ('l')
#define ECS_KEY_M ('m')
#define ECS_KEY_N ('n')
#define ECS_KEY_O ('o')
#define ECS_KEY_P ('p')
#define ECS_KEY_Q ('q')
#define ECS_KEY_R ('r')
#define ECS_KEY_S ('s')
#define ECS_KEY_T ('t')
#define ECS_KEY_U ('u')
#define ECS_KEY_V ('v')
#define ECS_KEY_W ('w')
#define ECS_KEY_X ('x')
#define ECS_KEY_Y ('y')
#define ECS_KEY_Z ('z')
#define ECS_KEY_DELETE (127)

#define ECS_KEY_RIGHT ('R')
#define ECS_KEY_LEFT ('L')
#define ECS_KEY_DOWN ('D')
#define ECS_KEY_UP ('U')
#define ECS_KEY_CTRL ('C')
#define ECS_KEY_SHIFT ('S')
#define ECS_KEY_ALT ('A')

typedef struct EcsKeyState {
    bool pressed;
    bool state;
    bool current;
} EcsKeyState;

typedef struct EcsMouseState {
    EcsKeyState left;
    EcsKeyState right;
    EcsVec2 wnd;
    EcsVec2 rel;
    EcsVec2 scroll;
} EcsMouseState;

typedef struct EcsInput {
    EcsKeyState keys[128];
    EcsMouseState mouse;
} EcsInput;

typedef struct EcsComponentsInputHandles {
    EcsEntity Input;
} EcsComponentsInputHandles;

void EcsComponentsInput(
    EcsWorld *world,
    int flags,
    void *handles_out);

#define EcsComponentsInput_DeclareHandles(handles)\
    EcsDeclareHandle(handles, Input);\

#ifdef __cplusplus
}
#endif

#endif
