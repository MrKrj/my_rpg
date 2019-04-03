
/******************************************************\
*                                                      *
* TOI AUSSI APPRENDS-EN PLUS AU BOOTSTRAP AVEC KEVIN ! *
*                                                      *
\******************************************************/


#define SUCCESS 0
#define E_ARGS  1
#define E_MEM   2

#define BUTTON "./img/butto.jng"

open(BUTTON)

typedef s_obj obj_t;
struct obj_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2i position;
    sfVector2f scale;
    sfVector2f size;
    obj_t *next;
    obj_t *prev;
};

update_and_active_buttons()

struct s_button {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2i position;
    sfVector2f scale;
    sfVector2f size;
    int (fct *)();
} button_t;

typedef struct s_menu {
    obj_t *towers;
    obj_t *units;
} menu_t;
