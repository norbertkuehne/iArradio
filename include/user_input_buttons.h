#include <Arduino.h>
#include <EasyButton.h>
#include "icy_stream.h"
#include "epaper.h"
#include "controls.h"
#include "settings.h"
#include "hal.h"

void configure_buttons();
void buttons_rutine();
void handle_prev_button();
void handle_next_button();
void handle_home_timeout();
void handle_home();