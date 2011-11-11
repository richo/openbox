#include "openbox/actions.h"
#include "openbox/client.h"
#include "obt/display.h"

static gboolean run_func(ObActionsData *data, gpointer options);

void action_warp_startup(void)
{
    actions_register("Warp",
                     NULL, NULL,
                     run_func);
}

/* Always return FALSE because its not interactive */
static gboolean run_func(ObActionsData *data, gpointer options)
{
    if (data->client) {
        XWarpPointer(obt_display, None, data->client->window, 0, 0, 0, 0, data->client->frame->area.width/2, data->client->frame->area.height/2);
    }

    return FALSE;
}
