// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: example_project

#include "../ui.h"

void ui_Screen8_screen_init(void)
{
    ui_Screen8 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart5 = lv_chart_create(ui_Screen8);
    lv_obj_set_width(ui_Chart5, 262);
    lv_obj_set_height(ui_Chart5, 132);
    lv_obj_set_x(ui_Chart5, 13);
    lv_obj_set_y(ui_Chart5, -9);
    lv_obj_set_align(ui_Chart5, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_Chart5, LV_CHART_TYPE_BAR);
    lv_chart_set_point_count(ui_Chart5, 15);
    lv_chart_set_range(ui_Chart5, LV_CHART_AXIS_PRIMARY_Y, 500, 1800);
    lv_chart_set_div_line_count(ui_Chart5, 0, 0);
    lv_chart_set_axis_tick(ui_Chart5, LV_CHART_AXIS_PRIMARY_X, 0, 5, 5, 2, false, 50);
    lv_chart_set_axis_tick(ui_Chart5, LV_CHART_AXIS_PRIMARY_Y, 5, 5, 11, 2, true, 50);
    lv_chart_set_axis_tick(ui_Chart5, LV_CHART_AXIS_SECONDARY_Y, 10, 5, 5, 2, false, 25);
    lv_chart_series_t * ui_Chart5_series_1 = lv_chart_add_series(ui_Chart5, lv_color_hex(0x086003),
                                                                 LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_Chart5_series_1_array[] = { 550, 650, 750, 800, 1500, 1200, 1110, 800, 800, 1200, 1400, 1700, 1300, 1100, 600 };
    lv_chart_set_ext_y_array(ui_Chart5, ui_Chart5_series_1, ui_Chart5_series_1_array);
    lv_obj_set_style_bg_color(ui_Chart5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_graphparameter4 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_graphparameter4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_graphparameter4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_graphparameter4, -121);
    lv_obj_set_y(ui_graphparameter4, -99);
    lv_obj_set_align(ui_graphparameter4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_graphparameter4, "TVOC");
    lv_obj_set_style_text_color(ui_graphparameter4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_graphparameter4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_graphparameter4, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Container16 = lv_obj_create(ui_Screen8);
    lv_obj_remove_style_all(ui_Container16);
    lv_obj_set_width(ui_Container16, 314);
    lv_obj_set_height(ui_Container16, 30);
    lv_obj_set_x(ui_Container16, 1);
    lv_obj_set_y(ui_Container16, -99);
    lv_obj_set_align(ui_Container16, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Container16, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_border_color(ui_Container16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Container16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Container16, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Container16, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Container16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gpunit4 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_gpunit4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_gpunit4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_gpunit4, -76);
    lv_obj_set_y(ui_gpunit4, -98);
    lv_obj_set_align(ui_gpunit4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_gpunit4, "ug/m");
    lv_obj_set_style_text_color(ui_gpunit4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gpunit4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_gpunit4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gpvalue4 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_gpvalue4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_gpvalue4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_gpvalue4, 99);
    lv_obj_set_y(ui_gpvalue4, -100);
    lv_obj_set_align(ui_gpvalue4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_gpvalue4, "1465");
    lv_obj_set_style_text_color(ui_gpvalue4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gpvalue4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_gpvalue4, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_return4 = lv_btn_create(ui_Screen8);
    lv_obj_set_width(ui_return4, 245);
    lv_obj_set_height(ui_return4, 37);
    lv_obj_set_x(ui_return4, 9);
    lv_obj_set_y(ui_return4, 85);
    lv_obj_set_align(ui_return4, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_return4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_return4, lv_color_hex(0x086100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_return4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_return4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_return4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_returnlabel4 = lv_label_create(ui_Screen8);
    lv_obj_set_width(ui_returnlabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_returnlabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_returnlabel4, 6);
    lv_obj_set_y(ui_returnlabel4, 86);
    lv_obj_set_align(ui_returnlabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_returnlabel4, "RETURN");
    lv_obj_set_style_text_color(ui_returnlabel4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_returnlabel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_returnlabel4, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_return4, ui_event_return4, LV_EVENT_ALL, NULL);

}