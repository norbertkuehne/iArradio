#include <Arduino.h>

void init_display();
void weathericonsTest();
void main_interface(String date, String time, String dayOfWeek, String temperature);
void set_epaper_time(String time);
void set_epaper_date(String date, String dayOfWeek);
void set_epaper_meteo(String temperature);
void set_epaper_station(String station);
void subrutine_time(String time);
void subrutine_temperature(String temperature);
void subrutine_date(String date, String dayOfWeek);
void subrutine_station(String station);
