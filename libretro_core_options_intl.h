﻿#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

#ifdef __cplusplus
extern "C" {
#endif
/* RETRO_LANGUAGE_AR */

#define CATEGORY_VIDEO_LABEL_AR "فيديو"
#define CATEGORY_VIDEO_INFO_0_AR NULL
#define CATEGORY_AUDIO_LABEL_AR "نظام تشغيل الصوت"
#define CATEGORY_AUDIO_INFO_0_AR NULL
#define CATEGORY_INPUT_LABEL_AR "الإدخال"
#define CATEGORY_INPUT_INFO_0_AR NULL
#define CATEGORY_HACKS_LABEL_AR NULL
#define CATEGORY_HACKS_INFO_0_AR NULL
#define CATEGORY_CD_LABEL_AR NULL
#define CATEGORY_CD_INFO_0_AR NULL
#define PCE_PALETTE_LABEL_AR NULL
#define PCE_PALETTE_INFO_0_AR NULL
#define OPTION_VAL_RGB_AR NULL
#define OPTION_VAL_COMPOSITE_AR NULL
#define PCE_ASPECT_RATIO_LABEL_AR "نسبة الجانب"
#define PCE_ASPECT_RATIO_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define OPTION_VAL_6_5_AR NULL
#define OPTION_VAL_4_3_AR NULL
#define OPTION_VAL_UNCORRECTED_AR NULL
#define PCE_SCALING_LABEL_AR NULL
#define PCE_SCALING_INFO_0_AR NULL
#define OPTION_VAL_LORES_AR NULL
#define OPTION_VAL_HIRES_AR NULL
#define PCE_HIRES_BLEND_LABEL_AR NULL
#define PCE_HIRES_BLEND_INFO_0_AR NULL
#define PCE_H_OVERSCAN_LABEL_AR NULL
#define PCE_H_OVERSCAN_INFO_0_AR NULL
#define PCE_INITIAL_SCANLINE_LABEL_AR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_3_AR NULL
#define PCE_LAST_SCANLINE_LABEL_AR NULL
#define PCE_LAST_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_242_AR NULL
#define PCE_PSGREVISION_LABEL_AR NULL
#define PCE_PSGREVISION_INFO_0_AR NULL
#define OPTION_VAL_HUC6280_AR NULL
#define OPTION_VAL_HUC6280A_AR NULL
#define PCE_RESAMP_QUALITY_LABEL_AR NULL
#define PCE_RESAMP_QUALITY_INFO_0_AR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_AR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_AR NULL
#define OPTION_VAL_0_125_AR NULL
#define OPTION_VAL_0_250_AR NULL
#define OPTION_VAL_0_375_AR NULL
#define OPTION_VAL_0_500_AR NULL
#define OPTION_VAL_0_625_AR NULL
#define OPTION_VAL_0_750_AR NULL
#define OPTION_VAL_0_875_AR NULL
#define OPTION_VAL_1_000_AR NULL
#define OPTION_VAL_1_125_AR NULL
#define OPTION_VAL_1_25_AR NULL
#define OPTION_VAL_1_50_AR NULL
#define OPTION_VAL_1_75_AR NULL
#define OPTION_VAL_2_00_AR NULL
#define OPTION_VAL_2_25_AR NULL
#define OPTION_VAL_2_50_AR NULL
#define OPTION_VAL_2_75_AR NULL
#define OPTION_VAL_3_00_AR NULL
#define OPTION_VAL_3_25_AR NULL
#define OPTION_VAL_3_50_AR NULL
#define OPTION_VAL_3_75_AR NULL
#define OPTION_VAL_4_00_AR NULL
#define OPTION_VAL_4_25_AR NULL
#define OPTION_VAL_4_50_AR NULL
#define OPTION_VAL_4_75_AR NULL
#define OPTION_VAL_5_00_AR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_AR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_AR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_AR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_AR NULL
#define PCE_MULTITAP_LABEL_AR NULL
#define PCE_MULTITAP_INFO_0_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AR NULL
#define OPTION_VAL_2_BUTTONS_AR NULL
#define OPTION_VAL_6_BUTTONS_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_AR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AR NULL
#define PCE_TURBO_TOGGLING_LABEL_AR NULL
#define PCE_TURBO_TOGGLING_INFO_0_AR NULL
#define OPTION_VAL_TOGGLE_AR NULL
#define OPTION_VAL_ALWAYS_AR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_AR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_AR NULL
#define PCE_TURBO_DELAY_LABEL_AR NULL
#define PCE_TURBO_DELAY_INFO_0_AR NULL
#define OPTION_VAL_FAST_AR "سريع"
#define OPTION_VAL_MEDIUM_AR NULL
#define OPTION_VAL_SLOW_AR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_AR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_AR NULL
#define PCE_CDIMAGECACHE_LABEL_AR NULL
#define PCE_CDIMAGECACHE_INFO_0_AR NULL
#define PCE_CDBIOS_LABEL_AR NULL
#define PCE_CDBIOS_INFO_0_AR NULL
#define OPTION_VAL_GAMES_EXPRESS_AR NULL
#define OPTION_VAL_SYSTEM_CARD_1_AR NULL
#define OPTION_VAL_SYSTEM_CARD_2_AR NULL
#define OPTION_VAL_SYSTEM_CARD_3_AR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_AR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_AR NULL
#define PCE_ARCADECARD_LABEL_AR NULL
#define PCE_ARCADECARD_INFO_0_AR NULL
#define PCE_CDSPEED_LABEL_AR NULL
#define PCE_CDSPEED_LABEL_CAT_AR NULL
#define PCE_CDSPEED_INFO_0_AR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_AR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_AR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_AR NULL
#define OPTION_VAL_10_BIT_AR NULL
#define OPTION_VAL_12_BIT_AR NULL
#define PCE_ADPCMVOLUME_LABEL_AR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_AR NULL
#define PCE_ADPCMVOLUME_INFO_0_AR NULL
#define PCE_ADPCMVOLUME_INFO_1_AR NULL
#define PCE_CDDAVOLUME_LABEL_AR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_AR NULL
#define PCE_CDPSGVOLUME_LABEL_AR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_AR NULL
#define PCE_NOSPRITELIMIT_LABEL_AR NULL
#define PCE_NOSPRITELIMIT_INFO_0_AR NULL
#define PCE_OCMULTIPLIER_LABEL_AR NULL
#define PCE_OCMULTIPLIER_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AR,
      CATEGORY_VIDEO_INFO_0_AR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AR,
      CATEGORY_AUDIO_INFO_0_AR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AR,
      CATEGORY_HACKS_INFO_0_AR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AR,
      CATEGORY_CD_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_AR,
      NULL,
      PCE_PALETTE_INFO_0_AR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AR },
         { "Composite", OPTION_VAL_COMPOSITE_AR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_AR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_AR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "6:5", OPTION_VAL_6_5_AR },
         { "4:3", OPTION_VAL_4_3_AR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_AR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_AR,
      NULL,
      PCE_SCALING_INFO_0_AR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "lores", OPTION_VAL_LORES_AR },
         { "hires", OPTION_VAL_HIRES_AR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_AR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_AR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_AR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_AR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_AR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_AR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_AR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_AR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_AR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_AR,
      NULL,
      PCE_PSGREVISION_INFO_0_AR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_AR },
         { "HuC6280A", OPTION_VAL_HUC6280A_AR },
         { "auto", OPTION_VAL_AUTO_AR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_AR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_AR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_AR },
         { "0.250", OPTION_VAL_0_250_AR },
         { "0.375", OPTION_VAL_0_375_AR },
         { "0.500", OPTION_VAL_0_500_AR },
         { "0.625", OPTION_VAL_0_625_AR },
         { "0.750", OPTION_VAL_0_750_AR },
         { "0.875", OPTION_VAL_0_875_AR },
         { "1.000", OPTION_VAL_1_000_AR },
         { "1.125", OPTION_VAL_1_125_AR },
         { "1.25", OPTION_VAL_1_25_AR },
         { "1.50", OPTION_VAL_1_50_AR },
         { "1.75", OPTION_VAL_1_75_AR },
         { "2.00", OPTION_VAL_2_00_AR },
         { "2.25", OPTION_VAL_2_25_AR },
         { "2.50", OPTION_VAL_2_50_AR },
         { "2.75", OPTION_VAL_2_75_AR },
         { "3.00", OPTION_VAL_3_00_AR },
         { "3.25", OPTION_VAL_3_25_AR },
         { "3.50", OPTION_VAL_3_50_AR },
         { "3.75", OPTION_VAL_3_75_AR },
         { "4.00", OPTION_VAL_4_00_AR },
         { "4.25", OPTION_VAL_4_25_AR },
         { "4.50", OPTION_VAL_4_50_AR },
         { "4.75", OPTION_VAL_4_75_AR },
         { "5.00", OPTION_VAL_5_00_AR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_AR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_AR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_AR,
      NULL,
      PCE_MULTITAP_INFO_0_AR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_AR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_AR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_AR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_AR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_AR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_AR,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_AR },
         { "always", OPTION_VAL_ALWAYS_AR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_AR,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_AR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_AR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_AR },
         { "Medium", OPTION_VAL_MEDIUM_AR },
         { "Slow", OPTION_VAL_SLOW_AR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_AR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_AR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_AR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_AR,
      NULL,
      PCE_CDBIOS_INFO_0_AR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_AR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_AR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_AR,
      NULL,
      PCE_ARCADECARD_INFO_0_AR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_AR,
      PCE_CDSPEED_LABEL_CAT_AR,
      PCE_CDSPEED_INFO_0_AR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_AR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_AR,
      PCE_ADPCMEXTRAPREC_INFO_0_AR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_AR },
         { "12-bit", OPTION_VAL_12_BIT_AR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_AR,
      PCE_ADPCMVOLUME_LABEL_CAT_AR,
      PCE_ADPCMVOLUME_INFO_0_AR,
      PCE_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_AR,
      PCE_CDDAVOLUME_LABEL_CAT_AR,
      PCE_ADPCMVOLUME_INFO_0_AR,
      PCE_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_AR,
      PCE_CDPSGVOLUME_LABEL_CAT_AR,
      PCE_ADPCMVOLUME_INFO_0_AR,
      PCE_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_AR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_AR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_VIDEO_LABEL_AST "Videu"
#define CATEGORY_VIDEO_INFO_0_AST NULL
#define CATEGORY_AUDIO_LABEL_AST "Audiu"
#define CATEGORY_AUDIO_INFO_0_AST NULL
#define CATEGORY_INPUT_LABEL_AST "Entrada"
#define CATEGORY_INPUT_INFO_0_AST NULL
#define CATEGORY_HACKS_LABEL_AST "Hacks de la emulación"
#define CATEGORY_HACKS_INFO_0_AST NULL
#define CATEGORY_CD_LABEL_AST NULL
#define CATEGORY_CD_INFO_0_AST NULL
#define PCE_PALETTE_LABEL_AST NULL
#define PCE_PALETTE_INFO_0_AST NULL
#define OPTION_VAL_RGB_AST NULL
#define OPTION_VAL_COMPOSITE_AST NULL
#define PCE_ASPECT_RATIO_LABEL_AST "Proporción d'aspeutu"
#define PCE_ASPECT_RATIO_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_6_5_AST NULL
#define OPTION_VAL_4_3_AST NULL
#define OPTION_VAL_UNCORRECTED_AST NULL
#define PCE_SCALING_LABEL_AST NULL
#define PCE_SCALING_INFO_0_AST NULL
#define OPTION_VAL_LORES_AST NULL
#define OPTION_VAL_HIRES_AST NULL
#define PCE_HIRES_BLEND_LABEL_AST NULL
#define PCE_HIRES_BLEND_INFO_0_AST NULL
#define PCE_H_OVERSCAN_LABEL_AST NULL
#define PCE_H_OVERSCAN_INFO_0_AST NULL
#define PCE_INITIAL_SCANLINE_LABEL_AST NULL
#define PCE_INITIAL_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_3_AST "3 (Por defeutu)"
#define PCE_LAST_SCANLINE_LABEL_AST NULL
#define PCE_LAST_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_242_AST "242 (Por defeutu)"
#define PCE_PSGREVISION_LABEL_AST NULL
#define PCE_PSGREVISION_INFO_0_AST NULL
#define OPTION_VAL_HUC6280_AST NULL
#define OPTION_VAL_HUC6280A_AST NULL
#define PCE_RESAMP_QUALITY_LABEL_AST NULL
#define PCE_RESAMP_QUALITY_INFO_0_AST NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AST NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AST NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_AST "Sensibilidá del mur"
#define PCE_MOUSE_SENSITIVITY_INFO_0_AST NULL
#define OPTION_VAL_0_125_AST "0,125"
#define OPTION_VAL_0_250_AST "0,250"
#define OPTION_VAL_0_375_AST "0,375"
#define OPTION_VAL_0_500_AST "0,500"
#define OPTION_VAL_0_625_AST "0,625"
#define OPTION_VAL_0_750_AST "0,750"
#define OPTION_VAL_0_875_AST "0,875"
#define OPTION_VAL_1_000_AST "1,000"
#define OPTION_VAL_1_125_AST "1,125"
#define OPTION_VAL_1_25_AST "1,25"
#define OPTION_VAL_1_50_AST "1,50"
#define OPTION_VAL_1_75_AST "1,75"
#define OPTION_VAL_2_00_AST "2,00"
#define OPTION_VAL_2_25_AST "2,25"
#define OPTION_VAL_2_50_AST "2,50"
#define OPTION_VAL_2_75_AST "2,75"
#define OPTION_VAL_3_00_AST "3,00"
#define OPTION_VAL_3_25_AST "3,25"
#define OPTION_VAL_3_50_AST "3,50"
#define OPTION_VAL_3_75_AST "3,75"
#define OPTION_VAL_4_00_AST "4,00"
#define OPTION_VAL_4_25_AST "4,25"
#define OPTION_VAL_4_50_AST "4,50"
#define OPTION_VAL_4_75_AST "4,75"
#define OPTION_VAL_5_00_AST "5,00"
#define PCE_UP_DOWN_ALLOWED_LABEL_AST "Permitir les direiciones opuestes"
#define PCE_UP_DOWN_ALLOWED_INFO_0_AST NULL
#define PCE_DISABLE_SOFTRESET_LABEL_AST NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_AST NULL
#define PCE_MULTITAP_LABEL_AST NULL
#define PCE_MULTITAP_INFO_0_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AST NULL
#define OPTION_VAL_2_BUTTONS_AST NULL
#define OPTION_VAL_6_BUTTONS_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_AST NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AST NULL
#define PCE_TURBO_TOGGLING_LABEL_AST NULL
#define PCE_TURBO_TOGGLING_INFO_0_AST NULL
#define OPTION_VAL_TOGGLE_AST NULL
#define OPTION_VAL_ALWAYS_AST NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_AST NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_AST NULL
#define PCE_TURBO_DELAY_LABEL_AST NULL
#define PCE_TURBO_DELAY_INFO_0_AST NULL
#define OPTION_VAL_FAST_AST NULL
#define OPTION_VAL_MEDIUM_AST NULL
#define OPTION_VAL_SLOW_AST NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_AST NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_AST NULL
#define PCE_CDIMAGECACHE_LABEL_AST NULL
#define PCE_CDIMAGECACHE_INFO_0_AST NULL
#define PCE_CDBIOS_LABEL_AST NULL
#define PCE_CDBIOS_INFO_0_AST NULL
#define OPTION_VAL_GAMES_EXPRESS_AST NULL
#define OPTION_VAL_SYSTEM_CARD_1_AST NULL
#define OPTION_VAL_SYSTEM_CARD_2_AST NULL
#define OPTION_VAL_SYSTEM_CARD_3_AST NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_AST NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_AST NULL
#define PCE_ARCADECARD_LABEL_AST NULL
#define PCE_ARCADECARD_INFO_0_AST NULL
#define PCE_CDSPEED_LABEL_AST NULL
#define PCE_CDSPEED_LABEL_CAT_AST NULL
#define PCE_CDSPEED_INFO_0_AST NULL
#define PCE_ADPCMEXTRAPREC_LABEL_AST NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_AST NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_AST NULL
#define OPTION_VAL_10_BIT_AST "10 bits"
#define OPTION_VAL_12_BIT_AST "12 bits"
#define PCE_ADPCMVOLUME_LABEL_AST NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_AST NULL
#define PCE_ADPCMVOLUME_INFO_0_AST NULL
#define PCE_ADPCMVOLUME_INFO_1_AST NULL
#define PCE_CDDAVOLUME_LABEL_AST NULL
#define PCE_CDDAVOLUME_LABEL_CAT_AST NULL
#define PCE_CDPSGVOLUME_LABEL_AST NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_AST NULL
#define PCE_NOSPRITELIMIT_LABEL_AST NULL
#define PCE_NOSPRITELIMIT_INFO_0_AST NULL
#define PCE_OCMULTIPLIER_LABEL_AST NULL
#define PCE_OCMULTIPLIER_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AST,
      CATEGORY_VIDEO_INFO_0_AST
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AST,
      CATEGORY_AUDIO_INFO_0_AST
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AST,
      CATEGORY_HACKS_INFO_0_AST
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AST,
      CATEGORY_CD_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_AST,
      NULL,
      PCE_PALETTE_INFO_0_AST,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AST },
         { "Composite", OPTION_VAL_COMPOSITE_AST },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_AST,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_AST,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "6:5", OPTION_VAL_6_5_AST },
         { "4:3", OPTION_VAL_4_3_AST },
         { "uncorrected", OPTION_VAL_UNCORRECTED_AST },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_AST,
      NULL,
      PCE_SCALING_INFO_0_AST,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "lores", OPTION_VAL_LORES_AST },
         { "hires", OPTION_VAL_HIRES_AST },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_AST,
      NULL,
      PCE_HIRES_BLEND_INFO_0_AST,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_AST,
      NULL,
      PCE_H_OVERSCAN_INFO_0_AST,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_AST,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_AST,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AST },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_AST,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_AST,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_AST },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_AST,
      NULL,
      PCE_PSGREVISION_INFO_0_AST,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_AST },
         { "HuC6280A", OPTION_VAL_HUC6280A_AST },
         { "auto", OPTION_VAL_AUTO_AST },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_AST,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AST },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_AST,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_AST,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_AST,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_AST },
         { "0.250", OPTION_VAL_0_250_AST },
         { "0.375", OPTION_VAL_0_375_AST },
         { "0.500", OPTION_VAL_0_500_AST },
         { "0.625", OPTION_VAL_0_625_AST },
         { "0.750", OPTION_VAL_0_750_AST },
         { "0.875", OPTION_VAL_0_875_AST },
         { "1.000", OPTION_VAL_1_000_AST },
         { "1.125", OPTION_VAL_1_125_AST },
         { "1.25", OPTION_VAL_1_25_AST },
         { "1.50", OPTION_VAL_1_50_AST },
         { "1.75", OPTION_VAL_1_75_AST },
         { "2.00", OPTION_VAL_2_00_AST },
         { "2.25", OPTION_VAL_2_25_AST },
         { "2.50", OPTION_VAL_2_50_AST },
         { "2.75", OPTION_VAL_2_75_AST },
         { "3.00", OPTION_VAL_3_00_AST },
         { "3.25", OPTION_VAL_3_25_AST },
         { "3.50", OPTION_VAL_3_50_AST },
         { "3.75", OPTION_VAL_3_75_AST },
         { "4.00", OPTION_VAL_4_00_AST },
         { "4.25", OPTION_VAL_4_25_AST },
         { "4.50", OPTION_VAL_4_50_AST },
         { "4.75", OPTION_VAL_4_75_AST },
         { "5.00", OPTION_VAL_5_00_AST },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_AST,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_AST,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_AST,
      NULL,
      PCE_MULTITAP_INFO_0_AST,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_AST,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_AST,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_AST,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_AST,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_AST,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_AST,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_AST },
         { "always", OPTION_VAL_ALWAYS_AST },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_AST,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_AST,
      NULL,
      PCE_TURBO_DELAY_INFO_0_AST,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_AST },
         { "Medium", OPTION_VAL_MEDIUM_AST },
         { "Slow", OPTION_VAL_SLOW_AST },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_AST,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_AST,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_AST,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_AST,
      NULL,
      PCE_CDBIOS_INFO_0_AST,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AST },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AST },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AST },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AST },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_AST },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_AST },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_AST,
      NULL,
      PCE_ARCADECARD_INFO_0_AST,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_AST,
      PCE_CDSPEED_LABEL_CAT_AST,
      PCE_CDSPEED_INFO_0_AST,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_AST,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_AST,
      PCE_ADPCMEXTRAPREC_INFO_0_AST,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_AST },
         { "12-bit", OPTION_VAL_12_BIT_AST },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_AST,
      PCE_ADPCMVOLUME_LABEL_CAT_AST,
      PCE_ADPCMVOLUME_INFO_0_AST,
      PCE_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_AST,
      PCE_CDDAVOLUME_LABEL_CAT_AST,
      PCE_ADPCMVOLUME_INFO_0_AST,
      PCE_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_AST,
      PCE_CDPSGVOLUME_LABEL_CAT_AST,
      PCE_ADPCMVOLUME_INFO_0_AST,
      PCE_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_AST,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_AST,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_BE */

#define CATEGORY_VIDEO_LABEL_BE "Відэа"
#define CATEGORY_VIDEO_INFO_0_BE NULL
#define CATEGORY_AUDIO_LABEL_BE "Аўдыя"
#define CATEGORY_AUDIO_INFO_0_BE NULL
#define CATEGORY_INPUT_LABEL_BE "Увод"
#define CATEGORY_INPUT_INFO_0_BE NULL
#define CATEGORY_HACKS_LABEL_BE NULL
#define CATEGORY_HACKS_INFO_0_BE NULL
#define CATEGORY_CD_LABEL_BE NULL
#define CATEGORY_CD_INFO_0_BE NULL
#define PCE_PALETTE_LABEL_BE NULL
#define PCE_PALETTE_INFO_0_BE NULL
#define OPTION_VAL_RGB_BE NULL
#define OPTION_VAL_COMPOSITE_BE NULL
#define PCE_ASPECT_RATIO_LABEL_BE "Суадносіны бакоў"
#define PCE_ASPECT_RATIO_INFO_0_BE NULL
#define OPTION_VAL_AUTO_BE "Аўта"
#define OPTION_VAL_6_5_BE NULL
#define OPTION_VAL_4_3_BE NULL
#define OPTION_VAL_UNCORRECTED_BE NULL
#define PCE_SCALING_LABEL_BE NULL
#define PCE_SCALING_INFO_0_BE NULL
#define OPTION_VAL_LORES_BE NULL
#define OPTION_VAL_HIRES_BE NULL
#define PCE_HIRES_BLEND_LABEL_BE NULL
#define PCE_HIRES_BLEND_INFO_0_BE NULL
#define PCE_H_OVERSCAN_LABEL_BE NULL
#define PCE_H_OVERSCAN_INFO_0_BE NULL
#define PCE_INITIAL_SCANLINE_LABEL_BE NULL
#define PCE_INITIAL_SCANLINE_INFO_0_BE NULL
#define OPTION_VAL_3_BE NULL
#define PCE_LAST_SCANLINE_LABEL_BE NULL
#define PCE_LAST_SCANLINE_INFO_0_BE NULL
#define OPTION_VAL_242_BE NULL
#define PCE_PSGREVISION_LABEL_BE NULL
#define PCE_PSGREVISION_INFO_0_BE NULL
#define OPTION_VAL_HUC6280_BE NULL
#define OPTION_VAL_HUC6280A_BE NULL
#define PCE_RESAMP_QUALITY_LABEL_BE NULL
#define PCE_RESAMP_QUALITY_INFO_0_BE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_BE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_BE NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_BE NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_BE NULL
#define OPTION_VAL_0_125_BE NULL
#define OPTION_VAL_0_250_BE NULL
#define OPTION_VAL_0_375_BE NULL
#define OPTION_VAL_0_500_BE NULL
#define OPTION_VAL_0_625_BE NULL
#define OPTION_VAL_0_750_BE NULL
#define OPTION_VAL_0_875_BE NULL
#define OPTION_VAL_1_000_BE NULL
#define OPTION_VAL_1_125_BE NULL
#define OPTION_VAL_1_25_BE NULL
#define OPTION_VAL_1_50_BE NULL
#define OPTION_VAL_1_75_BE NULL
#define OPTION_VAL_2_00_BE NULL
#define OPTION_VAL_2_25_BE NULL
#define OPTION_VAL_2_50_BE NULL
#define OPTION_VAL_2_75_BE NULL
#define OPTION_VAL_3_00_BE NULL
#define OPTION_VAL_3_25_BE NULL
#define OPTION_VAL_3_50_BE NULL
#define OPTION_VAL_3_75_BE NULL
#define OPTION_VAL_4_00_BE NULL
#define OPTION_VAL_4_25_BE NULL
#define OPTION_VAL_4_50_BE NULL
#define OPTION_VAL_4_75_BE NULL
#define OPTION_VAL_5_00_BE NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_BE NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_BE NULL
#define PCE_DISABLE_SOFTRESET_LABEL_BE NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_BE NULL
#define PCE_MULTITAP_LABEL_BE NULL
#define PCE_MULTITAP_INFO_0_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BE NULL
#define OPTION_VAL_2_BUTTONS_BE NULL
#define OPTION_VAL_6_BUTTONS_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_BE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BE NULL
#define PCE_TURBO_TOGGLING_LABEL_BE NULL
#define PCE_TURBO_TOGGLING_INFO_0_BE NULL
#define OPTION_VAL_TOGGLE_BE NULL
#define OPTION_VAL_ALWAYS_BE NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_BE NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_BE NULL
#define PCE_TURBO_DELAY_LABEL_BE NULL
#define PCE_TURBO_DELAY_INFO_0_BE NULL
#define OPTION_VAL_FAST_BE NULL
#define OPTION_VAL_MEDIUM_BE NULL
#define OPTION_VAL_SLOW_BE NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_BE NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_BE NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_BE NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_BE NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_BE NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_BE NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_BE NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_BE NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_BE NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_BE NULL
#define PCE_CDIMAGECACHE_LABEL_BE NULL
#define PCE_CDIMAGECACHE_INFO_0_BE NULL
#define PCE_CDBIOS_LABEL_BE NULL
#define PCE_CDBIOS_INFO_0_BE NULL
#define OPTION_VAL_GAMES_EXPRESS_BE NULL
#define OPTION_VAL_SYSTEM_CARD_1_BE NULL
#define OPTION_VAL_SYSTEM_CARD_2_BE NULL
#define OPTION_VAL_SYSTEM_CARD_3_BE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_BE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_BE NULL
#define PCE_ARCADECARD_LABEL_BE NULL
#define PCE_ARCADECARD_INFO_0_BE NULL
#define PCE_CDSPEED_LABEL_BE NULL
#define PCE_CDSPEED_LABEL_CAT_BE NULL
#define PCE_CDSPEED_INFO_0_BE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_BE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_BE NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_BE NULL
#define OPTION_VAL_10_BIT_BE NULL
#define OPTION_VAL_12_BIT_BE NULL
#define PCE_ADPCMVOLUME_LABEL_BE NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_BE NULL
#define PCE_ADPCMVOLUME_INFO_0_BE NULL
#define PCE_ADPCMVOLUME_INFO_1_BE NULL
#define PCE_CDDAVOLUME_LABEL_BE NULL
#define PCE_CDDAVOLUME_LABEL_CAT_BE NULL
#define PCE_CDPSGVOLUME_LABEL_BE NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_BE NULL
#define PCE_NOSPRITELIMIT_LABEL_BE NULL
#define PCE_NOSPRITELIMIT_INFO_0_BE NULL
#define PCE_OCMULTIPLIER_LABEL_BE NULL
#define PCE_OCMULTIPLIER_INFO_0_BE NULL

struct retro_core_option_v2_category option_cats_be[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_BE,
      CATEGORY_VIDEO_INFO_0_BE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_BE,
      CATEGORY_AUDIO_INFO_0_BE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_BE,
      CATEGORY_INPUT_INFO_0_BE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_BE,
      CATEGORY_HACKS_INFO_0_BE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_BE,
      CATEGORY_CD_INFO_0_BE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_be[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_BE,
      NULL,
      PCE_PALETTE_INFO_0_BE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_BE },
         { "Composite", OPTION_VAL_COMPOSITE_BE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_BE,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_BE,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_BE },
         { "6:5", OPTION_VAL_6_5_BE },
         { "4:3", OPTION_VAL_4_3_BE },
         { "uncorrected", OPTION_VAL_UNCORRECTED_BE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_BE,
      NULL,
      PCE_SCALING_INFO_0_BE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_BE },
         { "lores", OPTION_VAL_LORES_BE },
         { "hires", OPTION_VAL_HIRES_BE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_BE,
      NULL,
      PCE_HIRES_BLEND_INFO_0_BE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_BE,
      NULL,
      PCE_H_OVERSCAN_INFO_0_BE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_BE },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_BE,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_BE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_BE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_BE,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_BE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_BE },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_BE,
      NULL,
      PCE_PSGREVISION_INFO_0_BE,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_BE },
         { "HuC6280A", OPTION_VAL_HUC6280A_BE },
         { "auto", OPTION_VAL_AUTO_BE },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_BE,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_BE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_BE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_BE,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_BE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_BE,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_BE },
         { "0.250", OPTION_VAL_0_250_BE },
         { "0.375", OPTION_VAL_0_375_BE },
         { "0.500", OPTION_VAL_0_500_BE },
         { "0.625", OPTION_VAL_0_625_BE },
         { "0.750", OPTION_VAL_0_750_BE },
         { "0.875", OPTION_VAL_0_875_BE },
         { "1.000", OPTION_VAL_1_000_BE },
         { "1.125", OPTION_VAL_1_125_BE },
         { "1.25", OPTION_VAL_1_25_BE },
         { "1.50", OPTION_VAL_1_50_BE },
         { "1.75", OPTION_VAL_1_75_BE },
         { "2.00", OPTION_VAL_2_00_BE },
         { "2.25", OPTION_VAL_2_25_BE },
         { "2.50", OPTION_VAL_2_50_BE },
         { "2.75", OPTION_VAL_2_75_BE },
         { "3.00", OPTION_VAL_3_00_BE },
         { "3.25", OPTION_VAL_3_25_BE },
         { "3.50", OPTION_VAL_3_50_BE },
         { "3.75", OPTION_VAL_3_75_BE },
         { "4.00", OPTION_VAL_4_00_BE },
         { "4.25", OPTION_VAL_4_25_BE },
         { "4.50", OPTION_VAL_4_50_BE },
         { "4.75", OPTION_VAL_4_75_BE },
         { "5.00", OPTION_VAL_5_00_BE },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_BE,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_BE,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_BE,
      NULL,
      PCE_MULTITAP_INFO_0_BE,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_BE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_BE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_BE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_BE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_BE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_BE,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_BE },
         { "always", OPTION_VAL_ALWAYS_BE },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_BE,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_BE,
      NULL,
      PCE_TURBO_DELAY_INFO_0_BE,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_BE },
         { "Medium", OPTION_VAL_MEDIUM_BE },
         { "Slow", OPTION_VAL_SLOW_BE },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_BE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_BE,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_BE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_BE,
      NULL,
      PCE_CDBIOS_INFO_0_BE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_BE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_BE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_BE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_BE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_BE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_BE },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_BE,
      NULL,
      PCE_ARCADECARD_INFO_0_BE,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_BE,
      PCE_CDSPEED_LABEL_CAT_BE,
      PCE_CDSPEED_INFO_0_BE,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_BE,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_BE,
      PCE_ADPCMEXTRAPREC_INFO_0_BE,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_BE },
         { "12-bit", OPTION_VAL_12_BIT_BE },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_BE,
      PCE_ADPCMVOLUME_LABEL_CAT_BE,
      PCE_ADPCMVOLUME_INFO_0_BE,
      PCE_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_BE,
      PCE_CDDAVOLUME_LABEL_CAT_BE,
      PCE_ADPCMVOLUME_INFO_0_BE,
      PCE_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_BE,
      PCE_CDPSGVOLUME_LABEL_CAT_BE,
      PCE_ADPCMVOLUME_INFO_0_BE,
      PCE_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_BE,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_BE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_BE,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_BE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_be = {
   option_cats_be,
   option_defs_be
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA "Vídeo"
#define CATEGORY_VIDEO_INFO_0_CA NULL
#define CATEGORY_AUDIO_LABEL_CA "Àudio"
#define CATEGORY_AUDIO_INFO_0_CA NULL
#define CATEGORY_INPUT_LABEL_CA "Dispositius de joc"
#define CATEGORY_INPUT_INFO_0_CA NULL
#define CATEGORY_HACKS_LABEL_CA NULL
#define CATEGORY_HACKS_INFO_0_CA NULL
#define CATEGORY_CD_LABEL_CA NULL
#define CATEGORY_CD_INFO_0_CA NULL
#define PCE_PALETTE_LABEL_CA NULL
#define PCE_PALETTE_INFO_0_CA NULL
#define OPTION_VAL_RGB_CA NULL
#define OPTION_VAL_COMPOSITE_CA NULL
#define PCE_ASPECT_RATIO_LABEL_CA "Relació d'aspecte"
#define PCE_ASPECT_RATIO_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA "Automàtic"
#define OPTION_VAL_6_5_CA NULL
#define OPTION_VAL_4_3_CA NULL
#define OPTION_VAL_UNCORRECTED_CA NULL
#define PCE_SCALING_LABEL_CA NULL
#define PCE_SCALING_INFO_0_CA NULL
#define OPTION_VAL_LORES_CA NULL
#define OPTION_VAL_HIRES_CA NULL
#define PCE_HIRES_BLEND_LABEL_CA NULL
#define PCE_HIRES_BLEND_INFO_0_CA NULL
#define PCE_H_OVERSCAN_LABEL_CA NULL
#define PCE_H_OVERSCAN_INFO_0_CA NULL
#define PCE_INITIAL_SCANLINE_LABEL_CA NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_3_CA NULL
#define PCE_LAST_SCANLINE_LABEL_CA NULL
#define PCE_LAST_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_242_CA NULL
#define PCE_PSGREVISION_LABEL_CA NULL
#define PCE_PSGREVISION_INFO_0_CA NULL
#define OPTION_VAL_HUC6280_CA NULL
#define OPTION_VAL_HUC6280A_CA NULL
#define PCE_RESAMP_QUALITY_LABEL_CA NULL
#define PCE_RESAMP_QUALITY_INFO_0_CA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CA NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_CA NULL
#define OPTION_VAL_0_125_CA "0,125"
#define OPTION_VAL_0_250_CA "0,250"
#define OPTION_VAL_0_375_CA "0,375"
#define OPTION_VAL_0_500_CA "0,500"
#define OPTION_VAL_0_625_CA "0,625"
#define OPTION_VAL_0_750_CA "0,750"
#define OPTION_VAL_0_875_CA "0,875"
#define OPTION_VAL_1_000_CA "1,000"
#define OPTION_VAL_1_125_CA "1,125"
#define OPTION_VAL_1_25_CA "1,25"
#define OPTION_VAL_1_50_CA "1,50"
#define OPTION_VAL_1_75_CA "1,75"
#define OPTION_VAL_2_00_CA "2,00"
#define OPTION_VAL_2_25_CA "2,25"
#define OPTION_VAL_2_50_CA "2,50"
#define OPTION_VAL_2_75_CA "2,75"
#define OPTION_VAL_3_00_CA "3,00"
#define OPTION_VAL_3_25_CA "3,25"
#define OPTION_VAL_3_50_CA "3,50"
#define OPTION_VAL_3_75_CA "3,75"
#define OPTION_VAL_4_00_CA "4,00"
#define OPTION_VAL_4_25_CA "4,25"
#define OPTION_VAL_4_50_CA "4,50"
#define OPTION_VAL_4_75_CA "4,75"
#define OPTION_VAL_5_00_CA "5,00"
#define PCE_UP_DOWN_ALLOWED_LABEL_CA NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CA NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CA NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CA NULL
#define PCE_MULTITAP_LABEL_CA NULL
#define PCE_MULTITAP_INFO_0_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CA NULL
#define OPTION_VAL_2_BUTTONS_CA NULL
#define OPTION_VAL_6_BUTTONS_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CA NULL
#define PCE_TURBO_TOGGLING_LABEL_CA NULL
#define PCE_TURBO_TOGGLING_INFO_0_CA NULL
#define OPTION_VAL_TOGGLE_CA NULL
#define OPTION_VAL_ALWAYS_CA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CA NULL
#define PCE_TURBO_DELAY_LABEL_CA NULL
#define PCE_TURBO_DELAY_INFO_0_CA NULL
#define OPTION_VAL_FAST_CA "Ràpida"
#define OPTION_VAL_MEDIUM_CA NULL
#define OPTION_VAL_SLOW_CA NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CA NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CA NULL
#define PCE_CDIMAGECACHE_LABEL_CA NULL
#define PCE_CDIMAGECACHE_INFO_0_CA NULL
#define PCE_CDBIOS_LABEL_CA NULL
#define PCE_CDBIOS_INFO_0_CA NULL
#define OPTION_VAL_GAMES_EXPRESS_CA NULL
#define OPTION_VAL_SYSTEM_CARD_1_CA NULL
#define OPTION_VAL_SYSTEM_CARD_2_CA NULL
#define OPTION_VAL_SYSTEM_CARD_3_CA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CA NULL
#define PCE_ARCADECARD_LABEL_CA NULL
#define PCE_ARCADECARD_INFO_0_CA NULL
#define PCE_CDSPEED_LABEL_CA NULL
#define PCE_CDSPEED_LABEL_CAT_CA NULL
#define PCE_CDSPEED_INFO_0_CA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CA NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CA NULL
#define OPTION_VAL_10_BIT_CA NULL
#define OPTION_VAL_12_BIT_CA NULL
#define PCE_ADPCMVOLUME_LABEL_CA NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CA NULL
#define PCE_ADPCMVOLUME_INFO_0_CA NULL
#define PCE_ADPCMVOLUME_INFO_1_CA NULL
#define PCE_CDDAVOLUME_LABEL_CA NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CA NULL
#define PCE_CDPSGVOLUME_LABEL_CA NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CA NULL
#define PCE_NOSPRITELIMIT_LABEL_CA NULL
#define PCE_NOSPRITELIMIT_INFO_0_CA NULL
#define PCE_OCMULTIPLIER_LABEL_CA NULL
#define PCE_OCMULTIPLIER_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CA,
      CATEGORY_VIDEO_INFO_0_CA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CA,
      CATEGORY_AUDIO_INFO_0_CA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CA,
      CATEGORY_HACKS_INFO_0_CA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CA,
      CATEGORY_CD_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CA,
      NULL,
      PCE_PALETTE_INFO_0_CA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CA },
         { "Composite", OPTION_VAL_COMPOSITE_CA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "6:5", OPTION_VAL_6_5_CA },
         { "4:3", OPTION_VAL_4_3_CA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CA,
      NULL,
      PCE_SCALING_INFO_0_CA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "lores", OPTION_VAL_LORES_CA },
         { "hires", OPTION_VAL_HIRES_CA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_CA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_CA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CA,
      NULL,
      PCE_PSGREVISION_INFO_0_CA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CA },
         { "HuC6280A", OPTION_VAL_HUC6280A_CA },
         { "auto", OPTION_VAL_AUTO_CA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CA },
         { "0.250", OPTION_VAL_0_250_CA },
         { "0.375", OPTION_VAL_0_375_CA },
         { "0.500", OPTION_VAL_0_500_CA },
         { "0.625", OPTION_VAL_0_625_CA },
         { "0.750", OPTION_VAL_0_750_CA },
         { "0.875", OPTION_VAL_0_875_CA },
         { "1.000", OPTION_VAL_1_000_CA },
         { "1.125", OPTION_VAL_1_125_CA },
         { "1.25", OPTION_VAL_1_25_CA },
         { "1.50", OPTION_VAL_1_50_CA },
         { "1.75", OPTION_VAL_1_75_CA },
         { "2.00", OPTION_VAL_2_00_CA },
         { "2.25", OPTION_VAL_2_25_CA },
         { "2.50", OPTION_VAL_2_50_CA },
         { "2.75", OPTION_VAL_2_75_CA },
         { "3.00", OPTION_VAL_3_00_CA },
         { "3.25", OPTION_VAL_3_25_CA },
         { "3.50", OPTION_VAL_3_50_CA },
         { "3.75", OPTION_VAL_3_75_CA },
         { "4.00", OPTION_VAL_4_00_CA },
         { "4.25", OPTION_VAL_4_25_CA },
         { "4.50", OPTION_VAL_4_50_CA },
         { "4.75", OPTION_VAL_4_75_CA },
         { "5.00", OPTION_VAL_5_00_CA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CA,
      NULL,
      PCE_MULTITAP_INFO_0_CA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CA,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CA },
         { "always", OPTION_VAL_ALWAYS_CA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CA,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CA },
         { "Medium", OPTION_VAL_MEDIUM_CA },
         { "Slow", OPTION_VAL_SLOW_CA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_CA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_CA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_CA,
      NULL,
      PCE_CDBIOS_INFO_0_CA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CA,
      NULL,
      PCE_ARCADECARD_INFO_0_CA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_CA,
      PCE_CDSPEED_LABEL_CAT_CA,
      PCE_CDSPEED_INFO_0_CA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_CA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CA,
      PCE_ADPCMEXTRAPREC_INFO_0_CA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CA },
         { "12-bit", OPTION_VAL_12_BIT_CA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CA,
      PCE_ADPCMVOLUME_LABEL_CAT_CA,
      PCE_ADPCMVOLUME_INFO_0_CA,
      PCE_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CA,
      PCE_CDDAVOLUME_LABEL_CAT_CA,
      PCE_ADPCMVOLUME_INFO_0_CA,
      PCE_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_CA,
      PCE_CDPSGVOLUME_LABEL_CAT_CA,
      PCE_ADPCMVOLUME_INFO_0_CA,
      PCE_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_CA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_CA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_VIDEO_LABEL_CHS "视频"
#define CATEGORY_VIDEO_INFO_0_CHS NULL
#define CATEGORY_AUDIO_LABEL_CHS "音频"
#define CATEGORY_AUDIO_INFO_0_CHS NULL
#define CATEGORY_INPUT_LABEL_CHS "输入"
#define CATEGORY_INPUT_INFO_0_CHS NULL
#define CATEGORY_HACKS_LABEL_CHS "模拟修改"
#define CATEGORY_HACKS_INFO_0_CHS "配置处理器超时和模拟精确参数，影响低级性能和兼容性。"
#define CATEGORY_CD_LABEL_CHS NULL
#define CATEGORY_CD_INFO_0_CHS NULL
#define PCE_PALETTE_LABEL_CHS "色板"
#define PCE_PALETTE_INFO_0_CHS "使用复合设计模式尝试复现原始的控制台显示，在部分游戏中可以显示更多细节"
#define OPTION_VAL_RGB_CHS NULL
#define OPTION_VAL_COMPOSITE_CHS "合成"
#define PCE_ASPECT_RATIO_LABEL_CHS "纵横比"
#define PCE_ASPECT_RATIO_INFO_0_CHS "选择首选内容宽高比。这只适用于RetroArch的宽高比设置为视频设置中的“核心提供”。"
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_6_5_CHS NULL
#define OPTION_VAL_4_3_CHS NULL
#define OPTION_VAL_UNCORRECTED_CHS NULL
#define PCE_SCALING_LABEL_CHS NULL
#define PCE_SCALING_INFO_0_CHS NULL
#define OPTION_VAL_LORES_CHS NULL
#define OPTION_VAL_HIRES_CHS "高分辨率"
#define PCE_HIRES_BLEND_LABEL_CHS NULL
#define PCE_HIRES_BLEND_INFO_0_CHS NULL
#define PCE_H_OVERSCAN_LABEL_CHS NULL
#define PCE_H_OVERSCAN_INFO_0_CHS NULL
#define PCE_INITIAL_SCANLINE_LABEL_CHS NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_3_CHS "3 (默认)"
#define PCE_LAST_SCANLINE_LABEL_CHS NULL
#define PCE_LAST_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_242_CHS "242 (默认)"
#define PCE_PSGREVISION_LABEL_CHS NULL
#define PCE_PSGREVISION_INFO_0_CHS NULL
#define OPTION_VAL_HUC6280_CHS NULL
#define OPTION_VAL_HUC6280A_CHS NULL
#define PCE_RESAMP_QUALITY_LABEL_CHS NULL
#define PCE_RESAMP_QUALITY_INFO_0_CHS NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHS NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHS NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CHS "鼠标灵敏度"
#define PCE_MOUSE_SENSITIVITY_INFO_0_CHS NULL
#define OPTION_VAL_0_125_CHS NULL
#define OPTION_VAL_0_250_CHS NULL
#define OPTION_VAL_0_375_CHS NULL
#define OPTION_VAL_0_500_CHS NULL
#define OPTION_VAL_0_625_CHS NULL
#define OPTION_VAL_0_750_CHS NULL
#define OPTION_VAL_0_875_CHS NULL
#define OPTION_VAL_1_000_CHS NULL
#define OPTION_VAL_1_125_CHS NULL
#define OPTION_VAL_1_25_CHS NULL
#define OPTION_VAL_1_50_CHS NULL
#define OPTION_VAL_1_75_CHS NULL
#define OPTION_VAL_2_00_CHS NULL
#define OPTION_VAL_2_25_CHS NULL
#define OPTION_VAL_2_50_CHS NULL
#define OPTION_VAL_2_75_CHS NULL
#define OPTION_VAL_3_00_CHS NULL
#define OPTION_VAL_3_25_CHS NULL
#define OPTION_VAL_3_50_CHS NULL
#define OPTION_VAL_3_75_CHS NULL
#define OPTION_VAL_4_00_CHS NULL
#define OPTION_VAL_4_25_CHS NULL
#define OPTION_VAL_4_50_CHS NULL
#define OPTION_VAL_4_75_CHS NULL
#define OPTION_VAL_5_00_CHS NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CHS NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CHS NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CHS NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CHS NULL
#define PCE_MULTITAP_LABEL_CHS NULL
#define PCE_MULTITAP_INFO_0_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHS NULL
#define OPTION_VAL_2_BUTTONS_CHS NULL
#define OPTION_VAL_6_BUTTONS_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHS NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHS NULL
#define PCE_TURBO_TOGGLING_LABEL_CHS NULL
#define PCE_TURBO_TOGGLING_INFO_0_CHS NULL
#define OPTION_VAL_TOGGLE_CHS "切换"
#define OPTION_VAL_ALWAYS_CHS NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHS NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CHS NULL
#define PCE_TURBO_DELAY_LABEL_CHS NULL
#define PCE_TURBO_DELAY_INFO_0_CHS NULL
#define OPTION_VAL_FAST_CHS "快"
#define OPTION_VAL_MEDIUM_CHS "中等"
#define OPTION_VAL_SLOW_CHS "慢"
#define PCE_P0_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CHS NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CHS NULL
#define PCE_CDIMAGECACHE_LABEL_CHS "启用CD光盘缓存（重启以生效）"
#define PCE_CDIMAGECACHE_INFO_0_CHS "在启动时将完整的镜像加载到内存中，以增加启动时间为代价，或许能减少游戏中的加载时间。"
#define PCE_CDBIOS_LABEL_CHS NULL
#define PCE_CDBIOS_INFO_0_CHS NULL
#define OPTION_VAL_GAMES_EXPRESS_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CHS NULL
#define PCE_ARCADECARD_LABEL_CHS NULL
#define PCE_ARCADECARD_INFO_0_CHS NULL
#define PCE_CDSPEED_LABEL_CHS NULL
#define PCE_CDSPEED_LABEL_CAT_CHS NULL
#define PCE_CDSPEED_INFO_0_CHS NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CHS NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CHS NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CHS NULL
#define OPTION_VAL_10_BIT_CHS "10 位"
#define OPTION_VAL_12_BIT_CHS "12 位"
#define PCE_ADPCMVOLUME_LABEL_CHS NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CHS NULL
#define PCE_ADPCMVOLUME_INFO_0_CHS NULL
#define PCE_ADPCMVOLUME_INFO_1_CHS NULL
#define PCE_CDDAVOLUME_LABEL_CHS NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CHS NULL
#define PCE_CDPSGVOLUME_LABEL_CHS NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CHS NULL
#define PCE_NOSPRITELIMIT_LABEL_CHS NULL
#define PCE_NOSPRITELIMIT_INFO_0_CHS NULL
#define PCE_OCMULTIPLIER_LABEL_CHS NULL
#define PCE_OCMULTIPLIER_INFO_0_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHS,
      CATEGORY_VIDEO_INFO_0_CHS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHS,
      CATEGORY_AUDIO_INFO_0_CHS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHS,
      CATEGORY_HACKS_INFO_0_CHS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHS,
      CATEGORY_CD_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CHS,
      NULL,
      PCE_PALETTE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHS },
         { "Composite", OPTION_VAL_COMPOSITE_CHS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CHS,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CHS,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "6:5", OPTION_VAL_6_5_CHS },
         { "4:3", OPTION_VAL_4_3_CHS },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CHS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CHS,
      NULL,
      PCE_SCALING_INFO_0_CHS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "lores", OPTION_VAL_LORES_CHS },
         { "hires", OPTION_VAL_HIRES_CHS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CHS,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CHS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_CHS,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CHS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CHS,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_CHS,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CHS },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CHS,
      NULL,
      PCE_PSGREVISION_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CHS },
         { "HuC6280A", OPTION_VAL_HUC6280A_CHS },
         { "auto", OPTION_VAL_AUTO_CHS },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CHS,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHS,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CHS,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CHS },
         { "0.250", OPTION_VAL_0_250_CHS },
         { "0.375", OPTION_VAL_0_375_CHS },
         { "0.500", OPTION_VAL_0_500_CHS },
         { "0.625", OPTION_VAL_0_625_CHS },
         { "0.750", OPTION_VAL_0_750_CHS },
         { "0.875", OPTION_VAL_0_875_CHS },
         { "1.000", OPTION_VAL_1_000_CHS },
         { "1.125", OPTION_VAL_1_125_CHS },
         { "1.25", OPTION_VAL_1_25_CHS },
         { "1.50", OPTION_VAL_1_50_CHS },
         { "1.75", OPTION_VAL_1_75_CHS },
         { "2.00", OPTION_VAL_2_00_CHS },
         { "2.25", OPTION_VAL_2_25_CHS },
         { "2.50", OPTION_VAL_2_50_CHS },
         { "2.75", OPTION_VAL_2_75_CHS },
         { "3.00", OPTION_VAL_3_00_CHS },
         { "3.25", OPTION_VAL_3_25_CHS },
         { "3.50", OPTION_VAL_3_50_CHS },
         { "3.75", OPTION_VAL_3_75_CHS },
         { "4.00", OPTION_VAL_4_00_CHS },
         { "4.25", OPTION_VAL_4_25_CHS },
         { "4.50", OPTION_VAL_4_50_CHS },
         { "4.75", OPTION_VAL_4_75_CHS },
         { "5.00", OPTION_VAL_5_00_CHS },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CHS,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CHS,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CHS,
      NULL,
      PCE_MULTITAP_INFO_0_CHS,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CHS,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CHS },
         { "always", OPTION_VAL_ALWAYS_CHS },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHS,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CHS,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CHS },
         { "Medium", OPTION_VAL_MEDIUM_CHS },
         { "Slow", OPTION_VAL_SLOW_CHS },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_CHS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_CHS,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_CHS,
      NULL,
      PCE_CDBIOS_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHS },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CHS },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CHS },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CHS,
      NULL,
      PCE_ARCADECARD_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_CHS,
      PCE_CDSPEED_LABEL_CAT_CHS,
      PCE_CDSPEED_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_CHS,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CHS,
      PCE_ADPCMEXTRAPREC_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CHS },
         { "12-bit", OPTION_VAL_12_BIT_CHS },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CHS,
      PCE_ADPCMVOLUME_LABEL_CAT_CHS,
      PCE_ADPCMVOLUME_INFO_0_CHS,
      PCE_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CHS,
      PCE_CDDAVOLUME_LABEL_CAT_CHS,
      PCE_ADPCMVOLUME_INFO_0_CHS,
      PCE_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_CHS,
      PCE_CDPSGVOLUME_LABEL_CAT_CHS,
      PCE_ADPCMVOLUME_INFO_0_CHS,
      PCE_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_CHS,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_CHS,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_VIDEO_LABEL_CHT "顯示"
#define CATEGORY_VIDEO_INFO_0_CHT "變更寬高比、畫面裁剪和影像輸出相關的設定。"
#define CATEGORY_AUDIO_LABEL_CHT "音效"
#define CATEGORY_AUDIO_INFO_0_CHT "變更音訊裝置相關的設定。"
#define CATEGORY_INPUT_LABEL_CHT "輸入"
#define CATEGORY_INPUT_INFO_0_CHT "變更控制器和滑鼠相關的設定。"
#define CATEGORY_HACKS_LABEL_CHT "進階"
#define CATEGORY_HACKS_INFO_0_CHT "變更模擬器進階破解的設定。"
#define CATEGORY_CD_LABEL_CHT "光碟機"
#define CATEGORY_CD_INFO_0_CHT "變更光碟機相關的設定。"
#define PCE_PALETTE_LABEL_CHT "影像配色"
#define PCE_PALETTE_INFO_0_CHT "設定<合成>時嘗試重建原色影像輸出, 可在部分遊戲中顯示更多細節。"
#define OPTION_VAL_RGB_CHT "原色"
#define OPTION_VAL_COMPOSITE_CHT "合成"
#define PCE_ASPECT_RATIO_LABEL_CHT "寬高比"
#define PCE_ASPECT_RATIO_INFO_0_CHT "設定畫面的寬高比, 僅限「設定/顯示/縮放」選項中, 設定「寬高比」為<核心參數>時使用。"
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_6_5_CHT NULL
#define OPTION_VAL_4_3_CHT NULL
#define OPTION_VAL_UNCORRECTED_CHT "未調整"
#define PCE_SCALING_LABEL_CHT "解析度縮放"
#define PCE_SCALING_INFO_0_CHT "設定<自動>時允許變更解析度, 設定<低解析度>時會破壞像素, 設定<高解析度>時維持在最大寬度顯示。"
#define OPTION_VAL_LORES_CHT "低解析度"
#define OPTION_VAL_HIRES_CHT "高解析度"
#define PCE_HIRES_BLEND_LABEL_CHT "高解析度混合強度"
#define PCE_HIRES_BLEND_INFO_0_CHT "設定高解析度模式下像素混合值, 過高的值會使影像更模糊。"
#define PCE_H_OVERSCAN_LABEL_CHT "顯示水平過度掃描"
#define PCE_H_OVERSCAN_INFO_0_CHT "設定<自動>時嘗試調整遊戲並裁剪空白區域。"
#define PCE_INITIAL_SCANLINE_LABEL_CHT "初始掃描線"
#define PCE_INITIAL_SCANLINE_INFO_0_CHT "設定最初渲染的掃描線, 過高的值將裁剪影像頂部。"
#define OPTION_VAL_3_CHT "3 (預設)"
#define PCE_LAST_SCANLINE_LABEL_CHT "最後掃描線"
#define PCE_LAST_SCANLINE_INFO_0_CHT "設定最後渲染的掃描線, 過低的值將裁剪影像底部。"
#define OPTION_VAL_242_CHT "242 (預設)"
#define PCE_PSGREVISION_LABEL_CHT "PSG音效晶片 (需要重新啟動)"
#define PCE_PSGREVISION_INFO_0_CHT "HuC6280 為 PC Engine 內建。\nHuC6280A 為 SuperGrafx 和 CoreGrafx 內建。"
#define OPTION_VAL_HUC6280_CHT NULL
#define OPTION_VAL_HUC6280A_CHT NULL
#define PCE_RESAMP_QUALITY_LABEL_CHT "Owl重新取樣器品質"
#define PCE_RESAMP_QUALITY_INFO_0_CHT "設定提高時可提供更好的訊噪比, 並維持較高頻率但增加計算資源, 且音量過高可能導致延遲和削波。"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHT "顯示輸入進階設定"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHT NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CHT "滑鼠靈敏度"
#define PCE_MOUSE_SENSITIVITY_INFO_0_CHT "數值越高游標移動速度越快。"
#define OPTION_VAL_0_125_CHT NULL
#define OPTION_VAL_0_250_CHT NULL
#define OPTION_VAL_0_375_CHT NULL
#define OPTION_VAL_0_500_CHT NULL
#define OPTION_VAL_0_625_CHT NULL
#define OPTION_VAL_0_750_CHT NULL
#define OPTION_VAL_0_875_CHT NULL
#define OPTION_VAL_1_000_CHT NULL
#define OPTION_VAL_1_125_CHT NULL
#define OPTION_VAL_1_25_CHT NULL
#define OPTION_VAL_1_50_CHT NULL
#define OPTION_VAL_1_75_CHT NULL
#define OPTION_VAL_2_00_CHT NULL
#define OPTION_VAL_2_25_CHT NULL
#define OPTION_VAL_2_50_CHT NULL
#define OPTION_VAL_2_75_CHT NULL
#define OPTION_VAL_3_00_CHT NULL
#define OPTION_VAL_3_25_CHT NULL
#define OPTION_VAL_3_50_CHT NULL
#define OPTION_VAL_3_75_CHT NULL
#define OPTION_VAL_4_00_CHT NULL
#define OPTION_VAL_4_25_CHT NULL
#define OPTION_VAL_4_50_CHT NULL
#define OPTION_VAL_4_75_CHT NULL
#define OPTION_VAL_5_00_CHT NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CHT "允許反向操作"
#define PCE_UP_DOWN_ALLOWED_INFO_0_CHT "允許控制器反方向快速操作, 可同時按左右或上下的方向, 可能導致遊戲的移動架構出錯。"
#define PCE_DISABLE_SOFTRESET_LABEL_CHT "禁用軟體重開 (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_CHT "禁用按[RUN鍵+SELECT鍵]重新開始遊戲, 此選項僅禁用核心登錄的組合鍵。"
#define PCE_MULTITAP_LABEL_CHT "五手把轉接器"
#define PCE_MULTITAP_INFO_0_CHT "使用五手把轉接插座可對應五位玩家, 部分遊戲執行時需要關閉此選項, 例如「超兄貴(Cho Aniki)」。"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHT NULL
#define OPTION_VAL_2_BUTTONS_CHT NULL
#define OPTION_VAL_6_BUTTONS_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHT NULL
#define PCE_TURBO_TOGGLING_LABEL_CHT "連發模式"
#define PCE_TURBO_TOGGLING_INFO_0_CHT "設定[III/IV鍵]連發模式(開關/專用), 設定<開關>時提供給[I/II鍵]使用。"
#define OPTION_VAL_TOGGLE_CHT "開關"
#define OPTION_VAL_ALWAYS_CHT "專用"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHT "備用連發按鍵"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CHT "開啟時[L3/R3鍵]作為連發的開關, 僅限「連發模式」設定為<開關>模式, 並且[L3/R3鍵]未設定按鍵時生效, 用於切換為主機的6鍵控制器。"
#define PCE_TURBO_DELAY_LABEL_CHT "連發速度"
#define PCE_TURBO_DELAY_INFO_0_CHT "設定按鍵連發的速度。"
#define OPTION_VAL_FAST_CHT "快速"
#define OPTION_VAL_MEDIUM_CHT "中速"
#define OPTION_VAL_SLOW_CHT "慢速"
#define PCE_P0_TURBO_I_ENABLE_LABEL_CHT "手把1 - I鍵連發"
#define PCE_P0_TURBO_II_ENABLE_LABEL_CHT "手把1 - II鍵連發"
#define PCE_P1_TURBO_I_ENABLE_LABEL_CHT "手把2 - I鍵連發"
#define PCE_P1_TURBO_II_ENABLE_LABEL_CHT "手把2 - II鍵連發"
#define PCE_P2_TURBO_I_ENABLE_LABEL_CHT "手把3 - I鍵連發"
#define PCE_P2_TURBO_II_ENABLE_LABEL_CHT "手把3 - II鍵連發"
#define PCE_P3_TURBO_I_ENABLE_LABEL_CHT "手把4 - I鍵連發"
#define PCE_P3_TURBO_II_ENABLE_LABEL_CHT "手把4 - II鍵連發"
#define PCE_P4_TURBO_I_ENABLE_LABEL_CHT "手把5 - I鍵連發"
#define PCE_P4_TURBO_II_ENABLE_LABEL_CHT "手把5 - II鍵連發"
#define PCE_CDIMAGECACHE_LABEL_CHT "映像檔快取 (需要重新啟動)"
#define PCE_CDIMAGECACHE_INFO_0_CHT "將光碟映像檔完整載入到記憶體, 增加啟動時間並減少讀取的時間。"
#define PCE_CDBIOS_LABEL_CHT "光碟系統卡 (需要重新啟動)"
#define PCE_CDBIOS_INFO_0_CHT "設定<系統卡3(日本版/美國版)>時, 支援較多的授權遊戲, 未授權遊戲需要<遊戲特快卡>來執行。"
#define OPTION_VAL_GAMES_EXPRESS_CHT "遊戲特快卡"
#define OPTION_VAL_SYSTEM_CARD_1_CHT "系統卡 1 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_2_CHT "系統卡 2 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_3_CHT "系統卡 3 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_2_US_CHT "系統卡 2 (美國版)"
#define OPTION_VAL_SYSTEM_CARD_3_US_CHT "系統卡 3 (美國版)"
#define PCE_ARCADECARD_LABEL_CHT "街機卡 (需要重新啟動)"
#define PCE_ARCADECARD_INFO_0_CHT "開啟時支援「ArcadeCD-ROM²專用」 和「SuperCD-ROM²專用」的加速讀取模式。"
#define PCE_CDSPEED_LABEL_CHT "(光碟機) 讀取速度"
#define PCE_CDSPEED_LABEL_CAT_CHT "讀取速度"
#define PCE_CDSPEED_INFO_0_CHT "高倍速可加快讀取的時間, 但可能導致遊戲出現問題。"
#define PCE_ADPCMEXTRAPREC_LABEL_CHT "(光碟機) ADPCM 精確度"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CHT "ADPCM 精確度"
#define PCE_ADPCMEXTRAPREC_INFO_0_CHT "MSM5205晶片ADPCM預測器, 設定<12位元>時為完整精確度, 可減少ADPCM播放時的嗡嗡聲。"
#define OPTION_VAL_10_BIT_CHT "10位元"
#define OPTION_VAL_12_BIT_CHT "12位元"
#define PCE_ADPCMVOLUME_LABEL_CHT "(光碟機) ADPCM 音量 %"
#define PCE_ADPCMVOLUME_LABEL_CAT_CHT "ADPCM 音量 %"
#define PCE_ADPCMVOLUME_INFO_0_CHT "僅限實體或虛擬光碟機載入的遊戲, 音量設定過高可能會導致取樣削波。"
#define PCE_ADPCMVOLUME_INFO_1_CHT "音量設定過高可能會導致取樣削波。"
#define PCE_CDDAVOLUME_LABEL_CHT "(光碟機) CDDA 音量 %"
#define PCE_CDDAVOLUME_LABEL_CAT_CHT "CDDA 音量 %"
#define PCE_CDPSGVOLUME_LABEL_CHT "(光碟機) PSG 音量 %"
#define PCE_CDPSGVOLUME_LABEL_CAT_CHT "PSG 音量 %"
#define PCE_NOSPRITELIMIT_LABEL_CHT "沒有物件限制"
#define PCE_NOSPRITELIMIT_INFO_0_CHT "移除每條掃描線16個物件的硬體限制。\n警告: 可能導致某些遊戲出現圖形故障, 例如「Bloody Wolf(血狼)」。"
#define PCE_OCMULTIPLIER_LABEL_CHT "CPU超頻倍頻"
#define PCE_OCMULTIPLIER_INFO_0_CHT "較高的值可降低游戲中的延遲。\n警告: 可能導致故障崩潰。"

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHT,
      CATEGORY_VIDEO_INFO_0_CHT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHT,
      CATEGORY_AUDIO_INFO_0_CHT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHT,
      CATEGORY_HACKS_INFO_0_CHT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHT,
      CATEGORY_CD_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CHT,
      NULL,
      PCE_PALETTE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHT },
         { "Composite", OPTION_VAL_COMPOSITE_CHT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CHT,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CHT,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "6:5", OPTION_VAL_6_5_CHT },
         { "4:3", OPTION_VAL_4_3_CHT },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CHT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CHT,
      NULL,
      PCE_SCALING_INFO_0_CHT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "lores", OPTION_VAL_LORES_CHT },
         { "hires", OPTION_VAL_HIRES_CHT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CHT,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CHT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_CHT,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CHT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CHT,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_CHT,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CHT },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CHT,
      NULL,
      PCE_PSGREVISION_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CHT },
         { "HuC6280A", OPTION_VAL_HUC6280A_CHT },
         { "auto", OPTION_VAL_AUTO_CHT },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CHT,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CHT,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CHT,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CHT },
         { "0.250", OPTION_VAL_0_250_CHT },
         { "0.375", OPTION_VAL_0_375_CHT },
         { "0.500", OPTION_VAL_0_500_CHT },
         { "0.625", OPTION_VAL_0_625_CHT },
         { "0.750", OPTION_VAL_0_750_CHT },
         { "0.875", OPTION_VAL_0_875_CHT },
         { "1.000", OPTION_VAL_1_000_CHT },
         { "1.125", OPTION_VAL_1_125_CHT },
         { "1.25", OPTION_VAL_1_25_CHT },
         { "1.50", OPTION_VAL_1_50_CHT },
         { "1.75", OPTION_VAL_1_75_CHT },
         { "2.00", OPTION_VAL_2_00_CHT },
         { "2.25", OPTION_VAL_2_25_CHT },
         { "2.50", OPTION_VAL_2_50_CHT },
         { "2.75", OPTION_VAL_2_75_CHT },
         { "3.00", OPTION_VAL_3_00_CHT },
         { "3.25", OPTION_VAL_3_25_CHT },
         { "3.50", OPTION_VAL_3_50_CHT },
         { "3.75", OPTION_VAL_3_75_CHT },
         { "4.00", OPTION_VAL_4_00_CHT },
         { "4.25", OPTION_VAL_4_25_CHT },
         { "4.50", OPTION_VAL_4_50_CHT },
         { "4.75", OPTION_VAL_4_75_CHT },
         { "5.00", OPTION_VAL_5_00_CHT },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CHT,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CHT,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CHT,
      NULL,
      PCE_MULTITAP_INFO_0_CHT,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CHT,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CHT },
         { "always", OPTION_VAL_ALWAYS_CHT },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CHT,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CHT,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CHT },
         { "Medium", OPTION_VAL_MEDIUM_CHT },
         { "Slow", OPTION_VAL_SLOW_CHT },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_CHT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_CHT,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_CHT,
      NULL,
      PCE_CDBIOS_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CHT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CHT },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CHT,
      NULL,
      PCE_ARCADECARD_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_CHT,
      PCE_CDSPEED_LABEL_CAT_CHT,
      PCE_CDSPEED_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_CHT,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CHT,
      PCE_ADPCMEXTRAPREC_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CHT },
         { "12-bit", OPTION_VAL_12_BIT_CHT },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CHT,
      PCE_ADPCMVOLUME_LABEL_CAT_CHT,
      PCE_ADPCMVOLUME_INFO_0_CHT,
      PCE_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CHT,
      PCE_CDDAVOLUME_LABEL_CAT_CHT,
      PCE_ADPCMVOLUME_INFO_0_CHT,
      PCE_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_CHT,
      PCE_CDPSGVOLUME_LABEL_CAT_CHT,
      PCE_ADPCMVOLUME_INFO_0_CHT,
      PCE_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_CHT,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_CHT,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS "Konfigurace poměru stran, ořezu zobrazení a dalších výstupních parametrů obrázku."
#define CATEGORY_AUDIO_LABEL_CS "Zvuk"
#define CATEGORY_AUDIO_INFO_0_CS "Konfigurace emulovaných zvukových zařízení."
#define CATEGORY_INPUT_LABEL_CS "Vstup"
#define CATEGORY_INPUT_INFO_0_CS "Konfigurace vstupu světelné pistole, myši a ovladače."
#define CATEGORY_HACKS_LABEL_CS "Emulace Hacků"
#define CATEGORY_HACKS_INFO_0_CS "Konfigurace parametrů přetaktování procesoru a přesnosti emulace ovlivňujících výkon a kompatibilitu na nízké úrovni."
#define CATEGORY_CD_LABEL_CS NULL
#define CATEGORY_CD_INFO_0_CS "Konfigurace nastavení týkajících se emulace disku CD PC Engine."
#define PCE_PALETTE_LABEL_CS "Paleta barev"
#define PCE_PALETTE_INFO_0_CS "Kompozitně se snaží obnovit původní výstup z konzole a v některých hrách může zobrazit více detailů."
#define OPTION_VAL_RGB_CS NULL
#define OPTION_VAL_COMPOSITE_CS "Kompozitní"
#define PCE_ASPECT_RATIO_LABEL_CS "Poměr Stran"
#define PCE_ASPECT_RATIO_INFO_0_CS "Zvolte preferovaný poměr stran obsahu. To se použije pouze v případě, že je poměr stran aplikace RetroArch v nastavení videa nastaven na hodnotu 'Poskytnuté jádro'."
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_6_5_CS NULL
#define OPTION_VAL_4_3_CS NULL
#define OPTION_VAL_UNCORRECTED_CS "Neopraveno"
#define PCE_SCALING_LABEL_CS "Škálování Rozlišení"
#define PCE_SCALING_INFO_0_CS "'Auto' umožní změnu rozlišení. 'Nízké Rozlišení' může rozdrtit pixely. 'Vysoké Rozlišení' zůstane na maximální šířce."
#define OPTION_VAL_LORES_CS "Nízké Rozlišení"
#define OPTION_VAL_HIRES_CS "Vysoké Rozlišení"
#define PCE_HIRES_BLEND_LABEL_CS "Síla Mísení Vysokého Rozlišení"
#define PCE_HIRES_BLEND_INFO_0_CS "Prolínání pixelů v režimu vysokého rozlišení. Vyšší hodnoty obraz více rozostří."
#define PCE_H_OVERSCAN_LABEL_CS "Zobrazit Horizontální Overscan"
#define PCE_H_OVERSCAN_INFO_0_CS "Režim 'Auto' se pokusí přizpůsobit hrám a ořízne prázdné oblasti."
#define PCE_INITIAL_SCANLINE_LABEL_CS "Počáteční skenovací linie"
#define PCE_INITIAL_SCANLINE_INFO_0_CS "První vykreslená skenovací linie. Vyšší hodnoty oříznou horní část obrázku."
#define OPTION_VAL_3_CS "3 (Výchozí)"
#define PCE_LAST_SCANLINE_LABEL_CS "Poslední skenovací linie"
#define PCE_LAST_SCANLINE_INFO_0_CS "Poslední vykreslená skenovací linie. Nižší hodnoty oříznou spodní část obrázku."
#define OPTION_VAL_242_CS "242 (Výchozí)"
#define PCE_PSGREVISION_LABEL_CS "Zvukový Čip PSG (Nutný Restart)"
#define PCE_PSGREVISION_INFO_0_CS "HuC6280 představuje původní PC Engine, HuC6280A SuperGrafx a CoreGrafx I."
#define OPTION_VAL_HUC6280_CS NULL
#define OPTION_VAL_HUC6280A_CS NULL
#define PCE_RESAMP_QUALITY_LABEL_CS "Kvalita Sovího Převzorkování"
#define PCE_RESAMP_QUALITY_INFO_0_CS "Vyšší hodnoty poskytují lepší odstup signálu od šumu a zachování vyšších frekvencí, ale zvyšují náklady na výpočet a mohou způsobit vyšší latenci a oříznutí, pokud je hlasitost nastavena příliš vysoko."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CS "Zobrazit Pokročilá Nastavení Vstupu/Turba"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CS "Zobrazení tlačítek Multitap, Myš, Turbo a pokročilých parametrů. POZNÁMKA: Pro obnovení seznamu se možná budete muset vrátit do hry a znovu vstoupit do menu."
#define PCE_MOUSE_SENSITIVITY_LABEL_CS "Citlivost Myší"
#define PCE_MOUSE_SENSITIVITY_INFO_0_CS "Při vyšších hodnotách se kurzor myši pohybuje rychleji."
#define OPTION_VAL_0_125_CS NULL
#define OPTION_VAL_0_250_CS NULL
#define OPTION_VAL_0_375_CS NULL
#define OPTION_VAL_0_500_CS NULL
#define OPTION_VAL_0_625_CS NULL
#define OPTION_VAL_0_750_CS NULL
#define OPTION_VAL_0_875_CS NULL
#define OPTION_VAL_1_000_CS NULL
#define OPTION_VAL_1_125_CS NULL
#define OPTION_VAL_1_25_CS NULL
#define OPTION_VAL_1_50_CS NULL
#define OPTION_VAL_1_75_CS NULL
#define OPTION_VAL_2_00_CS NULL
#define OPTION_VAL_2_25_CS NULL
#define OPTION_VAL_2_50_CS NULL
#define OPTION_VAL_2_75_CS NULL
#define OPTION_VAL_3_00_CS NULL
#define OPTION_VAL_3_25_CS NULL
#define OPTION_VAL_3_50_CS NULL
#define OPTION_VAL_3_75_CS NULL
#define OPTION_VAL_4_00_CS NULL
#define OPTION_VAL_4_25_CS NULL
#define OPTION_VAL_4_50_CS NULL
#define OPTION_VAL_4_75_CS NULL
#define OPTION_VAL_5_00_CS NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CS "Povolení Opačných Směrů"
#define PCE_UP_DOWN_ALLOWED_INFO_0_CS "Povolení této funkce umožní stisknout / rychle střídat / držet současně levý i pravý směr (nebo nahoru a dolů). To může způsobit závady založené na pohybu."
#define PCE_DISABLE_SOFTRESET_LABEL_CS "Zakázat Měkký Reset (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_CS "Při současném stisknutí tlačítek RUN a SELECT se místo resetování dočasně vypnou obě tlačítka."
#define PCE_MULTITAP_LABEL_CS "Multitap 5-portový Ovladač"
#define PCE_MULTITAP_INFO_0_CS "Umožňuje emulaci až 5 hráčů ve více lidech. Vypnutí této funkce je nutné pouze v některých případech (např. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CS "P1 Výchozí typ joypadu"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CS "Zvolte, zda má mít joypad port 1 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define OPTION_VAL_2_BUTTONS_CS "2 Tlačítka"
#define OPTION_VAL_6_BUTTONS_CS "6 Tlačítek"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CS "P2 Výchozí typ joypadu"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CS "Vyberte, zda má mít joypad port 2 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CS "P3 Výchozí typ joypadu"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CS "Zvolte, zda má mít joypad port 3 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CS "P4 Výchozí typ joypadu"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CS "Zvolte, zda má mít joypad port 4 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CS "P5 Výchozí typ joypadu"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CS "Zvolte, zda má mít joypad port 5 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_TURBO_TOGGLING_LABEL_CS "Režim Turbo Hotkey"
#define PCE_TURBO_TOGGLING_INFO_0_CS "Povolení turbo tlačítek. Klávesové zkratky (tlačítka III a IV) se mohou chovat jako přepínače nebo jako vyhrazená turbo tlačítka (pro použití je třeba je podržet)."
#define OPTION_VAL_TOGGLE_CS "Přepínač"
#define OPTION_VAL_ALWAYS_CS "Věnováno"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CS "Alternativní Hotkey Turbo"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CS "Přiřazení tlačítek L3/R3 zařízení RetroPad jako turbo klávesových zkratek namísto tlačítek III a IV. Funguje pouze v režimu 'Přepínač' a pouze pokud není tlačítkům L3/R3 nic přiřazeno. Pomocí této funkce se můžete vyhnout přemapování tlačítek III a IV při přepnutí do režimu šestitlačítkového ovladače."
#define PCE_TURBO_DELAY_LABEL_CS "Turbo Rychlost"
#define PCE_TURBO_DELAY_INFO_0_CS "Zvolte, jak rychle se budou opakovat stisky tlačítek."
#define OPTION_VAL_FAST_CS "Rychle"
#define OPTION_VAL_MEDIUM_CS "Střední"
#define OPTION_VAL_SLOW_CS "Pomalu"
#define PCE_P0_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CS NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CS NULL
#define PCE_CDIMAGECACHE_LABEL_CS "Vyrovnávací paměť obrazu CD (nutný restart)"
#define PCE_CDIMAGECACHE_INFO_0_CS "Načíst kompletní obraz do paměti při spuštění. Může potenciálně zkrátit dobu načítání za cenu prodloužení doby spouštění."
#define PCE_CDBIOS_LABEL_CS "CD Bios (Nutný Restart)"
#define PCE_CDBIOS_INFO_0_CS "Většinu her lze spustit na 'Systémová Karta 3'. Pro některé nelicencované hry je zapotřebí 'Games Express'."
#define OPTION_VAL_GAMES_EXPRESS_CS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CS "Systémová Karta 1"
#define OPTION_VAL_SYSTEM_CARD_2_CS "Systémová Karta 2"
#define OPTION_VAL_SYSTEM_CARD_3_CS "Systémová Karta 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_CS "Systémová Karta 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_CS "Systémová Karta 3 US"
#define PCE_ARCADECARD_LABEL_CS "Arkádová karta (Nutný Restart)"
#define PCE_ARCADECARD_INFO_0_CS "Tuto možnost ponechte povolenou, chcete-li povolit rozšířené režimy her SCD s podporou ACD."
#define PCE_CDSPEED_LABEL_CS "(CD) Rychlost CD"
#define PCE_CDSPEED_LABEL_CAT_CS "Rychlost CD"
#define PCE_CDSPEED_INFO_0_CS "Vyšší hodnoty umožňují rychlejší načítání, ale u několika her mohou způsobit problémy."
#define PCE_ADPCMEXTRAPREC_LABEL_CS "(CD) přesnost ADPCM"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CS "Přesnost ADPCM"
#define PCE_ADPCMEXTRAPREC_INFO_0_CS "Plná přesnost 12 bitů u prediktoru ADPCM MSM5205 může snížit kvílivý šum při přehrávání ADPCM."
#define OPTION_VAL_10_BIT_CS NULL
#define OPTION_VAL_12_BIT_CS NULL
#define PCE_ADPCMVOLUME_LABEL_CS "(CD) ADPCM Hlasitost %"
#define PCE_ADPCMVOLUME_LABEL_CAT_CS "ADPCM Hlasitost %"
#define PCE_ADPCMVOLUME_INFO_0_CS "Pouze hra na CD. Příliš vysoké nastavení tohoto ovladače hlasitosti může způsobit oříznutí vzorku."
#define PCE_ADPCMVOLUME_INFO_1_CS "Příliš vysoké nastavení tohoto ovladače hlasitosti může způsobit oříznutí vzorku."
#define PCE_CDDAVOLUME_LABEL_CS "(CD) CDDA Hlasitost %"
#define PCE_CDDAVOLUME_LABEL_CAT_CS "CDDA Hlasitost %"
#define PCE_CDPSGVOLUME_LABEL_CS "(CD) PSG Hlasitost %"
#define PCE_CDPSGVOLUME_LABEL_CAT_CS "CD PSG Hlasitost %"
#define PCE_NOSPRITELIMIT_LABEL_CS "Žádný Limit Spritu"
#define PCE_NOSPRITELIMIT_INFO_0_CS "Odstranění hardwarového limitu 16 bodů na řádek. UPOZORNĚNÍ: V některých hrách (např. Bloody Wolf) může způsobovat grafické závady."
#define PCE_OCMULTIPLIER_LABEL_CS "Násobitel Přetaktování CPU"
#define PCE_OCMULTIPLIER_INFO_0_CS "Vyšší hodnoty mohou snížit zpomalení ve hrách. VAROVÁNÍ: Může způsobit závady a pády."

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CS,
      CATEGORY_VIDEO_INFO_0_CS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CS,
      CATEGORY_AUDIO_INFO_0_CS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CS,
      CATEGORY_HACKS_INFO_0_CS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CS,
      CATEGORY_CD_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CS,
      NULL,
      PCE_PALETTE_INFO_0_CS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CS },
         { "Composite", OPTION_VAL_COMPOSITE_CS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CS,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CS,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "6:5", OPTION_VAL_6_5_CS },
         { "4:3", OPTION_VAL_4_3_CS },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CS,
      NULL,
      PCE_SCALING_INFO_0_CS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "lores", OPTION_VAL_LORES_CS },
         { "hires", OPTION_VAL_HIRES_CS },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CS,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_CS,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CS,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_CS,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CS,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CS },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CS,
      NULL,
      PCE_PSGREVISION_INFO_0_CS,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CS },
         { "HuC6280A", OPTION_VAL_HUC6280A_CS },
         { "auto", OPTION_VAL_AUTO_CS },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CS,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CS,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CS,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CS },
         { "0.250", OPTION_VAL_0_250_CS },
         { "0.375", OPTION_VAL_0_375_CS },
         { "0.500", OPTION_VAL_0_500_CS },
         { "0.625", OPTION_VAL_0_625_CS },
         { "0.750", OPTION_VAL_0_750_CS },
         { "0.875", OPTION_VAL_0_875_CS },
         { "1.000", OPTION_VAL_1_000_CS },
         { "1.125", OPTION_VAL_1_125_CS },
         { "1.25", OPTION_VAL_1_25_CS },
         { "1.50", OPTION_VAL_1_50_CS },
         { "1.75", OPTION_VAL_1_75_CS },
         { "2.00", OPTION_VAL_2_00_CS },
         { "2.25", OPTION_VAL_2_25_CS },
         { "2.50", OPTION_VAL_2_50_CS },
         { "2.75", OPTION_VAL_2_75_CS },
         { "3.00", OPTION_VAL_3_00_CS },
         { "3.25", OPTION_VAL_3_25_CS },
         { "3.50", OPTION_VAL_3_50_CS },
         { "3.75", OPTION_VAL_3_75_CS },
         { "4.00", OPTION_VAL_4_00_CS },
         { "4.25", OPTION_VAL_4_25_CS },
         { "4.50", OPTION_VAL_4_50_CS },
         { "4.75", OPTION_VAL_4_75_CS },
         { "5.00", OPTION_VAL_5_00_CS },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CS,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CS,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CS,
      NULL,
      PCE_MULTITAP_INFO_0_CS,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CS,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CS,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CS },
         { "always", OPTION_VAL_ALWAYS_CS },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CS,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CS,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CS,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CS },
         { "Medium", OPTION_VAL_MEDIUM_CS },
         { "Slow", OPTION_VAL_SLOW_CS },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_CS,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_CS,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CS,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_CS,
      NULL,
      PCE_CDBIOS_INFO_0_CS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CS },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CS },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CS },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CS,
      NULL,
      PCE_ARCADECARD_INFO_0_CS,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_CS,
      PCE_CDSPEED_LABEL_CAT_CS,
      PCE_CDSPEED_INFO_0_CS,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_CS,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CS,
      PCE_ADPCMEXTRAPREC_INFO_0_CS,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CS },
         { "12-bit", OPTION_VAL_12_BIT_CS },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CS,
      PCE_ADPCMVOLUME_LABEL_CAT_CS,
      PCE_ADPCMVOLUME_INFO_0_CS,
      PCE_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CS,
      PCE_CDDAVOLUME_LABEL_CAT_CS,
      PCE_ADPCMVOLUME_INFO_0_CS,
      PCE_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_CS,
      PCE_CDPSGVOLUME_LABEL_CAT_CS,
      PCE_ADPCMVOLUME_INFO_0_CS,
      PCE_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_CS,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_CS,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_AUDIO_LABEL_CY NULL
#define CATEGORY_AUDIO_INFO_0_CY NULL
#define CATEGORY_INPUT_LABEL_CY "Mewnbwn"
#define CATEGORY_INPUT_INFO_0_CY NULL
#define CATEGORY_HACKS_LABEL_CY NULL
#define CATEGORY_HACKS_INFO_0_CY NULL
#define CATEGORY_CD_LABEL_CY NULL
#define CATEGORY_CD_INFO_0_CY NULL
#define PCE_PALETTE_LABEL_CY NULL
#define PCE_PALETTE_INFO_0_CY NULL
#define OPTION_VAL_RGB_CY NULL
#define OPTION_VAL_COMPOSITE_CY NULL
#define PCE_ASPECT_RATIO_LABEL_CY NULL
#define PCE_ASPECT_RATIO_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_6_5_CY NULL
#define OPTION_VAL_4_3_CY NULL
#define OPTION_VAL_UNCORRECTED_CY NULL
#define PCE_SCALING_LABEL_CY NULL
#define PCE_SCALING_INFO_0_CY NULL
#define OPTION_VAL_LORES_CY NULL
#define OPTION_VAL_HIRES_CY NULL
#define PCE_HIRES_BLEND_LABEL_CY NULL
#define PCE_HIRES_BLEND_INFO_0_CY NULL
#define PCE_H_OVERSCAN_LABEL_CY NULL
#define PCE_H_OVERSCAN_INFO_0_CY NULL
#define PCE_INITIAL_SCANLINE_LABEL_CY NULL
#define PCE_INITIAL_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_3_CY NULL
#define PCE_LAST_SCANLINE_LABEL_CY NULL
#define PCE_LAST_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_242_CY NULL
#define PCE_PSGREVISION_LABEL_CY NULL
#define PCE_PSGREVISION_INFO_0_CY NULL
#define OPTION_VAL_HUC6280_CY NULL
#define OPTION_VAL_HUC6280A_CY NULL
#define PCE_RESAMP_QUALITY_LABEL_CY NULL
#define PCE_RESAMP_QUALITY_INFO_0_CY NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CY NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CY NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_CY NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_CY NULL
#define OPTION_VAL_0_125_CY NULL
#define OPTION_VAL_0_250_CY NULL
#define OPTION_VAL_0_375_CY NULL
#define OPTION_VAL_0_500_CY NULL
#define OPTION_VAL_0_625_CY NULL
#define OPTION_VAL_0_750_CY NULL
#define OPTION_VAL_0_875_CY NULL
#define OPTION_VAL_1_000_CY NULL
#define OPTION_VAL_1_125_CY NULL
#define OPTION_VAL_1_25_CY NULL
#define OPTION_VAL_1_50_CY NULL
#define OPTION_VAL_1_75_CY NULL
#define OPTION_VAL_2_00_CY NULL
#define OPTION_VAL_2_25_CY NULL
#define OPTION_VAL_2_50_CY NULL
#define OPTION_VAL_2_75_CY NULL
#define OPTION_VAL_3_00_CY NULL
#define OPTION_VAL_3_25_CY NULL
#define OPTION_VAL_3_50_CY NULL
#define OPTION_VAL_3_75_CY NULL
#define OPTION_VAL_4_00_CY NULL
#define OPTION_VAL_4_25_CY NULL
#define OPTION_VAL_4_50_CY NULL
#define OPTION_VAL_4_75_CY NULL
#define OPTION_VAL_5_00_CY NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_CY NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_CY NULL
#define PCE_DISABLE_SOFTRESET_LABEL_CY NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_CY NULL
#define PCE_MULTITAP_LABEL_CY NULL
#define PCE_MULTITAP_INFO_0_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CY NULL
#define OPTION_VAL_2_BUTTONS_CY NULL
#define OPTION_VAL_6_BUTTONS_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CY NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CY NULL
#define PCE_TURBO_TOGGLING_LABEL_CY NULL
#define PCE_TURBO_TOGGLING_INFO_0_CY NULL
#define OPTION_VAL_TOGGLE_CY NULL
#define OPTION_VAL_ALWAYS_CY NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_CY NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CY NULL
#define PCE_TURBO_DELAY_LABEL_CY NULL
#define PCE_TURBO_DELAY_INFO_0_CY NULL
#define OPTION_VAL_FAST_CY NULL
#define OPTION_VAL_MEDIUM_CY NULL
#define OPTION_VAL_SLOW_CY NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_CY NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_CY NULL
#define PCE_CDIMAGECACHE_LABEL_CY NULL
#define PCE_CDIMAGECACHE_INFO_0_CY NULL
#define PCE_CDBIOS_LABEL_CY NULL
#define PCE_CDBIOS_INFO_0_CY NULL
#define OPTION_VAL_GAMES_EXPRESS_CY NULL
#define OPTION_VAL_SYSTEM_CARD_1_CY NULL
#define OPTION_VAL_SYSTEM_CARD_2_CY NULL
#define OPTION_VAL_SYSTEM_CARD_3_CY NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CY NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CY NULL
#define PCE_ARCADECARD_LABEL_CY NULL
#define PCE_ARCADECARD_INFO_0_CY NULL
#define PCE_CDSPEED_LABEL_CY NULL
#define PCE_CDSPEED_LABEL_CAT_CY NULL
#define PCE_CDSPEED_INFO_0_CY NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CY NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_CY NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_CY NULL
#define OPTION_VAL_10_BIT_CY NULL
#define OPTION_VAL_12_BIT_CY NULL
#define PCE_ADPCMVOLUME_LABEL_CY NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_CY NULL
#define PCE_ADPCMVOLUME_INFO_0_CY NULL
#define PCE_ADPCMVOLUME_INFO_1_CY NULL
#define PCE_CDDAVOLUME_LABEL_CY NULL
#define PCE_CDDAVOLUME_LABEL_CAT_CY NULL
#define PCE_CDPSGVOLUME_LABEL_CY NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_CY NULL
#define PCE_NOSPRITELIMIT_LABEL_CY NULL
#define PCE_NOSPRITELIMIT_INFO_0_CY NULL
#define PCE_OCMULTIPLIER_LABEL_CY NULL
#define PCE_OCMULTIPLIER_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CY,
      CATEGORY_VIDEO_INFO_0_CY
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CY,
      CATEGORY_AUDIO_INFO_0_CY
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CY,
      CATEGORY_HACKS_INFO_0_CY
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CY,
      CATEGORY_CD_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_CY,
      NULL,
      PCE_PALETTE_INFO_0_CY,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CY },
         { "Composite", OPTION_VAL_COMPOSITE_CY },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_CY,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_CY,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "6:5", OPTION_VAL_6_5_CY },
         { "4:3", OPTION_VAL_4_3_CY },
         { "uncorrected", OPTION_VAL_UNCORRECTED_CY },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_CY,
      NULL,
      PCE_SCALING_INFO_0_CY,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "lores", OPTION_VAL_LORES_CY },
         { "hires", OPTION_VAL_HIRES_CY },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_CY,
      NULL,
      PCE_HIRES_BLEND_INFO_0_CY,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_CY,
      NULL,
      PCE_H_OVERSCAN_INFO_0_CY,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_CY,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_CY,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CY },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_CY,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_CY,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CY },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_CY,
      NULL,
      PCE_PSGREVISION_INFO_0_CY,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_CY },
         { "HuC6280A", OPTION_VAL_HUC6280A_CY },
         { "auto", OPTION_VAL_AUTO_CY },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_CY,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CY },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_CY,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_CY,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_CY,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_CY },
         { "0.250", OPTION_VAL_0_250_CY },
         { "0.375", OPTION_VAL_0_375_CY },
         { "0.500", OPTION_VAL_0_500_CY },
         { "0.625", OPTION_VAL_0_625_CY },
         { "0.750", OPTION_VAL_0_750_CY },
         { "0.875", OPTION_VAL_0_875_CY },
         { "1.000", OPTION_VAL_1_000_CY },
         { "1.125", OPTION_VAL_1_125_CY },
         { "1.25", OPTION_VAL_1_25_CY },
         { "1.50", OPTION_VAL_1_50_CY },
         { "1.75", OPTION_VAL_1_75_CY },
         { "2.00", OPTION_VAL_2_00_CY },
         { "2.25", OPTION_VAL_2_25_CY },
         { "2.50", OPTION_VAL_2_50_CY },
         { "2.75", OPTION_VAL_2_75_CY },
         { "3.00", OPTION_VAL_3_00_CY },
         { "3.25", OPTION_VAL_3_25_CY },
         { "3.50", OPTION_VAL_3_50_CY },
         { "3.75", OPTION_VAL_3_75_CY },
         { "4.00", OPTION_VAL_4_00_CY },
         { "4.25", OPTION_VAL_4_25_CY },
         { "4.50", OPTION_VAL_4_50_CY },
         { "4.75", OPTION_VAL_4_75_CY },
         { "5.00", OPTION_VAL_5_00_CY },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_CY,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_CY,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_CY,
      NULL,
      PCE_MULTITAP_INFO_0_CY,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_CY,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_CY,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_CY,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_CY,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_CY,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_CY,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_CY },
         { "always", OPTION_VAL_ALWAYS_CY },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_CY,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_CY,
      NULL,
      PCE_TURBO_DELAY_INFO_0_CY,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_CY },
         { "Medium", OPTION_VAL_MEDIUM_CY },
         { "Slow", OPTION_VAL_SLOW_CY },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_CY,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_CY,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_CY,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_CY,
      NULL,
      PCE_CDBIOS_INFO_0_CY,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CY },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CY },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CY },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CY },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CY },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CY },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_CY,
      NULL,
      PCE_ARCADECARD_INFO_0_CY,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_CY,
      PCE_CDSPEED_LABEL_CAT_CY,
      PCE_CDSPEED_INFO_0_CY,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_CY,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_CY,
      PCE_ADPCMEXTRAPREC_INFO_0_CY,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_CY },
         { "12-bit", OPTION_VAL_12_BIT_CY },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_CY,
      PCE_ADPCMVOLUME_LABEL_CAT_CY,
      PCE_ADPCMVOLUME_INFO_0_CY,
      PCE_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_CY,
      PCE_CDDAVOLUME_LABEL_CAT_CY,
      PCE_ADPCMVOLUME_INFO_0_CY,
      PCE_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_CY,
      PCE_CDPSGVOLUME_LABEL_CAT_CY,
      PCE_ADPCMVOLUME_INFO_0_CY,
      PCE_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_CY,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_CY,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA NULL
#define CATEGORY_AUDIO_LABEL_DA "Lyd"
#define CATEGORY_AUDIO_INFO_0_DA NULL
#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define CATEGORY_HACKS_LABEL_DA NULL
#define CATEGORY_HACKS_INFO_0_DA NULL
#define CATEGORY_CD_LABEL_DA NULL
#define CATEGORY_CD_INFO_0_DA NULL
#define PCE_PALETTE_LABEL_DA NULL
#define PCE_PALETTE_INFO_0_DA NULL
#define OPTION_VAL_RGB_DA NULL
#define OPTION_VAL_COMPOSITE_DA NULL
#define PCE_ASPECT_RATIO_LABEL_DA NULL
#define PCE_ASPECT_RATIO_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_6_5_DA NULL
#define OPTION_VAL_4_3_DA NULL
#define OPTION_VAL_UNCORRECTED_DA NULL
#define PCE_SCALING_LABEL_DA NULL
#define PCE_SCALING_INFO_0_DA NULL
#define OPTION_VAL_LORES_DA NULL
#define OPTION_VAL_HIRES_DA NULL
#define PCE_HIRES_BLEND_LABEL_DA NULL
#define PCE_HIRES_BLEND_INFO_0_DA NULL
#define PCE_H_OVERSCAN_LABEL_DA NULL
#define PCE_H_OVERSCAN_INFO_0_DA NULL
#define PCE_INITIAL_SCANLINE_LABEL_DA NULL
#define PCE_INITIAL_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_3_DA NULL
#define PCE_LAST_SCANLINE_LABEL_DA NULL
#define PCE_LAST_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_242_DA NULL
#define PCE_PSGREVISION_LABEL_DA NULL
#define PCE_PSGREVISION_INFO_0_DA NULL
#define OPTION_VAL_HUC6280_DA NULL
#define OPTION_VAL_HUC6280A_DA NULL
#define PCE_RESAMP_QUALITY_LABEL_DA NULL
#define PCE_RESAMP_QUALITY_INFO_0_DA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_DA NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_DA NULL
#define OPTION_VAL_0_125_DA NULL
#define OPTION_VAL_0_250_DA NULL
#define OPTION_VAL_0_375_DA NULL
#define OPTION_VAL_0_500_DA NULL
#define OPTION_VAL_0_625_DA NULL
#define OPTION_VAL_0_750_DA NULL
#define OPTION_VAL_0_875_DA NULL
#define OPTION_VAL_1_000_DA NULL
#define OPTION_VAL_1_125_DA NULL
#define OPTION_VAL_1_25_DA NULL
#define OPTION_VAL_1_50_DA NULL
#define OPTION_VAL_1_75_DA NULL
#define OPTION_VAL_2_00_DA NULL
#define OPTION_VAL_2_25_DA NULL
#define OPTION_VAL_2_50_DA NULL
#define OPTION_VAL_2_75_DA NULL
#define OPTION_VAL_3_00_DA NULL
#define OPTION_VAL_3_25_DA NULL
#define OPTION_VAL_3_50_DA NULL
#define OPTION_VAL_3_75_DA NULL
#define OPTION_VAL_4_00_DA NULL
#define OPTION_VAL_4_25_DA NULL
#define OPTION_VAL_4_50_DA NULL
#define OPTION_VAL_4_75_DA NULL
#define OPTION_VAL_5_00_DA NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_DA NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_DA NULL
#define PCE_DISABLE_SOFTRESET_LABEL_DA NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_DA NULL
#define PCE_MULTITAP_LABEL_DA NULL
#define PCE_MULTITAP_INFO_0_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DA NULL
#define OPTION_VAL_2_BUTTONS_DA NULL
#define OPTION_VAL_6_BUTTONS_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_DA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DA NULL
#define PCE_TURBO_TOGGLING_LABEL_DA NULL
#define PCE_TURBO_TOGGLING_INFO_0_DA NULL
#define OPTION_VAL_TOGGLE_DA NULL
#define OPTION_VAL_ALWAYS_DA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_DA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_DA NULL
#define PCE_TURBO_DELAY_LABEL_DA NULL
#define PCE_TURBO_DELAY_INFO_0_DA NULL
#define OPTION_VAL_FAST_DA NULL
#define OPTION_VAL_MEDIUM_DA NULL
#define OPTION_VAL_SLOW_DA NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_DA NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_DA NULL
#define PCE_CDIMAGECACHE_LABEL_DA NULL
#define PCE_CDIMAGECACHE_INFO_0_DA NULL
#define PCE_CDBIOS_LABEL_DA NULL
#define PCE_CDBIOS_INFO_0_DA NULL
#define OPTION_VAL_GAMES_EXPRESS_DA NULL
#define OPTION_VAL_SYSTEM_CARD_1_DA NULL
#define OPTION_VAL_SYSTEM_CARD_2_DA NULL
#define OPTION_VAL_SYSTEM_CARD_3_DA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_DA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_DA NULL
#define PCE_ARCADECARD_LABEL_DA NULL
#define PCE_ARCADECARD_INFO_0_DA NULL
#define PCE_CDSPEED_LABEL_DA NULL
#define PCE_CDSPEED_LABEL_CAT_DA NULL
#define PCE_CDSPEED_INFO_0_DA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_DA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_DA NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_DA NULL
#define OPTION_VAL_10_BIT_DA NULL
#define OPTION_VAL_12_BIT_DA NULL
#define PCE_ADPCMVOLUME_LABEL_DA NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_DA NULL
#define PCE_ADPCMVOLUME_INFO_0_DA NULL
#define PCE_ADPCMVOLUME_INFO_1_DA NULL
#define PCE_CDDAVOLUME_LABEL_DA NULL
#define PCE_CDDAVOLUME_LABEL_CAT_DA NULL
#define PCE_CDPSGVOLUME_LABEL_DA NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_DA NULL
#define PCE_NOSPRITELIMIT_LABEL_DA NULL
#define PCE_NOSPRITELIMIT_INFO_0_DA NULL
#define PCE_OCMULTIPLIER_LABEL_DA NULL
#define PCE_OCMULTIPLIER_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DA,
      CATEGORY_VIDEO_INFO_0_DA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DA,
      CATEGORY_AUDIO_INFO_0_DA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DA,
      CATEGORY_HACKS_INFO_0_DA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DA,
      CATEGORY_CD_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_DA,
      NULL,
      PCE_PALETTE_INFO_0_DA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DA },
         { "Composite", OPTION_VAL_COMPOSITE_DA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_DA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_DA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "6:5", OPTION_VAL_6_5_DA },
         { "4:3", OPTION_VAL_4_3_DA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_DA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_DA,
      NULL,
      PCE_SCALING_INFO_0_DA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "lores", OPTION_VAL_LORES_DA },
         { "hires", OPTION_VAL_HIRES_DA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_DA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_DA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_DA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_DA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_DA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_DA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_DA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_DA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_DA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_DA,
      NULL,
      PCE_PSGREVISION_INFO_0_DA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_DA },
         { "HuC6280A", OPTION_VAL_HUC6280A_DA },
         { "auto", OPTION_VAL_AUTO_DA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_DA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_DA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_DA },
         { "0.250", OPTION_VAL_0_250_DA },
         { "0.375", OPTION_VAL_0_375_DA },
         { "0.500", OPTION_VAL_0_500_DA },
         { "0.625", OPTION_VAL_0_625_DA },
         { "0.750", OPTION_VAL_0_750_DA },
         { "0.875", OPTION_VAL_0_875_DA },
         { "1.000", OPTION_VAL_1_000_DA },
         { "1.125", OPTION_VAL_1_125_DA },
         { "1.25", OPTION_VAL_1_25_DA },
         { "1.50", OPTION_VAL_1_50_DA },
         { "1.75", OPTION_VAL_1_75_DA },
         { "2.00", OPTION_VAL_2_00_DA },
         { "2.25", OPTION_VAL_2_25_DA },
         { "2.50", OPTION_VAL_2_50_DA },
         { "2.75", OPTION_VAL_2_75_DA },
         { "3.00", OPTION_VAL_3_00_DA },
         { "3.25", OPTION_VAL_3_25_DA },
         { "3.50", OPTION_VAL_3_50_DA },
         { "3.75", OPTION_VAL_3_75_DA },
         { "4.00", OPTION_VAL_4_00_DA },
         { "4.25", OPTION_VAL_4_25_DA },
         { "4.50", OPTION_VAL_4_50_DA },
         { "4.75", OPTION_VAL_4_75_DA },
         { "5.00", OPTION_VAL_5_00_DA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_DA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_DA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_DA,
      NULL,
      PCE_MULTITAP_INFO_0_DA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_DA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_DA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_DA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_DA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_DA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_DA,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_DA },
         { "always", OPTION_VAL_ALWAYS_DA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_DA,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_DA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_DA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_DA },
         { "Medium", OPTION_VAL_MEDIUM_DA },
         { "Slow", OPTION_VAL_SLOW_DA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_DA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_DA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_DA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_DA,
      NULL,
      PCE_CDBIOS_INFO_0_DA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_DA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_DA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_DA,
      NULL,
      PCE_ARCADECARD_INFO_0_DA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_DA,
      PCE_CDSPEED_LABEL_CAT_DA,
      PCE_CDSPEED_INFO_0_DA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_DA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_DA,
      PCE_ADPCMEXTRAPREC_INFO_0_DA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_DA },
         { "12-bit", OPTION_VAL_12_BIT_DA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_DA,
      PCE_ADPCMVOLUME_LABEL_CAT_DA,
      PCE_ADPCMVOLUME_INFO_0_DA,
      PCE_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_DA,
      PCE_CDDAVOLUME_LABEL_CAT_DA,
      PCE_ADPCMVOLUME_INFO_0_DA,
      PCE_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_DA,
      PCE_CDPSGVOLUME_LABEL_CAT_DA,
      PCE_ADPCMVOLUME_INFO_0_DA,
      PCE_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_DA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_DA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE "Seitenverhältnis, Bildausschnitt und andere Bildausgabeparameter anpassen."
#define CATEGORY_AUDIO_LABEL_DE NULL
#define CATEGORY_AUDIO_INFO_0_DE "Emulierte Audiogeräte konfigurieren."
#define CATEGORY_INPUT_LABEL_DE "Eingabe"
#define CATEGORY_INPUT_INFO_0_DE "Lightgun-, Maus- und Controller-Eingabe anpassen."
#define CATEGORY_HACKS_LABEL_DE "Emulations-Hacks"
#define CATEGORY_HACKS_INFO_0_DE "Parameter für Prozessorübertaktung und Emulationsgenauigkeit, die sich auf die Low-Level-Leistung und Kompatibilität auswirken, anpassen."
#define CATEGORY_CD_LABEL_DE "PC-Engine-CD"
#define CATEGORY_CD_INFO_0_DE "Einstellungen der PC-Engine-CD-Emulation anpassen."
#define PCE_PALETTE_LABEL_DE "Farbpalette"
#define PCE_PALETTE_INFO_0_DE "\"Composite\" versucht, die Originalausgabe der Konsole nachzubilden und kann in einigen Spielen mehr Details darstellen."
#define OPTION_VAL_RGB_DE NULL
#define OPTION_VAL_COMPOSITE_DE NULL
#define PCE_ASPECT_RATIO_LABEL_DE "Bildseitenverhältnis"
#define PCE_ASPECT_RATIO_INFO_0_DE "Das bevorzugte Seitenverhältnis des Inhalts auswählen. Dies wird nur angewendet, wenn das Seitenverhältnis von RetroArch in den Videoeinstellungen auf \"Wie von Core vorgesehen\" eingestellt ist."
#define OPTION_VAL_AUTO_DE "Automatisch"
#define OPTION_VAL_6_5_DE NULL
#define OPTION_VAL_4_3_DE NULL
#define OPTION_VAL_UNCORRECTED_DE "Unkorrigiert"
#define PCE_SCALING_LABEL_DE "Auflösungs-Skalierung"
#define PCE_SCALING_INFO_0_DE "\"Automatisch\" erlaubt eine Änderung der Auflösung. Bei \"Niedrige Auflösung\" können Pixel zerdrückt werden. \"Hohe Auflösung\" erzwingt die maximale Breite."
#define OPTION_VAL_LORES_DE "Niedrige Auflösung"
#define OPTION_VAL_HIRES_DE "Hohe Auflösung"
#define PCE_HIRES_BLEND_LABEL_DE "Hochauflösende Blendungsstärke"
#define PCE_HIRES_BLEND_INFO_0_DE "Im \"Hohe Auflösung\"-Modus die Pixel zusammenblenden. Höhere Werte lassen das Bild stärker verschwimmen."
#define PCE_H_OVERSCAN_LABEL_DE "Horizontalen Overscan anzeigen"
#define PCE_H_OVERSCAN_INFO_0_DE "\"Automatisch\" versucht, sich den Spielen anzupassen und leere Bereiche abzuschneiden."
#define PCE_INITIAL_SCANLINE_LABEL_DE "Erste Scanline"
#define PCE_INITIAL_SCANLINE_INFO_0_DE "Erste gerenderte Scanline. Höhere Werte schneiden den oberen Teil des Bildes ab."
#define OPTION_VAL_3_DE "3 (Standard)"
#define PCE_LAST_SCANLINE_LABEL_DE "Letzte Scanline"
#define PCE_LAST_SCANLINE_INFO_0_DE "Letzte gerenderte Scanline. Niedrigere Werte schneiden den unteren Teil des Bildes ab."
#define OPTION_VAL_242_DE "242 (Standard)"
#define PCE_PSGREVISION_LABEL_DE "PSG-Audio-Chip (Neustart erforderlich)"
#define PCE_PSGREVISION_INFO_0_DE "HuC6280 entspricht der ursprünglichen PC Engine, HuC6280A der SuperGrafx und CoreGrafx I."
#define OPTION_VAL_HUC6280_DE NULL
#define OPTION_VAL_HUC6280A_DE NULL
#define PCE_RESAMP_QUALITY_LABEL_DE "Owl-Resampler-Qualität"
#define PCE_RESAMP_QUALITY_INFO_0_DE "Höhere Werte führen zu einem besseren Signal-Rausch-Verhältnis und zur Erhaltung höherer Frequenzen, erhöhen jedoch die Rechenlast und können zu einer höheren Latenz und Übersteuerung führen, wenn die Lautstärke zu hoch eingestellt ist."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DE "Erweiterte Eingabe-/Turbo-Einstellungen anzeigen"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DE "Multitap, Maus, Turbo-Tasten und erweiterte Parameter anzeigen. HINWEIS: Möglicherweise muss im Spiel zurückgegangen und das Menü erneut aufgerufen werden, um die Liste zu aktualisieren."
#define PCE_MOUSE_SENSITIVITY_LABEL_DE "Mausempfindlichkeit"
#define PCE_MOUSE_SENSITIVITY_INFO_0_DE "Höhere Werte erhöhen die Geschwindigkeit des Mauszeigers."
#define OPTION_VAL_0_125_DE "0,125"
#define OPTION_VAL_0_250_DE "0,250"
#define OPTION_VAL_0_375_DE "0,375"
#define OPTION_VAL_0_500_DE "0,500"
#define OPTION_VAL_0_625_DE "0,625"
#define OPTION_VAL_0_750_DE "0,750"
#define OPTION_VAL_0_875_DE "0,875"
#define OPTION_VAL_1_000_DE "1,000"
#define OPTION_VAL_1_125_DE "1,125"
#define OPTION_VAL_1_25_DE "1,25"
#define OPTION_VAL_1_50_DE "1,50"
#define OPTION_VAL_1_75_DE "1,75"
#define OPTION_VAL_2_00_DE "2,00"
#define OPTION_VAL_2_25_DE "2,25"
#define OPTION_VAL_2_50_DE "2,50"
#define OPTION_VAL_2_75_DE "2,75"
#define OPTION_VAL_3_00_DE "3,00"
#define OPTION_VAL_3_25_DE "3,25"
#define OPTION_VAL_3_50_DE "3,50"
#define OPTION_VAL_3_75_DE "3,75"
#define OPTION_VAL_4_00_DE "4,00"
#define OPTION_VAL_4_25_DE "4,25"
#define OPTION_VAL_4_50_DE "4,50"
#define OPTION_VAL_4_75_DE "4,75"
#define OPTION_VAL_5_00_DE "5,00"
#define PCE_UP_DOWN_ALLOWED_LABEL_DE "Entgegengesetzte Richtungen zulassen"
#define PCE_UP_DOWN_ALLOWED_INFO_0_DE "Wenn diese Funktion aktiviert ist, kann gleichzeitig die linke und die rechte (oder die obere und die untere) Richtungstaste bzw. schnell abwechselnd gedrückt oder gehalten werden. Dies kann zu bewegungsbasierten Fehlern führen."
#define PCE_DISABLE_SOFTRESET_LABEL_DE "Neustart-Kombination (RUN+SELECT) deaktivieren"
#define PCE_DISABLE_SOFTRESET_INFO_0_DE "Wenn RUN und SELECT gleichzeitig gedrückt werden, werden beide Tasten vorübergehend deaktiviert, anstatt den Inhalt neu zu starten."
#define PCE_MULTITAP_LABEL_DE "Multitap-5-Port-Controller"
#define PCE_MULTITAP_INFO_0_DE "Multitap-Emulation für bis zu 5 Spieler aktivieren. Die Deaktivierung ist nur in einigen Fällen erforderlich (z. B. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_DE "P1 Standard-Joypad-Typ"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DE "Hier wählen, ob Joypad von Port 1 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define OPTION_VAL_2_BUTTONS_DE "2 Tasten"
#define OPTION_VAL_6_BUTTONS_DE "6 Tasten"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_DE "P2 Standard-Joypad-Typ"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DE "Hier wählen, ob Joypad von Port 2 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_DE "P3 Standard-Joypad-Typ"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DE "Hier wählen, ob Joypad von Port 3 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_DE "P4 Standard-Joypad-Typ"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DE "Hier wählen, ob Joypad von Port 4 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_DE "P5 Standard-Joypad-Typ"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DE "Hier wählen, ob Joypad von Port 5 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_TURBO_TOGGLING_LABEL_DE "Turbo-Hotkey-Modus"
#define PCE_TURBO_TOGGLING_INFO_0_DE "Turbotasten aktivieren. Hotkeys (Tasten III und IV) können entweder als Umschalter oder als dedizierte Turbotasten (zum Verwenden gedrückt halten) fungieren."
#define OPTION_VAL_TOGGLE_DE "Umschalten"
#define OPTION_VAL_ALWAYS_DE "Dediziert"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_DE "Alternative Turbo-Hotkeys"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_DE "RetroPads L3/R3-Tasten als Turbo-Hotkeys anstelle der Tasten III und IV zuweisen. Funktioniert nur im „Umschalten“-Modus und nur, solange den L3/R3-Tasten nichts zugewiesen ist. Damit die Belegung der Tasten III und IV vermieden werden, wenn in den 6-Tasten-Controller-Modus gewechselt wird."
#define PCE_TURBO_DELAY_LABEL_DE "Turbogeschwindigkeit"
#define PCE_TURBO_DELAY_INFO_0_DE "Auswählen, wie schnell Tastenbetätigungen wiederholt werden."
#define OPTION_VAL_FAST_DE "Schnell"
#define OPTION_VAL_MEDIUM_DE "Mittel"
#define OPTION_VAL_SLOW_DE "Langsam"
#define PCE_P0_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_DE NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_DE NULL
#define PCE_CDIMAGECACHE_LABEL_DE "CD-Abbild-Cache (Neustart erforderlich)"
#define PCE_CDIMAGECACHE_INFO_0_DE "Das komplette Abbild beim Start in den Arbeitsspeicher laden. Kann die Ladezeiten auf Kosten einer längeren Startzeit verkürzen."
#define PCE_CDBIOS_LABEL_DE "CD-BIOS (Neustart erforderlich)"
#define PCE_CDBIOS_INFO_0_DE "Die meisten Spiele können auf \"System Card 3\" laufen. \"Games Express\" wird für einige nicht lizenzierte Spiele benötigt."
#define OPTION_VAL_GAMES_EXPRESS_DE NULL
#define OPTION_VAL_SYSTEM_CARD_1_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_DE NULL
#define PCE_ARCADECARD_LABEL_DE "Arcade-Card (Neustart erforderlich)"
#define PCE_ARCADECARD_INFO_0_DE "Diese Option aktiviert lassen, um erweiterte Modi von ACD-erweiterten SCD-Spielen zu ermöglichen."
#define PCE_CDSPEED_LABEL_DE "(CD) CD-Geschwindigkeit"
#define PCE_CDSPEED_LABEL_CAT_DE "CD-Geschwindigkeit"
#define PCE_CDSPEED_INFO_0_DE "Höhere Werte ermöglichen schnellere Ladezeiten, können aber Probleme mit einigen Spielen verursachen."
#define PCE_ADPCMEXTRAPREC_LABEL_DE "(CD) ADPCM-Genauigkeit"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_DE "ADPCM-Genauigkeit"
#define PCE_ADPCMEXTRAPREC_INFO_0_DE "Volle Genauigkeit von 12-Bit für den MSM5205-ADPCM-Prädiktor kann das Rauschen während der ADPCM-Wiedergabe reduzieren."
#define OPTION_VAL_10_BIT_DE "10-Bit"
#define OPTION_VAL_12_BIT_DE "12-Bit"
#define PCE_ADPCMVOLUME_LABEL_DE "(CD) ADPCM Lautstärke %"
#define PCE_ADPCMVOLUME_LABEL_CAT_DE "ADPCM Lautstärke %"
#define PCE_ADPCMVOLUME_INFO_0_DE "Nur für CD-Spiele. Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define PCE_ADPCMVOLUME_INFO_1_DE "Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define PCE_CDDAVOLUME_LABEL_DE "(CD) CDDA Lautstärke %"
#define PCE_CDDAVOLUME_LABEL_CAT_DE "CDDA Lautstärke %"
#define PCE_CDPSGVOLUME_LABEL_DE "(CD) CD-PSG-Lautstärke %"
#define PCE_CDPSGVOLUME_LABEL_CAT_DE "CD-PSG-Lautstärke %"
#define PCE_NOSPRITELIMIT_LABEL_DE "Kein Sprite-Limit"
#define PCE_NOSPRITELIMIT_INFO_0_DE "Die Hardwarebeschränkung von 16 Sprites pro Scanline entfernen. WARNUNG: Kann bei einigen Spielen zu Grafikfehlern führen (beispielsweise Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_DE "CPU-Übertaktungsmultiplikator"
#define PCE_OCMULTIPLIER_INFO_0_DE "Höhere Werte können Slowdowns in Spielen reduzieren. WARNUNG: Kann Grafikfehler und Abstürze verursachen."

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DE,
      CATEGORY_VIDEO_INFO_0_DE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DE,
      CATEGORY_AUDIO_INFO_0_DE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DE,
      CATEGORY_HACKS_INFO_0_DE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DE,
      CATEGORY_CD_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_DE,
      NULL,
      PCE_PALETTE_INFO_0_DE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DE },
         { "Composite", OPTION_VAL_COMPOSITE_DE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_DE,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_DE,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "6:5", OPTION_VAL_6_5_DE },
         { "4:3", OPTION_VAL_4_3_DE },
         { "uncorrected", OPTION_VAL_UNCORRECTED_DE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_DE,
      NULL,
      PCE_SCALING_INFO_0_DE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "lores", OPTION_VAL_LORES_DE },
         { "hires", OPTION_VAL_HIRES_DE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_DE,
      NULL,
      PCE_HIRES_BLEND_INFO_0_DE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_DE,
      NULL,
      PCE_H_OVERSCAN_INFO_0_DE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_DE,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_DE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_DE,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_DE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_DE },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_DE,
      NULL,
      PCE_PSGREVISION_INFO_0_DE,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_DE },
         { "HuC6280A", OPTION_VAL_HUC6280A_DE },
         { "auto", OPTION_VAL_AUTO_DE },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_DE,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_DE,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_DE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_DE,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_DE },
         { "0.250", OPTION_VAL_0_250_DE },
         { "0.375", OPTION_VAL_0_375_DE },
         { "0.500", OPTION_VAL_0_500_DE },
         { "0.625", OPTION_VAL_0_625_DE },
         { "0.750", OPTION_VAL_0_750_DE },
         { "0.875", OPTION_VAL_0_875_DE },
         { "1.000", OPTION_VAL_1_000_DE },
         { "1.125", OPTION_VAL_1_125_DE },
         { "1.25", OPTION_VAL_1_25_DE },
         { "1.50", OPTION_VAL_1_50_DE },
         { "1.75", OPTION_VAL_1_75_DE },
         { "2.00", OPTION_VAL_2_00_DE },
         { "2.25", OPTION_VAL_2_25_DE },
         { "2.50", OPTION_VAL_2_50_DE },
         { "2.75", OPTION_VAL_2_75_DE },
         { "3.00", OPTION_VAL_3_00_DE },
         { "3.25", OPTION_VAL_3_25_DE },
         { "3.50", OPTION_VAL_3_50_DE },
         { "3.75", OPTION_VAL_3_75_DE },
         { "4.00", OPTION_VAL_4_00_DE },
         { "4.25", OPTION_VAL_4_25_DE },
         { "4.50", OPTION_VAL_4_50_DE },
         { "4.75", OPTION_VAL_4_75_DE },
         { "5.00", OPTION_VAL_5_00_DE },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_DE,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_DE,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_DE,
      NULL,
      PCE_MULTITAP_INFO_0_DE,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_DE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_DE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_DE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_DE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_DE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_DE,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_DE },
         { "always", OPTION_VAL_ALWAYS_DE },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_DE,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_DE,
      NULL,
      PCE_TURBO_DELAY_INFO_0_DE,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_DE },
         { "Medium", OPTION_VAL_MEDIUM_DE },
         { "Slow", OPTION_VAL_SLOW_DE },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_DE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_DE,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_DE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_DE,
      NULL,
      PCE_CDBIOS_INFO_0_DE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_DE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_DE },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_DE,
      NULL,
      PCE_ARCADECARD_INFO_0_DE,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_DE,
      PCE_CDSPEED_LABEL_CAT_DE,
      PCE_CDSPEED_INFO_0_DE,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_DE,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_DE,
      PCE_ADPCMEXTRAPREC_INFO_0_DE,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_DE },
         { "12-bit", OPTION_VAL_12_BIT_DE },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_DE,
      PCE_ADPCMVOLUME_LABEL_CAT_DE,
      PCE_ADPCMVOLUME_INFO_0_DE,
      PCE_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_DE,
      PCE_CDDAVOLUME_LABEL_CAT_DE,
      PCE_ADPCMVOLUME_INFO_0_DE,
      PCE_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_DE,
      PCE_CDPSGVOLUME_LABEL_CAT_DE,
      PCE_ADPCMVOLUME_INFO_0_DE,
      PCE_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_DE,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_DE,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_VIDEO_LABEL_EL "Οδηγός Βίντεο"
#define CATEGORY_VIDEO_INFO_0_EL NULL
#define CATEGORY_AUDIO_LABEL_EL "Οδηγός Ήχου"
#define CATEGORY_AUDIO_INFO_0_EL NULL
#define CATEGORY_INPUT_LABEL_EL "Οδηγός Εισαγωγής"
#define CATEGORY_INPUT_INFO_0_EL NULL
#define CATEGORY_HACKS_LABEL_EL NULL
#define CATEGORY_HACKS_INFO_0_EL NULL
#define CATEGORY_CD_LABEL_EL NULL
#define CATEGORY_CD_INFO_0_EL NULL
#define PCE_PALETTE_LABEL_EL "Παλέτα Χρωμάτων"
#define PCE_PALETTE_INFO_0_EL NULL
#define OPTION_VAL_RGB_EL NULL
#define OPTION_VAL_COMPOSITE_EL NULL
#define PCE_ASPECT_RATIO_LABEL_EL "Αναλογία Οθόνης"
#define PCE_ASPECT_RATIO_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL "Αυτόματο"
#define OPTION_VAL_6_5_EL NULL
#define OPTION_VAL_4_3_EL NULL
#define OPTION_VAL_UNCORRECTED_EL NULL
#define PCE_SCALING_LABEL_EL NULL
#define PCE_SCALING_INFO_0_EL NULL
#define OPTION_VAL_LORES_EL NULL
#define OPTION_VAL_HIRES_EL NULL
#define PCE_HIRES_BLEND_LABEL_EL NULL
#define PCE_HIRES_BLEND_INFO_0_EL NULL
#define PCE_H_OVERSCAN_LABEL_EL NULL
#define PCE_H_OVERSCAN_INFO_0_EL NULL
#define PCE_INITIAL_SCANLINE_LABEL_EL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_3_EL "3 (Προεπιλογή)"
#define PCE_LAST_SCANLINE_LABEL_EL NULL
#define PCE_LAST_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_242_EL "242 (Προεπιλογή)"
#define PCE_PSGREVISION_LABEL_EL NULL
#define PCE_PSGREVISION_INFO_0_EL NULL
#define OPTION_VAL_HUC6280_EL NULL
#define OPTION_VAL_HUC6280A_EL NULL
#define PCE_RESAMP_QUALITY_LABEL_EL NULL
#define PCE_RESAMP_QUALITY_INFO_0_EL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_EL "Ευαισθησία Ποντικιού"
#define PCE_MOUSE_SENSITIVITY_INFO_0_EL NULL
#define OPTION_VAL_0_125_EL NULL
#define OPTION_VAL_0_250_EL NULL
#define OPTION_VAL_0_375_EL NULL
#define OPTION_VAL_0_500_EL NULL
#define OPTION_VAL_0_625_EL NULL
#define OPTION_VAL_0_750_EL NULL
#define OPTION_VAL_0_875_EL NULL
#define OPTION_VAL_1_000_EL NULL
#define OPTION_VAL_1_125_EL NULL
#define OPTION_VAL_1_25_EL NULL
#define OPTION_VAL_1_50_EL NULL
#define OPTION_VAL_1_75_EL NULL
#define OPTION_VAL_2_00_EL NULL
#define OPTION_VAL_2_25_EL NULL
#define OPTION_VAL_2_50_EL NULL
#define OPTION_VAL_2_75_EL NULL
#define OPTION_VAL_3_00_EL NULL
#define OPTION_VAL_3_25_EL NULL
#define OPTION_VAL_3_50_EL NULL
#define OPTION_VAL_3_75_EL NULL
#define OPTION_VAL_4_00_EL NULL
#define OPTION_VAL_4_25_EL NULL
#define OPTION_VAL_4_50_EL NULL
#define OPTION_VAL_4_75_EL NULL
#define OPTION_VAL_5_00_EL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_EL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_EL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_EL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_EL NULL
#define PCE_MULTITAP_LABEL_EL NULL
#define PCE_MULTITAP_INFO_0_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EL NULL
#define OPTION_VAL_2_BUTTONS_EL NULL
#define OPTION_VAL_6_BUTTONS_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_EL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EL NULL
#define PCE_TURBO_TOGGLING_LABEL_EL NULL
#define PCE_TURBO_TOGGLING_INFO_0_EL NULL
#define OPTION_VAL_TOGGLE_EL NULL
#define OPTION_VAL_ALWAYS_EL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_EL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_EL NULL
#define PCE_TURBO_DELAY_LABEL_EL NULL
#define PCE_TURBO_DELAY_INFO_0_EL NULL
#define OPTION_VAL_FAST_EL "Γρήγορη Ταχύτητα"
#define OPTION_VAL_MEDIUM_EL NULL
#define OPTION_VAL_SLOW_EL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_EL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_EL NULL
#define PCE_CDIMAGECACHE_LABEL_EL NULL
#define PCE_CDIMAGECACHE_INFO_0_EL NULL
#define PCE_CDBIOS_LABEL_EL NULL
#define PCE_CDBIOS_INFO_0_EL NULL
#define OPTION_VAL_GAMES_EXPRESS_EL NULL
#define OPTION_VAL_SYSTEM_CARD_1_EL "Κάρτα Συστήματος 1"
#define OPTION_VAL_SYSTEM_CARD_2_EL "Κάρτα Συστήματος 2"
#define OPTION_VAL_SYSTEM_CARD_3_EL "Κάρτα Συστήματος 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_EL "Κάρτα Συστήματος 2 ΗΠΑ"
#define OPTION_VAL_SYSTEM_CARD_3_US_EL "Κάρτα Συστήματος 3 ΗΠΑ"
#define PCE_ARCADECARD_LABEL_EL NULL
#define PCE_ARCADECARD_INFO_0_EL NULL
#define PCE_CDSPEED_LABEL_EL NULL
#define PCE_CDSPEED_LABEL_CAT_EL NULL
#define PCE_CDSPEED_INFO_0_EL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_EL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_EL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_EL NULL
#define OPTION_VAL_10_BIT_EL NULL
#define OPTION_VAL_12_BIT_EL NULL
#define PCE_ADPCMVOLUME_LABEL_EL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_EL NULL
#define PCE_ADPCMVOLUME_INFO_0_EL NULL
#define PCE_ADPCMVOLUME_INFO_1_EL NULL
#define PCE_CDDAVOLUME_LABEL_EL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_EL NULL
#define PCE_CDPSGVOLUME_LABEL_EL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_EL NULL
#define PCE_NOSPRITELIMIT_LABEL_EL NULL
#define PCE_NOSPRITELIMIT_INFO_0_EL NULL
#define PCE_OCMULTIPLIER_LABEL_EL NULL
#define PCE_OCMULTIPLIER_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EL,
      CATEGORY_VIDEO_INFO_0_EL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EL,
      CATEGORY_AUDIO_INFO_0_EL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EL,
      CATEGORY_HACKS_INFO_0_EL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EL,
      CATEGORY_CD_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_EL,
      NULL,
      PCE_PALETTE_INFO_0_EL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EL },
         { "Composite", OPTION_VAL_COMPOSITE_EL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_EL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_EL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "6:5", OPTION_VAL_6_5_EL },
         { "4:3", OPTION_VAL_4_3_EL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_EL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_EL,
      NULL,
      PCE_SCALING_INFO_0_EL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "lores", OPTION_VAL_LORES_EL },
         { "hires", OPTION_VAL_HIRES_EL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_EL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_EL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_EL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_EL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_EL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_EL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_EL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_EL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_EL,
      NULL,
      PCE_PSGREVISION_INFO_0_EL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_EL },
         { "HuC6280A", OPTION_VAL_HUC6280A_EL },
         { "auto", OPTION_VAL_AUTO_EL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_EL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_EL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_EL },
         { "0.250", OPTION_VAL_0_250_EL },
         { "0.375", OPTION_VAL_0_375_EL },
         { "0.500", OPTION_VAL_0_500_EL },
         { "0.625", OPTION_VAL_0_625_EL },
         { "0.750", OPTION_VAL_0_750_EL },
         { "0.875", OPTION_VAL_0_875_EL },
         { "1.000", OPTION_VAL_1_000_EL },
         { "1.125", OPTION_VAL_1_125_EL },
         { "1.25", OPTION_VAL_1_25_EL },
         { "1.50", OPTION_VAL_1_50_EL },
         { "1.75", OPTION_VAL_1_75_EL },
         { "2.00", OPTION_VAL_2_00_EL },
         { "2.25", OPTION_VAL_2_25_EL },
         { "2.50", OPTION_VAL_2_50_EL },
         { "2.75", OPTION_VAL_2_75_EL },
         { "3.00", OPTION_VAL_3_00_EL },
         { "3.25", OPTION_VAL_3_25_EL },
         { "3.50", OPTION_VAL_3_50_EL },
         { "3.75", OPTION_VAL_3_75_EL },
         { "4.00", OPTION_VAL_4_00_EL },
         { "4.25", OPTION_VAL_4_25_EL },
         { "4.50", OPTION_VAL_4_50_EL },
         { "4.75", OPTION_VAL_4_75_EL },
         { "5.00", OPTION_VAL_5_00_EL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_EL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_EL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_EL,
      NULL,
      PCE_MULTITAP_INFO_0_EL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_EL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_EL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_EL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_EL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_EL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_EL,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_EL },
         { "always", OPTION_VAL_ALWAYS_EL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_EL,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_EL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_EL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_EL },
         { "Medium", OPTION_VAL_MEDIUM_EL },
         { "Slow", OPTION_VAL_SLOW_EL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_EL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_EL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_EL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_EL,
      NULL,
      PCE_CDBIOS_INFO_0_EL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_EL,
      NULL,
      PCE_ARCADECARD_INFO_0_EL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_EL,
      PCE_CDSPEED_LABEL_CAT_EL,
      PCE_CDSPEED_INFO_0_EL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_EL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_EL,
      PCE_ADPCMEXTRAPREC_INFO_0_EL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_EL },
         { "12-bit", OPTION_VAL_12_BIT_EL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_EL,
      PCE_ADPCMVOLUME_LABEL_CAT_EL,
      PCE_ADPCMVOLUME_INFO_0_EL,
      PCE_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_EL,
      PCE_CDDAVOLUME_LABEL_CAT_EL,
      PCE_ADPCMVOLUME_INFO_0_EL,
      PCE_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_EL,
      PCE_CDPSGVOLUME_LABEL_CAT_EL,
      PCE_ADPCMVOLUME_INFO_0_EL,
      PCE_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_EL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_EL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EN */

#define CATEGORY_VIDEO_LABEL_EN NULL
#define CATEGORY_VIDEO_INFO_0_EN NULL
#define CATEGORY_AUDIO_LABEL_EN NULL
#define CATEGORY_AUDIO_INFO_0_EN NULL
#define CATEGORY_INPUT_LABEL_EN NULL
#define CATEGORY_INPUT_INFO_0_EN NULL
#define CATEGORY_HACKS_LABEL_EN NULL
#define CATEGORY_HACKS_INFO_0_EN "Configure processor over-clocking and emulation accuracy parameters affecting low-level performance and compatibility."
#define CATEGORY_CD_LABEL_EN NULL
#define CATEGORY_CD_INFO_0_EN NULL
#define PCE_PALETTE_LABEL_EN "Colour Palette"
#define PCE_PALETTE_INFO_0_EN NULL
#define OPTION_VAL_RGB_EN NULL
#define OPTION_VAL_COMPOSITE_EN NULL
#define PCE_ASPECT_RATIO_LABEL_EN NULL
#define PCE_ASPECT_RATIO_INFO_0_EN NULL
#define OPTION_VAL_AUTO_EN NULL
#define OPTION_VAL_6_5_EN NULL
#define OPTION_VAL_4_3_EN NULL
#define OPTION_VAL_UNCORRECTED_EN NULL
#define PCE_SCALING_LABEL_EN NULL
#define PCE_SCALING_INFO_0_EN NULL
#define OPTION_VAL_LORES_EN NULL
#define OPTION_VAL_HIRES_EN NULL
#define PCE_HIRES_BLEND_LABEL_EN NULL
#define PCE_HIRES_BLEND_INFO_0_EN NULL
#define PCE_H_OVERSCAN_LABEL_EN NULL
#define PCE_H_OVERSCAN_INFO_0_EN NULL
#define PCE_INITIAL_SCANLINE_LABEL_EN "Initial Scan-line"
#define PCE_INITIAL_SCANLINE_INFO_0_EN "First rendered scan-line. Higher values will crop the top of the image."
#define OPTION_VAL_3_EN NULL
#define PCE_LAST_SCANLINE_LABEL_EN "Last Scan-line"
#define PCE_LAST_SCANLINE_INFO_0_EN "Last rendered scan-line. Lower values will crop the bottom of the image."
#define OPTION_VAL_242_EN NULL
#define PCE_PSGREVISION_LABEL_EN NULL
#define PCE_PSGREVISION_INFO_0_EN NULL
#define OPTION_VAL_HUC6280_EN NULL
#define OPTION_VAL_HUC6280A_EN NULL
#define PCE_RESAMP_QUALITY_LABEL_EN "Owl Re-sampler Quality"
#define PCE_RESAMP_QUALITY_INFO_0_EN NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EN NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EN NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_EN NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_EN NULL
#define OPTION_VAL_0_125_EN NULL
#define OPTION_VAL_0_250_EN NULL
#define OPTION_VAL_0_375_EN NULL
#define OPTION_VAL_0_500_EN NULL
#define OPTION_VAL_0_625_EN NULL
#define OPTION_VAL_0_750_EN NULL
#define OPTION_VAL_0_875_EN NULL
#define OPTION_VAL_1_000_EN NULL
#define OPTION_VAL_1_125_EN NULL
#define OPTION_VAL_1_25_EN NULL
#define OPTION_VAL_1_50_EN NULL
#define OPTION_VAL_1_75_EN NULL
#define OPTION_VAL_2_00_EN NULL
#define OPTION_VAL_2_25_EN NULL
#define OPTION_VAL_2_50_EN NULL
#define OPTION_VAL_2_75_EN NULL
#define OPTION_VAL_3_00_EN NULL
#define OPTION_VAL_3_25_EN NULL
#define OPTION_VAL_3_50_EN NULL
#define OPTION_VAL_3_75_EN NULL
#define OPTION_VAL_4_00_EN NULL
#define OPTION_VAL_4_25_EN NULL
#define OPTION_VAL_4_50_EN NULL
#define OPTION_VAL_4_75_EN NULL
#define OPTION_VAL_5_00_EN NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_EN NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_EN NULL
#define PCE_DISABLE_SOFTRESET_LABEL_EN NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_EN NULL
#define PCE_MULTITAP_LABEL_EN "Multi-tap 5-port Controller"
#define PCE_MULTITAP_INFO_0_EN "Enable up to 5-player multi-tap emulation. Disabling this is only needed in some cases (e.g. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_EN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EN "Choose if port 1 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define OPTION_VAL_2_BUTTONS_EN NULL
#define OPTION_VAL_6_BUTTONS_EN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_EN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EN "Choose if port 2 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_EN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EN "Choose if port 3 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_EN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EN "Choose if port 4 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_EN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EN "Choose if port 5 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_TURBO_TOGGLING_LABEL_EN NULL
#define PCE_TURBO_TOGGLING_INFO_0_EN NULL
#define OPTION_VAL_TOGGLE_EN NULL
#define OPTION_VAL_ALWAYS_EN NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_EN NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_EN NULL
#define PCE_TURBO_DELAY_LABEL_EN NULL
#define PCE_TURBO_DELAY_INFO_0_EN NULL
#define OPTION_VAL_FAST_EN NULL
#define OPTION_VAL_MEDIUM_EN NULL
#define OPTION_VAL_SLOW_EN NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_EN NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_EN NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_EN NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_EN NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_EN NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_EN NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_EN NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_EN NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_EN NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_EN NULL
#define PCE_CDIMAGECACHE_LABEL_EN NULL
#define PCE_CDIMAGECACHE_INFO_0_EN "Load the complete image into memory at start-up. Can potentially decrease loading times at the cost of an increased start-up time."
#define PCE_CDBIOS_LABEL_EN NULL
#define PCE_CDBIOS_INFO_0_EN NULL
#define OPTION_VAL_GAMES_EXPRESS_EN NULL
#define OPTION_VAL_SYSTEM_CARD_1_EN NULL
#define OPTION_VAL_SYSTEM_CARD_2_EN NULL
#define OPTION_VAL_SYSTEM_CARD_3_EN NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_EN NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_EN NULL
#define PCE_ARCADECARD_LABEL_EN NULL
#define PCE_ARCADECARD_INFO_0_EN NULL
#define PCE_CDSPEED_LABEL_EN NULL
#define PCE_CDSPEED_LABEL_CAT_EN NULL
#define PCE_CDSPEED_INFO_0_EN NULL
#define PCE_ADPCMEXTRAPREC_LABEL_EN NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_EN NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_EN NULL
#define OPTION_VAL_10_BIT_EN NULL
#define OPTION_VAL_12_BIT_EN NULL
#define PCE_ADPCMVOLUME_LABEL_EN NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_EN NULL
#define PCE_ADPCMVOLUME_INFO_0_EN NULL
#define PCE_ADPCMVOLUME_INFO_1_EN NULL
#define PCE_CDDAVOLUME_LABEL_EN NULL
#define PCE_CDDAVOLUME_LABEL_CAT_EN NULL
#define PCE_CDPSGVOLUME_LABEL_EN NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_EN NULL
#define PCE_NOSPRITELIMIT_LABEL_EN NULL
#define PCE_NOSPRITELIMIT_INFO_0_EN "Remove 16-sprites-per-scan-line hardware limit. WARNING: May cause graphics glitching on some games (such as Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_EN "CPU Over-clock Multiplier"
#define PCE_OCMULTIPLIER_INFO_0_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EN,
      CATEGORY_VIDEO_INFO_0_EN
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EN,
      CATEGORY_AUDIO_INFO_0_EN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EN,
      CATEGORY_INPUT_INFO_0_EN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EN,
      CATEGORY_HACKS_INFO_0_EN
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EN,
      CATEGORY_CD_INFO_0_EN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_EN,
      NULL,
      PCE_PALETTE_INFO_0_EN,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EN },
         { "Composite", OPTION_VAL_COMPOSITE_EN },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_EN,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_EN,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EN },
         { "6:5", OPTION_VAL_6_5_EN },
         { "4:3", OPTION_VAL_4_3_EN },
         { "uncorrected", OPTION_VAL_UNCORRECTED_EN },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_EN,
      NULL,
      PCE_SCALING_INFO_0_EN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EN },
         { "lores", OPTION_VAL_LORES_EN },
         { "hires", OPTION_VAL_HIRES_EN },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_EN,
      NULL,
      PCE_HIRES_BLEND_INFO_0_EN,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_EN,
      NULL,
      PCE_H_OVERSCAN_INFO_0_EN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EN },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_EN,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_EN,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_EN,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_EN,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EN },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_EN,
      NULL,
      PCE_PSGREVISION_INFO_0_EN,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_EN },
         { "HuC6280A", OPTION_VAL_HUC6280A_EN },
         { "auto", OPTION_VAL_AUTO_EN },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_EN,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_EN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EN,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EN,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_EN,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_EN },
         { "0.250", OPTION_VAL_0_250_EN },
         { "0.375", OPTION_VAL_0_375_EN },
         { "0.500", OPTION_VAL_0_500_EN },
         { "0.625", OPTION_VAL_0_625_EN },
         { "0.750", OPTION_VAL_0_750_EN },
         { "0.875", OPTION_VAL_0_875_EN },
         { "1.000", OPTION_VAL_1_000_EN },
         { "1.125", OPTION_VAL_1_125_EN },
         { "1.25", OPTION_VAL_1_25_EN },
         { "1.50", OPTION_VAL_1_50_EN },
         { "1.75", OPTION_VAL_1_75_EN },
         { "2.00", OPTION_VAL_2_00_EN },
         { "2.25", OPTION_VAL_2_25_EN },
         { "2.50", OPTION_VAL_2_50_EN },
         { "2.75", OPTION_VAL_2_75_EN },
         { "3.00", OPTION_VAL_3_00_EN },
         { "3.25", OPTION_VAL_3_25_EN },
         { "3.50", OPTION_VAL_3_50_EN },
         { "3.75", OPTION_VAL_3_75_EN },
         { "4.00", OPTION_VAL_4_00_EN },
         { "4.25", OPTION_VAL_4_25_EN },
         { "4.50", OPTION_VAL_4_50_EN },
         { "4.75", OPTION_VAL_4_75_EN },
         { "5.00", OPTION_VAL_5_00_EN },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_EN,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_EN,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_EN,
      NULL,
      PCE_MULTITAP_INFO_0_EN,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_EN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_EN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_EN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_EN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_EN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_EN,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_EN },
         { "always", OPTION_VAL_ALWAYS_EN },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_EN,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_EN,
      NULL,
      PCE_TURBO_DELAY_INFO_0_EN,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_EN },
         { "Medium", OPTION_VAL_MEDIUM_EN },
         { "Slow", OPTION_VAL_SLOW_EN },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_EN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_EN,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_EN,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_EN,
      NULL,
      PCE_CDBIOS_INFO_0_EN,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EN },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EN },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EN },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EN },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EN },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EN },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_EN,
      NULL,
      PCE_ARCADECARD_INFO_0_EN,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_EN,
      PCE_CDSPEED_LABEL_CAT_EN,
      PCE_CDSPEED_INFO_0_EN,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_EN,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_EN,
      PCE_ADPCMEXTRAPREC_INFO_0_EN,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_EN },
         { "12-bit", OPTION_VAL_12_BIT_EN },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_EN,
      PCE_ADPCMVOLUME_LABEL_CAT_EN,
      PCE_ADPCMVOLUME_INFO_0_EN,
      PCE_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_EN,
      PCE_CDDAVOLUME_LABEL_CAT_EN,
      PCE_ADPCMVOLUME_INFO_0_EN,
      PCE_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_EN,
      PCE_CDPSGVOLUME_LABEL_CAT_EN,
      PCE_ADPCMVOLUME_INFO_0_EN,
      PCE_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_EN,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_EN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_EN,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_EN,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_VIDEO_LABEL_EO "Video Driver"
#define CATEGORY_VIDEO_INFO_0_EO NULL
#define CATEGORY_AUDIO_LABEL_EO "Audio Driver"
#define CATEGORY_AUDIO_INFO_0_EO NULL
#define CATEGORY_INPUT_LABEL_EO "Input Driver"
#define CATEGORY_INPUT_INFO_0_EO NULL
#define CATEGORY_HACKS_LABEL_EO NULL
#define CATEGORY_HACKS_INFO_0_EO NULL
#define CATEGORY_CD_LABEL_EO NULL
#define CATEGORY_CD_INFO_0_EO NULL
#define PCE_PALETTE_LABEL_EO NULL
#define PCE_PALETTE_INFO_0_EO NULL
#define OPTION_VAL_RGB_EO NULL
#define OPTION_VAL_COMPOSITE_EO NULL
#define PCE_ASPECT_RATIO_LABEL_EO NULL
#define PCE_ASPECT_RATIO_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_6_5_EO NULL
#define OPTION_VAL_4_3_EO NULL
#define OPTION_VAL_UNCORRECTED_EO NULL
#define PCE_SCALING_LABEL_EO NULL
#define PCE_SCALING_INFO_0_EO NULL
#define OPTION_VAL_LORES_EO NULL
#define OPTION_VAL_HIRES_EO NULL
#define PCE_HIRES_BLEND_LABEL_EO NULL
#define PCE_HIRES_BLEND_INFO_0_EO NULL
#define PCE_H_OVERSCAN_LABEL_EO NULL
#define PCE_H_OVERSCAN_INFO_0_EO NULL
#define PCE_INITIAL_SCANLINE_LABEL_EO NULL
#define PCE_INITIAL_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_3_EO NULL
#define PCE_LAST_SCANLINE_LABEL_EO NULL
#define PCE_LAST_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_242_EO NULL
#define PCE_PSGREVISION_LABEL_EO NULL
#define PCE_PSGREVISION_INFO_0_EO NULL
#define OPTION_VAL_HUC6280_EO NULL
#define OPTION_VAL_HUC6280A_EO NULL
#define PCE_RESAMP_QUALITY_LABEL_EO NULL
#define PCE_RESAMP_QUALITY_INFO_0_EO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EO NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_EO NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_EO NULL
#define OPTION_VAL_0_125_EO NULL
#define OPTION_VAL_0_250_EO NULL
#define OPTION_VAL_0_375_EO NULL
#define OPTION_VAL_0_500_EO NULL
#define OPTION_VAL_0_625_EO NULL
#define OPTION_VAL_0_750_EO NULL
#define OPTION_VAL_0_875_EO NULL
#define OPTION_VAL_1_000_EO NULL
#define OPTION_VAL_1_125_EO NULL
#define OPTION_VAL_1_25_EO NULL
#define OPTION_VAL_1_50_EO NULL
#define OPTION_VAL_1_75_EO NULL
#define OPTION_VAL_2_00_EO NULL
#define OPTION_VAL_2_25_EO NULL
#define OPTION_VAL_2_50_EO NULL
#define OPTION_VAL_2_75_EO NULL
#define OPTION_VAL_3_00_EO NULL
#define OPTION_VAL_3_25_EO NULL
#define OPTION_VAL_3_50_EO NULL
#define OPTION_VAL_3_75_EO NULL
#define OPTION_VAL_4_00_EO NULL
#define OPTION_VAL_4_25_EO NULL
#define OPTION_VAL_4_50_EO NULL
#define OPTION_VAL_4_75_EO NULL
#define OPTION_VAL_5_00_EO NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_EO NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_EO NULL
#define PCE_DISABLE_SOFTRESET_LABEL_EO NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_EO NULL
#define PCE_MULTITAP_LABEL_EO NULL
#define PCE_MULTITAP_INFO_0_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EO NULL
#define OPTION_VAL_2_BUTTONS_EO NULL
#define OPTION_VAL_6_BUTTONS_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_EO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EO NULL
#define PCE_TURBO_TOGGLING_LABEL_EO NULL
#define PCE_TURBO_TOGGLING_INFO_0_EO NULL
#define OPTION_VAL_TOGGLE_EO NULL
#define OPTION_VAL_ALWAYS_EO NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_EO NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_EO NULL
#define PCE_TURBO_DELAY_LABEL_EO NULL
#define PCE_TURBO_DELAY_INFO_0_EO NULL
#define OPTION_VAL_FAST_EO NULL
#define OPTION_VAL_MEDIUM_EO NULL
#define OPTION_VAL_SLOW_EO NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_EO NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_EO NULL
#define PCE_CDIMAGECACHE_LABEL_EO NULL
#define PCE_CDIMAGECACHE_INFO_0_EO NULL
#define PCE_CDBIOS_LABEL_EO NULL
#define PCE_CDBIOS_INFO_0_EO NULL
#define OPTION_VAL_GAMES_EXPRESS_EO NULL
#define OPTION_VAL_SYSTEM_CARD_1_EO NULL
#define OPTION_VAL_SYSTEM_CARD_2_EO NULL
#define OPTION_VAL_SYSTEM_CARD_3_EO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_EO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_EO NULL
#define PCE_ARCADECARD_LABEL_EO NULL
#define PCE_ARCADECARD_INFO_0_EO NULL
#define PCE_CDSPEED_LABEL_EO NULL
#define PCE_CDSPEED_LABEL_CAT_EO NULL
#define PCE_CDSPEED_INFO_0_EO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_EO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_EO NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_EO NULL
#define OPTION_VAL_10_BIT_EO NULL
#define OPTION_VAL_12_BIT_EO NULL
#define PCE_ADPCMVOLUME_LABEL_EO NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_EO NULL
#define PCE_ADPCMVOLUME_INFO_0_EO NULL
#define PCE_ADPCMVOLUME_INFO_1_EO NULL
#define PCE_CDDAVOLUME_LABEL_EO NULL
#define PCE_CDDAVOLUME_LABEL_CAT_EO NULL
#define PCE_CDPSGVOLUME_LABEL_EO NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_EO NULL
#define PCE_NOSPRITELIMIT_LABEL_EO NULL
#define PCE_NOSPRITELIMIT_INFO_0_EO NULL
#define PCE_OCMULTIPLIER_LABEL_EO NULL
#define PCE_OCMULTIPLIER_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EO,
      CATEGORY_VIDEO_INFO_0_EO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EO,
      CATEGORY_AUDIO_INFO_0_EO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EO,
      CATEGORY_HACKS_INFO_0_EO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EO,
      CATEGORY_CD_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_EO,
      NULL,
      PCE_PALETTE_INFO_0_EO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EO },
         { "Composite", OPTION_VAL_COMPOSITE_EO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_EO,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_EO,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "6:5", OPTION_VAL_6_5_EO },
         { "4:3", OPTION_VAL_4_3_EO },
         { "uncorrected", OPTION_VAL_UNCORRECTED_EO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_EO,
      NULL,
      PCE_SCALING_INFO_0_EO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "lores", OPTION_VAL_LORES_EO },
         { "hires", OPTION_VAL_HIRES_EO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_EO,
      NULL,
      PCE_HIRES_BLEND_INFO_0_EO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_EO,
      NULL,
      PCE_H_OVERSCAN_INFO_0_EO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_EO,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_EO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_EO,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_EO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EO },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_EO,
      NULL,
      PCE_PSGREVISION_INFO_0_EO,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_EO },
         { "HuC6280A", OPTION_VAL_HUC6280A_EO },
         { "auto", OPTION_VAL_AUTO_EO },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_EO,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_EO,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_EO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_EO,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_EO },
         { "0.250", OPTION_VAL_0_250_EO },
         { "0.375", OPTION_VAL_0_375_EO },
         { "0.500", OPTION_VAL_0_500_EO },
         { "0.625", OPTION_VAL_0_625_EO },
         { "0.750", OPTION_VAL_0_750_EO },
         { "0.875", OPTION_VAL_0_875_EO },
         { "1.000", OPTION_VAL_1_000_EO },
         { "1.125", OPTION_VAL_1_125_EO },
         { "1.25", OPTION_VAL_1_25_EO },
         { "1.50", OPTION_VAL_1_50_EO },
         { "1.75", OPTION_VAL_1_75_EO },
         { "2.00", OPTION_VAL_2_00_EO },
         { "2.25", OPTION_VAL_2_25_EO },
         { "2.50", OPTION_VAL_2_50_EO },
         { "2.75", OPTION_VAL_2_75_EO },
         { "3.00", OPTION_VAL_3_00_EO },
         { "3.25", OPTION_VAL_3_25_EO },
         { "3.50", OPTION_VAL_3_50_EO },
         { "3.75", OPTION_VAL_3_75_EO },
         { "4.00", OPTION_VAL_4_00_EO },
         { "4.25", OPTION_VAL_4_25_EO },
         { "4.50", OPTION_VAL_4_50_EO },
         { "4.75", OPTION_VAL_4_75_EO },
         { "5.00", OPTION_VAL_5_00_EO },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_EO,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_EO,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_EO,
      NULL,
      PCE_MULTITAP_INFO_0_EO,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_EO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_EO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_EO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_EO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_EO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_EO,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_EO },
         { "always", OPTION_VAL_ALWAYS_EO },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_EO,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_EO,
      NULL,
      PCE_TURBO_DELAY_INFO_0_EO,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_EO },
         { "Medium", OPTION_VAL_MEDIUM_EO },
         { "Slow", OPTION_VAL_SLOW_EO },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_EO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_EO,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_EO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_EO,
      NULL,
      PCE_CDBIOS_INFO_0_EO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EO },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_EO,
      NULL,
      PCE_ARCADECARD_INFO_0_EO,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_EO,
      PCE_CDSPEED_LABEL_CAT_EO,
      PCE_CDSPEED_INFO_0_EO,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_EO,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_EO,
      PCE_ADPCMEXTRAPREC_INFO_0_EO,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_EO },
         { "12-bit", OPTION_VAL_12_BIT_EO },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_EO,
      PCE_ADPCMVOLUME_LABEL_CAT_EO,
      PCE_ADPCMVOLUME_INFO_0_EO,
      PCE_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_EO,
      PCE_CDDAVOLUME_LABEL_CAT_EO,
      PCE_ADPCMVOLUME_INFO_0_EO,
      PCE_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_EO,
      PCE_CDPSGVOLUME_LABEL_CAT_EO,
      PCE_ADPCMVOLUME_INFO_0_EO,
      PCE_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_EO,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_EO,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_VIDEO_LABEL_ES "Vídeo"
#define CATEGORY_VIDEO_INFO_0_ES "Cambia las opciones de relación de aspecto, recorte de imagen y salida de imagen."
#define CATEGORY_AUDIO_LABEL_ES NULL
#define CATEGORY_AUDIO_INFO_0_ES "Configura los dispositivos de audio emulados."
#define CATEGORY_INPUT_LABEL_ES "Entrada"
#define CATEGORY_INPUT_INFO_0_ES "Configura la entrada de las pistolas de luz, el ratón o el mando."
#define CATEGORY_HACKS_LABEL_ES "Arreglos de emulación"
#define CATEGORY_HACKS_INFO_0_ES "Cambia las opciones de velocidad del procesador y de precisión de la emulación que afectan al rendimiento a bajo nivel y a la compatibilidad."
#define CATEGORY_CD_LABEL_ES "CD para PC Engine"
#define CATEGORY_CD_INFO_0_ES "Cambia los ajustes relacionados con la emulación de la unidad de CD para PC Engine."
#define PCE_PALETTE_LABEL_ES "Paleta de colores"
#define PCE_PALETTE_INFO_0_ES "«Vídeo compuesto» intentará recrear la salida de vídeo original de la consola, mostrando más detalles en algunos juegos."
#define OPTION_VAL_RGB_ES NULL
#define OPTION_VAL_COMPOSITE_ES "Vídeo compuesto"
#define PCE_ASPECT_RATIO_LABEL_ES "Relación de aspecto"
#define PCE_ASPECT_RATIO_INFO_0_ES "Selecciona la relación de aspecto del contenido. Esta opción solo surtirá efecto cuando la opción general de RetroArch, en el apartado de Vídeo de los ajustes, esté configurada como «Asignada por el núcleo»."
#define OPTION_VAL_AUTO_ES "Selección automática"
#define OPTION_VAL_6_5_ES NULL
#define OPTION_VAL_4_3_ES NULL
#define OPTION_VAL_UNCORRECTED_ES "Sin corregir"
#define PCE_SCALING_LABEL_ES "Escalar resolución"
#define PCE_SCALING_INFO_0_ES "«Selección automática» permitirá que se cambie la resolución. «Baja resolución» puede provocar una pérdida de píxeles. «Alta resolución» mantendrá el ancho máximo."
#define OPTION_VAL_LORES_ES "Baja resolución"
#define OPTION_VAL_HIRES_ES "Alta resolución"
#define PCE_HIRES_BLEND_LABEL_ES "Fuerza de la fusión en alta resolución"
#define PCE_HIRES_BLEND_INFO_0_ES "Fusiona los píxeles entre sí al utilizar el modo en alta resolución. Un valor alto difuminará más la imagen."
#define PCE_H_OVERSCAN_LABEL_ES "Mostrar sobrebarrido horizontal"
#define PCE_H_OVERSCAN_INFO_0_ES "«Selección automática» intentará recortar las zonas vacías según cada juego."
#define PCE_INITIAL_SCANLINE_LABEL_ES "Línea de barrido inicial"
#define PCE_INITIAL_SCANLINE_INFO_0_ES "Indica la primera línea de barrido que se renderizará. Un valor muy alto recortará la parte superior de la imagen."
#define OPTION_VAL_3_ES "3 (por defecto)"
#define PCE_LAST_SCANLINE_LABEL_ES "Línea de barrido final"
#define PCE_LAST_SCANLINE_INFO_0_ES "Indica la última línea de barrido que se renderizará. Un valor muy bajo recortará la parte inferior de la imagen."
#define OPTION_VAL_242_ES "242 (por defecto)"
#define PCE_PSGREVISION_LABEL_ES "Chip de audio PSG (es necesario reiniciar)"
#define PCE_PSGREVISION_INFO_0_ES "HuC6280 representa a la PC Engine original, mientras que HuC6280A representa a la SuperGrafx y la CoreGrafx I."
#define OPTION_VAL_HUC6280_ES NULL
#define OPTION_VAL_HUC6280A_ES NULL
#define PCE_RESAMP_QUALITY_LABEL_ES "Calidad del remuestrador Owl"
#define PCE_RESAMP_QUALITY_INFO_0_ES "Un valor alto producirá una mejor relación señal/ruido y conservará las frecuencias agudas, pero aumentará el coste de rendimiento y podría provocar una mayor latencia y ruidos si el volumen está demasiado alto."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ES "Mostrar ajustes avanzados de entrada/turbo"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ES "Muestra los ajustes del multitap, del ratón, de los botones turbo y otros parámetros avanzados. NOTA: podría ser necesario salir y volver a entrar del menú rápido para que este ajuste surta efecto."
#define PCE_MOUSE_SENSITIVITY_LABEL_ES "Sensibilidad del ratón"
#define PCE_MOUSE_SENSITIVITY_INFO_0_ES "Un valor más alto hará que el cursor del ratón se desplace más rápido."
#define OPTION_VAL_0_125_ES "0,125"
#define OPTION_VAL_0_250_ES "0,250"
#define OPTION_VAL_0_375_ES "0,375"
#define OPTION_VAL_0_500_ES "0,500"
#define OPTION_VAL_0_625_ES "0,625"
#define OPTION_VAL_0_750_ES "0,750"
#define OPTION_VAL_0_875_ES "0,875"
#define OPTION_VAL_1_000_ES "1,000"
#define OPTION_VAL_1_125_ES "1,125"
#define OPTION_VAL_1_25_ES "1,25"
#define OPTION_VAL_1_50_ES "1,50"
#define OPTION_VAL_1_75_ES "1,75"
#define OPTION_VAL_2_00_ES "2,00"
#define OPTION_VAL_2_25_ES "2,25"
#define OPTION_VAL_2_50_ES "2,50"
#define OPTION_VAL_2_75_ES "2,75"
#define OPTION_VAL_3_00_ES "3,00"
#define OPTION_VAL_3_25_ES "3,25"
#define OPTION_VAL_3_50_ES "3,50"
#define OPTION_VAL_3_75_ES "3,75"
#define OPTION_VAL_4_00_ES "4,00"
#define OPTION_VAL_4_25_ES "4,25"
#define OPTION_VAL_4_50_ES "4,50"
#define OPTION_VAL_4_75_ES "4,75"
#define OPTION_VAL_5_00_ES "5,00"
#define PCE_UP_DOWN_ALLOWED_LABEL_ES "Permitir direcciones opuestas"
#define PCE_UP_DOWN_ALLOWED_INFO_0_ES "Esta opción permitirá pulsar, alternar rápidamente o mantener las direcciones izquierda y derecha (o arriba y abajo) al mismo tiempo. Podría provocar fallos de movimiento."
#define PCE_DISABLE_SOFTRESET_LABEL_ES "Desactivar reinicio por software (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_ES "Cuando se pulsen a la vez los botones RUN y SELECT, esta opción desactivará los dos botones temporalmente en vez de provocar un reinicio del sistema."
#define PCE_MULTITAP_LABEL_ES "Multitap para cinco mandos"
#define PCE_MULTITAP_INFO_0_ES "Activa la emulación de un Multitap para hasta cinco jugadores. Solo es necesario desactivar esta opción en casos concretos (p. ej.: Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_ES "Tipo de mando predeterminado del J1"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ES "Indica si el mando del puerto 1 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define OPTION_VAL_2_BUTTONS_ES "Dos botones"
#define OPTION_VAL_6_BUTTONS_ES "Seis botones"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_ES "Tipo de mando predeterminado del J2"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ES "Indica si el mando del puerto 2 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_ES "Tipo de mando predeterminado del J3"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ES "Indica si el mando del puerto 3 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_ES "Tipo de mando predeterminado del J4"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ES "Indica si el mando del puerto 4 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_ES "Tipo de mando predeterminado del J5"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ES "Indica si el mando del puerto 5 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_TURBO_TOGGLING_LABEL_ES "Modo de la tecla rápida del turbo"
#define PCE_TURBO_TOGGLING_INFO_0_ES "Activa los botones con turbo. Las teclas rápidas (los botones III y IV) pueden hacer de conmutadores o de botones de turbo dedicados (mantenlos pulsados para usarlos)."
#define OPTION_VAL_TOGGLE_ES "Activación manual"
#define OPTION_VAL_ALWAYS_ES "Botones dedicados"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_ES "Teclas rápidas alternativas para el turbo"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_ES "Asigna los botones L3/R3 del RetroPad como teclas rápidas de turbo en vez de usar los botones III y IV. Solo funciona en el modo «Alternar» y mientras no haya otra acción asignada a los botones L3/R3. Con esta opción no tendrás que reasignar los botones III y IV cuando cambies al modo de mando de 6 botones."
#define PCE_TURBO_DELAY_LABEL_ES "Velocidad del turbo"
#define PCE_TURBO_DELAY_INFO_0_ES "Indica la velocidad con la que se repetirán las pulsaciones de los botones."
#define OPTION_VAL_FAST_ES "Rápida"
#define OPTION_VAL_MEDIUM_ES "Media"
#define OPTION_VAL_SLOW_ES "Lenta"
#define PCE_P0_TURBO_I_ENABLE_LABEL_ES "Turbo del botón I del J1"
#define PCE_P0_TURBO_II_ENABLE_LABEL_ES "Turbo del botón II del J1"
#define PCE_P1_TURBO_I_ENABLE_LABEL_ES "Turbo del botón I del J2"
#define PCE_P1_TURBO_II_ENABLE_LABEL_ES "Turbo del botón II del J2"
#define PCE_P2_TURBO_I_ENABLE_LABEL_ES "Turbo del botón I del J3"
#define PCE_P2_TURBO_II_ENABLE_LABEL_ES "Turbo del botón II del J3"
#define PCE_P3_TURBO_I_ENABLE_LABEL_ES "Turbo del botón I del J4"
#define PCE_P3_TURBO_II_ENABLE_LABEL_ES "Turbo del botón II del J4"
#define PCE_P4_TURBO_I_ENABLE_LABEL_ES "Turbo del botón I del J5"
#define PCE_P4_TURBO_II_ENABLE_LABEL_ES "Turbo del botón II del J5"
#define PCE_CDIMAGECACHE_LABEL_ES "Cachear imagen de CD (es necesario reiniciar)"
#define PCE_CDIMAGECACHE_INFO_0_ES "Carga la imagen de CD entera en la memoria al arrancar. Podría reducir los tiempos de carga a costa de aumentar el tiempo de arranque."
#define PCE_CDBIOS_LABEL_ES "BIOS para CD (es necesario reiniciar)"
#define PCE_CDBIOS_INFO_0_ES "La mayoría de juegos pueden ejecutarse con «System Card 3». «Games Express» es necesario para varios juegos sin licencia."
#define OPTION_VAL_GAMES_EXPRESS_ES NULL
#define OPTION_VAL_SYSTEM_CARD_1_ES NULL
#define OPTION_VAL_SYSTEM_CARD_2_ES NULL
#define OPTION_VAL_SYSTEM_CARD_3_ES NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_ES "System Card 2 (EE. UU.)"
#define OPTION_VAL_SYSTEM_CARD_3_US_ES "System Card 3 (EE. UU.)"
#define PCE_ARCADECARD_LABEL_ES "Arcade Card (es necesario reiniciar)"
#define PCE_ARCADECARD_INFO_0_ES "Deja esta opción activada para que se inicien los modos mejorados de los juegos SCD (Super CD-ROM²) con soporte para ACD (Arcade CD-ROM²)."
#define PCE_CDSPEED_LABEL_ES "(CD) Velocidad del CD"
#define PCE_CDSPEED_LABEL_CAT_ES "Velocidad del CD"
#define PCE_CDSPEED_INFO_0_ES "Un valor alto acelerará los tiempos de carga, pero dará problemas con un par de juegos."
#define PCE_ADPCMEXTRAPREC_LABEL_ES "(CD) Precisión de ADPCM"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_ES "Precisión de ADPCM"
#define PCE_ADPCMEXTRAPREC_INFO_0_ES "Activar la precisión total (12 bits) del sistema predictivo ADPCM del MSM5202 puede reducir los chirridos al reproducir sonido ADPCM."
#define OPTION_VAL_10_BIT_ES "10 bits"
#define OPTION_VAL_12_BIT_ES "12 bits"
#define PCE_ADPCMVOLUME_LABEL_ES "(CD) Volumen de ADPCM (%)"
#define PCE_ADPCMVOLUME_LABEL_CAT_ES "Volumen de ADPCM (%)"
#define PCE_ADPCMVOLUME_INFO_0_ES "Solo para juegos en CD. Un volumen muy elevado podría saturar las muestras de audio."
#define PCE_ADPCMVOLUME_INFO_1_ES "Un volumen muy elevado podría saturar las muestras de audio."
#define PCE_CDDAVOLUME_LABEL_ES "(CD) Volumen de CDDA (%)"
#define PCE_CDDAVOLUME_LABEL_CAT_ES "Volumen de CDDA (%)"
#define PCE_CDPSGVOLUME_LABEL_ES "(CD) Volumen del PSG de CD (%)"
#define PCE_CDPSGVOLUME_LABEL_CAT_ES "Volumen del PSG de CD (%)"
#define PCE_NOSPRITELIMIT_LABEL_ES "Desactivar límite de sprites"
#define PCE_NOSPRITELIMIT_INFO_0_ES "Elimina el límite de 16 sprites por línea de barrido que tenía el hardware original. ADVERTENCIA: puede provocar fallos gráficos en algunos juegos (como Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_ES "Multiplicador de velocidad de la CPU"
#define PCE_OCMULTIPLIER_INFO_0_ES "Un valor alto puede evitar las ralentizaciones de los juegos. ADVERTENCIA: puede producir fallos gráficos y cuelgues."

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ES,
      CATEGORY_VIDEO_INFO_0_ES
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ES,
      CATEGORY_AUDIO_INFO_0_ES
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ES,
      CATEGORY_HACKS_INFO_0_ES
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ES,
      CATEGORY_CD_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_ES,
      NULL,
      PCE_PALETTE_INFO_0_ES,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ES },
         { "Composite", OPTION_VAL_COMPOSITE_ES },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_ES,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_ES,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "6:5", OPTION_VAL_6_5_ES },
         { "4:3", OPTION_VAL_4_3_ES },
         { "uncorrected", OPTION_VAL_UNCORRECTED_ES },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_ES,
      NULL,
      PCE_SCALING_INFO_0_ES,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "lores", OPTION_VAL_LORES_ES },
         { "hires", OPTION_VAL_HIRES_ES },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_ES,
      NULL,
      PCE_HIRES_BLEND_INFO_0_ES,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_ES,
      NULL,
      PCE_H_OVERSCAN_INFO_0_ES,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_ES,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_ES,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ES },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_ES,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_ES,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_ES },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_ES,
      NULL,
      PCE_PSGREVISION_INFO_0_ES,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_ES },
         { "HuC6280A", OPTION_VAL_HUC6280A_ES },
         { "auto", OPTION_VAL_AUTO_ES },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_ES,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ES },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ES,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ES,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_ES,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_ES },
         { "0.250", OPTION_VAL_0_250_ES },
         { "0.375", OPTION_VAL_0_375_ES },
         { "0.500", OPTION_VAL_0_500_ES },
         { "0.625", OPTION_VAL_0_625_ES },
         { "0.750", OPTION_VAL_0_750_ES },
         { "0.875", OPTION_VAL_0_875_ES },
         { "1.000", OPTION_VAL_1_000_ES },
         { "1.125", OPTION_VAL_1_125_ES },
         { "1.25", OPTION_VAL_1_25_ES },
         { "1.50", OPTION_VAL_1_50_ES },
         { "1.75", OPTION_VAL_1_75_ES },
         { "2.00", OPTION_VAL_2_00_ES },
         { "2.25", OPTION_VAL_2_25_ES },
         { "2.50", OPTION_VAL_2_50_ES },
         { "2.75", OPTION_VAL_2_75_ES },
         { "3.00", OPTION_VAL_3_00_ES },
         { "3.25", OPTION_VAL_3_25_ES },
         { "3.50", OPTION_VAL_3_50_ES },
         { "3.75", OPTION_VAL_3_75_ES },
         { "4.00", OPTION_VAL_4_00_ES },
         { "4.25", OPTION_VAL_4_25_ES },
         { "4.50", OPTION_VAL_4_50_ES },
         { "4.75", OPTION_VAL_4_75_ES },
         { "5.00", OPTION_VAL_5_00_ES },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_ES,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_ES,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_ES,
      NULL,
      PCE_MULTITAP_INFO_0_ES,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_ES,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_ES,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_ES,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_ES,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_ES,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_ES,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_ES },
         { "always", OPTION_VAL_ALWAYS_ES },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_ES,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_ES,
      NULL,
      PCE_TURBO_DELAY_INFO_0_ES,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_ES },
         { "Medium", OPTION_VAL_MEDIUM_ES },
         { "Slow", OPTION_VAL_SLOW_ES },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_ES,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_ES,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_ES,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_ES,
      NULL,
      PCE_CDBIOS_INFO_0_ES,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ES },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ES },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ES },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ES },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_ES },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_ES },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_ES,
      NULL,
      PCE_ARCADECARD_INFO_0_ES,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_ES,
      PCE_CDSPEED_LABEL_CAT_ES,
      PCE_CDSPEED_INFO_0_ES,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_ES,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_ES,
      PCE_ADPCMEXTRAPREC_INFO_0_ES,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_ES },
         { "12-bit", OPTION_VAL_12_BIT_ES },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_ES,
      PCE_ADPCMVOLUME_LABEL_CAT_ES,
      PCE_ADPCMVOLUME_INFO_0_ES,
      PCE_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_ES,
      PCE_CDDAVOLUME_LABEL_CAT_ES,
      PCE_ADPCMVOLUME_INFO_0_ES,
      PCE_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_ES,
      PCE_CDPSGVOLUME_LABEL_CAT_ES,
      PCE_ADPCMVOLUME_INFO_0_ES,
      PCE_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_ES,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_ES,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_VIDEO_LABEL_FA "ویدیو"
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_AUDIO_LABEL_FA "صدا"
#define CATEGORY_AUDIO_INFO_0_FA NULL
#define CATEGORY_INPUT_LABEL_FA "داده"
#define CATEGORY_INPUT_INFO_0_FA NULL
#define CATEGORY_HACKS_LABEL_FA NULL
#define CATEGORY_HACKS_INFO_0_FA NULL
#define CATEGORY_CD_LABEL_FA NULL
#define CATEGORY_CD_INFO_0_FA NULL
#define PCE_PALETTE_LABEL_FA NULL
#define PCE_PALETTE_INFO_0_FA NULL
#define OPTION_VAL_RGB_FA NULL
#define OPTION_VAL_COMPOSITE_FA NULL
#define PCE_ASPECT_RATIO_LABEL_FA "نسبت تصویر"
#define PCE_ASPECT_RATIO_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA "خودکار"
#define OPTION_VAL_6_5_FA NULL
#define OPTION_VAL_4_3_FA NULL
#define OPTION_VAL_UNCORRECTED_FA NULL
#define PCE_SCALING_LABEL_FA NULL
#define PCE_SCALING_INFO_0_FA NULL
#define OPTION_VAL_LORES_FA NULL
#define OPTION_VAL_HIRES_FA NULL
#define PCE_HIRES_BLEND_LABEL_FA NULL
#define PCE_HIRES_BLEND_INFO_0_FA NULL
#define PCE_H_OVERSCAN_LABEL_FA NULL
#define PCE_H_OVERSCAN_INFO_0_FA NULL
#define PCE_INITIAL_SCANLINE_LABEL_FA NULL
#define PCE_INITIAL_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_3_FA NULL
#define PCE_LAST_SCANLINE_LABEL_FA NULL
#define PCE_LAST_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_242_FA NULL
#define PCE_PSGREVISION_LABEL_FA NULL
#define PCE_PSGREVISION_INFO_0_FA NULL
#define OPTION_VAL_HUC6280_FA NULL
#define OPTION_VAL_HUC6280A_FA NULL
#define PCE_RESAMP_QUALITY_LABEL_FA NULL
#define PCE_RESAMP_QUALITY_INFO_0_FA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_FA NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_FA NULL
#define OPTION_VAL_0_125_FA NULL
#define OPTION_VAL_0_250_FA NULL
#define OPTION_VAL_0_375_FA NULL
#define OPTION_VAL_0_500_FA NULL
#define OPTION_VAL_0_625_FA NULL
#define OPTION_VAL_0_750_FA NULL
#define OPTION_VAL_0_875_FA NULL
#define OPTION_VAL_1_000_FA NULL
#define OPTION_VAL_1_125_FA NULL
#define OPTION_VAL_1_25_FA NULL
#define OPTION_VAL_1_50_FA NULL
#define OPTION_VAL_1_75_FA NULL
#define OPTION_VAL_2_00_FA NULL
#define OPTION_VAL_2_25_FA NULL
#define OPTION_VAL_2_50_FA NULL
#define OPTION_VAL_2_75_FA NULL
#define OPTION_VAL_3_00_FA NULL
#define OPTION_VAL_3_25_FA NULL
#define OPTION_VAL_3_50_FA NULL
#define OPTION_VAL_3_75_FA NULL
#define OPTION_VAL_4_00_FA NULL
#define OPTION_VAL_4_25_FA NULL
#define OPTION_VAL_4_50_FA NULL
#define OPTION_VAL_4_75_FA NULL
#define OPTION_VAL_5_00_FA NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_FA NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_FA NULL
#define PCE_DISABLE_SOFTRESET_LABEL_FA NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_FA NULL
#define PCE_MULTITAP_LABEL_FA NULL
#define PCE_MULTITAP_INFO_0_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FA NULL
#define OPTION_VAL_2_BUTTONS_FA NULL
#define OPTION_VAL_6_BUTTONS_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_FA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FA NULL
#define PCE_TURBO_TOGGLING_LABEL_FA NULL
#define PCE_TURBO_TOGGLING_INFO_0_FA NULL
#define OPTION_VAL_TOGGLE_FA NULL
#define OPTION_VAL_ALWAYS_FA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_FA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_FA NULL
#define PCE_TURBO_DELAY_LABEL_FA NULL
#define PCE_TURBO_DELAY_INFO_0_FA NULL
#define OPTION_VAL_FAST_FA NULL
#define OPTION_VAL_MEDIUM_FA NULL
#define OPTION_VAL_SLOW_FA NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_FA NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_FA NULL
#define PCE_CDIMAGECACHE_LABEL_FA NULL
#define PCE_CDIMAGECACHE_INFO_0_FA NULL
#define PCE_CDBIOS_LABEL_FA NULL
#define PCE_CDBIOS_INFO_0_FA NULL
#define OPTION_VAL_GAMES_EXPRESS_FA NULL
#define OPTION_VAL_SYSTEM_CARD_1_FA NULL
#define OPTION_VAL_SYSTEM_CARD_2_FA NULL
#define OPTION_VAL_SYSTEM_CARD_3_FA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FA NULL
#define PCE_ARCADECARD_LABEL_FA NULL
#define PCE_ARCADECARD_INFO_0_FA NULL
#define PCE_CDSPEED_LABEL_FA NULL
#define PCE_CDSPEED_LABEL_CAT_FA NULL
#define PCE_CDSPEED_INFO_0_FA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_FA NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_FA NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_FA NULL
#define OPTION_VAL_10_BIT_FA NULL
#define OPTION_VAL_12_BIT_FA NULL
#define PCE_ADPCMVOLUME_LABEL_FA NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_FA NULL
#define PCE_ADPCMVOLUME_INFO_0_FA NULL
#define PCE_ADPCMVOLUME_INFO_1_FA NULL
#define PCE_CDDAVOLUME_LABEL_FA NULL
#define PCE_CDDAVOLUME_LABEL_CAT_FA NULL
#define PCE_CDPSGVOLUME_LABEL_FA NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_FA NULL
#define PCE_NOSPRITELIMIT_LABEL_FA NULL
#define PCE_NOSPRITELIMIT_INFO_0_FA NULL
#define PCE_OCMULTIPLIER_LABEL_FA NULL
#define PCE_OCMULTIPLIER_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FA,
      CATEGORY_VIDEO_INFO_0_FA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FA,
      CATEGORY_AUDIO_INFO_0_FA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FA,
      CATEGORY_HACKS_INFO_0_FA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FA,
      CATEGORY_CD_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_FA,
      NULL,
      PCE_PALETTE_INFO_0_FA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FA },
         { "Composite", OPTION_VAL_COMPOSITE_FA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_FA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_FA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "6:5", OPTION_VAL_6_5_FA },
         { "4:3", OPTION_VAL_4_3_FA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_FA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_FA,
      NULL,
      PCE_SCALING_INFO_0_FA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "lores", OPTION_VAL_LORES_FA },
         { "hires", OPTION_VAL_HIRES_FA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_FA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_FA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_FA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_FA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_FA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_FA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_FA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_FA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_FA,
      NULL,
      PCE_PSGREVISION_INFO_0_FA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_FA },
         { "HuC6280A", OPTION_VAL_HUC6280A_FA },
         { "auto", OPTION_VAL_AUTO_FA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_FA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_FA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_FA },
         { "0.250", OPTION_VAL_0_250_FA },
         { "0.375", OPTION_VAL_0_375_FA },
         { "0.500", OPTION_VAL_0_500_FA },
         { "0.625", OPTION_VAL_0_625_FA },
         { "0.750", OPTION_VAL_0_750_FA },
         { "0.875", OPTION_VAL_0_875_FA },
         { "1.000", OPTION_VAL_1_000_FA },
         { "1.125", OPTION_VAL_1_125_FA },
         { "1.25", OPTION_VAL_1_25_FA },
         { "1.50", OPTION_VAL_1_50_FA },
         { "1.75", OPTION_VAL_1_75_FA },
         { "2.00", OPTION_VAL_2_00_FA },
         { "2.25", OPTION_VAL_2_25_FA },
         { "2.50", OPTION_VAL_2_50_FA },
         { "2.75", OPTION_VAL_2_75_FA },
         { "3.00", OPTION_VAL_3_00_FA },
         { "3.25", OPTION_VAL_3_25_FA },
         { "3.50", OPTION_VAL_3_50_FA },
         { "3.75", OPTION_VAL_3_75_FA },
         { "4.00", OPTION_VAL_4_00_FA },
         { "4.25", OPTION_VAL_4_25_FA },
         { "4.50", OPTION_VAL_4_50_FA },
         { "4.75", OPTION_VAL_4_75_FA },
         { "5.00", OPTION_VAL_5_00_FA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_FA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_FA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_FA,
      NULL,
      PCE_MULTITAP_INFO_0_FA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_FA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_FA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_FA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_FA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_FA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_FA,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_FA },
         { "always", OPTION_VAL_ALWAYS_FA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_FA,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_FA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_FA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_FA },
         { "Medium", OPTION_VAL_MEDIUM_FA },
         { "Slow", OPTION_VAL_SLOW_FA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_FA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_FA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_FA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_FA,
      NULL,
      PCE_CDBIOS_INFO_0_FA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_FA,
      NULL,
      PCE_ARCADECARD_INFO_0_FA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_FA,
      PCE_CDSPEED_LABEL_CAT_FA,
      PCE_CDSPEED_INFO_0_FA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_FA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_FA,
      PCE_ADPCMEXTRAPREC_INFO_0_FA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_FA },
         { "12-bit", OPTION_VAL_12_BIT_FA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_FA,
      PCE_ADPCMVOLUME_LABEL_CAT_FA,
      PCE_ADPCMVOLUME_INFO_0_FA,
      PCE_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_FA,
      PCE_CDDAVOLUME_LABEL_CAT_FA,
      PCE_ADPCMVOLUME_INFO_0_FA,
      PCE_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_FA,
      PCE_CDPSGVOLUME_LABEL_CAT_FA,
      PCE_ADPCMVOLUME_INFO_0_FA,
      PCE_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_FA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_FA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI NULL
#define CATEGORY_AUDIO_LABEL_FI "Ääni"
#define CATEGORY_AUDIO_INFO_0_FI "Määritä emuloidut äänentoistolaitteet."
#define CATEGORY_INPUT_LABEL_FI "Syöte"
#define CATEGORY_INPUT_INFO_0_FI NULL
#define CATEGORY_HACKS_LABEL_FI "Emulointikikat"
#define CATEGORY_HACKS_INFO_0_FI "Määritä prosessorin ylikellotus- ja emuloinnin tarkkuuden asetukset, jotka vaikuttavat matalan tason suorituskykyyn ja yhteensopivuuteen."
#define CATEGORY_CD_LABEL_FI NULL
#define CATEGORY_CD_INFO_0_FI "Määritä PC Engine CD -emulointiin liittyvät asetukset."
#define PCE_PALETTE_LABEL_FI "Väripaletti"
#define PCE_PALETTE_INFO_0_FI "Komposiitti yrittää uudelleen luoda alkuperäisen konsolin ulostuloa ja saattaa näyttää enemmän yksityiskohtia joissakin peleissä."
#define OPTION_VAL_RGB_FI NULL
#define OPTION_VAL_COMPOSITE_FI "Komposiitti"
#define PCE_ASPECT_RATIO_LABEL_FI "Kuvasuhde"
#define PCE_ASPECT_RATIO_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_6_5_FI NULL
#define OPTION_VAL_4_3_FI NULL
#define OPTION_VAL_UNCORRECTED_FI "Ei korjattu"
#define PCE_SCALING_LABEL_FI "Resoluution skaalaus"
#define PCE_SCALING_INFO_0_FI NULL
#define OPTION_VAL_LORES_FI "Matala resoluutio"
#define OPTION_VAL_HIRES_FI "Korkea resoluutio"
#define PCE_HIRES_BLEND_LABEL_FI NULL
#define PCE_HIRES_BLEND_INFO_0_FI NULL
#define PCE_H_OVERSCAN_LABEL_FI "Näytä vaakasuora yliskannaus"
#define PCE_H_OVERSCAN_INFO_0_FI NULL
#define PCE_INITIAL_SCANLINE_LABEL_FI "Ensimmäinen juova"
#define PCE_INITIAL_SCANLINE_INFO_0_FI "Ensimmäinen renderöity juova. Suuremmat arvot rajaavat kuvan yläreunan."
#define OPTION_VAL_3_FI "3 (Oletus)"
#define PCE_LAST_SCANLINE_LABEL_FI "Viimeinen juova"
#define PCE_LAST_SCANLINE_INFO_0_FI "Viimeinen renderöity juova. pienemmät arvot rajaavat kuvan alareunan."
#define OPTION_VAL_242_FI "242 (Oletus)"
#define PCE_PSGREVISION_LABEL_FI NULL
#define PCE_PSGREVISION_INFO_0_FI NULL
#define OPTION_VAL_HUC6280_FI NULL
#define OPTION_VAL_HUC6280A_FI NULL
#define PCE_RESAMP_QUALITY_LABEL_FI NULL
#define PCE_RESAMP_QUALITY_INFO_0_FI NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FI NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FI NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_FI "Hiiren herkkyys"
#define PCE_MOUSE_SENSITIVITY_INFO_0_FI "Korkeammat arvot saavat hiiren kursorin liikkumaan nopeammin."
#define OPTION_VAL_0_125_FI NULL
#define OPTION_VAL_0_250_FI NULL
#define OPTION_VAL_0_375_FI NULL
#define OPTION_VAL_0_500_FI NULL
#define OPTION_VAL_0_625_FI NULL
#define OPTION_VAL_0_750_FI NULL
#define OPTION_VAL_0_875_FI NULL
#define OPTION_VAL_1_000_FI NULL
#define OPTION_VAL_1_125_FI NULL
#define OPTION_VAL_1_25_FI NULL
#define OPTION_VAL_1_50_FI NULL
#define OPTION_VAL_1_75_FI NULL
#define OPTION_VAL_2_00_FI NULL
#define OPTION_VAL_2_25_FI NULL
#define OPTION_VAL_2_50_FI NULL
#define OPTION_VAL_2_75_FI NULL
#define OPTION_VAL_3_00_FI NULL
#define OPTION_VAL_3_25_FI NULL
#define OPTION_VAL_3_50_FI NULL
#define OPTION_VAL_3_75_FI NULL
#define OPTION_VAL_4_00_FI NULL
#define OPTION_VAL_4_25_FI NULL
#define OPTION_VAL_4_50_FI NULL
#define OPTION_VAL_4_75_FI NULL
#define OPTION_VAL_5_00_FI NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_FI "Salli vastakkaiset suunnat"
#define PCE_UP_DOWN_ALLOWED_INFO_0_FI "Tämän käyttöönotto sallii painamaan / nopeasti vaihtelemaan / pitämään sekä vasemmalle että oikealle (tai ylös ja alas) samanaikaisesti. Tämä voi aiheuttaa liikkeisiin perustuvia virheitä."
#define PCE_DISABLE_SOFTRESET_LABEL_FI "Poista soft reset käytöstä (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_FI "Kun RUN ja SELECT painetaan samanaikaisesti, poistetaan molemmat painikkeet käytöstä tilapäisesti soft resettaamisen sijaan."
#define PCE_MULTITAP_LABEL_FI NULL
#define PCE_MULTITAP_INFO_0_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FI NULL
#define OPTION_VAL_2_BUTTONS_FI NULL
#define OPTION_VAL_6_BUTTONS_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_FI NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FI NULL
#define PCE_TURBO_TOGGLING_LABEL_FI NULL
#define PCE_TURBO_TOGGLING_INFO_0_FI NULL
#define OPTION_VAL_TOGGLE_FI NULL
#define OPTION_VAL_ALWAYS_FI NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_FI "Vaihtoehtoinen turbo-pikanäppäin"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_FI NULL
#define PCE_TURBO_DELAY_LABEL_FI "Turbonopeus"
#define PCE_TURBO_DELAY_INFO_0_FI "Valitse miten nopeasti painikkeen painallukset toistetaan."
#define OPTION_VAL_FAST_FI "Nopea"
#define OPTION_VAL_MEDIUM_FI NULL
#define OPTION_VAL_SLOW_FI NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_FI NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_FI NULL
#define PCE_CDIMAGECACHE_LABEL_FI "CD-levykuvan välimuisti (Uudelleenkäynnistys vaaditaan)"
#define PCE_CDIMAGECACHE_INFO_0_FI "Lataa koko levykuva muistiin käynnistyksen yhteydessä. Voi mahdollisesti lyhentää latausaikoja kasvavan käynnistysajan kustannuksella."
#define PCE_CDBIOS_LABEL_FI NULL
#define PCE_CDBIOS_INFO_0_FI "Useimmat pelit voidaan ajaa \"System Card 3\". \"Games Express\" tarvitaan useille lisensoimattomille peleille."
#define OPTION_VAL_GAMES_EXPRESS_FI NULL
#define OPTION_VAL_SYSTEM_CARD_1_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FI NULL
#define PCE_ARCADECARD_LABEL_FI NULL
#define PCE_ARCADECARD_INFO_0_FI NULL
#define PCE_CDSPEED_LABEL_FI "(CD) CD-nopeus"
#define PCE_CDSPEED_LABEL_CAT_FI "CD-nopeus"
#define PCE_CDSPEED_INFO_0_FI "Korkeammat arvot mahdollistavat nopeammat latausajat, mutta voivat aiheuttaa ongelmia muutaman pelin kanssa."
#define PCE_ADPCMEXTRAPREC_LABEL_FI "(CD) ADPCM-tarkkuus"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_FI "ADPCM-tarkkuus"
#define PCE_ADPCMEXTRAPREC_INFO_0_FI NULL
#define OPTION_VAL_10_BIT_FI NULL
#define OPTION_VAL_12_BIT_FI NULL
#define PCE_ADPCMVOLUME_LABEL_FI "(CD) ADPCM äänenvoimakkuus %"
#define PCE_ADPCMVOLUME_LABEL_CAT_FI "ADPCM äänenvoimakkuus %"
#define PCE_ADPCMVOLUME_INFO_0_FI "Vain CD-peleille. Tämän äänenvoimakkuuden säädön asettaminen liian korkeaksi voi aiheuttaa näytteen pätkimistä."
#define PCE_ADPCMVOLUME_INFO_1_FI "Tämän äänenvoimakkuuden säädön asettaminen liian korkeaksi voi aiheuttaa näytteen pätkimistä."
#define PCE_CDDAVOLUME_LABEL_FI "(CD) CDDA äänenvoimakkuus %"
#define PCE_CDDAVOLUME_LABEL_CAT_FI "CDDA äänenvoimakkuus %"
#define PCE_CDPSGVOLUME_LABEL_FI NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_FI "CD PSG äänenvoimakkuus %"
#define PCE_NOSPRITELIMIT_LABEL_FI "Poista sprite-rajoitus"
#define PCE_NOSPRITELIMIT_INFO_0_FI NULL
#define PCE_OCMULTIPLIER_LABEL_FI NULL
#define PCE_OCMULTIPLIER_INFO_0_FI "Suuremmat arvot voivat vähentää pelien hidastumista. VAROITUS: Voi aiheuttaa virheitä ja kaatumisia."

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FI,
      CATEGORY_VIDEO_INFO_0_FI
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FI,
      CATEGORY_AUDIO_INFO_0_FI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FI,
      CATEGORY_HACKS_INFO_0_FI
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FI,
      CATEGORY_CD_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_FI,
      NULL,
      PCE_PALETTE_INFO_0_FI,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FI },
         { "Composite", OPTION_VAL_COMPOSITE_FI },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_FI,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_FI,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "6:5", OPTION_VAL_6_5_FI },
         { "4:3", OPTION_VAL_4_3_FI },
         { "uncorrected", OPTION_VAL_UNCORRECTED_FI },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_FI,
      NULL,
      PCE_SCALING_INFO_0_FI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "lores", OPTION_VAL_LORES_FI },
         { "hires", OPTION_VAL_HIRES_FI },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_FI,
      NULL,
      PCE_HIRES_BLEND_INFO_0_FI,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_FI,
      NULL,
      PCE_H_OVERSCAN_INFO_0_FI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_FI,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_FI,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FI },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_FI,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_FI,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FI },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_FI,
      NULL,
      PCE_PSGREVISION_INFO_0_FI,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_FI },
         { "HuC6280A", OPTION_VAL_HUC6280A_FI },
         { "auto", OPTION_VAL_AUTO_FI },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_FI,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FI },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FI,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_FI,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_FI },
         { "0.250", OPTION_VAL_0_250_FI },
         { "0.375", OPTION_VAL_0_375_FI },
         { "0.500", OPTION_VAL_0_500_FI },
         { "0.625", OPTION_VAL_0_625_FI },
         { "0.750", OPTION_VAL_0_750_FI },
         { "0.875", OPTION_VAL_0_875_FI },
         { "1.000", OPTION_VAL_1_000_FI },
         { "1.125", OPTION_VAL_1_125_FI },
         { "1.25", OPTION_VAL_1_25_FI },
         { "1.50", OPTION_VAL_1_50_FI },
         { "1.75", OPTION_VAL_1_75_FI },
         { "2.00", OPTION_VAL_2_00_FI },
         { "2.25", OPTION_VAL_2_25_FI },
         { "2.50", OPTION_VAL_2_50_FI },
         { "2.75", OPTION_VAL_2_75_FI },
         { "3.00", OPTION_VAL_3_00_FI },
         { "3.25", OPTION_VAL_3_25_FI },
         { "3.50", OPTION_VAL_3_50_FI },
         { "3.75", OPTION_VAL_3_75_FI },
         { "4.00", OPTION_VAL_4_00_FI },
         { "4.25", OPTION_VAL_4_25_FI },
         { "4.50", OPTION_VAL_4_50_FI },
         { "4.75", OPTION_VAL_4_75_FI },
         { "5.00", OPTION_VAL_5_00_FI },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_FI,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_FI,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_FI,
      NULL,
      PCE_MULTITAP_INFO_0_FI,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_FI,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_FI,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_FI,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_FI,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_FI,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_FI,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_FI },
         { "always", OPTION_VAL_ALWAYS_FI },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_FI,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_FI,
      NULL,
      PCE_TURBO_DELAY_INFO_0_FI,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_FI },
         { "Medium", OPTION_VAL_MEDIUM_FI },
         { "Slow", OPTION_VAL_SLOW_FI },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_FI,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_FI,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_FI,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_FI,
      NULL,
      PCE_CDBIOS_INFO_0_FI,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FI },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FI },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FI },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FI },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FI },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FI },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_FI,
      NULL,
      PCE_ARCADECARD_INFO_0_FI,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_FI,
      PCE_CDSPEED_LABEL_CAT_FI,
      PCE_CDSPEED_INFO_0_FI,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_FI,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_FI,
      PCE_ADPCMEXTRAPREC_INFO_0_FI,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_FI },
         { "12-bit", OPTION_VAL_12_BIT_FI },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_FI,
      PCE_ADPCMVOLUME_LABEL_CAT_FI,
      PCE_ADPCMVOLUME_INFO_0_FI,
      PCE_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_FI,
      PCE_CDDAVOLUME_LABEL_CAT_FI,
      PCE_ADPCMVOLUME_INFO_0_FI,
      PCE_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_FI,
      PCE_CDPSGVOLUME_LABEL_CAT_FI,
      PCE_ADPCMVOLUME_INFO_0_FI,
      PCE_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_FI,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_FI,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_VIDEO_LABEL_FR "Vidéo"
#define CATEGORY_VIDEO_INFO_0_FR "Configurer les paramètres de rapport d'aspect, du rognage de l'affichage et autres pour la sortie vidéo."
#define CATEGORY_AUDIO_LABEL_FR NULL
#define CATEGORY_AUDIO_INFO_0_FR "Configurer les périphériques audio émulés."
#define CATEGORY_INPUT_LABEL_FR "Entrées"
#define CATEGORY_INPUT_INFO_0_FR "Configurer les entrées du pistolet, de la souris et des manettes."
#define CATEGORY_HACKS_LABEL_FR "Hacks d'émulation"
#define CATEGORY_HACKS_INFO_0_FR "Configurer les paramètres d'overclocking du processeur et de la précision d'émulation qui affectent les performances de bas niveau et la compatibilité."
#define CATEGORY_CD_LABEL_FR "CD PC-Engine"
#define CATEGORY_CD_INFO_0_FR "Configurer les réglages relatifs à l'émulation CD de la PC-Engine."
#define PCE_PALETTE_LABEL_FR "Palette de couleurs"
#define PCE_PALETTE_INFO_0_FR "Composite tente de recréer la sortie de la console originale et peut afficher plus de détails dans certains jeux."
#define OPTION_VAL_RGB_FR "RVB"
#define OPTION_VAL_COMPOSITE_FR NULL
#define PCE_ASPECT_RATIO_LABEL_FR "Rapport d'aspect"
#define PCE_ASPECT_RATIO_INFO_0_FR "Choisir le rapport d'aspect préféré pour le contenu. Cela ne s'applique que lorsque le rapport d'aspect de RetroArch est réglé sur 'Fourni par le cœur' (Core provided) dans les paramètres vidéo."
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_6_5_FR NULL
#define OPTION_VAL_4_3_FR NULL
#define OPTION_VAL_UNCORRECTED_FR "Non corrigé"
#define PCE_SCALING_LABEL_FR "Échelle de la résolution"
#define PCE_SCALING_INFO_0_FR "'Auto' permettra à la résolution de changer. 'Basse résolution' peut écraser les pixels. 'Haute résolution' restera sur la largeur maximale."
#define OPTION_VAL_LORES_FR "Basse résolution"
#define OPTION_VAL_HIRES_FR "Haute résolution"
#define PCE_HIRES_BLEND_LABEL_FR "Niveau de mélange en haute résolution"
#define PCE_HIRES_BLEND_INFO_0_FR "Mélanger les pixels ensemble en mode haute résolution. Des valeurs plus élevées rendront l'image plus floue."
#define PCE_H_OVERSCAN_LABEL_FR "Afficher le surbalayage horizontal"
#define PCE_H_OVERSCAN_INFO_0_FR "'Auto' va essayer de s'adapter aux jeux, recadrant les zones vides."
#define PCE_INITIAL_SCANLINE_LABEL_FR "Ligne de balayage initiale"
#define PCE_INITIAL_SCANLINE_INFO_0_FR "Première ligne de balayage rendue. Des valeurs plus élevées recadreront le haut de l'image."
#define OPTION_VAL_3_FR "3 (par défaut)"
#define PCE_LAST_SCANLINE_LABEL_FR "Dernière ligne de balayage"
#define PCE_LAST_SCANLINE_INFO_0_FR "Dernière ligne de balayage rendue. Des valeurs moins élevées recadreront le bas de l'image."
#define OPTION_VAL_242_FR "242 (par défaut)"
#define PCE_PSGREVISION_LABEL_FR "Puce audio PSG (Redémarrage requis)"
#define PCE_PSGREVISION_INFO_0_FR "HuC6280 représente la PC-Engine originale, HuC6280A la SuperGrafx et CoreGrafx I."
#define OPTION_VAL_HUC6280_FR NULL
#define OPTION_VAL_HUC6280A_FR NULL
#define PCE_RESAMP_QUALITY_LABEL_FR "Qualité du rééchantillonneur Owl"
#define PCE_RESAMP_QUALITY_INFO_0_FR "Des valeurs plus élevées donnent un meilleur rapport de signal sur bruit et la préservation de fréquences plus élevées, mais augmentent le coût de calcul et peuvent entraîner une latence plus élevée et un écrêtement (clipping) si le volume est défini trop haut."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FR "Afficher options d'entrées/de turbo avancées"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FR "Afficher les paramètres de multitap, de souris, des touches turbo et les paramètres avancés. REMARQUE : Vous devrez peut-être revenir en jeu et réouvrir le menu pour actualiser la liste."
#define PCE_MOUSE_SENSITIVITY_LABEL_FR "Sensibilité de la souris"
#define PCE_MOUSE_SENSITIVITY_INFO_0_FR "Des valeurs plus élevées rendront le curseur de la souris plus rapide."
#define OPTION_VAL_0_125_FR "0,125"
#define OPTION_VAL_0_250_FR "0,250"
#define OPTION_VAL_0_375_FR "0,375"
#define OPTION_VAL_0_500_FR "0,500"
#define OPTION_VAL_0_625_FR "0,625"
#define OPTION_VAL_0_750_FR "0,750"
#define OPTION_VAL_0_875_FR "0,875"
#define OPTION_VAL_1_000_FR "1,000"
#define OPTION_VAL_1_125_FR "1,125"
#define OPTION_VAL_1_25_FR "1,25"
#define OPTION_VAL_1_50_FR "1,50"
#define OPTION_VAL_1_75_FR "1,75"
#define OPTION_VAL_2_00_FR "2,00"
#define OPTION_VAL_2_25_FR "2,25"
#define OPTION_VAL_2_50_FR "2,50"
#define OPTION_VAL_2_75_FR "2,75"
#define OPTION_VAL_3_00_FR "3,00"
#define OPTION_VAL_3_25_FR "3,25"
#define OPTION_VAL_3_50_FR "3,50"
#define OPTION_VAL_3_75_FR "3,75"
#define OPTION_VAL_4_00_FR "4,00"
#define OPTION_VAL_4_25_FR "4,25"
#define OPTION_VAL_4_50_FR "4,50"
#define OPTION_VAL_4_75_FR "4,75"
#define OPTION_VAL_5_00_FR "5,00"
#define PCE_UP_DOWN_ALLOWED_LABEL_FR "Autoriser les directions opposées"
#define PCE_UP_DOWN_ALLOWED_INFO_0_FR "L'activation de cette option permettra d'appuyer / d'alterner rapidement / de maintenir les directions gauche et droite (ou haut et bas) en même temps. Cela peut causer des bugs liés au mouvement."
#define PCE_DISABLE_SOFTRESET_LABEL_FR "Désactiver la réinitialisation logicielle (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_FR "Lorsque RUN et SELECT sont appuyés simultanément, désactiver temporairement les deux touches au lieu de réinitialiser."
#define PCE_MULTITAP_LABEL_FR "Contrôleur multitap à 5 ports"
#define PCE_MULTITAP_INFO_0_FR "Activer l'émulation multitap jusqu'à 5 joueurs. Désactiver ceci n'est nécessaire que dans certains cas (Cho Aniki par exemple)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_FR "Type de manette par défaut pour le joueur 1"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FR "Choisissez si la manette du port 1 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define OPTION_VAL_2_BUTTONS_FR "2 touches"
#define OPTION_VAL_6_BUTTONS_FR "6 touches"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_FR "Type de manette par défaut pour le joueur 2"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FR "Choisissez si la manette du port 2 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_FR "Type de manette par défaut pour le joueur 3"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FR "Choisissez si la manette du port 3 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_FR "Type de manette par défaut pour le joueur 4"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FR "Choisissez si la manette du port 4 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_FR "Type de manette par défaut pour le joueur 5"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FR "Choisissez si la manette du port 5 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_TURBO_TOGGLING_LABEL_FR "Mode des touches de raccourci du turbo"
#define PCE_TURBO_TOGGLING_INFO_0_FR "Activer les touches turbo. Les raccourcis (touches III et IV) peuvent se comporter comme des interrupteurs ou des touches turbo dédiées (maintenir enfoncées)."
#define OPTION_VAL_TOGGLE_FR "Activer/désactiver"
#define OPTION_VAL_ALWAYS_FR "Dédiées"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_FR "Touche de raccourci turbo alternative"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_FR "Affecter les touches L3/R3 de la RetroManette comme raccourcis turbo au lieu des touches III et IV. Fonctionne uniquement en mode 'Activer/désactiver' et seulement tant que rien n'est assigné aux touches L3/R3. Vous pouvez éviter de remapper les touches III et IV lorsque vous passez en mode manette à 6 boutons avec cette option."
#define PCE_TURBO_DELAY_LABEL_FR "Vitesse du turbo"
#define PCE_TURBO_DELAY_INFO_0_FR "Choisir à quelle vitesse les touches sont répétées."
#define OPTION_VAL_FAST_FR "Rapide"
#define OPTION_VAL_MEDIUM_FR "Moyenne"
#define OPTION_VAL_SLOW_FR "Lente"
#define PCE_P0_TURBO_I_ENABLE_LABEL_FR "J1 turbo I"
#define PCE_P0_TURBO_II_ENABLE_LABEL_FR "J1 turbo II"
#define PCE_P1_TURBO_I_ENABLE_LABEL_FR "J2 turbo I"
#define PCE_P1_TURBO_II_ENABLE_LABEL_FR "J2 turbo II"
#define PCE_P2_TURBO_I_ENABLE_LABEL_FR "J3 turbo I"
#define PCE_P2_TURBO_II_ENABLE_LABEL_FR "J3 turbo II"
#define PCE_P3_TURBO_I_ENABLE_LABEL_FR "J4 turbo I"
#define PCE_P3_TURBO_II_ENABLE_LABEL_FR "J4 turbo II"
#define PCE_P4_TURBO_I_ENABLE_LABEL_FR "J5 turbo I"
#define PCE_P4_TURBO_II_ENABLE_LABEL_FR "J5 turbo II"
#define PCE_CDIMAGECACHE_LABEL_FR "Mise en cache des images CD (Redémarrage requis)"
#define PCE_CDIMAGECACHE_INFO_0_FR "Charger l'image disque complète dans la mémoire au démarrage. Peut potentiellement diminuer le temps de chargement au prix d'une augmentation du temps de démarrage."
#define PCE_CDBIOS_LABEL_FR "BIOS CD (Redémarrage requis)"
#define PCE_CDBIOS_INFO_0_FR "La plupart des jeux peuvent s'exécuter sur 'System Card 3'. 'Games Express' est nécessaire pour plusieurs jeux sans licence."
#define OPTION_VAL_GAMES_EXPRESS_FR NULL
#define OPTION_VAL_SYSTEM_CARD_1_FR NULL
#define OPTION_VAL_SYSTEM_CARD_2_FR NULL
#define OPTION_VAL_SYSTEM_CARD_3_FR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FR NULL
#define PCE_ARCADECARD_LABEL_FR "Carte arcade (Redémarrage requis)"
#define PCE_ARCADECARD_INFO_0_FR "Laisser cette option activée pour permettre des modes améliorés pour les jeux SCD (Super CD-ROM²) optimisés pour ACD (Arcade CD-ROM²)."
#define PCE_CDSPEED_LABEL_FR "(CD) Vitesse du CD"
#define PCE_CDSPEED_LABEL_CAT_FR "Vitesse du CD"
#define PCE_CDSPEED_INFO_0_FR "Des valeurs plus élevées permettent des temps de chargement plus rapides, mais peuvent causer des problèmes avec certains jeux."
#define PCE_ADPCMEXTRAPREC_LABEL_FR "(CD) Précision ADPCM"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_FR "Précision ADPCM"
#define PCE_ADPCMEXTRAPREC_INFO_0_FR "Une précision complète de 12 bits pour le prédicteur ADPCM MSM5205 peut réduire le bruit de sifflement lors de la lecture ADPCM."
#define OPTION_VAL_10_BIT_FR "10 bits"
#define OPTION_VAL_12_BIT_FR "12 bits"
#define PCE_ADPCMVOLUME_LABEL_FR "(CD) Volume ADPCM (%)"
#define PCE_ADPCMVOLUME_LABEL_CAT_FR "Volume ADPCM (%)"
#define PCE_ADPCMVOLUME_INFO_0_FR "Jeux CD uniquement. Définir ce contrôle de volume trop élevé peut causer un écrêtement (clipping) de signal."
#define PCE_ADPCMVOLUME_INFO_1_FR "Définir ce contrôle de volume trop élevé peut causer un écrêtement (clipping) de signal."
#define PCE_CDDAVOLUME_LABEL_FR "(CD) Volume CDDA (%)"
#define PCE_CDDAVOLUME_LABEL_CAT_FR "Volume CDDA (%)"
#define PCE_CDPSGVOLUME_LABEL_FR "(CD) Volume PSG CD (%)"
#define PCE_CDPSGVOLUME_LABEL_CAT_FR "Volume PSG CD %"
#define PCE_NOSPRITELIMIT_LABEL_FR "Aucune limite de sprites"
#define PCE_NOSPRITELIMIT_INFO_0_FR "Supprimer la limite matérielle de 16 sprites par ligne de balayage. ATTENTION : peut causer des problèmes graphiques sur certains jeux (tels que Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_FR "Multiplicateur d'overclocking du processeur"
#define PCE_OCMULTIPLIER_INFO_0_FR "Des valeurs plus élevées peuvent réduire les ralentissements dans les jeux. ATTENTION : peut causer des bugs et des plantages."

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FR,
      CATEGORY_VIDEO_INFO_0_FR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FR,
      CATEGORY_AUDIO_INFO_0_FR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FR,
      CATEGORY_HACKS_INFO_0_FR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FR,
      CATEGORY_CD_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_FR,
      NULL,
      PCE_PALETTE_INFO_0_FR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FR },
         { "Composite", OPTION_VAL_COMPOSITE_FR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_FR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_FR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "6:5", OPTION_VAL_6_5_FR },
         { "4:3", OPTION_VAL_4_3_FR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_FR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_FR,
      NULL,
      PCE_SCALING_INFO_0_FR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "lores", OPTION_VAL_LORES_FR },
         { "hires", OPTION_VAL_HIRES_FR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_FR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_FR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_FR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_FR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_FR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_FR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_FR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_FR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_FR,
      NULL,
      PCE_PSGREVISION_INFO_0_FR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_FR },
         { "HuC6280A", OPTION_VAL_HUC6280A_FR },
         { "auto", OPTION_VAL_AUTO_FR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_FR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_FR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_FR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_FR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_FR },
         { "0.250", OPTION_VAL_0_250_FR },
         { "0.375", OPTION_VAL_0_375_FR },
         { "0.500", OPTION_VAL_0_500_FR },
         { "0.625", OPTION_VAL_0_625_FR },
         { "0.750", OPTION_VAL_0_750_FR },
         { "0.875", OPTION_VAL_0_875_FR },
         { "1.000", OPTION_VAL_1_000_FR },
         { "1.125", OPTION_VAL_1_125_FR },
         { "1.25", OPTION_VAL_1_25_FR },
         { "1.50", OPTION_VAL_1_50_FR },
         { "1.75", OPTION_VAL_1_75_FR },
         { "2.00", OPTION_VAL_2_00_FR },
         { "2.25", OPTION_VAL_2_25_FR },
         { "2.50", OPTION_VAL_2_50_FR },
         { "2.75", OPTION_VAL_2_75_FR },
         { "3.00", OPTION_VAL_3_00_FR },
         { "3.25", OPTION_VAL_3_25_FR },
         { "3.50", OPTION_VAL_3_50_FR },
         { "3.75", OPTION_VAL_3_75_FR },
         { "4.00", OPTION_VAL_4_00_FR },
         { "4.25", OPTION_VAL_4_25_FR },
         { "4.50", OPTION_VAL_4_50_FR },
         { "4.75", OPTION_VAL_4_75_FR },
         { "5.00", OPTION_VAL_5_00_FR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_FR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_FR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_FR,
      NULL,
      PCE_MULTITAP_INFO_0_FR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_FR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_FR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_FR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_FR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_FR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_FR,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_FR },
         { "always", OPTION_VAL_ALWAYS_FR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_FR,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_FR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_FR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_FR },
         { "Medium", OPTION_VAL_MEDIUM_FR },
         { "Slow", OPTION_VAL_SLOW_FR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_FR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_FR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_FR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_FR,
      NULL,
      PCE_CDBIOS_INFO_0_FR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_FR,
      NULL,
      PCE_ARCADECARD_INFO_0_FR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_FR,
      PCE_CDSPEED_LABEL_CAT_FR,
      PCE_CDSPEED_INFO_0_FR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_FR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_FR,
      PCE_ADPCMEXTRAPREC_INFO_0_FR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_FR },
         { "12-bit", OPTION_VAL_12_BIT_FR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_FR,
      PCE_ADPCMVOLUME_LABEL_CAT_FR,
      PCE_ADPCMVOLUME_INFO_0_FR,
      PCE_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_FR,
      PCE_CDDAVOLUME_LABEL_CAT_FR,
      PCE_ADPCMVOLUME_INFO_0_FR,
      PCE_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_FR,
      PCE_CDPSGVOLUME_LABEL_CAT_FR,
      PCE_ADPCMVOLUME_INFO_0_FR,
      PCE_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_FR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_FR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_VIDEO_LABEL_GL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_GL NULL
#define CATEGORY_AUDIO_LABEL_GL "Son"
#define CATEGORY_AUDIO_INFO_0_GL NULL
#define CATEGORY_INPUT_LABEL_GL "Entrada"
#define CATEGORY_INPUT_INFO_0_GL NULL
#define CATEGORY_HACKS_LABEL_GL "Hacks de emulación"
#define CATEGORY_HACKS_INFO_0_GL "Configurar os parámetros do overclocking e a precisión da emulación do procesador que afecten ó rendemento e á compatibilidade de baixo nivel."
#define CATEGORY_CD_LABEL_GL NULL
#define CATEGORY_CD_INFO_0_GL NULL
#define PCE_PALETTE_LABEL_GL NULL
#define PCE_PALETTE_INFO_0_GL NULL
#define OPTION_VAL_RGB_GL NULL
#define OPTION_VAL_COMPOSITE_GL NULL
#define PCE_ASPECT_RATIO_LABEL_GL NULL
#define PCE_ASPECT_RATIO_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_6_5_GL NULL
#define OPTION_VAL_4_3_GL NULL
#define OPTION_VAL_UNCORRECTED_GL NULL
#define PCE_SCALING_LABEL_GL NULL
#define PCE_SCALING_INFO_0_GL NULL
#define OPTION_VAL_LORES_GL NULL
#define OPTION_VAL_HIRES_GL NULL
#define PCE_HIRES_BLEND_LABEL_GL NULL
#define PCE_HIRES_BLEND_INFO_0_GL NULL
#define PCE_H_OVERSCAN_LABEL_GL NULL
#define PCE_H_OVERSCAN_INFO_0_GL NULL
#define PCE_INITIAL_SCANLINE_LABEL_GL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_3_GL NULL
#define PCE_LAST_SCANLINE_LABEL_GL NULL
#define PCE_LAST_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_242_GL NULL
#define PCE_PSGREVISION_LABEL_GL NULL
#define PCE_PSGREVISION_INFO_0_GL NULL
#define OPTION_VAL_HUC6280_GL NULL
#define OPTION_VAL_HUC6280A_GL NULL
#define PCE_RESAMP_QUALITY_LABEL_GL NULL
#define PCE_RESAMP_QUALITY_INFO_0_GL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_GL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_GL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_GL NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_GL NULL
#define OPTION_VAL_0_125_GL NULL
#define OPTION_VAL_0_250_GL NULL
#define OPTION_VAL_0_375_GL NULL
#define OPTION_VAL_0_500_GL NULL
#define OPTION_VAL_0_625_GL NULL
#define OPTION_VAL_0_750_GL NULL
#define OPTION_VAL_0_875_GL NULL
#define OPTION_VAL_1_000_GL NULL
#define OPTION_VAL_1_125_GL NULL
#define OPTION_VAL_1_25_GL NULL
#define OPTION_VAL_1_50_GL NULL
#define OPTION_VAL_1_75_GL NULL
#define OPTION_VAL_2_00_GL NULL
#define OPTION_VAL_2_25_GL NULL
#define OPTION_VAL_2_50_GL NULL
#define OPTION_VAL_2_75_GL NULL
#define OPTION_VAL_3_00_GL NULL
#define OPTION_VAL_3_25_GL NULL
#define OPTION_VAL_3_50_GL NULL
#define OPTION_VAL_3_75_GL NULL
#define OPTION_VAL_4_00_GL NULL
#define OPTION_VAL_4_25_GL NULL
#define OPTION_VAL_4_50_GL NULL
#define OPTION_VAL_4_75_GL NULL
#define OPTION_VAL_5_00_GL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_GL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_GL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_GL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_GL NULL
#define PCE_MULTITAP_LABEL_GL NULL
#define PCE_MULTITAP_INFO_0_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_GL NULL
#define OPTION_VAL_2_BUTTONS_GL NULL
#define OPTION_VAL_6_BUTTONS_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_GL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_GL NULL
#define PCE_TURBO_TOGGLING_LABEL_GL NULL
#define PCE_TURBO_TOGGLING_INFO_0_GL NULL
#define OPTION_VAL_TOGGLE_GL NULL
#define OPTION_VAL_ALWAYS_GL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_GL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_GL NULL
#define PCE_TURBO_DELAY_LABEL_GL NULL
#define PCE_TURBO_DELAY_INFO_0_GL NULL
#define OPTION_VAL_FAST_GL NULL
#define OPTION_VAL_MEDIUM_GL NULL
#define OPTION_VAL_SLOW_GL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_GL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_GL NULL
#define PCE_CDIMAGECACHE_LABEL_GL NULL
#define PCE_CDIMAGECACHE_INFO_0_GL NULL
#define PCE_CDBIOS_LABEL_GL NULL
#define PCE_CDBIOS_INFO_0_GL NULL
#define OPTION_VAL_GAMES_EXPRESS_GL NULL
#define OPTION_VAL_SYSTEM_CARD_1_GL NULL
#define OPTION_VAL_SYSTEM_CARD_2_GL NULL
#define OPTION_VAL_SYSTEM_CARD_3_GL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_GL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_GL NULL
#define PCE_ARCADECARD_LABEL_GL NULL
#define PCE_ARCADECARD_INFO_0_GL NULL
#define PCE_CDSPEED_LABEL_GL NULL
#define PCE_CDSPEED_LABEL_CAT_GL NULL
#define PCE_CDSPEED_INFO_0_GL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_GL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_GL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_GL NULL
#define OPTION_VAL_10_BIT_GL NULL
#define OPTION_VAL_12_BIT_GL NULL
#define PCE_ADPCMVOLUME_LABEL_GL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_GL NULL
#define PCE_ADPCMVOLUME_INFO_0_GL NULL
#define PCE_ADPCMVOLUME_INFO_1_GL NULL
#define PCE_CDDAVOLUME_LABEL_GL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_GL NULL
#define PCE_CDPSGVOLUME_LABEL_GL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_GL NULL
#define PCE_NOSPRITELIMIT_LABEL_GL NULL
#define PCE_NOSPRITELIMIT_INFO_0_GL NULL
#define PCE_OCMULTIPLIER_LABEL_GL NULL
#define PCE_OCMULTIPLIER_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_GL,
      CATEGORY_VIDEO_INFO_0_GL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_GL,
      CATEGORY_AUDIO_INFO_0_GL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_GL,
      CATEGORY_HACKS_INFO_0_GL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_GL,
      CATEGORY_CD_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_GL,
      NULL,
      PCE_PALETTE_INFO_0_GL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_GL },
         { "Composite", OPTION_VAL_COMPOSITE_GL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_GL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_GL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "6:5", OPTION_VAL_6_5_GL },
         { "4:3", OPTION_VAL_4_3_GL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_GL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_GL,
      NULL,
      PCE_SCALING_INFO_0_GL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "lores", OPTION_VAL_LORES_GL },
         { "hires", OPTION_VAL_HIRES_GL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_GL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_GL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_GL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_GL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_GL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_GL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_GL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_GL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_GL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_GL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_GL,
      NULL,
      PCE_PSGREVISION_INFO_0_GL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_GL },
         { "HuC6280A", OPTION_VAL_HUC6280A_GL },
         { "auto", OPTION_VAL_AUTO_GL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_GL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_GL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_GL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_GL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_GL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_GL },
         { "0.250", OPTION_VAL_0_250_GL },
         { "0.375", OPTION_VAL_0_375_GL },
         { "0.500", OPTION_VAL_0_500_GL },
         { "0.625", OPTION_VAL_0_625_GL },
         { "0.750", OPTION_VAL_0_750_GL },
         { "0.875", OPTION_VAL_0_875_GL },
         { "1.000", OPTION_VAL_1_000_GL },
         { "1.125", OPTION_VAL_1_125_GL },
         { "1.25", OPTION_VAL_1_25_GL },
         { "1.50", OPTION_VAL_1_50_GL },
         { "1.75", OPTION_VAL_1_75_GL },
         { "2.00", OPTION_VAL_2_00_GL },
         { "2.25", OPTION_VAL_2_25_GL },
         { "2.50", OPTION_VAL_2_50_GL },
         { "2.75", OPTION_VAL_2_75_GL },
         { "3.00", OPTION_VAL_3_00_GL },
         { "3.25", OPTION_VAL_3_25_GL },
         { "3.50", OPTION_VAL_3_50_GL },
         { "3.75", OPTION_VAL_3_75_GL },
         { "4.00", OPTION_VAL_4_00_GL },
         { "4.25", OPTION_VAL_4_25_GL },
         { "4.50", OPTION_VAL_4_50_GL },
         { "4.75", OPTION_VAL_4_75_GL },
         { "5.00", OPTION_VAL_5_00_GL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_GL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_GL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_GL,
      NULL,
      PCE_MULTITAP_INFO_0_GL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_GL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_GL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_GL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_GL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_GL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_GL,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_GL },
         { "always", OPTION_VAL_ALWAYS_GL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_GL,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_GL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_GL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_GL },
         { "Medium", OPTION_VAL_MEDIUM_GL },
         { "Slow", OPTION_VAL_SLOW_GL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_GL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_GL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_GL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_GL,
      NULL,
      PCE_CDBIOS_INFO_0_GL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_GL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_GL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_GL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_GL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_GL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_GL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_GL,
      NULL,
      PCE_ARCADECARD_INFO_0_GL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_GL,
      PCE_CDSPEED_LABEL_CAT_GL,
      PCE_CDSPEED_INFO_0_GL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_GL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_GL,
      PCE_ADPCMEXTRAPREC_INFO_0_GL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_GL },
         { "12-bit", OPTION_VAL_12_BIT_GL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_GL,
      PCE_ADPCMVOLUME_LABEL_CAT_GL,
      PCE_ADPCMVOLUME_INFO_0_GL,
      PCE_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_GL,
      PCE_CDDAVOLUME_LABEL_CAT_GL,
      PCE_ADPCMVOLUME_INFO_0_GL,
      PCE_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_GL,
      PCE_CDPSGVOLUME_LABEL_CAT_GL,
      PCE_ADPCMVOLUME_INFO_0_GL,
      PCE_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_GL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_GL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_VIDEO_LABEL_HE "וידאו"
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_AUDIO_LABEL_HE "שמע"
#define CATEGORY_AUDIO_INFO_0_HE NULL
#define CATEGORY_INPUT_LABEL_HE "קלט"
#define CATEGORY_INPUT_INFO_0_HE NULL
#define CATEGORY_HACKS_LABEL_HE NULL
#define CATEGORY_HACKS_INFO_0_HE NULL
#define CATEGORY_CD_LABEL_HE NULL
#define CATEGORY_CD_INFO_0_HE NULL
#define PCE_PALETTE_LABEL_HE NULL
#define PCE_PALETTE_INFO_0_HE NULL
#define OPTION_VAL_RGB_HE NULL
#define OPTION_VAL_COMPOSITE_HE NULL
#define PCE_ASPECT_RATIO_LABEL_HE "יחס גובה-רוחב"
#define PCE_ASPECT_RATIO_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_6_5_HE NULL
#define OPTION_VAL_4_3_HE NULL
#define OPTION_VAL_UNCORRECTED_HE NULL
#define PCE_SCALING_LABEL_HE NULL
#define PCE_SCALING_INFO_0_HE NULL
#define OPTION_VAL_LORES_HE NULL
#define OPTION_VAL_HIRES_HE NULL
#define PCE_HIRES_BLEND_LABEL_HE NULL
#define PCE_HIRES_BLEND_INFO_0_HE NULL
#define PCE_H_OVERSCAN_LABEL_HE NULL
#define PCE_H_OVERSCAN_INFO_0_HE NULL
#define PCE_INITIAL_SCANLINE_LABEL_HE NULL
#define PCE_INITIAL_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_3_HE NULL
#define PCE_LAST_SCANLINE_LABEL_HE NULL
#define PCE_LAST_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_242_HE NULL
#define PCE_PSGREVISION_LABEL_HE NULL
#define PCE_PSGREVISION_INFO_0_HE NULL
#define OPTION_VAL_HUC6280_HE NULL
#define OPTION_VAL_HUC6280A_HE NULL
#define PCE_RESAMP_QUALITY_LABEL_HE NULL
#define PCE_RESAMP_QUALITY_INFO_0_HE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HE NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HE NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_HE NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_HE NULL
#define OPTION_VAL_0_125_HE NULL
#define OPTION_VAL_0_250_HE NULL
#define OPTION_VAL_0_375_HE NULL
#define OPTION_VAL_0_500_HE NULL
#define OPTION_VAL_0_625_HE NULL
#define OPTION_VAL_0_750_HE NULL
#define OPTION_VAL_0_875_HE NULL
#define OPTION_VAL_1_000_HE NULL
#define OPTION_VAL_1_125_HE NULL
#define OPTION_VAL_1_25_HE NULL
#define OPTION_VAL_1_50_HE NULL
#define OPTION_VAL_1_75_HE NULL
#define OPTION_VAL_2_00_HE NULL
#define OPTION_VAL_2_25_HE NULL
#define OPTION_VAL_2_50_HE NULL
#define OPTION_VAL_2_75_HE NULL
#define OPTION_VAL_3_00_HE NULL
#define OPTION_VAL_3_25_HE NULL
#define OPTION_VAL_3_50_HE NULL
#define OPTION_VAL_3_75_HE NULL
#define OPTION_VAL_4_00_HE NULL
#define OPTION_VAL_4_25_HE NULL
#define OPTION_VAL_4_50_HE NULL
#define OPTION_VAL_4_75_HE NULL
#define OPTION_VAL_5_00_HE NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_HE NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_HE NULL
#define PCE_DISABLE_SOFTRESET_LABEL_HE NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_HE NULL
#define PCE_MULTITAP_LABEL_HE NULL
#define PCE_MULTITAP_INFO_0_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HE NULL
#define OPTION_VAL_2_BUTTONS_HE NULL
#define OPTION_VAL_6_BUTTONS_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_HE NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HE NULL
#define PCE_TURBO_TOGGLING_LABEL_HE NULL
#define PCE_TURBO_TOGGLING_INFO_0_HE NULL
#define OPTION_VAL_TOGGLE_HE NULL
#define OPTION_VAL_ALWAYS_HE NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_HE NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_HE NULL
#define PCE_TURBO_DELAY_LABEL_HE NULL
#define PCE_TURBO_DELAY_INFO_0_HE NULL
#define OPTION_VAL_FAST_HE NULL
#define OPTION_VAL_MEDIUM_HE NULL
#define OPTION_VAL_SLOW_HE NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_HE NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_HE NULL
#define PCE_CDIMAGECACHE_LABEL_HE NULL
#define PCE_CDIMAGECACHE_INFO_0_HE NULL
#define PCE_CDBIOS_LABEL_HE NULL
#define PCE_CDBIOS_INFO_0_HE NULL
#define OPTION_VAL_GAMES_EXPRESS_HE NULL
#define OPTION_VAL_SYSTEM_CARD_1_HE NULL
#define OPTION_VAL_SYSTEM_CARD_2_HE NULL
#define OPTION_VAL_SYSTEM_CARD_3_HE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HE NULL
#define PCE_ARCADECARD_LABEL_HE NULL
#define PCE_ARCADECARD_INFO_0_HE NULL
#define PCE_CDSPEED_LABEL_HE NULL
#define PCE_CDSPEED_LABEL_CAT_HE NULL
#define PCE_CDSPEED_INFO_0_HE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_HE NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_HE NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_HE NULL
#define OPTION_VAL_10_BIT_HE NULL
#define OPTION_VAL_12_BIT_HE NULL
#define PCE_ADPCMVOLUME_LABEL_HE NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_HE NULL
#define PCE_ADPCMVOLUME_INFO_0_HE NULL
#define PCE_ADPCMVOLUME_INFO_1_HE NULL
#define PCE_CDDAVOLUME_LABEL_HE NULL
#define PCE_CDDAVOLUME_LABEL_CAT_HE NULL
#define PCE_CDPSGVOLUME_LABEL_HE NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_HE NULL
#define PCE_NOSPRITELIMIT_LABEL_HE NULL
#define PCE_NOSPRITELIMIT_INFO_0_HE NULL
#define PCE_OCMULTIPLIER_LABEL_HE NULL
#define PCE_OCMULTIPLIER_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HE,
      CATEGORY_VIDEO_INFO_0_HE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HE,
      CATEGORY_AUDIO_INFO_0_HE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HE,
      CATEGORY_HACKS_INFO_0_HE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HE,
      CATEGORY_CD_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_HE,
      NULL,
      PCE_PALETTE_INFO_0_HE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HE },
         { "Composite", OPTION_VAL_COMPOSITE_HE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_HE,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_HE,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "6:5", OPTION_VAL_6_5_HE },
         { "4:3", OPTION_VAL_4_3_HE },
         { "uncorrected", OPTION_VAL_UNCORRECTED_HE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_HE,
      NULL,
      PCE_SCALING_INFO_0_HE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "lores", OPTION_VAL_LORES_HE },
         { "hires", OPTION_VAL_HIRES_HE },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_HE,
      NULL,
      PCE_HIRES_BLEND_INFO_0_HE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_HE,
      NULL,
      PCE_H_OVERSCAN_INFO_0_HE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_HE,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_HE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_HE,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_HE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HE },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_HE,
      NULL,
      PCE_PSGREVISION_INFO_0_HE,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_HE },
         { "HuC6280A", OPTION_VAL_HUC6280A_HE },
         { "auto", OPTION_VAL_AUTO_HE },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_HE,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HE,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_HE,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_HE },
         { "0.250", OPTION_VAL_0_250_HE },
         { "0.375", OPTION_VAL_0_375_HE },
         { "0.500", OPTION_VAL_0_500_HE },
         { "0.625", OPTION_VAL_0_625_HE },
         { "0.750", OPTION_VAL_0_750_HE },
         { "0.875", OPTION_VAL_0_875_HE },
         { "1.000", OPTION_VAL_1_000_HE },
         { "1.125", OPTION_VAL_1_125_HE },
         { "1.25", OPTION_VAL_1_25_HE },
         { "1.50", OPTION_VAL_1_50_HE },
         { "1.75", OPTION_VAL_1_75_HE },
         { "2.00", OPTION_VAL_2_00_HE },
         { "2.25", OPTION_VAL_2_25_HE },
         { "2.50", OPTION_VAL_2_50_HE },
         { "2.75", OPTION_VAL_2_75_HE },
         { "3.00", OPTION_VAL_3_00_HE },
         { "3.25", OPTION_VAL_3_25_HE },
         { "3.50", OPTION_VAL_3_50_HE },
         { "3.75", OPTION_VAL_3_75_HE },
         { "4.00", OPTION_VAL_4_00_HE },
         { "4.25", OPTION_VAL_4_25_HE },
         { "4.50", OPTION_VAL_4_50_HE },
         { "4.75", OPTION_VAL_4_75_HE },
         { "5.00", OPTION_VAL_5_00_HE },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_HE,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_HE,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_HE,
      NULL,
      PCE_MULTITAP_INFO_0_HE,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_HE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_HE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_HE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_HE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_HE,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_HE,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_HE },
         { "always", OPTION_VAL_ALWAYS_HE },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_HE,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_HE,
      NULL,
      PCE_TURBO_DELAY_INFO_0_HE,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_HE },
         { "Medium", OPTION_VAL_MEDIUM_HE },
         { "Slow", OPTION_VAL_SLOW_HE },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_HE,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_HE,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_HE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_HE,
      NULL,
      PCE_CDBIOS_INFO_0_HE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HE },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_HE,
      NULL,
      PCE_ARCADECARD_INFO_0_HE,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_HE,
      PCE_CDSPEED_LABEL_CAT_HE,
      PCE_CDSPEED_INFO_0_HE,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_HE,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_HE,
      PCE_ADPCMEXTRAPREC_INFO_0_HE,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_HE },
         { "12-bit", OPTION_VAL_12_BIT_HE },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_HE,
      PCE_ADPCMVOLUME_LABEL_CAT_HE,
      PCE_ADPCMVOLUME_INFO_0_HE,
      PCE_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_HE,
      PCE_CDDAVOLUME_LABEL_CAT_HE,
      PCE_ADPCMVOLUME_INFO_0_HE,
      PCE_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_HE,
      PCE_CDPSGVOLUME_LABEL_CAT_HE,
      PCE_ADPCMVOLUME_INFO_0_HE,
      PCE_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_HE,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_HE,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HR */

#define CATEGORY_VIDEO_LABEL_HR NULL
#define CATEGORY_VIDEO_INFO_0_HR NULL
#define CATEGORY_AUDIO_LABEL_HR "Zvuk"
#define CATEGORY_AUDIO_INFO_0_HR NULL
#define CATEGORY_INPUT_LABEL_HR NULL
#define CATEGORY_INPUT_INFO_0_HR NULL
#define CATEGORY_HACKS_LABEL_HR NULL
#define CATEGORY_HACKS_INFO_0_HR NULL
#define CATEGORY_CD_LABEL_HR NULL
#define CATEGORY_CD_INFO_0_HR NULL
#define PCE_PALETTE_LABEL_HR NULL
#define PCE_PALETTE_INFO_0_HR NULL
#define OPTION_VAL_RGB_HR NULL
#define OPTION_VAL_COMPOSITE_HR NULL
#define PCE_ASPECT_RATIO_LABEL_HR "Omjer slike"
#define PCE_ASPECT_RATIO_INFO_0_HR NULL
#define OPTION_VAL_AUTO_HR NULL
#define OPTION_VAL_6_5_HR NULL
#define OPTION_VAL_4_3_HR NULL
#define OPTION_VAL_UNCORRECTED_HR NULL
#define PCE_SCALING_LABEL_HR NULL
#define PCE_SCALING_INFO_0_HR NULL
#define OPTION_VAL_LORES_HR NULL
#define OPTION_VAL_HIRES_HR NULL
#define PCE_HIRES_BLEND_LABEL_HR NULL
#define PCE_HIRES_BLEND_INFO_0_HR NULL
#define PCE_H_OVERSCAN_LABEL_HR NULL
#define PCE_H_OVERSCAN_INFO_0_HR NULL
#define PCE_INITIAL_SCANLINE_LABEL_HR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_3_HR NULL
#define PCE_LAST_SCANLINE_LABEL_HR NULL
#define PCE_LAST_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_242_HR NULL
#define PCE_PSGREVISION_LABEL_HR NULL
#define PCE_PSGREVISION_INFO_0_HR NULL
#define OPTION_VAL_HUC6280_HR NULL
#define OPTION_VAL_HUC6280A_HR NULL
#define PCE_RESAMP_QUALITY_LABEL_HR NULL
#define PCE_RESAMP_QUALITY_INFO_0_HR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_HR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_HR NULL
#define OPTION_VAL_0_125_HR NULL
#define OPTION_VAL_0_250_HR NULL
#define OPTION_VAL_0_375_HR NULL
#define OPTION_VAL_0_500_HR NULL
#define OPTION_VAL_0_625_HR NULL
#define OPTION_VAL_0_750_HR NULL
#define OPTION_VAL_0_875_HR NULL
#define OPTION_VAL_1_000_HR NULL
#define OPTION_VAL_1_125_HR NULL
#define OPTION_VAL_1_25_HR NULL
#define OPTION_VAL_1_50_HR NULL
#define OPTION_VAL_1_75_HR NULL
#define OPTION_VAL_2_00_HR NULL
#define OPTION_VAL_2_25_HR NULL
#define OPTION_VAL_2_50_HR NULL
#define OPTION_VAL_2_75_HR NULL
#define OPTION_VAL_3_00_HR NULL
#define OPTION_VAL_3_25_HR NULL
#define OPTION_VAL_3_50_HR NULL
#define OPTION_VAL_3_75_HR NULL
#define OPTION_VAL_4_00_HR NULL
#define OPTION_VAL_4_25_HR NULL
#define OPTION_VAL_4_50_HR NULL
#define OPTION_VAL_4_75_HR NULL
#define OPTION_VAL_5_00_HR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_HR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_HR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_HR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_HR NULL
#define PCE_MULTITAP_LABEL_HR NULL
#define PCE_MULTITAP_INFO_0_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HR NULL
#define OPTION_VAL_2_BUTTONS_HR NULL
#define OPTION_VAL_6_BUTTONS_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_HR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HR NULL
#define PCE_TURBO_TOGGLING_LABEL_HR NULL
#define PCE_TURBO_TOGGLING_INFO_0_HR NULL
#define OPTION_VAL_TOGGLE_HR NULL
#define OPTION_VAL_ALWAYS_HR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_HR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_HR NULL
#define PCE_TURBO_DELAY_LABEL_HR NULL
#define PCE_TURBO_DELAY_INFO_0_HR NULL
#define OPTION_VAL_FAST_HR NULL
#define OPTION_VAL_MEDIUM_HR NULL
#define OPTION_VAL_SLOW_HR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_HR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_HR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_HR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_HR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_HR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_HR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_HR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_HR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_HR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_HR NULL
#define PCE_CDIMAGECACHE_LABEL_HR NULL
#define PCE_CDIMAGECACHE_INFO_0_HR NULL
#define PCE_CDBIOS_LABEL_HR NULL
#define PCE_CDBIOS_INFO_0_HR NULL
#define OPTION_VAL_GAMES_EXPRESS_HR NULL
#define OPTION_VAL_SYSTEM_CARD_1_HR NULL
#define OPTION_VAL_SYSTEM_CARD_2_HR NULL
#define OPTION_VAL_SYSTEM_CARD_3_HR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HR NULL
#define PCE_ARCADECARD_LABEL_HR NULL
#define PCE_ARCADECARD_INFO_0_HR NULL
#define PCE_CDSPEED_LABEL_HR NULL
#define PCE_CDSPEED_LABEL_CAT_HR NULL
#define PCE_CDSPEED_INFO_0_HR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_HR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_HR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_HR NULL
#define OPTION_VAL_10_BIT_HR NULL
#define OPTION_VAL_12_BIT_HR NULL
#define PCE_ADPCMVOLUME_LABEL_HR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_HR NULL
#define PCE_ADPCMVOLUME_INFO_0_HR NULL
#define PCE_ADPCMVOLUME_INFO_1_HR NULL
#define PCE_CDDAVOLUME_LABEL_HR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_HR NULL
#define PCE_CDPSGVOLUME_LABEL_HR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_HR NULL
#define PCE_NOSPRITELIMIT_LABEL_HR NULL
#define PCE_NOSPRITELIMIT_INFO_0_HR NULL
#define PCE_OCMULTIPLIER_LABEL_HR NULL
#define PCE_OCMULTIPLIER_INFO_0_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HR,
      CATEGORY_VIDEO_INFO_0_HR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HR,
      CATEGORY_AUDIO_INFO_0_HR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HR,
      CATEGORY_INPUT_INFO_0_HR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HR,
      CATEGORY_HACKS_INFO_0_HR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HR,
      CATEGORY_CD_INFO_0_HR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_HR,
      NULL,
      PCE_PALETTE_INFO_0_HR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HR },
         { "Composite", OPTION_VAL_COMPOSITE_HR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_HR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_HR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HR },
         { "6:5", OPTION_VAL_6_5_HR },
         { "4:3", OPTION_VAL_4_3_HR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_HR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_HR,
      NULL,
      PCE_SCALING_INFO_0_HR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HR },
         { "lores", OPTION_VAL_LORES_HR },
         { "hires", OPTION_VAL_HIRES_HR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_HR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_HR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_HR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_HR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_HR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_HR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_HR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_HR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_HR,
      NULL,
      PCE_PSGREVISION_INFO_0_HR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_HR },
         { "HuC6280A", OPTION_VAL_HUC6280A_HR },
         { "auto", OPTION_VAL_AUTO_HR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_HR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_HR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_HR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_HR },
         { "0.250", OPTION_VAL_0_250_HR },
         { "0.375", OPTION_VAL_0_375_HR },
         { "0.500", OPTION_VAL_0_500_HR },
         { "0.625", OPTION_VAL_0_625_HR },
         { "0.750", OPTION_VAL_0_750_HR },
         { "0.875", OPTION_VAL_0_875_HR },
         { "1.000", OPTION_VAL_1_000_HR },
         { "1.125", OPTION_VAL_1_125_HR },
         { "1.25", OPTION_VAL_1_25_HR },
         { "1.50", OPTION_VAL_1_50_HR },
         { "1.75", OPTION_VAL_1_75_HR },
         { "2.00", OPTION_VAL_2_00_HR },
         { "2.25", OPTION_VAL_2_25_HR },
         { "2.50", OPTION_VAL_2_50_HR },
         { "2.75", OPTION_VAL_2_75_HR },
         { "3.00", OPTION_VAL_3_00_HR },
         { "3.25", OPTION_VAL_3_25_HR },
         { "3.50", OPTION_VAL_3_50_HR },
         { "3.75", OPTION_VAL_3_75_HR },
         { "4.00", OPTION_VAL_4_00_HR },
         { "4.25", OPTION_VAL_4_25_HR },
         { "4.50", OPTION_VAL_4_50_HR },
         { "4.75", OPTION_VAL_4_75_HR },
         { "5.00", OPTION_VAL_5_00_HR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_HR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_HR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_HR,
      NULL,
      PCE_MULTITAP_INFO_0_HR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_HR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_HR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_HR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_HR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_HR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_HR,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_HR },
         { "always", OPTION_VAL_ALWAYS_HR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_HR,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_HR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_HR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_HR },
         { "Medium", OPTION_VAL_MEDIUM_HR },
         { "Slow", OPTION_VAL_SLOW_HR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_HR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_HR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_HR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_HR,
      NULL,
      PCE_CDBIOS_INFO_0_HR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_HR,
      NULL,
      PCE_ARCADECARD_INFO_0_HR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_HR,
      PCE_CDSPEED_LABEL_CAT_HR,
      PCE_CDSPEED_INFO_0_HR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_HR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_HR,
      PCE_ADPCMEXTRAPREC_INFO_0_HR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_HR },
         { "12-bit", OPTION_VAL_12_BIT_HR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_HR,
      PCE_ADPCMVOLUME_LABEL_CAT_HR,
      PCE_ADPCMVOLUME_INFO_0_HR,
      PCE_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_HR,
      PCE_CDDAVOLUME_LABEL_CAT_HR,
      PCE_ADPCMVOLUME_INFO_0_HR,
      PCE_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_HR,
      PCE_CDPSGVOLUME_LABEL_CAT_HR,
      PCE_ADPCMVOLUME_INFO_0_HR,
      PCE_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_HR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_HR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_HR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_HR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU "Kép"
#define CATEGORY_VIDEO_INFO_0_HU "Képarány, képvágás, és más képkimeneti paraméterek."
#define CATEGORY_AUDIO_LABEL_HU "Hang"
#define CATEGORY_AUDIO_INFO_0_HU "Az emulált hangeszközök beállításai."
#define CATEGORY_INPUT_LABEL_HU "Bevitel"
#define CATEGORY_INPUT_INFO_0_HU "A fénypisztoly, az egér és a kontroller bemeneti beállításai."
#define CATEGORY_HACKS_LABEL_HU "Emulációs trükkök"
#define CATEGORY_HACKS_INFO_0_HU "A processzor túlhajtás és az emuláció pontosságának beállításai, amelyek befolyásolják az alacsonyszintű teljesítményt és a kompatibilitást."
#define CATEGORY_CD_LABEL_HU "A PC Engine CD meghajtója"
#define CATEGORY_CD_INFO_0_HU "A PC Engine CD emulációs beállításai."
#define PCE_PALETTE_LABEL_HU "Színpaletta"
#define PCE_PALETTE_INFO_0_HU "A kompozit az eredeti konzol kimenetét kísérli meg utánozni, és néhány játékban több részletet mutathat meg."
#define OPTION_VAL_RGB_HU NULL
#define OPTION_VAL_COMPOSITE_HU "Kompozit"
#define PCE_ASPECT_RATIO_LABEL_HU "Képarány"
#define PCE_ASPECT_RATIO_INFO_0_HU "A kívánt képarány. Csak akkor lép életbe, ha a RetroArch video beállítások közt a képarány \"Mag által megadott\"-ra van állítva."
#define OPTION_VAL_AUTO_HU "Automatikus"
#define OPTION_VAL_6_5_HU NULL
#define OPTION_VAL_4_3_HU NULL
#define OPTION_VAL_UNCORRECTED_HU "Korrigálatlan"
#define PCE_SCALING_LABEL_HU "Felbontás skálázás"
#define PCE_SCALING_INFO_0_HU "Automatikus: engedélyezi a felbontásváltást. Alacsony felbontás: a pixelek torlódhatnak. Nagy felbontás: mindig a maximális szélességen marad."
#define OPTION_VAL_LORES_HU "Alacsony felbontás"
#define OPTION_VAL_HIRES_HU "Nagy felbontás"
#define PCE_HIRES_BLEND_LABEL_HU "Összemosás erőssége nagy felbontáson"
#define PCE_HIRES_BLEND_INFO_0_HU "Nagy felbontásban összemossa a pixeleket. Nagyobb értékek erősebben homályosítják a képet."
#define PCE_H_OVERSCAN_LABEL_HU "Vízszintes overscan megjelenítése"
#define PCE_H_OVERSCAN_INFO_0_HU "Az automatikus beállítás alkalmazkodik a játékokhoz, levágja az üres területeket."
#define PCE_INITIAL_SCANLINE_LABEL_HU "Kezdő scanline"
#define PCE_INITIAL_SCANLINE_INFO_0_HU "Az első megjelenített scanline. Nagyobb érték vágja a kép tetejét."
#define OPTION_VAL_3_HU "3 (alapértelmezett)"
#define PCE_LAST_SCANLINE_LABEL_HU "Utolsó scanline"
#define PCE_LAST_SCANLINE_INFO_0_HU "Az utolsó megjelenített scanline. Nagyobb érték vágja a kép alját."
#define OPTION_VAL_242_HU "242 (alapértelmezett)"
#define PCE_PSGREVISION_LABEL_HU "PSG hangchip (újraindítás szükséges)"
#define PCE_PSGREVISION_INFO_0_HU "HuC6280: eredeti PC Engine, HuC6280A: SuperGrafx és CoreGrafx I."
#define OPTION_VAL_HUC6280_HU NULL
#define OPTION_VAL_HUC6280A_HU NULL
#define PCE_RESAMP_QUALITY_LABEL_HU "Az Owl újramintavételezés minősége"
#define PCE_RESAMP_QUALITY_INFO_0_HU "Magasabb értékek jobb jel-zaj arányt eredményeznek és jobban megőrzik a magas frekvenciákat, de növelik a számításigényt és nagyobb késleltetést okozhatnak, illetve torzítást is, ha a hangerő túl magasra van állítva."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HU "Haladó bemenet / turbó beállítások megjelenítése"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HU "A multitap, egér, turbó gombok, és haladó paraméterek megjelenítése. Figyelem: vissza kell lépni a játékba és újra belépni a menübe, hogy a lista frissüljön."
#define PCE_MOUSE_SENSITIVITY_LABEL_HU "Egér érzékenysége"
#define PCE_MOUSE_SENSITIVITY_INFO_0_HU "Magasabb értékek az egérkurzor gyorsabb mozgását eredményezik."
#define OPTION_VAL_0_125_HU NULL
#define OPTION_VAL_0_250_HU NULL
#define OPTION_VAL_0_375_HU NULL
#define OPTION_VAL_0_500_HU NULL
#define OPTION_VAL_0_625_HU NULL
#define OPTION_VAL_0_750_HU NULL
#define OPTION_VAL_0_875_HU NULL
#define OPTION_VAL_1_000_HU NULL
#define OPTION_VAL_1_125_HU NULL
#define OPTION_VAL_1_25_HU NULL
#define OPTION_VAL_1_50_HU NULL
#define OPTION_VAL_1_75_HU NULL
#define OPTION_VAL_2_00_HU NULL
#define OPTION_VAL_2_25_HU NULL
#define OPTION_VAL_2_50_HU NULL
#define OPTION_VAL_2_75_HU NULL
#define OPTION_VAL_3_00_HU NULL
#define OPTION_VAL_3_25_HU NULL
#define OPTION_VAL_3_50_HU NULL
#define OPTION_VAL_3_75_HU NULL
#define OPTION_VAL_4_00_HU NULL
#define OPTION_VAL_4_25_HU NULL
#define OPTION_VAL_4_50_HU NULL
#define OPTION_VAL_4_75_HU NULL
#define OPTION_VAL_5_00_HU NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_HU "Ellentétes irányok engedélyezése"
#define PCE_UP_DOWN_ALLOWED_INFO_0_HU "A jobb és bal (vagy fel és le) irányok egyidejű/gyorsan váltakozó lenyomásának vagy nyomva tartásának engedélyezése. Hibákat okozhat a mozgatásban."
#define PCE_DISABLE_SOFTRESET_LABEL_HU "Soft reset letiltása (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_HU "A RUN és SELECT gombok egyidejű megnyomásakor mindkét gomb ideiglenes letiltása, reset helyett."
#define PCE_MULTITAP_LABEL_HU "Multitap 5 csatlakozós kontroller"
#define PCE_MULTITAP_INFO_0_HU "Legfeljebb 5 játékos engedélyezése multitap emulációval. Csak néhány esetben szükséges kikapcsolni (pl. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_HU "1. joypad alapértelmezett típusa"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HU "Az 1. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define OPTION_VAL_2_BUTTONS_HU "2 gomb"
#define OPTION_VAL_6_BUTTONS_HU "6 gomb"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_HU "2. joypad alapértelmezett típusa"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HU "A 2. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_HU "3. joypad alapértelmezett típusa"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HU "A 3. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_HU "4. joypad alapértelmezett típusa"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HU "A 4. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_HU "5. joypad alapértelmezett típusa"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HU "Az 5. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_TURBO_TOGGLING_LABEL_HU "Turbó gyorsgomb mód"
#define PCE_TURBO_TOGGLING_INFO_0_HU "Turbó gombok engedélyezése. A gyorsgombok (III és IV) váltógombként vagy kijelölt (nyomva tartással használható) turbó gombként működhetnek."
#define OPTION_VAL_TOGGLE_HU "Váltógomb"
#define OPTION_VAL_ALWAYS_HU "Kijelölt"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_HU "Alternatív Turbo gyorsgomb"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_HU "A III és IV gomb helyett a RetroPad L3/R3 gombjait rendeli a turbo átkapcsoláshoz. Csak Váltógomb módban, és akkor működik, ha nincs semmi az L3/R3 gombhoz rendelve. Ezzel elkerülhető a III és IV gomb átirányítása a 6-gombos kontroller módba kapcsoláskor."
#define PCE_TURBO_DELAY_LABEL_HU "Turbó sebesség"
#define PCE_TURBO_DELAY_INFO_0_HU "A gombnyomások ismétlésének gyorsasága."
#define OPTION_VAL_FAST_HU "Gyors"
#define OPTION_VAL_MEDIUM_HU "Közepes"
#define OPTION_VAL_SLOW_HU "Lassú"
#define PCE_P0_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_HU NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_HU NULL
#define PCE_CDIMAGECACHE_LABEL_HU "Gyorsítótár a CD képfájlhoz (újraindítás szükséges)"
#define PCE_CDIMAGECACHE_INFO_0_HU "Indításkor beolvassa a teljes képfájlt a memóriába. Csökkentheti a töltési időket a lassabb indulásért cserébe."
#define PCE_CDBIOS_LABEL_HU "CD BIOS (újraindítás szükséges)"
#define PCE_CDBIOS_INFO_0_HU "A legtöbb játék képes futni a \"System Card 3\"-mal. Számos nem licenszelt játékhoz szükség van a \"Games Express\"-re."
#define OPTION_VAL_GAMES_EXPRESS_HU NULL
#define OPTION_VAL_SYSTEM_CARD_1_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HU NULL
#define PCE_ARCADECARD_LABEL_HU "Arcade Card (újraindítás szükséges)"
#define PCE_ARCADECARD_INFO_0_HU "Az Arcade CD-ROM által feljavított Super CD-ROM javított módjainak engedélyezése."
#define PCE_CDSPEED_LABEL_HU "(CD) CD sebesség"
#define PCE_CDSPEED_LABEL_CAT_HU "CD sebesség"
#define PCE_CDSPEED_INFO_0_HU "A nagyobb értékek segítik a gyorsabb töltést, de gondot okozhatnak pár játéknál."
#define PCE_ADPCMEXTRAPREC_LABEL_HU "(CD) ADPCM pontosság"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_HU "ADPCM pontosság"
#define PCE_ADPCMEXTRAPREC_INFO_0_HU "Az MSM5205 ADPCM predictor teljes 12 bites pontossága csökkentheti a nyüszítő zajt ADPCM visszajátszáskor."
#define OPTION_VAL_10_BIT_HU "10 bites"
#define OPTION_VAL_12_BIT_HU "12 bites"
#define PCE_ADPCMVOLUME_LABEL_HU "(CD) ADPCM hangerő %"
#define PCE_ADPCMVOLUME_LABEL_CAT_HU "ADPCM hangerő %"
#define PCE_ADPCMVOLUME_INFO_0_HU "Csak CD játékoknál. Ezen hangerő túl magas értéke torzítást okozhat."
#define PCE_ADPCMVOLUME_INFO_1_HU "Ezen hangerő túl magas értéke torzítást okozhat."
#define PCE_CDDAVOLUME_LABEL_HU "(CD) CDDA hangerő %"
#define PCE_CDDAVOLUME_LABEL_CAT_HU "CDDA hangerő %"
#define PCE_CDPSGVOLUME_LABEL_HU "(CD) CD PSG hangerő %"
#define PCE_CDPSGVOLUME_LABEL_CAT_HU "CD PSG hangerő %"
#define PCE_NOSPRITELIMIT_LABEL_HU "Nincs sprite korlátozás"
#define PCE_NOSPRITELIMIT_INFO_0_HU "Megszünteti a hardver soronként legfeljebb 16 sprite-os korlátozását. Figyelem: grafikus hibákat okozhat néhány játéknál(mint pl. Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_HU "CPU túlhajtás szorzó"
#define PCE_OCMULTIPLIER_INFO_0_HU "Nagyobb értékek csökkenthetik a lassulást a játékokban. Figyelem: hibákat és összeomlást okozhat."

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HU,
      CATEGORY_VIDEO_INFO_0_HU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HU,
      CATEGORY_AUDIO_INFO_0_HU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HU,
      CATEGORY_HACKS_INFO_0_HU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HU,
      CATEGORY_CD_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_HU,
      NULL,
      PCE_PALETTE_INFO_0_HU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HU },
         { "Composite", OPTION_VAL_COMPOSITE_HU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_HU,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_HU,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "6:5", OPTION_VAL_6_5_HU },
         { "4:3", OPTION_VAL_4_3_HU },
         { "uncorrected", OPTION_VAL_UNCORRECTED_HU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_HU,
      NULL,
      PCE_SCALING_INFO_0_HU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "lores", OPTION_VAL_LORES_HU },
         { "hires", OPTION_VAL_HIRES_HU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_HU,
      NULL,
      PCE_HIRES_BLEND_INFO_0_HU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_HU,
      NULL,
      PCE_H_OVERSCAN_INFO_0_HU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_HU,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_HU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_HU,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_HU,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HU },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_HU,
      NULL,
      PCE_PSGREVISION_INFO_0_HU,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_HU },
         { "HuC6280A", OPTION_VAL_HUC6280A_HU },
         { "auto", OPTION_VAL_AUTO_HU },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_HU,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_HU,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_HU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_HU,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_HU },
         { "0.250", OPTION_VAL_0_250_HU },
         { "0.375", OPTION_VAL_0_375_HU },
         { "0.500", OPTION_VAL_0_500_HU },
         { "0.625", OPTION_VAL_0_625_HU },
         { "0.750", OPTION_VAL_0_750_HU },
         { "0.875", OPTION_VAL_0_875_HU },
         { "1.000", OPTION_VAL_1_000_HU },
         { "1.125", OPTION_VAL_1_125_HU },
         { "1.25", OPTION_VAL_1_25_HU },
         { "1.50", OPTION_VAL_1_50_HU },
         { "1.75", OPTION_VAL_1_75_HU },
         { "2.00", OPTION_VAL_2_00_HU },
         { "2.25", OPTION_VAL_2_25_HU },
         { "2.50", OPTION_VAL_2_50_HU },
         { "2.75", OPTION_VAL_2_75_HU },
         { "3.00", OPTION_VAL_3_00_HU },
         { "3.25", OPTION_VAL_3_25_HU },
         { "3.50", OPTION_VAL_3_50_HU },
         { "3.75", OPTION_VAL_3_75_HU },
         { "4.00", OPTION_VAL_4_00_HU },
         { "4.25", OPTION_VAL_4_25_HU },
         { "4.50", OPTION_VAL_4_50_HU },
         { "4.75", OPTION_VAL_4_75_HU },
         { "5.00", OPTION_VAL_5_00_HU },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_HU,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_HU,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_HU,
      NULL,
      PCE_MULTITAP_INFO_0_HU,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_HU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_HU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_HU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_HU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_HU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_HU,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_HU },
         { "always", OPTION_VAL_ALWAYS_HU },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_HU,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_HU,
      NULL,
      PCE_TURBO_DELAY_INFO_0_HU,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_HU },
         { "Medium", OPTION_VAL_MEDIUM_HU },
         { "Slow", OPTION_VAL_SLOW_HU },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_HU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_HU,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_HU,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_HU,
      NULL,
      PCE_CDBIOS_INFO_0_HU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HU },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HU },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HU },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_HU,
      NULL,
      PCE_ARCADECARD_INFO_0_HU,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_HU,
      PCE_CDSPEED_LABEL_CAT_HU,
      PCE_CDSPEED_INFO_0_HU,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_HU,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_HU,
      PCE_ADPCMEXTRAPREC_INFO_0_HU,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_HU },
         { "12-bit", OPTION_VAL_12_BIT_HU },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_HU,
      PCE_ADPCMVOLUME_LABEL_CAT_HU,
      PCE_ADPCMVOLUME_INFO_0_HU,
      PCE_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_HU,
      PCE_CDDAVOLUME_LABEL_CAT_HU,
      PCE_ADPCMVOLUME_INFO_0_HU,
      PCE_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_HU,
      PCE_CDPSGVOLUME_LABEL_CAT_HU,
      PCE_ADPCMVOLUME_INFO_0_HU,
      PCE_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_HU,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_HU,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID "Konfigurasikan aspek rasio, pemangkasan tampilan, dan parameter output gambar lainnya."
#define CATEGORY_AUDIO_LABEL_ID "Suara"
#define CATEGORY_AUDIO_INFO_0_ID NULL
#define CATEGORY_INPUT_LABEL_ID "Masukan"
#define CATEGORY_INPUT_INFO_0_ID NULL
#define CATEGORY_HACKS_LABEL_ID "Peretasan Emulasi"
#define CATEGORY_HACKS_INFO_0_ID NULL
#define CATEGORY_CD_LABEL_ID NULL
#define CATEGORY_CD_INFO_0_ID NULL
#define PCE_PALETTE_LABEL_ID NULL
#define PCE_PALETTE_INFO_0_ID NULL
#define OPTION_VAL_RGB_ID NULL
#define OPTION_VAL_COMPOSITE_ID NULL
#define PCE_ASPECT_RATIO_LABEL_ID "Rasio Aspek"
#define PCE_ASPECT_RATIO_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID "Otomatis"
#define OPTION_VAL_6_5_ID NULL
#define OPTION_VAL_4_3_ID NULL
#define OPTION_VAL_UNCORRECTED_ID NULL
#define PCE_SCALING_LABEL_ID NULL
#define PCE_SCALING_INFO_0_ID NULL
#define OPTION_VAL_LORES_ID NULL
#define OPTION_VAL_HIRES_ID NULL
#define PCE_HIRES_BLEND_LABEL_ID NULL
#define PCE_HIRES_BLEND_INFO_0_ID NULL
#define PCE_H_OVERSCAN_LABEL_ID NULL
#define PCE_H_OVERSCAN_INFO_0_ID NULL
#define PCE_INITIAL_SCANLINE_LABEL_ID NULL
#define PCE_INITIAL_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_3_ID NULL
#define PCE_LAST_SCANLINE_LABEL_ID NULL
#define PCE_LAST_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_242_ID NULL
#define PCE_PSGREVISION_LABEL_ID NULL
#define PCE_PSGREVISION_INFO_0_ID NULL
#define OPTION_VAL_HUC6280_ID NULL
#define OPTION_VAL_HUC6280A_ID NULL
#define PCE_RESAMP_QUALITY_LABEL_ID NULL
#define PCE_RESAMP_QUALITY_INFO_0_ID NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ID "Tampilkan Lanjutan Pengaturan Masukan/Bertubi"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ID NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_ID "Sensivitas Mouse"
#define PCE_MOUSE_SENSITIVITY_INFO_0_ID NULL
#define OPTION_VAL_0_125_ID NULL
#define OPTION_VAL_0_250_ID NULL
#define OPTION_VAL_0_375_ID NULL
#define OPTION_VAL_0_500_ID NULL
#define OPTION_VAL_0_625_ID NULL
#define OPTION_VAL_0_750_ID NULL
#define OPTION_VAL_0_875_ID NULL
#define OPTION_VAL_1_000_ID NULL
#define OPTION_VAL_1_125_ID NULL
#define OPTION_VAL_1_25_ID NULL
#define OPTION_VAL_1_50_ID NULL
#define OPTION_VAL_1_75_ID NULL
#define OPTION_VAL_2_00_ID NULL
#define OPTION_VAL_2_25_ID NULL
#define OPTION_VAL_2_50_ID NULL
#define OPTION_VAL_2_75_ID NULL
#define OPTION_VAL_3_00_ID NULL
#define OPTION_VAL_3_25_ID NULL
#define OPTION_VAL_3_50_ID NULL
#define OPTION_VAL_3_75_ID NULL
#define OPTION_VAL_4_00_ID NULL
#define OPTION_VAL_4_25_ID NULL
#define OPTION_VAL_4_50_ID NULL
#define OPTION_VAL_4_75_ID NULL
#define OPTION_VAL_5_00_ID NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_ID NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_ID NULL
#define PCE_DISABLE_SOFTRESET_LABEL_ID NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_ID NULL
#define PCE_MULTITAP_LABEL_ID NULL
#define PCE_MULTITAP_INFO_0_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ID NULL
#define OPTION_VAL_2_BUTTONS_ID NULL
#define OPTION_VAL_6_BUTTONS_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_ID NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ID NULL
#define PCE_TURBO_TOGGLING_LABEL_ID NULL
#define PCE_TURBO_TOGGLING_INFO_0_ID NULL
#define OPTION_VAL_TOGGLE_ID NULL
#define OPTION_VAL_ALWAYS_ID NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_ID NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_ID NULL
#define PCE_TURBO_DELAY_LABEL_ID "Kecepatan Bertubi"
#define PCE_TURBO_DELAY_INFO_0_ID NULL
#define OPTION_VAL_FAST_ID NULL
#define OPTION_VAL_MEDIUM_ID NULL
#define OPTION_VAL_SLOW_ID NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_ID NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_ID NULL
#define PCE_CDIMAGECACHE_LABEL_ID NULL
#define PCE_CDIMAGECACHE_INFO_0_ID NULL
#define PCE_CDBIOS_LABEL_ID NULL
#define PCE_CDBIOS_INFO_0_ID NULL
#define OPTION_VAL_GAMES_EXPRESS_ID NULL
#define OPTION_VAL_SYSTEM_CARD_1_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_ID NULL
#define PCE_ARCADECARD_LABEL_ID NULL
#define PCE_ARCADECARD_INFO_0_ID NULL
#define PCE_CDSPEED_LABEL_ID NULL
#define PCE_CDSPEED_LABEL_CAT_ID NULL
#define PCE_CDSPEED_INFO_0_ID NULL
#define PCE_ADPCMEXTRAPREC_LABEL_ID NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_ID NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_ID NULL
#define OPTION_VAL_10_BIT_ID NULL
#define OPTION_VAL_12_BIT_ID NULL
#define PCE_ADPCMVOLUME_LABEL_ID NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_ID NULL
#define PCE_ADPCMVOLUME_INFO_0_ID NULL
#define PCE_ADPCMVOLUME_INFO_1_ID NULL
#define PCE_CDDAVOLUME_LABEL_ID NULL
#define PCE_CDDAVOLUME_LABEL_CAT_ID NULL
#define PCE_CDPSGVOLUME_LABEL_ID NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_ID NULL
#define PCE_NOSPRITELIMIT_LABEL_ID NULL
#define PCE_NOSPRITELIMIT_INFO_0_ID NULL
#define PCE_OCMULTIPLIER_LABEL_ID NULL
#define PCE_OCMULTIPLIER_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ID,
      CATEGORY_VIDEO_INFO_0_ID
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ID,
      CATEGORY_AUDIO_INFO_0_ID
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ID,
      CATEGORY_HACKS_INFO_0_ID
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ID,
      CATEGORY_CD_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_ID,
      NULL,
      PCE_PALETTE_INFO_0_ID,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ID },
         { "Composite", OPTION_VAL_COMPOSITE_ID },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_ID,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_ID,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "6:5", OPTION_VAL_6_5_ID },
         { "4:3", OPTION_VAL_4_3_ID },
         { "uncorrected", OPTION_VAL_UNCORRECTED_ID },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_ID,
      NULL,
      PCE_SCALING_INFO_0_ID,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "lores", OPTION_VAL_LORES_ID },
         { "hires", OPTION_VAL_HIRES_ID },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_ID,
      NULL,
      PCE_HIRES_BLEND_INFO_0_ID,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_ID,
      NULL,
      PCE_H_OVERSCAN_INFO_0_ID,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_ID,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_ID,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ID },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_ID,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_ID,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_ID },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_ID,
      NULL,
      PCE_PSGREVISION_INFO_0_ID,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_ID },
         { "HuC6280A", OPTION_VAL_HUC6280A_ID },
         { "auto", OPTION_VAL_AUTO_ID },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_ID,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ID },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_ID,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_ID,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_ID,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_ID },
         { "0.250", OPTION_VAL_0_250_ID },
         { "0.375", OPTION_VAL_0_375_ID },
         { "0.500", OPTION_VAL_0_500_ID },
         { "0.625", OPTION_VAL_0_625_ID },
         { "0.750", OPTION_VAL_0_750_ID },
         { "0.875", OPTION_VAL_0_875_ID },
         { "1.000", OPTION_VAL_1_000_ID },
         { "1.125", OPTION_VAL_1_125_ID },
         { "1.25", OPTION_VAL_1_25_ID },
         { "1.50", OPTION_VAL_1_50_ID },
         { "1.75", OPTION_VAL_1_75_ID },
         { "2.00", OPTION_VAL_2_00_ID },
         { "2.25", OPTION_VAL_2_25_ID },
         { "2.50", OPTION_VAL_2_50_ID },
         { "2.75", OPTION_VAL_2_75_ID },
         { "3.00", OPTION_VAL_3_00_ID },
         { "3.25", OPTION_VAL_3_25_ID },
         { "3.50", OPTION_VAL_3_50_ID },
         { "3.75", OPTION_VAL_3_75_ID },
         { "4.00", OPTION_VAL_4_00_ID },
         { "4.25", OPTION_VAL_4_25_ID },
         { "4.50", OPTION_VAL_4_50_ID },
         { "4.75", OPTION_VAL_4_75_ID },
         { "5.00", OPTION_VAL_5_00_ID },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_ID,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_ID,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_ID,
      NULL,
      PCE_MULTITAP_INFO_0_ID,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_ID,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_ID,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_ID,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_ID,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_ID,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_ID,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_ID },
         { "always", OPTION_VAL_ALWAYS_ID },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_ID,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_ID,
      NULL,
      PCE_TURBO_DELAY_INFO_0_ID,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_ID },
         { "Medium", OPTION_VAL_MEDIUM_ID },
         { "Slow", OPTION_VAL_SLOW_ID },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_ID,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_ID,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_ID,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_ID,
      NULL,
      PCE_CDBIOS_INFO_0_ID,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ID },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ID },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ID },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ID },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_ID },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_ID },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_ID,
      NULL,
      PCE_ARCADECARD_INFO_0_ID,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_ID,
      PCE_CDSPEED_LABEL_CAT_ID,
      PCE_CDSPEED_INFO_0_ID,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_ID,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_ID,
      PCE_ADPCMEXTRAPREC_INFO_0_ID,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_ID },
         { "12-bit", OPTION_VAL_12_BIT_ID },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_ID,
      PCE_ADPCMVOLUME_LABEL_CAT_ID,
      PCE_ADPCMVOLUME_INFO_0_ID,
      PCE_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_ID,
      PCE_CDDAVOLUME_LABEL_CAT_ID,
      PCE_ADPCMVOLUME_INFO_0_ID,
      PCE_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_ID,
      PCE_CDPSGVOLUME_LABEL_CAT_ID,
      PCE_ADPCMVOLUME_INFO_0_ID,
      PCE_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_ID,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_ID,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT "Configura proporzioni, visualizza il ritaglio e altri parametri di output dell'immagine."
#define CATEGORY_AUDIO_LABEL_IT NULL
#define CATEGORY_AUDIO_INFO_0_IT "Configurare i dispositivi audio emulati."
#define CATEGORY_INPUT_LABEL_IT NULL
#define CATEGORY_INPUT_INFO_0_IT "Configura la pistola luminosa, il mouse e l'input del regolatore."
#define CATEGORY_HACKS_LABEL_IT "Hack di Emulazione"
#define CATEGORY_HACKS_INFO_0_IT "Configura i parametri di precisione di overclocking e emulazione del processore che influenzano prestazioni e compatibilità di basso livello."
#define CATEGORY_CD_LABEL_IT NULL
#define CATEGORY_CD_INFO_0_IT "Configurare le impostazioni relative all'emulazione del CD del motore del PC."
#define PCE_PALETTE_LABEL_IT "Tavolozza Colore"
#define PCE_PALETTE_INFO_0_IT "Composito cerca di ricreare l'output originale della console e può mostrare maggiori dettagli in alcuni giochi."
#define OPTION_VAL_RGB_IT NULL
#define OPTION_VAL_COMPOSITE_IT "Composito"
#define PCE_ASPECT_RATIO_LABEL_IT "Rapporto Dimensioni"
#define PCE_ASPECT_RATIO_INFO_0_IT "Scegli le proporzioni preferite del contenuto. Questo si applicherà solo quando le proporzioni di RetroArc sono impostate su 'Core fornito' nelle impostazioni del video."
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_6_5_IT NULL
#define OPTION_VAL_4_3_IT NULL
#define OPTION_VAL_UNCORRECTED_IT "Non Corretto"
#define PCE_SCALING_LABEL_IT "Scala Risoluzione"
#define PCE_SCALING_INFO_0_IT "'Auto' permetterà alla risoluzione di cambiare. 'Bassa Risoluzione' può frantumare i pixel. 'Alta Risoluzione' resterà sulla larghezza massima."
#define OPTION_VAL_LORES_IT "Bassa Risoluzione"
#define OPTION_VAL_HIRES_IT "Alta Risoluzione"
#define PCE_HIRES_BLEND_LABEL_IT "Forza Di Miscelazione Ad Alta Risoluzione"
#define PCE_HIRES_BLEND_INFO_0_IT "Sfuma i pixel insieme quando in modalità alta risoluzione. Valori più alti sfoceranno ulteriormente l'immagine."
#define PCE_H_OVERSCAN_LABEL_IT NULL
#define PCE_H_OVERSCAN_INFO_0_IT "'Auto' cercherà di adattarsi ai giochi, ritagliando aree vuote."
#define PCE_INITIAL_SCANLINE_LABEL_IT "Scanline Iniziale"
#define PCE_INITIAL_SCANLINE_INFO_0_IT "Prima scanline renderizzata. Valori più alti ritaglieranno la parte superiore dell'immagine."
#define OPTION_VAL_3_IT "3 (Predefinito)"
#define PCE_LAST_SCANLINE_LABEL_IT "Ultima Scanline"
#define PCE_LAST_SCANLINE_INFO_0_IT "Ultima scanline renderizzata. I valori più bassi ritaglieranno la parte inferiore dell'immagine."
#define OPTION_VAL_242_IT "242 (predefinito)"
#define PCE_PSGREVISION_LABEL_IT "PSG Audio Chip (Riavvio Richiesto)"
#define PCE_PSGREVISION_INFO_0_IT "HuC6280 rappresenta il motore PC originale, HuC6280A il SuperGrafx e CoreGrafx I."
#define OPTION_VAL_HUC6280_IT NULL
#define OPTION_VAL_HUC6280A_IT NULL
#define PCE_RESAMP_QUALITY_LABEL_IT "Qualità Del Owl Resampler"
#define PCE_RESAMP_QUALITY_INFO_0_IT "Valori più alti danno un migliore rapporto segnale-rumore e la conservazione di frequenze più elevate, ma aumentano il costo di calcolo e possono causare una maggiore latenza e ritaglio se il volume è impostato troppo alto."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_IT "Mostra Impostazioni Avanzate Di Ingresso/Turbo"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_IT "Mostra Multitap, Mouse, Turbo Buttons e parametri avanzati. NOTA: Potrebbe essere necessario tornare in gioco e reinserire il menu per aggiornare l'elenco."
#define PCE_MOUSE_SENSITIVITY_LABEL_IT "Sensibilità Mouse"
#define PCE_MOUSE_SENSITIVITY_INFO_0_IT "Valori più alti renderanno il cursore del mouse più veloce."
#define OPTION_VAL_0_125_IT NULL
#define OPTION_VAL_0_250_IT NULL
#define OPTION_VAL_0_375_IT NULL
#define OPTION_VAL_0_500_IT NULL
#define OPTION_VAL_0_625_IT NULL
#define OPTION_VAL_0_750_IT NULL
#define OPTION_VAL_0_875_IT NULL
#define OPTION_VAL_1_000_IT NULL
#define OPTION_VAL_1_125_IT NULL
#define OPTION_VAL_1_25_IT NULL
#define OPTION_VAL_1_50_IT NULL
#define OPTION_VAL_1_75_IT NULL
#define OPTION_VAL_2_00_IT NULL
#define OPTION_VAL_2_25_IT NULL
#define OPTION_VAL_2_50_IT NULL
#define OPTION_VAL_2_75_IT NULL
#define OPTION_VAL_3_00_IT NULL
#define OPTION_VAL_3_25_IT NULL
#define OPTION_VAL_3_50_IT NULL
#define OPTION_VAL_3_75_IT NULL
#define OPTION_VAL_4_00_IT NULL
#define OPTION_VAL_4_25_IT NULL
#define OPTION_VAL_4_50_IT NULL
#define OPTION_VAL_4_75_IT NULL
#define OPTION_VAL_5_00_IT NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_IT "Permetti Direzioni Opposte"
#define PCE_UP_DOWN_ALLOWED_INFO_0_IT "Abilitando questa opzione sarà possibile premere / alternare rapidamente / tenere contemporaneamente sia le direzioni sinistra che destra (o su e giù). Ciò può causare problemi di movimento."
#define PCE_DISABLE_SOFTRESET_LABEL_IT "Disabilita Soft Reset (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_IT "Quando RUN e SELECT vengono premuti contemporaneamente, disabilitare temporaneamente entrambi i pulsanti invece di reimpostare."
#define PCE_MULTITAP_LABEL_IT NULL
#define PCE_MULTITAP_INFO_0_IT "Abilita l'emulazione multitap fino a 5 giocatori. Disabilitarla è necessaria solo in alcuni casi (ad esempio Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_IT "Tipo Joypad Predefinito P1"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_IT "Scegli se la porta 1 joypad deve essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define OPTION_VAL_2_BUTTONS_IT "2 Bottoni"
#define OPTION_VAL_6_BUTTONS_IT "6 Bottoni"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_IT "Tipo Joypad Predefinito P2"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_IT "Scegli se la porta 2 joypad deve essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_IT "Tipo Joypad Predefinito P3"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_IT "Scegli se la porta 3 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_IT "Tipo Joypad Predefinito P4"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_IT "Scegli se la porta 4 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_IT "Tipo Joypad Predefinito P5"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_IT "Scegli se la porta 5 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_TURBO_TOGGLING_LABEL_IT "Modalità Scorciatoia Turbo"
#define PCE_TURBO_TOGGLING_INFO_0_IT "Abilita i pulsanti turbo. I tasti di scelta rapida (pulsanti III e IV) possono comportarsi come interruttori o pulsanti turbo dedicati (tenere premuto per usare)."
#define OPTION_VAL_TOGGLE_IT "Interrutore"
#define OPTION_VAL_ALWAYS_IT "Dedicato"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_IT "Scorciatoia Turbo Alternativa"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_IT "Assegnare i pulsanti RetroPad's L3/R3 come tasti di scelta rapida turbo invece dei pulsanti III e IV. Funziona solo in modalità 'Interruttore' e solo finché non viene assegnato nulla ai pulsanti L3/R3. È possibile evitare di remapping i pulsanti III e IV quando si passa alla modalità controller a 6 pulsanti con questo."
#define PCE_TURBO_DELAY_LABEL_IT "Velocità Turbo"
#define PCE_TURBO_DELAY_INFO_0_IT "Scegli quanto velocemente vengono ripetute le pressioni dei pulsanti."
#define OPTION_VAL_FAST_IT "Veloce"
#define OPTION_VAL_MEDIUM_IT "Medio"
#define OPTION_VAL_SLOW_IT "Lento"
#define PCE_P0_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_IT NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_IT NULL
#define PCE_CDIMAGECACHE_LABEL_IT "Cache Immagine CD (Riavvio Richiesto)"
#define PCE_CDIMAGECACHE_INFO_0_IT "Carica l'immagine completa in memoria all'avvio. Può potenzialmente diminuire i tempi di caricamento al costo di un aumento del tempo di avvio."
#define PCE_CDBIOS_LABEL_IT "Bios Cd (Riavvio Richiesto)"
#define PCE_CDBIOS_INFO_0_IT "La maggior parte dei giochi può essere eseguita su 'System Card 3'. 'Games Express' è necessario per diversi giochi senza licenza."
#define OPTION_VAL_GAMES_EXPRESS_IT NULL
#define OPTION_VAL_SYSTEM_CARD_1_IT "Scheda Di Sistema 1"
#define OPTION_VAL_SYSTEM_CARD_2_IT "Scheda Di Sistema 2"
#define OPTION_VAL_SYSTEM_CARD_3_IT "Scheda Di Sistema 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_IT "Scheda Di Sistema 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_IT "Scheda Di Sistema 3 US"
#define PCE_ARCADECARD_LABEL_IT "Carta Arcade (Riavvio Richiesto)"
#define PCE_ARCADECARD_INFO_0_IT "Lascia questa opzione abilitata per consentire modalità migliorate di giochi SCD migliorati con ACD."
#define PCE_CDSPEED_LABEL_IT "(CD) Velocità CD"
#define PCE_CDSPEED_LABEL_CAT_IT "Velocità CD"
#define PCE_CDSPEED_INFO_0_IT "Valori più elevati consentono tempi di caricamento più rapidi, ma possono causare problemi con un paio di giochi."
#define PCE_ADPCMEXTRAPREC_LABEL_IT "(CD) Precisione ADPCM"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_IT "Precisione ADPCM"
#define PCE_ADPCMEXTRAPREC_INFO_0_IT "La massima precisione di 12 bit per il predicatore ADPCM MSM5205 può ridurre il rumore pieni durante la riproduzione ADPCM."
#define OPTION_VAL_10_BIT_IT NULL
#define OPTION_VAL_12_BIT_IT NULL
#define PCE_ADPCMVOLUME_LABEL_IT "(CD) Volume ADPCM %"
#define PCE_ADPCMVOLUME_LABEL_CAT_IT "Volume ADPCM %"
#define PCE_ADPCMVOLUME_INFO_0_IT "Solo gioco di CD. Impostare questo controllo del volume troppo alto può causare ritaglio di campione."
#define PCE_ADPCMVOLUME_INFO_1_IT "Impostare questo controllo del volume troppo alto può causare clip di campione."
#define PCE_CDDAVOLUME_LABEL_IT "(CD) Volume CDDA %"
#define PCE_CDDAVOLUME_LABEL_CAT_IT "Volume CDDA %"
#define PCE_CDPSGVOLUME_LABEL_IT NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_IT NULL
#define PCE_NOSPRITELIMIT_LABEL_IT "Nessun Limite Sprite"
#define PCE_NOSPRITELIMIT_INFO_0_IT "Rimuovi il limite hardware di 16 sprites per linea. ATTENZIONE: Potrebbe causare glitch grafici in qualche gioco (come Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_IT "Moltiplicatore Overclock CPU"
#define PCE_OCMULTIPLIER_INFO_0_IT "Valori più alti possono ridurre i rallentamenti dei giochi. ATTENZIONE: può causare problemi e crash."

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_IT,
      CATEGORY_VIDEO_INFO_0_IT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_IT,
      CATEGORY_AUDIO_INFO_0_IT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_IT,
      CATEGORY_HACKS_INFO_0_IT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_IT,
      CATEGORY_CD_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_IT,
      NULL,
      PCE_PALETTE_INFO_0_IT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_IT },
         { "Composite", OPTION_VAL_COMPOSITE_IT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_IT,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_IT,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "6:5", OPTION_VAL_6_5_IT },
         { "4:3", OPTION_VAL_4_3_IT },
         { "uncorrected", OPTION_VAL_UNCORRECTED_IT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_IT,
      NULL,
      PCE_SCALING_INFO_0_IT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "lores", OPTION_VAL_LORES_IT },
         { "hires", OPTION_VAL_HIRES_IT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_IT,
      NULL,
      PCE_HIRES_BLEND_INFO_0_IT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_IT,
      NULL,
      PCE_H_OVERSCAN_INFO_0_IT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_IT,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_IT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_IT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_IT,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_IT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_IT },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_IT,
      NULL,
      PCE_PSGREVISION_INFO_0_IT,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_IT },
         { "HuC6280A", OPTION_VAL_HUC6280A_IT },
         { "auto", OPTION_VAL_AUTO_IT },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_IT,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_IT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_IT,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_IT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_IT,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_IT },
         { "0.250", OPTION_VAL_0_250_IT },
         { "0.375", OPTION_VAL_0_375_IT },
         { "0.500", OPTION_VAL_0_500_IT },
         { "0.625", OPTION_VAL_0_625_IT },
         { "0.750", OPTION_VAL_0_750_IT },
         { "0.875", OPTION_VAL_0_875_IT },
         { "1.000", OPTION_VAL_1_000_IT },
         { "1.125", OPTION_VAL_1_125_IT },
         { "1.25", OPTION_VAL_1_25_IT },
         { "1.50", OPTION_VAL_1_50_IT },
         { "1.75", OPTION_VAL_1_75_IT },
         { "2.00", OPTION_VAL_2_00_IT },
         { "2.25", OPTION_VAL_2_25_IT },
         { "2.50", OPTION_VAL_2_50_IT },
         { "2.75", OPTION_VAL_2_75_IT },
         { "3.00", OPTION_VAL_3_00_IT },
         { "3.25", OPTION_VAL_3_25_IT },
         { "3.50", OPTION_VAL_3_50_IT },
         { "3.75", OPTION_VAL_3_75_IT },
         { "4.00", OPTION_VAL_4_00_IT },
         { "4.25", OPTION_VAL_4_25_IT },
         { "4.50", OPTION_VAL_4_50_IT },
         { "4.75", OPTION_VAL_4_75_IT },
         { "5.00", OPTION_VAL_5_00_IT },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_IT,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_IT,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_IT,
      NULL,
      PCE_MULTITAP_INFO_0_IT,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_IT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_IT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_IT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_IT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_IT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_IT,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_IT },
         { "always", OPTION_VAL_ALWAYS_IT },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_IT,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_IT,
      NULL,
      PCE_TURBO_DELAY_INFO_0_IT,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_IT },
         { "Medium", OPTION_VAL_MEDIUM_IT },
         { "Slow", OPTION_VAL_SLOW_IT },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_IT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_IT,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_IT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_IT,
      NULL,
      PCE_CDBIOS_INFO_0_IT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_IT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_IT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_IT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_IT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_IT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_IT },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_IT,
      NULL,
      PCE_ARCADECARD_INFO_0_IT,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_IT,
      PCE_CDSPEED_LABEL_CAT_IT,
      PCE_CDSPEED_INFO_0_IT,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_IT,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_IT,
      PCE_ADPCMEXTRAPREC_INFO_0_IT,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_IT },
         { "12-bit", OPTION_VAL_12_BIT_IT },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_IT,
      PCE_ADPCMVOLUME_LABEL_CAT_IT,
      PCE_ADPCMVOLUME_INFO_0_IT,
      PCE_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_IT,
      PCE_CDDAVOLUME_LABEL_CAT_IT,
      PCE_ADPCMVOLUME_INFO_0_IT,
      PCE_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_IT,
      PCE_CDPSGVOLUME_LABEL_CAT_IT,
      PCE_ADPCMVOLUME_INFO_0_IT,
      PCE_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_IT,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_IT,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_VIDEO_LABEL_JA "ビデオ"
#define CATEGORY_VIDEO_INFO_0_JA "アスペクト比、画面のトリミングおよび他の画像出力パラメータを設定します。"
#define CATEGORY_AUDIO_LABEL_JA "オーディオ"
#define CATEGORY_AUDIO_INFO_0_JA "エミュレートされたオーディオデバイスを設定します。"
#define CATEGORY_INPUT_LABEL_JA "入力"
#define CATEGORY_INPUT_INFO_0_JA "ライトガン、マウスおよびコントローラーの入力を設定します。"
#define CATEGORY_HACKS_LABEL_JA "エミュレーションハック"
#define CATEGORY_HACKS_INFO_0_JA "低レベルパフォーマンスと互換性に影響を与えるプロセッサのオーバークロックとエミュレーション精度のパラメータを設定します。"
#define CATEGORY_CD_LABEL_JA "PC エンジン CD"
#define CATEGORY_CD_INFO_0_JA "PC エンジン CD のエミュレーションに関連する設定を変更します。"
#define PCE_PALETTE_LABEL_JA "カラーパレット"
#define PCE_PALETTE_INFO_0_JA "コンポジットはオリジナルのコンソール出力の再現を試み、一部のゲームでさらなるディテールを表示することができます。"
#define OPTION_VAL_RGB_JA NULL
#define OPTION_VAL_COMPOSITE_JA "コンポジット"
#define PCE_ASPECT_RATIO_LABEL_JA "アスペクト比"
#define PCE_ASPECT_RATIO_INFO_0_JA "コンテンツの優先アスペクト比を選択します。RetroArch のアスペクト比がビデオ設定で [コア提供] に設定されている場合にのみ適用されます。"
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_6_5_JA NULL
#define OPTION_VAL_4_3_JA NULL
#define OPTION_VAL_UNCORRECTED_JA "補正なし"
#define PCE_SCALING_LABEL_JA NULL
#define PCE_SCALING_INFO_0_JA NULL
#define OPTION_VAL_LORES_JA "低解像度"
#define OPTION_VAL_HIRES_JA "高解像度"
#define PCE_HIRES_BLEND_LABEL_JA NULL
#define PCE_HIRES_BLEND_INFO_0_JA NULL
#define PCE_H_OVERSCAN_LABEL_JA "水平オーバースキャンを表示"
#define PCE_H_OVERSCAN_INFO_0_JA NULL
#define PCE_INITIAL_SCANLINE_LABEL_JA "初期スキャンライン"
#define PCE_INITIAL_SCANLINE_INFO_0_JA "最初に描画されるスキャンラインです。値を大きくするほどイメージの上部がトリミングされます。"
#define OPTION_VAL_3_JA "3 (デフォルト)"
#define PCE_LAST_SCANLINE_LABEL_JA "最終スキャンライン"
#define PCE_LAST_SCANLINE_INFO_0_JA "最後に描画されるスキャンラインです。値を小さくするほどイメージの下部がトリミングされます。"
#define OPTION_VAL_242_JA "242 (デフォルト)"
#define PCE_PSGREVISION_LABEL_JA "PSG オーディオチップ (再起動が必要)"
#define PCE_PSGREVISION_INFO_0_JA "HuC6280 はオリジナルの PC エンジンを、HuC6280A はスーパーグラフィックスおよびコアグラフィックス I を表します。"
#define OPTION_VAL_HUC6280_JA NULL
#define OPTION_VAL_HUC6280A_JA NULL
#define PCE_RESAMP_QUALITY_LABEL_JA NULL
#define PCE_RESAMP_QUALITY_INFO_0_JA NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_JA "高度な入力/ターボ設定を表示"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_JA NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_JA "マウス感度"
#define PCE_MOUSE_SENSITIVITY_INFO_0_JA "値を大きくするほどマウスカーソルの動きが速くなります。"
#define OPTION_VAL_0_125_JA NULL
#define OPTION_VAL_0_250_JA NULL
#define OPTION_VAL_0_375_JA NULL
#define OPTION_VAL_0_500_JA NULL
#define OPTION_VAL_0_625_JA NULL
#define OPTION_VAL_0_750_JA NULL
#define OPTION_VAL_0_875_JA NULL
#define OPTION_VAL_1_000_JA NULL
#define OPTION_VAL_1_125_JA NULL
#define OPTION_VAL_1_25_JA NULL
#define OPTION_VAL_1_50_JA NULL
#define OPTION_VAL_1_75_JA NULL
#define OPTION_VAL_2_00_JA NULL
#define OPTION_VAL_2_25_JA NULL
#define OPTION_VAL_2_50_JA NULL
#define OPTION_VAL_2_75_JA NULL
#define OPTION_VAL_3_00_JA NULL
#define OPTION_VAL_3_25_JA NULL
#define OPTION_VAL_3_50_JA NULL
#define OPTION_VAL_3_75_JA NULL
#define OPTION_VAL_4_00_JA NULL
#define OPTION_VAL_4_25_JA NULL
#define OPTION_VAL_4_50_JA NULL
#define OPTION_VAL_4_75_JA NULL
#define OPTION_VAL_5_00_JA NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_JA "逆方向入力を許可"
#define PCE_UP_DOWN_ALLOWED_INFO_0_JA "有効にすると、左右 (または上下) 方向の同時押し / 高速交互押し / 長押しが可能になります。動作に不具合が生じる場合があります。"
#define PCE_DISABLE_SOFTRESET_LABEL_JA "ソフトリセットを無効にする (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_JA "RUN と SELECT が同時に押された時に、リセットの代わりに一時的に両方のボタンを無効にします。"
#define PCE_MULTITAP_LABEL_JA "マルチタップ 5 ポートコントローラー"
#define PCE_MULTITAP_INFO_0_JA NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_JA "P1 デフォルトジョイパッドの種類"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_JA "ポート 1 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define OPTION_VAL_2_BUTTONS_JA "2 ボタン"
#define OPTION_VAL_6_BUTTONS_JA "6 ボタン"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_JA "P2 デフォルトジョイパッドの種類"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_JA "ポート 2 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_JA "P3 デフォルトジョイパッドの種類"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_JA "ポート 3 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_JA "P4 デフォルトジョイパッドの種類"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_JA "ポート 4 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_JA "P5 デフォルトジョイパッドの種類"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_JA "ポート 5 のジョイパッドをデフォルトで 2 または 6 ボタンにするかどうかを選択します。このオプションはコアの開始時にのみ適用されます。コンテンツの実行中に切り替えたい場合は、[モード切り替え] ボタンを使用してください。注意: 6 ボタンジョイパッドは互換性のないゲームで奇妙な動作をすることがあります。"
#define PCE_TURBO_TOGGLING_LABEL_JA "ターボホットキーモード"
#define PCE_TURBO_TOGGLING_INFO_0_JA NULL
#define OPTION_VAL_TOGGLE_JA "切り替え"
#define OPTION_VAL_ALWAYS_JA NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_JA "代替ターボホットキー"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_JA "ボタン III と IV ではなく、レトロパッドの L3/R3 ボタンにターボホットキーを割り当てます。 [切り替え] モードかつ、L3/R3 に何も割り当てられていない場合にのみ動作します。これにより、6 ボタンコントローラーモードに切り替えた際、ボタン II および IV へのリマップを回避することができます。"
#define PCE_TURBO_DELAY_LABEL_JA "ターボ速度"
#define PCE_TURBO_DELAY_INFO_0_JA NULL
#define OPTION_VAL_FAST_JA "高速"
#define OPTION_VAL_MEDIUM_JA "中"
#define OPTION_VAL_SLOW_JA "遅い"
#define PCE_P0_TURBO_I_ENABLE_LABEL_JA "P1 ターボ I"
#define PCE_P0_TURBO_II_ENABLE_LABEL_JA "P1 ターボ II"
#define PCE_P1_TURBO_I_ENABLE_LABEL_JA "P2 ターボ I"
#define PCE_P1_TURBO_II_ENABLE_LABEL_JA "P2 ターボ II"
#define PCE_P2_TURBO_I_ENABLE_LABEL_JA "P3 ターボ I"
#define PCE_P2_TURBO_II_ENABLE_LABEL_JA "P3 ターボ II"
#define PCE_P3_TURBO_I_ENABLE_LABEL_JA "P4 ターボ I"
#define PCE_P3_TURBO_II_ENABLE_LABEL_JA "P4 ターボ II"
#define PCE_P4_TURBO_I_ENABLE_LABEL_JA "P5 ターボ I"
#define PCE_P4_TURBO_II_ENABLE_LABEL_JA "P5 ターボ II"
#define PCE_CDIMAGECACHE_LABEL_JA "CD イメージキャッシュ (再起動が必要)"
#define PCE_CDIMAGECACHE_INFO_0_JA "起動時に完全なイメージをメモリにロードします。起動時間が増す代わりにロード時間が短縮される可能性があります。"
#define PCE_CDBIOS_LABEL_JA "CD BIOS (再起動が必要)"
#define PCE_CDBIOS_INFO_0_JA "ほとんどのゲームは [システムカード 3] で実行できます。[Game Express] はいくつかの非公認ゲームで必要です。"
#define OPTION_VAL_GAMES_EXPRESS_JA NULL
#define OPTION_VAL_SYSTEM_CARD_1_JA "システムカード 1"
#define OPTION_VAL_SYSTEM_CARD_2_JA "システムカード 2"
#define OPTION_VAL_SYSTEM_CARD_3_JA "システムカード 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_JA "システムカード 2 北米"
#define OPTION_VAL_SYSTEM_CARD_3_US_JA "システムカード 3 北米"
#define PCE_ARCADECARD_LABEL_JA "アーケードカード (再起動が必要)"
#define PCE_ARCADECARD_INFO_0_JA "ACD 対応SCD ゲームのACDモードを許可するには、このオプションを有効にしておきます。"
#define PCE_CDSPEED_LABEL_JA "(CD) CD 速度"
#define PCE_CDSPEED_LABEL_CAT_JA "CD 速度"
#define PCE_CDSPEED_INFO_0_JA "値を大きくするほど読み込み時間を高速化できますが、いくつかのゲームで問題が発生する可能性があります。"
#define PCE_ADPCMEXTRAPREC_LABEL_JA "(CD) ADPCM 精度"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_JA "ADPCM 精度"
#define PCE_ADPCMEXTRAPREC_INFO_0_JA NULL
#define OPTION_VAL_10_BIT_JA NULL
#define OPTION_VAL_12_BIT_JA NULL
#define PCE_ADPCMVOLUME_LABEL_JA "(CD) ADPCM 音量 %"
#define PCE_ADPCMVOLUME_LABEL_CAT_JA "ADPCM 音量 %"
#define PCE_ADPCMVOLUME_INFO_0_JA "CD ゲームのみです。この音量を高く設定しすぎるとサンプルクリッピングが発生する可能性があります。"
#define PCE_ADPCMVOLUME_INFO_1_JA NULL
#define PCE_CDDAVOLUME_LABEL_JA "(CD) CDDA 音量 %"
#define PCE_CDDAVOLUME_LABEL_CAT_JA "CD-DA 音量 %"
#define PCE_CDPSGVOLUME_LABEL_JA "(CD) CD PSG 音量 %"
#define PCE_CDPSGVOLUME_LABEL_CAT_JA "CD PSG 音量 %"
#define PCE_NOSPRITELIMIT_LABEL_JA "スプライト制限なし"
#define PCE_NOSPRITELIMIT_INFO_0_JA "スキャンラインあたりの16スプライトのハードウェア制限を削除します。警告: ゲームによってはグラフィックが乱れる可能性があります。(ブラッディーウルフなど)"
#define PCE_OCMULTIPLIER_LABEL_JA "CPUオーバークロック倍率"
#define PCE_OCMULTIPLIER_INFO_0_JA "値を大きくするほどゲームの実行速度の低下を軽減できます。警告: 不具合やクラッシュを引き起こす可能性があります。"

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_JA,
      CATEGORY_VIDEO_INFO_0_JA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_JA,
      CATEGORY_AUDIO_INFO_0_JA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_JA,
      CATEGORY_HACKS_INFO_0_JA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_JA,
      CATEGORY_CD_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_JA,
      NULL,
      PCE_PALETTE_INFO_0_JA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_JA },
         { "Composite", OPTION_VAL_COMPOSITE_JA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_JA,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_JA,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "6:5", OPTION_VAL_6_5_JA },
         { "4:3", OPTION_VAL_4_3_JA },
         { "uncorrected", OPTION_VAL_UNCORRECTED_JA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_JA,
      NULL,
      PCE_SCALING_INFO_0_JA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "lores", OPTION_VAL_LORES_JA },
         { "hires", OPTION_VAL_HIRES_JA },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_JA,
      NULL,
      PCE_HIRES_BLEND_INFO_0_JA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_JA,
      NULL,
      PCE_H_OVERSCAN_INFO_0_JA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_JA,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_JA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_JA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_JA,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_JA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_JA },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_JA,
      NULL,
      PCE_PSGREVISION_INFO_0_JA,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_JA },
         { "HuC6280A", OPTION_VAL_HUC6280A_JA },
         { "auto", OPTION_VAL_AUTO_JA },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_JA,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_JA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_JA,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_JA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_JA,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_JA },
         { "0.250", OPTION_VAL_0_250_JA },
         { "0.375", OPTION_VAL_0_375_JA },
         { "0.500", OPTION_VAL_0_500_JA },
         { "0.625", OPTION_VAL_0_625_JA },
         { "0.750", OPTION_VAL_0_750_JA },
         { "0.875", OPTION_VAL_0_875_JA },
         { "1.000", OPTION_VAL_1_000_JA },
         { "1.125", OPTION_VAL_1_125_JA },
         { "1.25", OPTION_VAL_1_25_JA },
         { "1.50", OPTION_VAL_1_50_JA },
         { "1.75", OPTION_VAL_1_75_JA },
         { "2.00", OPTION_VAL_2_00_JA },
         { "2.25", OPTION_VAL_2_25_JA },
         { "2.50", OPTION_VAL_2_50_JA },
         { "2.75", OPTION_VAL_2_75_JA },
         { "3.00", OPTION_VAL_3_00_JA },
         { "3.25", OPTION_VAL_3_25_JA },
         { "3.50", OPTION_VAL_3_50_JA },
         { "3.75", OPTION_VAL_3_75_JA },
         { "4.00", OPTION_VAL_4_00_JA },
         { "4.25", OPTION_VAL_4_25_JA },
         { "4.50", OPTION_VAL_4_50_JA },
         { "4.75", OPTION_VAL_4_75_JA },
         { "5.00", OPTION_VAL_5_00_JA },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_JA,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_JA,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_JA,
      NULL,
      PCE_MULTITAP_INFO_0_JA,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_JA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_JA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_JA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_JA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_JA,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_JA,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_JA },
         { "always", OPTION_VAL_ALWAYS_JA },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_JA,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_JA,
      NULL,
      PCE_TURBO_DELAY_INFO_0_JA,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_JA },
         { "Medium", OPTION_VAL_MEDIUM_JA },
         { "Slow", OPTION_VAL_SLOW_JA },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_JA,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_JA,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_JA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_JA,
      NULL,
      PCE_CDBIOS_INFO_0_JA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_JA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_JA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_JA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_JA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_JA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_JA },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_JA,
      NULL,
      PCE_ARCADECARD_INFO_0_JA,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_JA,
      PCE_CDSPEED_LABEL_CAT_JA,
      PCE_CDSPEED_INFO_0_JA,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_JA,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_JA,
      PCE_ADPCMEXTRAPREC_INFO_0_JA,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_JA },
         { "12-bit", OPTION_VAL_12_BIT_JA },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_JA,
      PCE_ADPCMVOLUME_LABEL_CAT_JA,
      PCE_ADPCMVOLUME_INFO_0_JA,
      PCE_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_JA,
      PCE_CDDAVOLUME_LABEL_CAT_JA,
      PCE_ADPCMVOLUME_INFO_0_JA,
      PCE_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_JA,
      PCE_CDPSGVOLUME_LABEL_CAT_JA,
      PCE_ADPCMVOLUME_INFO_0_JA,
      PCE_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_JA,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_JA,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_VIDEO_LABEL_KO "비디오"
#define CATEGORY_VIDEO_INFO_0_KO "화면 비 및 화면 자르기 등 기타 이미지 출력 매개변수를 구성합니다."
#define CATEGORY_AUDIO_LABEL_KO "오디오"
#define CATEGORY_AUDIO_INFO_0_KO "에뮬레이트되는 오디오 장치를 설정합니다."
#define CATEGORY_INPUT_LABEL_KO "입력"
#define CATEGORY_INPUT_INFO_0_KO "라이트 건, 마우스 및 컨트롤러 입력 등을 설정합니다."
#define CATEGORY_HACKS_LABEL_KO "에뮬레이션 핵"
#define CATEGORY_HACKS_INFO_0_KO "성능과 호환성에 영향을 끼치는 프로세서 오버클러킹 및 에뮬레이션 정확도 옵션 등을 설정합니다."
#define CATEGORY_CD_LABEL_KO NULL
#define CATEGORY_CD_INFO_0_KO "PC Engine CD 에뮬레이션과 관련된 설정을 구성합니다."
#define PCE_PALETTE_LABEL_KO "색상 팔레트"
#define PCE_PALETTE_INFO_0_KO "컴포지트는 원본 콘솔 출력을 재현하며 일부 게임에서 더 디테일하게 표시될 수 있습니다."
#define OPTION_VAL_RGB_KO NULL
#define OPTION_VAL_COMPOSITE_KO "컴포지트"
#define PCE_ASPECT_RATIO_LABEL_KO "화면비"
#define PCE_ASPECT_RATIO_INFO_0_KO "선호하는 컨텐츠 화면비를 선택합니다. RetroArch의 비디오 설정에서 화면비가 'Core provided'로 설정되어 있어야 적용됩니다."
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_6_5_KO NULL
#define OPTION_VAL_4_3_KO NULL
#define OPTION_VAL_UNCORRECTED_KO "교정 안 됨"
#define PCE_SCALING_LABEL_KO "해상도 배율"
#define PCE_SCALING_INFO_0_KO "'자동'을 선택하면 해상도를 변경합니다. '저해상도'는 픽셀이 망가질 수 있고 '고해상도'는 최대 너비로 유지됩니다."
#define OPTION_VAL_LORES_KO "저해상도"
#define OPTION_VAL_HIRES_KO "고해상도"
#define PCE_HIRES_BLEND_LABEL_KO "고해상도 블렌딩 강도"
#define PCE_HIRES_BLEND_INFO_0_KO "고해상도 모드에서 픽셀을 혼합합니다. 값이 높을수록 화면이 더 흐려집니다."
#define PCE_H_OVERSCAN_LABEL_KO "가로 오버스캔 표시하기"
#define PCE_H_OVERSCAN_INFO_0_KO "'자동'으로 설정하면 게임에 맞춰 빈 공간을 잘라냅니다."
#define PCE_INITIAL_SCANLINE_LABEL_KO "최초 스캔라인"
#define PCE_INITIAL_SCANLINE_INFO_0_KO "첫 번째 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 상단이 잘립니다."
#define OPTION_VAL_3_KO "3 (기본)"
#define PCE_LAST_SCANLINE_LABEL_KO "마지막 스캔라인"
#define PCE_LAST_SCANLINE_INFO_0_KO "마지막으로 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 하단이 잘립니다."
#define OPTION_VAL_242_KO "242 (기본)"
#define PCE_PSGREVISION_LABEL_KO "PSG 오디오 칩 (재시작 필요)"
#define PCE_PSGREVISION_INFO_0_KO "HuC6280은 오리지널 PC Engine, HuC6280A는 SuperGrafx 및 CoreGrafx I에 사용됩니다."
#define OPTION_VAL_HUC6280_KO NULL
#define OPTION_VAL_HUC6280A_KO NULL
#define PCE_RESAMP_QUALITY_LABEL_KO "Owl 리샘플러 품질"
#define PCE_RESAMP_QUALITY_INFO_0_KO "값이 높을수록 더 나은 신호 대비 잡음비를 제공하고 더 높은 주파수를 보존하지만 계산 비용이 증가하고 볼륨이 너무 높게 설정되면 더 높은 대기 시간과 클리핑이 발생할 수 있습니다."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_KO "고급 입력/터보 설정 표시"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_KO "멀티탭, 마우스, 터보 버튼, 고급 매개변수 표시합니다. 참고: 목록을 새로 고치려면 게임으로 돌아가서 메뉴에 다시 들어가야 할 수 있습니다."
#define PCE_MOUSE_SENSITIVITY_LABEL_KO "마우스 감도"
#define PCE_MOUSE_SENSITIVITY_INFO_0_KO "값이 높을수록 마우스 커서가 더 빠르게 움직입니다."
#define OPTION_VAL_0_125_KO NULL
#define OPTION_VAL_0_250_KO NULL
#define OPTION_VAL_0_375_KO NULL
#define OPTION_VAL_0_500_KO NULL
#define OPTION_VAL_0_625_KO NULL
#define OPTION_VAL_0_750_KO NULL
#define OPTION_VAL_0_875_KO NULL
#define OPTION_VAL_1_000_KO NULL
#define OPTION_VAL_1_125_KO NULL
#define OPTION_VAL_1_25_KO NULL
#define OPTION_VAL_1_50_KO NULL
#define OPTION_VAL_1_75_KO NULL
#define OPTION_VAL_2_00_KO NULL
#define OPTION_VAL_2_25_KO NULL
#define OPTION_VAL_2_50_KO NULL
#define OPTION_VAL_2_75_KO NULL
#define OPTION_VAL_3_00_KO NULL
#define OPTION_VAL_3_25_KO NULL
#define OPTION_VAL_3_50_KO NULL
#define OPTION_VAL_3_75_KO NULL
#define OPTION_VAL_4_00_KO NULL
#define OPTION_VAL_4_25_KO NULL
#define OPTION_VAL_4_50_KO NULL
#define OPTION_VAL_4_75_KO NULL
#define OPTION_VAL_5_00_KO NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_KO "반대 방향 동시 입력 허용"
#define PCE_UP_DOWN_ALLOWED_INFO_0_KO "이 옵션을 활성화하면 왼쪽과 오른쪽 (또는 위쪽과 아래쪽) 방향 입력을 동시에 누르거나 빠르게 번갈아 누르는 것을 허용합니다. 이는 움직임 관련 버그를 일으킬 수 있습니다."
#define PCE_DISABLE_SOFTRESET_LABEL_KO "소프트 리셋 비활성화 (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_KO "RUN과 SELECT를 동시에 누르면 리셋하는 대신 두 버튼을 일시적으로 비활성화합니다."
#define PCE_MULTITAP_LABEL_KO "멀티탭 5포트 컨트롤러"
#define PCE_MULTITAP_INFO_0_KO "최대 5인까지 지원하는 멀티탭 에뮬레이션을 활성화합니다. 비활성화는 일부 경우에만 필요합니다(예: Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_KO "P1 기본 조이패드 유형"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_KO "포트 1 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define OPTION_VAL_2_BUTTONS_KO "2 버튼"
#define OPTION_VAL_6_BUTTONS_KO "6 버튼"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_KO "P2 기본 조이패드 유형"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_KO "포트 2 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_KO "P3 기본 조이패드 유형"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_KO "포트 3 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_KO "P4 기본 조이패드 유형"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_KO "포트 4 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_KO "P5 기본 조이패드 유형"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_KO "포트 5 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_TURBO_TOGGLING_LABEL_KO "터포 핫키 모드"
#define PCE_TURBO_TOGGLING_INFO_0_KO "터보 버튼을 활성화합니다. 핫키(버튼 III 및 IV)는 토글 스위치 또는 전용(길게 눌러 사용) 터보 버튼으로 작동할 수 있습니다."
#define OPTION_VAL_TOGGLE_KO "토글"
#define OPTION_VAL_ALWAYS_KO "전용"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_KO "대체 터보 핫키"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_KO "레트로 패드의 L3/R3 버튼을 버튼 III 및 IV 대신 터보 핫키로 할당합니다. '토글' 모드에서 L3/R3 버튼에 아무 것도 할당되지 않은 경우에만 작동합니다. 이를 통해 6버튼 컨트롤러 모드로 전환할 때 버튼 III 및 IV를 다시 설정해야하는 것을 방지할 수 있습니다."
#define PCE_TURBO_DELAY_LABEL_KO "터보 속도"
#define PCE_TURBO_DELAY_INFO_0_KO "버튼 연사 속도를 선택합니다."
#define OPTION_VAL_FAST_KO "빠르게"
#define OPTION_VAL_MEDIUM_KO "중간"
#define OPTION_VAL_SLOW_KO "느리게"
#define PCE_P0_TURBO_I_ENABLE_LABEL_KO "P1 터보 I"
#define PCE_P0_TURBO_II_ENABLE_LABEL_KO "P1 터보 II"
#define PCE_P1_TURBO_I_ENABLE_LABEL_KO "P2 터보 I"
#define PCE_P1_TURBO_II_ENABLE_LABEL_KO "P2 터보 II"
#define PCE_P2_TURBO_I_ENABLE_LABEL_KO "P3 터보 I"
#define PCE_P2_TURBO_II_ENABLE_LABEL_KO "P3 터보 II"
#define PCE_P3_TURBO_I_ENABLE_LABEL_KO "P4 터보 I"
#define PCE_P3_TURBO_II_ENABLE_LABEL_KO "P4 터보 II"
#define PCE_P4_TURBO_I_ENABLE_LABEL_KO "P5 터보 I"
#define PCE_P4_TURBO_II_ENABLE_LABEL_KO "P5 터보 II"
#define PCE_CDIMAGECACHE_LABEL_KO "CD 이미지 캐시 (재시작 필요)"
#define PCE_CDIMAGECACHE_INFO_0_KO "시작할 때 전체 이미지를 메모리에 불러옵니다. 시작 시간이 늘어나는 대신 로딩 시간을 잠재적으로 줄일 수 있습니다."
#define PCE_CDBIOS_LABEL_KO "CD BIOS (재시작 필요)"
#define PCE_CDBIOS_INFO_0_KO "대부분의 게임은 'System Card 3'에서 실행할 수 있습니다. 'Games Express'는 라이선스가 없는 게임에서 필요합니다."
#define OPTION_VAL_GAMES_EXPRESS_KO NULL
#define OPTION_VAL_SYSTEM_CARD_1_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_KO NULL
#define PCE_ARCADECARD_LABEL_KO "아케이드 카드 (재시작 필요)"
#define PCE_ARCADECARD_INFO_0_KO "ACD향상 SCD 게임의 향상된 모드를 허용하려면 이 옵션을 활성하십시오.."
#define PCE_CDSPEED_LABEL_KO "(CD) CD 속도"
#define PCE_CDSPEED_LABEL_CAT_KO "CD 속도"
#define PCE_CDSPEED_INFO_0_KO "값이 높을수록 로딩 시간이 빨라지지만 몇 가지 게임에서 문제가 발생할 수 있습니다."
#define PCE_ADPCMEXTRAPREC_LABEL_KO "(CD) ADPCM 정밀도"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_KO "ADPCM 정밀도"
#define PCE_ADPCMEXTRAPREC_INFO_0_KO "MSM5205 ADPCM 예측에 대한 12비트 전체 정밀도는 ADPCM 재생 중 잡음을 줄일 수 있습니다."
#define OPTION_VAL_10_BIT_KO "10 비트"
#define OPTION_VAL_12_BIT_KO "12 비트"
#define PCE_ADPCMVOLUME_LABEL_KO "(CD) ADPCM 볼륨 %"
#define PCE_ADPCMVOLUME_LABEL_CAT_KO "ADPCM 볼륨 %"
#define PCE_ADPCMVOLUME_INFO_0_KO "CD 게임에 해당합니다. 볼륨을 너무 높게 설정하면 샘플 클리핑이 발생할 수 있습니다."
#define PCE_ADPCMVOLUME_INFO_1_KO "볼륨을 너무 높게 설정하면 샘플 클리핑이 발생할 수 있습니다."
#define PCE_CDDAVOLUME_LABEL_KO "(CD) CDDA 음량 %"
#define PCE_CDDAVOLUME_LABEL_CAT_KO "CDDA 음량 %"
#define PCE_CDPSGVOLUME_LABEL_KO "(CD) CD PSG 볼륨 %"
#define PCE_CDPSGVOLUME_LABEL_CAT_KO "CD PSG 볼륨 %"
#define PCE_NOSPRITELIMIT_LABEL_KO "스프라이트 제한 해제"
#define PCE_NOSPRITELIMIT_INFO_0_KO "스캔라인 당 16개의 스프라이트 하드웨어 제한을 제거합니다. 경고: 일부 게임에서 그래픽 결함이 발생할 수 있습니다(예: Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_KO "CPU 오버클럭 배수"
#define PCE_OCMULTIPLIER_INFO_0_KO "값이 높을수록 게임의 속도 저하를 줄일 수 있습니다. 경고: 결함 및 충돌이 발생할 수 있습니다."

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_KO,
      CATEGORY_VIDEO_INFO_0_KO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_KO,
      CATEGORY_AUDIO_INFO_0_KO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_KO,
      CATEGORY_HACKS_INFO_0_KO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_KO,
      CATEGORY_CD_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_KO,
      NULL,
      PCE_PALETTE_INFO_0_KO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_KO },
         { "Composite", OPTION_VAL_COMPOSITE_KO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_KO,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_KO,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "6:5", OPTION_VAL_6_5_KO },
         { "4:3", OPTION_VAL_4_3_KO },
         { "uncorrected", OPTION_VAL_UNCORRECTED_KO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_KO,
      NULL,
      PCE_SCALING_INFO_0_KO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "lores", OPTION_VAL_LORES_KO },
         { "hires", OPTION_VAL_HIRES_KO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_KO,
      NULL,
      PCE_HIRES_BLEND_INFO_0_KO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_KO,
      NULL,
      PCE_H_OVERSCAN_INFO_0_KO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_KO,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_KO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_KO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_KO,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_KO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_KO },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_KO,
      NULL,
      PCE_PSGREVISION_INFO_0_KO,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_KO },
         { "HuC6280A", OPTION_VAL_HUC6280A_KO },
         { "auto", OPTION_VAL_AUTO_KO },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_KO,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_KO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_KO,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_KO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_KO,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_KO },
         { "0.250", OPTION_VAL_0_250_KO },
         { "0.375", OPTION_VAL_0_375_KO },
         { "0.500", OPTION_VAL_0_500_KO },
         { "0.625", OPTION_VAL_0_625_KO },
         { "0.750", OPTION_VAL_0_750_KO },
         { "0.875", OPTION_VAL_0_875_KO },
         { "1.000", OPTION_VAL_1_000_KO },
         { "1.125", OPTION_VAL_1_125_KO },
         { "1.25", OPTION_VAL_1_25_KO },
         { "1.50", OPTION_VAL_1_50_KO },
         { "1.75", OPTION_VAL_1_75_KO },
         { "2.00", OPTION_VAL_2_00_KO },
         { "2.25", OPTION_VAL_2_25_KO },
         { "2.50", OPTION_VAL_2_50_KO },
         { "2.75", OPTION_VAL_2_75_KO },
         { "3.00", OPTION_VAL_3_00_KO },
         { "3.25", OPTION_VAL_3_25_KO },
         { "3.50", OPTION_VAL_3_50_KO },
         { "3.75", OPTION_VAL_3_75_KO },
         { "4.00", OPTION_VAL_4_00_KO },
         { "4.25", OPTION_VAL_4_25_KO },
         { "4.50", OPTION_VAL_4_50_KO },
         { "4.75", OPTION_VAL_4_75_KO },
         { "5.00", OPTION_VAL_5_00_KO },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_KO,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_KO,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_KO,
      NULL,
      PCE_MULTITAP_INFO_0_KO,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_KO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_KO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_KO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_KO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_KO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_KO,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_KO },
         { "always", OPTION_VAL_ALWAYS_KO },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_KO,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_KO,
      NULL,
      PCE_TURBO_DELAY_INFO_0_KO,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_KO },
         { "Medium", OPTION_VAL_MEDIUM_KO },
         { "Slow", OPTION_VAL_SLOW_KO },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_KO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_KO,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_KO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_KO,
      NULL,
      PCE_CDBIOS_INFO_0_KO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_KO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_KO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_KO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_KO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_KO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_KO },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_KO,
      NULL,
      PCE_ARCADECARD_INFO_0_KO,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_KO,
      PCE_CDSPEED_LABEL_CAT_KO,
      PCE_CDSPEED_INFO_0_KO,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_KO,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_KO,
      PCE_ADPCMEXTRAPREC_INFO_0_KO,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_KO },
         { "12-bit", OPTION_VAL_12_BIT_KO },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_KO,
      PCE_ADPCMVOLUME_LABEL_CAT_KO,
      PCE_ADPCMVOLUME_INFO_0_KO,
      PCE_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_KO,
      PCE_CDDAVOLUME_LABEL_CAT_KO,
      PCE_ADPCMVOLUME_INFO_0_KO,
      PCE_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_KO,
      PCE_CDPSGVOLUME_LABEL_CAT_KO,
      PCE_ADPCMVOLUME_INFO_0_KO,
      PCE_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_KO,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_KO,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL NULL
#define CATEGORY_AUDIO_LABEL_NL "Geluid"
#define CATEGORY_AUDIO_INFO_0_NL NULL
#define CATEGORY_INPUT_LABEL_NL "Invoer"
#define CATEGORY_INPUT_INFO_0_NL NULL
#define CATEGORY_HACKS_LABEL_NL NULL
#define CATEGORY_HACKS_INFO_0_NL NULL
#define CATEGORY_CD_LABEL_NL NULL
#define CATEGORY_CD_INFO_0_NL NULL
#define PCE_PALETTE_LABEL_NL NULL
#define PCE_PALETTE_INFO_0_NL NULL
#define OPTION_VAL_RGB_NL NULL
#define OPTION_VAL_COMPOSITE_NL NULL
#define PCE_ASPECT_RATIO_LABEL_NL "Beeldverhouding"
#define PCE_ASPECT_RATIO_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define OPTION_VAL_6_5_NL NULL
#define OPTION_VAL_4_3_NL NULL
#define OPTION_VAL_UNCORRECTED_NL NULL
#define PCE_SCALING_LABEL_NL NULL
#define PCE_SCALING_INFO_0_NL NULL
#define OPTION_VAL_LORES_NL NULL
#define OPTION_VAL_HIRES_NL NULL
#define PCE_HIRES_BLEND_LABEL_NL NULL
#define PCE_HIRES_BLEND_INFO_0_NL NULL
#define PCE_H_OVERSCAN_LABEL_NL NULL
#define PCE_H_OVERSCAN_INFO_0_NL NULL
#define PCE_INITIAL_SCANLINE_LABEL_NL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_3_NL NULL
#define PCE_LAST_SCANLINE_LABEL_NL NULL
#define PCE_LAST_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_242_NL NULL
#define PCE_PSGREVISION_LABEL_NL NULL
#define PCE_PSGREVISION_INFO_0_NL NULL
#define OPTION_VAL_HUC6280_NL NULL
#define OPTION_VAL_HUC6280A_NL NULL
#define PCE_RESAMP_QUALITY_LABEL_NL NULL
#define PCE_RESAMP_QUALITY_INFO_0_NL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_NL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_NL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_NL NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_NL NULL
#define OPTION_VAL_0_125_NL NULL
#define OPTION_VAL_0_250_NL NULL
#define OPTION_VAL_0_375_NL NULL
#define OPTION_VAL_0_500_NL NULL
#define OPTION_VAL_0_625_NL NULL
#define OPTION_VAL_0_750_NL NULL
#define OPTION_VAL_0_875_NL NULL
#define OPTION_VAL_1_000_NL NULL
#define OPTION_VAL_1_125_NL NULL
#define OPTION_VAL_1_25_NL NULL
#define OPTION_VAL_1_50_NL NULL
#define OPTION_VAL_1_75_NL NULL
#define OPTION_VAL_2_00_NL NULL
#define OPTION_VAL_2_25_NL NULL
#define OPTION_VAL_2_50_NL NULL
#define OPTION_VAL_2_75_NL NULL
#define OPTION_VAL_3_00_NL NULL
#define OPTION_VAL_3_25_NL NULL
#define OPTION_VAL_3_50_NL NULL
#define OPTION_VAL_3_75_NL NULL
#define OPTION_VAL_4_00_NL NULL
#define OPTION_VAL_4_25_NL NULL
#define OPTION_VAL_4_50_NL NULL
#define OPTION_VAL_4_75_NL NULL
#define OPTION_VAL_5_00_NL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_NL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_NL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_NL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_NL NULL
#define PCE_MULTITAP_LABEL_NL NULL
#define PCE_MULTITAP_INFO_0_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NL NULL
#define OPTION_VAL_2_BUTTONS_NL NULL
#define OPTION_VAL_6_BUTTONS_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_NL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NL NULL
#define PCE_TURBO_TOGGLING_LABEL_NL NULL
#define PCE_TURBO_TOGGLING_INFO_0_NL NULL
#define OPTION_VAL_TOGGLE_NL NULL
#define OPTION_VAL_ALWAYS_NL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_NL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_NL NULL
#define PCE_TURBO_DELAY_LABEL_NL NULL
#define PCE_TURBO_DELAY_INFO_0_NL NULL
#define OPTION_VAL_FAST_NL NULL
#define OPTION_VAL_MEDIUM_NL NULL
#define OPTION_VAL_SLOW_NL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_NL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_NL NULL
#define PCE_CDIMAGECACHE_LABEL_NL NULL
#define PCE_CDIMAGECACHE_INFO_0_NL NULL
#define PCE_CDBIOS_LABEL_NL NULL
#define PCE_CDBIOS_INFO_0_NL NULL
#define OPTION_VAL_GAMES_EXPRESS_NL NULL
#define OPTION_VAL_SYSTEM_CARD_1_NL NULL
#define OPTION_VAL_SYSTEM_CARD_2_NL NULL
#define OPTION_VAL_SYSTEM_CARD_3_NL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_NL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_NL NULL
#define PCE_ARCADECARD_LABEL_NL NULL
#define PCE_ARCADECARD_INFO_0_NL NULL
#define PCE_CDSPEED_LABEL_NL NULL
#define PCE_CDSPEED_LABEL_CAT_NL NULL
#define PCE_CDSPEED_INFO_0_NL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_NL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_NL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_NL NULL
#define OPTION_VAL_10_BIT_NL NULL
#define OPTION_VAL_12_BIT_NL NULL
#define PCE_ADPCMVOLUME_LABEL_NL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_NL NULL
#define PCE_ADPCMVOLUME_INFO_0_NL NULL
#define PCE_ADPCMVOLUME_INFO_1_NL NULL
#define PCE_CDDAVOLUME_LABEL_NL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_NL NULL
#define PCE_CDPSGVOLUME_LABEL_NL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_NL NULL
#define PCE_NOSPRITELIMIT_LABEL_NL NULL
#define PCE_NOSPRITELIMIT_INFO_0_NL NULL
#define PCE_OCMULTIPLIER_LABEL_NL NULL
#define PCE_OCMULTIPLIER_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NL,
      CATEGORY_VIDEO_INFO_0_NL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NL,
      CATEGORY_AUDIO_INFO_0_NL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NL,
      CATEGORY_HACKS_INFO_0_NL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_NL,
      CATEGORY_CD_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_NL,
      NULL,
      PCE_PALETTE_INFO_0_NL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_NL },
         { "Composite", OPTION_VAL_COMPOSITE_NL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_NL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_NL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "6:5", OPTION_VAL_6_5_NL },
         { "4:3", OPTION_VAL_4_3_NL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_NL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_NL,
      NULL,
      PCE_SCALING_INFO_0_NL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "lores", OPTION_VAL_LORES_NL },
         { "hires", OPTION_VAL_HIRES_NL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_NL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_NL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_NL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_NL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_NL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_NL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_NL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_NL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_NL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_NL,
      NULL,
      PCE_PSGREVISION_INFO_0_NL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_NL },
         { "HuC6280A", OPTION_VAL_HUC6280A_NL },
         { "auto", OPTION_VAL_AUTO_NL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_NL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_NL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_NL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_NL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_NL },
         { "0.250", OPTION_VAL_0_250_NL },
         { "0.375", OPTION_VAL_0_375_NL },
         { "0.500", OPTION_VAL_0_500_NL },
         { "0.625", OPTION_VAL_0_625_NL },
         { "0.750", OPTION_VAL_0_750_NL },
         { "0.875", OPTION_VAL_0_875_NL },
         { "1.000", OPTION_VAL_1_000_NL },
         { "1.125", OPTION_VAL_1_125_NL },
         { "1.25", OPTION_VAL_1_25_NL },
         { "1.50", OPTION_VAL_1_50_NL },
         { "1.75", OPTION_VAL_1_75_NL },
         { "2.00", OPTION_VAL_2_00_NL },
         { "2.25", OPTION_VAL_2_25_NL },
         { "2.50", OPTION_VAL_2_50_NL },
         { "2.75", OPTION_VAL_2_75_NL },
         { "3.00", OPTION_VAL_3_00_NL },
         { "3.25", OPTION_VAL_3_25_NL },
         { "3.50", OPTION_VAL_3_50_NL },
         { "3.75", OPTION_VAL_3_75_NL },
         { "4.00", OPTION_VAL_4_00_NL },
         { "4.25", OPTION_VAL_4_25_NL },
         { "4.50", OPTION_VAL_4_50_NL },
         { "4.75", OPTION_VAL_4_75_NL },
         { "5.00", OPTION_VAL_5_00_NL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_NL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_NL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_NL,
      NULL,
      PCE_MULTITAP_INFO_0_NL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_NL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_NL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_NL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_NL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_NL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_NL,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_NL },
         { "always", OPTION_VAL_ALWAYS_NL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_NL,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_NL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_NL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_NL },
         { "Medium", OPTION_VAL_MEDIUM_NL },
         { "Slow", OPTION_VAL_SLOW_NL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_NL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_NL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_NL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_NL,
      NULL,
      PCE_CDBIOS_INFO_0_NL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_NL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_NL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_NL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_NL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_NL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_NL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_NL,
      NULL,
      PCE_ARCADECARD_INFO_0_NL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_NL,
      PCE_CDSPEED_LABEL_CAT_NL,
      PCE_CDSPEED_INFO_0_NL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_NL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_NL,
      PCE_ADPCMEXTRAPREC_INFO_0_NL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_NL },
         { "12-bit", OPTION_VAL_12_BIT_NL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_NL,
      PCE_ADPCMVOLUME_LABEL_CAT_NL,
      PCE_ADPCMVOLUME_INFO_0_NL,
      PCE_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_NL,
      PCE_CDDAVOLUME_LABEL_CAT_NL,
      PCE_ADPCMVOLUME_INFO_0_NL,
      PCE_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_NL,
      PCE_CDPSGVOLUME_LABEL_CAT_NL,
      PCE_ADPCMVOLUME_INFO_0_NL,
      PCE_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_NL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_NL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_VIDEO_LABEL_NO NULL
#define CATEGORY_VIDEO_INFO_0_NO NULL
#define CATEGORY_AUDIO_LABEL_NO "Lyd"
#define CATEGORY_AUDIO_INFO_0_NO NULL
#define CATEGORY_INPUT_LABEL_NO "Inndata"
#define CATEGORY_INPUT_INFO_0_NO NULL
#define CATEGORY_HACKS_LABEL_NO NULL
#define CATEGORY_HACKS_INFO_0_NO NULL
#define CATEGORY_CD_LABEL_NO NULL
#define CATEGORY_CD_INFO_0_NO NULL
#define PCE_PALETTE_LABEL_NO NULL
#define PCE_PALETTE_INFO_0_NO NULL
#define OPTION_VAL_RGB_NO NULL
#define OPTION_VAL_COMPOSITE_NO NULL
#define PCE_ASPECT_RATIO_LABEL_NO "Størrelsesforhold"
#define PCE_ASPECT_RATIO_INFO_0_NO NULL
#define OPTION_VAL_AUTO_NO NULL
#define OPTION_VAL_6_5_NO NULL
#define OPTION_VAL_4_3_NO NULL
#define OPTION_VAL_UNCORRECTED_NO NULL
#define PCE_SCALING_LABEL_NO NULL
#define PCE_SCALING_INFO_0_NO NULL
#define OPTION_VAL_LORES_NO NULL
#define OPTION_VAL_HIRES_NO NULL
#define PCE_HIRES_BLEND_LABEL_NO NULL
#define PCE_HIRES_BLEND_INFO_0_NO NULL
#define PCE_H_OVERSCAN_LABEL_NO NULL
#define PCE_H_OVERSCAN_INFO_0_NO NULL
#define PCE_INITIAL_SCANLINE_LABEL_NO NULL
#define PCE_INITIAL_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_3_NO NULL
#define PCE_LAST_SCANLINE_LABEL_NO NULL
#define PCE_LAST_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_242_NO NULL
#define PCE_PSGREVISION_LABEL_NO NULL
#define PCE_PSGREVISION_INFO_0_NO NULL
#define OPTION_VAL_HUC6280_NO NULL
#define OPTION_VAL_HUC6280A_NO NULL
#define PCE_RESAMP_QUALITY_LABEL_NO NULL
#define PCE_RESAMP_QUALITY_INFO_0_NO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_NO NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_NO NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_NO NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_NO NULL
#define OPTION_VAL_0_125_NO NULL
#define OPTION_VAL_0_250_NO NULL
#define OPTION_VAL_0_375_NO NULL
#define OPTION_VAL_0_500_NO NULL
#define OPTION_VAL_0_625_NO NULL
#define OPTION_VAL_0_750_NO NULL
#define OPTION_VAL_0_875_NO NULL
#define OPTION_VAL_1_000_NO NULL
#define OPTION_VAL_1_125_NO NULL
#define OPTION_VAL_1_25_NO NULL
#define OPTION_VAL_1_50_NO NULL
#define OPTION_VAL_1_75_NO NULL
#define OPTION_VAL_2_00_NO NULL
#define OPTION_VAL_2_25_NO NULL
#define OPTION_VAL_2_50_NO NULL
#define OPTION_VAL_2_75_NO NULL
#define OPTION_VAL_3_00_NO NULL
#define OPTION_VAL_3_25_NO NULL
#define OPTION_VAL_3_50_NO NULL
#define OPTION_VAL_3_75_NO NULL
#define OPTION_VAL_4_00_NO NULL
#define OPTION_VAL_4_25_NO NULL
#define OPTION_VAL_4_50_NO NULL
#define OPTION_VAL_4_75_NO NULL
#define OPTION_VAL_5_00_NO NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_NO NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_NO NULL
#define PCE_DISABLE_SOFTRESET_LABEL_NO NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_NO NULL
#define PCE_MULTITAP_LABEL_NO NULL
#define PCE_MULTITAP_INFO_0_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NO NULL
#define OPTION_VAL_2_BUTTONS_NO NULL
#define OPTION_VAL_6_BUTTONS_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_NO NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NO NULL
#define PCE_TURBO_TOGGLING_LABEL_NO NULL
#define PCE_TURBO_TOGGLING_INFO_0_NO NULL
#define OPTION_VAL_TOGGLE_NO NULL
#define OPTION_VAL_ALWAYS_NO NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_NO NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_NO NULL
#define PCE_TURBO_DELAY_LABEL_NO NULL
#define PCE_TURBO_DELAY_INFO_0_NO NULL
#define OPTION_VAL_FAST_NO NULL
#define OPTION_VAL_MEDIUM_NO NULL
#define OPTION_VAL_SLOW_NO NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_NO NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_NO NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_NO NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_NO NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_NO NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_NO NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_NO NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_NO NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_NO NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_NO NULL
#define PCE_CDIMAGECACHE_LABEL_NO NULL
#define PCE_CDIMAGECACHE_INFO_0_NO NULL
#define PCE_CDBIOS_LABEL_NO NULL
#define PCE_CDBIOS_INFO_0_NO NULL
#define OPTION_VAL_GAMES_EXPRESS_NO NULL
#define OPTION_VAL_SYSTEM_CARD_1_NO NULL
#define OPTION_VAL_SYSTEM_CARD_2_NO NULL
#define OPTION_VAL_SYSTEM_CARD_3_NO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_NO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_NO NULL
#define PCE_ARCADECARD_LABEL_NO NULL
#define PCE_ARCADECARD_INFO_0_NO NULL
#define PCE_CDSPEED_LABEL_NO NULL
#define PCE_CDSPEED_LABEL_CAT_NO NULL
#define PCE_CDSPEED_INFO_0_NO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_NO NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_NO NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_NO NULL
#define OPTION_VAL_10_BIT_NO NULL
#define OPTION_VAL_12_BIT_NO NULL
#define PCE_ADPCMVOLUME_LABEL_NO NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_NO NULL
#define PCE_ADPCMVOLUME_INFO_0_NO NULL
#define PCE_ADPCMVOLUME_INFO_1_NO NULL
#define PCE_CDDAVOLUME_LABEL_NO NULL
#define PCE_CDDAVOLUME_LABEL_CAT_NO NULL
#define PCE_CDPSGVOLUME_LABEL_NO NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_NO NULL
#define PCE_NOSPRITELIMIT_LABEL_NO NULL
#define PCE_NOSPRITELIMIT_INFO_0_NO NULL
#define PCE_OCMULTIPLIER_LABEL_NO NULL
#define PCE_OCMULTIPLIER_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NO,
      CATEGORY_VIDEO_INFO_0_NO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NO,
      CATEGORY_AUDIO_INFO_0_NO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NO,
      CATEGORY_INPUT_INFO_0_NO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NO,
      CATEGORY_HACKS_INFO_0_NO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_NO,
      CATEGORY_CD_INFO_0_NO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_NO,
      NULL,
      PCE_PALETTE_INFO_0_NO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_NO },
         { "Composite", OPTION_VAL_COMPOSITE_NO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_NO,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_NO,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NO },
         { "6:5", OPTION_VAL_6_5_NO },
         { "4:3", OPTION_VAL_4_3_NO },
         { "uncorrected", OPTION_VAL_UNCORRECTED_NO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_NO,
      NULL,
      PCE_SCALING_INFO_0_NO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NO },
         { "lores", OPTION_VAL_LORES_NO },
         { "hires", OPTION_VAL_HIRES_NO },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_NO,
      NULL,
      PCE_HIRES_BLEND_INFO_0_NO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_NO,
      NULL,
      PCE_H_OVERSCAN_INFO_0_NO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NO },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_NO,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_NO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_NO,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_NO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_NO },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_NO,
      NULL,
      PCE_PSGREVISION_INFO_0_NO,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_NO },
         { "HuC6280A", OPTION_VAL_HUC6280A_NO },
         { "auto", OPTION_VAL_AUTO_NO },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_NO,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_NO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_NO,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_NO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_NO,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_NO },
         { "0.250", OPTION_VAL_0_250_NO },
         { "0.375", OPTION_VAL_0_375_NO },
         { "0.500", OPTION_VAL_0_500_NO },
         { "0.625", OPTION_VAL_0_625_NO },
         { "0.750", OPTION_VAL_0_750_NO },
         { "0.875", OPTION_VAL_0_875_NO },
         { "1.000", OPTION_VAL_1_000_NO },
         { "1.125", OPTION_VAL_1_125_NO },
         { "1.25", OPTION_VAL_1_25_NO },
         { "1.50", OPTION_VAL_1_50_NO },
         { "1.75", OPTION_VAL_1_75_NO },
         { "2.00", OPTION_VAL_2_00_NO },
         { "2.25", OPTION_VAL_2_25_NO },
         { "2.50", OPTION_VAL_2_50_NO },
         { "2.75", OPTION_VAL_2_75_NO },
         { "3.00", OPTION_VAL_3_00_NO },
         { "3.25", OPTION_VAL_3_25_NO },
         { "3.50", OPTION_VAL_3_50_NO },
         { "3.75", OPTION_VAL_3_75_NO },
         { "4.00", OPTION_VAL_4_00_NO },
         { "4.25", OPTION_VAL_4_25_NO },
         { "4.50", OPTION_VAL_4_50_NO },
         { "4.75", OPTION_VAL_4_75_NO },
         { "5.00", OPTION_VAL_5_00_NO },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_NO,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_NO,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_NO,
      NULL,
      PCE_MULTITAP_INFO_0_NO,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_NO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_NO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_NO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_NO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_NO,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_NO,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_NO },
         { "always", OPTION_VAL_ALWAYS_NO },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_NO,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_NO,
      NULL,
      PCE_TURBO_DELAY_INFO_0_NO,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_NO },
         { "Medium", OPTION_VAL_MEDIUM_NO },
         { "Slow", OPTION_VAL_SLOW_NO },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_NO,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_NO,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_NO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_NO,
      NULL,
      PCE_CDBIOS_INFO_0_NO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_NO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_NO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_NO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_NO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_NO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_NO },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_NO,
      NULL,
      PCE_ARCADECARD_INFO_0_NO,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_NO,
      PCE_CDSPEED_LABEL_CAT_NO,
      PCE_CDSPEED_INFO_0_NO,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_NO,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_NO,
      PCE_ADPCMEXTRAPREC_INFO_0_NO,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_NO },
         { "12-bit", OPTION_VAL_12_BIT_NO },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_NO,
      PCE_ADPCMVOLUME_LABEL_CAT_NO,
      PCE_ADPCMVOLUME_INFO_0_NO,
      PCE_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_NO,
      PCE_CDDAVOLUME_LABEL_CAT_NO,
      PCE_ADPCMVOLUME_INFO_0_NO,
      PCE_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_NO,
      PCE_CDPSGVOLUME_LABEL_CAT_NO,
      PCE_ADPCMVOLUME_INFO_0_NO,
      PCE_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_NO,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_NO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_NO,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_NO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OR */

#define CATEGORY_VIDEO_LABEL_OR "ଵିଡ଼ିଓ"
#define CATEGORY_VIDEO_INFO_0_OR NULL
#define CATEGORY_AUDIO_LABEL_OR "ଅଡ଼ିଓ"
#define CATEGORY_AUDIO_INFO_0_OR NULL
#define CATEGORY_INPUT_LABEL_OR NULL
#define CATEGORY_INPUT_INFO_0_OR NULL
#define CATEGORY_HACKS_LABEL_OR NULL
#define CATEGORY_HACKS_INFO_0_OR NULL
#define CATEGORY_CD_LABEL_OR NULL
#define CATEGORY_CD_INFO_0_OR NULL
#define PCE_PALETTE_LABEL_OR NULL
#define PCE_PALETTE_INFO_0_OR NULL
#define OPTION_VAL_RGB_OR NULL
#define OPTION_VAL_COMPOSITE_OR NULL
#define PCE_ASPECT_RATIO_LABEL_OR NULL
#define PCE_ASPECT_RATIO_INFO_0_OR NULL
#define OPTION_VAL_AUTO_OR NULL
#define OPTION_VAL_6_5_OR NULL
#define OPTION_VAL_4_3_OR NULL
#define OPTION_VAL_UNCORRECTED_OR NULL
#define PCE_SCALING_LABEL_OR NULL
#define PCE_SCALING_INFO_0_OR NULL
#define OPTION_VAL_LORES_OR NULL
#define OPTION_VAL_HIRES_OR NULL
#define PCE_HIRES_BLEND_LABEL_OR NULL
#define PCE_HIRES_BLEND_INFO_0_OR NULL
#define PCE_H_OVERSCAN_LABEL_OR NULL
#define PCE_H_OVERSCAN_INFO_0_OR NULL
#define PCE_INITIAL_SCANLINE_LABEL_OR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_OR NULL
#define OPTION_VAL_3_OR NULL
#define PCE_LAST_SCANLINE_LABEL_OR NULL
#define PCE_LAST_SCANLINE_INFO_0_OR NULL
#define OPTION_VAL_242_OR NULL
#define PCE_PSGREVISION_LABEL_OR NULL
#define PCE_PSGREVISION_INFO_0_OR NULL
#define OPTION_VAL_HUC6280_OR NULL
#define OPTION_VAL_HUC6280A_OR NULL
#define PCE_RESAMP_QUALITY_LABEL_OR NULL
#define PCE_RESAMP_QUALITY_INFO_0_OR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_OR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_OR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_OR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_OR NULL
#define OPTION_VAL_0_125_OR NULL
#define OPTION_VAL_0_250_OR NULL
#define OPTION_VAL_0_375_OR NULL
#define OPTION_VAL_0_500_OR NULL
#define OPTION_VAL_0_625_OR NULL
#define OPTION_VAL_0_750_OR NULL
#define OPTION_VAL_0_875_OR NULL
#define OPTION_VAL_1_000_OR NULL
#define OPTION_VAL_1_125_OR NULL
#define OPTION_VAL_1_25_OR NULL
#define OPTION_VAL_1_50_OR NULL
#define OPTION_VAL_1_75_OR NULL
#define OPTION_VAL_2_00_OR NULL
#define OPTION_VAL_2_25_OR NULL
#define OPTION_VAL_2_50_OR NULL
#define OPTION_VAL_2_75_OR NULL
#define OPTION_VAL_3_00_OR NULL
#define OPTION_VAL_3_25_OR NULL
#define OPTION_VAL_3_50_OR NULL
#define OPTION_VAL_3_75_OR NULL
#define OPTION_VAL_4_00_OR NULL
#define OPTION_VAL_4_25_OR NULL
#define OPTION_VAL_4_50_OR NULL
#define OPTION_VAL_4_75_OR NULL
#define OPTION_VAL_5_00_OR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_OR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_OR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_OR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_OR NULL
#define PCE_MULTITAP_LABEL_OR NULL
#define PCE_MULTITAP_INFO_0_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_OR NULL
#define OPTION_VAL_2_BUTTONS_OR NULL
#define OPTION_VAL_6_BUTTONS_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_OR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_OR NULL
#define PCE_TURBO_TOGGLING_LABEL_OR NULL
#define PCE_TURBO_TOGGLING_INFO_0_OR NULL
#define OPTION_VAL_TOGGLE_OR NULL
#define OPTION_VAL_ALWAYS_OR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_OR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_OR NULL
#define PCE_TURBO_DELAY_LABEL_OR NULL
#define PCE_TURBO_DELAY_INFO_0_OR NULL
#define OPTION_VAL_FAST_OR NULL
#define OPTION_VAL_MEDIUM_OR NULL
#define OPTION_VAL_SLOW_OR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_OR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_OR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_OR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_OR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_OR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_OR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_OR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_OR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_OR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_OR NULL
#define PCE_CDIMAGECACHE_LABEL_OR NULL
#define PCE_CDIMAGECACHE_INFO_0_OR NULL
#define PCE_CDBIOS_LABEL_OR NULL
#define PCE_CDBIOS_INFO_0_OR NULL
#define OPTION_VAL_GAMES_EXPRESS_OR NULL
#define OPTION_VAL_SYSTEM_CARD_1_OR NULL
#define OPTION_VAL_SYSTEM_CARD_2_OR NULL
#define OPTION_VAL_SYSTEM_CARD_3_OR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_OR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_OR NULL
#define PCE_ARCADECARD_LABEL_OR NULL
#define PCE_ARCADECARD_INFO_0_OR NULL
#define PCE_CDSPEED_LABEL_OR NULL
#define PCE_CDSPEED_LABEL_CAT_OR NULL
#define PCE_CDSPEED_INFO_0_OR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_OR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_OR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_OR NULL
#define OPTION_VAL_10_BIT_OR NULL
#define OPTION_VAL_12_BIT_OR NULL
#define PCE_ADPCMVOLUME_LABEL_OR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_OR NULL
#define PCE_ADPCMVOLUME_INFO_0_OR NULL
#define PCE_ADPCMVOLUME_INFO_1_OR NULL
#define PCE_CDDAVOLUME_LABEL_OR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_OR NULL
#define PCE_CDPSGVOLUME_LABEL_OR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_OR NULL
#define PCE_NOSPRITELIMIT_LABEL_OR NULL
#define PCE_NOSPRITELIMIT_INFO_0_OR NULL
#define PCE_OCMULTIPLIER_LABEL_OR NULL
#define PCE_OCMULTIPLIER_INFO_0_OR NULL

struct retro_core_option_v2_category option_cats_or[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OR,
      CATEGORY_VIDEO_INFO_0_OR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_OR,
      CATEGORY_AUDIO_INFO_0_OR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OR,
      CATEGORY_INPUT_INFO_0_OR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_OR,
      CATEGORY_HACKS_INFO_0_OR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_OR,
      CATEGORY_CD_INFO_0_OR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_or[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_OR,
      NULL,
      PCE_PALETTE_INFO_0_OR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_OR },
         { "Composite", OPTION_VAL_COMPOSITE_OR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_OR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_OR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OR },
         { "6:5", OPTION_VAL_6_5_OR },
         { "4:3", OPTION_VAL_4_3_OR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_OR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_OR,
      NULL,
      PCE_SCALING_INFO_0_OR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OR },
         { "lores", OPTION_VAL_LORES_OR },
         { "hires", OPTION_VAL_HIRES_OR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_OR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_OR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_OR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_OR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_OR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_OR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_OR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_OR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_OR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_OR,
      NULL,
      PCE_PSGREVISION_INFO_0_OR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_OR },
         { "HuC6280A", OPTION_VAL_HUC6280A_OR },
         { "auto", OPTION_VAL_AUTO_OR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_OR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_OR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_OR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_OR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_OR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_OR },
         { "0.250", OPTION_VAL_0_250_OR },
         { "0.375", OPTION_VAL_0_375_OR },
         { "0.500", OPTION_VAL_0_500_OR },
         { "0.625", OPTION_VAL_0_625_OR },
         { "0.750", OPTION_VAL_0_750_OR },
         { "0.875", OPTION_VAL_0_875_OR },
         { "1.000", OPTION_VAL_1_000_OR },
         { "1.125", OPTION_VAL_1_125_OR },
         { "1.25", OPTION_VAL_1_25_OR },
         { "1.50", OPTION_VAL_1_50_OR },
         { "1.75", OPTION_VAL_1_75_OR },
         { "2.00", OPTION_VAL_2_00_OR },
         { "2.25", OPTION_VAL_2_25_OR },
         { "2.50", OPTION_VAL_2_50_OR },
         { "2.75", OPTION_VAL_2_75_OR },
         { "3.00", OPTION_VAL_3_00_OR },
         { "3.25", OPTION_VAL_3_25_OR },
         { "3.50", OPTION_VAL_3_50_OR },
         { "3.75", OPTION_VAL_3_75_OR },
         { "4.00", OPTION_VAL_4_00_OR },
         { "4.25", OPTION_VAL_4_25_OR },
         { "4.50", OPTION_VAL_4_50_OR },
         { "4.75", OPTION_VAL_4_75_OR },
         { "5.00", OPTION_VAL_5_00_OR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_OR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_OR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_OR,
      NULL,
      PCE_MULTITAP_INFO_0_OR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_OR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_OR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_OR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_OR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_OR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_OR,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_OR },
         { "always", OPTION_VAL_ALWAYS_OR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_OR,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_OR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_OR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_OR },
         { "Medium", OPTION_VAL_MEDIUM_OR },
         { "Slow", OPTION_VAL_SLOW_OR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_OR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_OR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_OR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_OR,
      NULL,
      PCE_CDBIOS_INFO_0_OR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_OR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_OR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_OR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_OR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_OR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_OR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_OR,
      NULL,
      PCE_ARCADECARD_INFO_0_OR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_OR,
      PCE_CDSPEED_LABEL_CAT_OR,
      PCE_CDSPEED_INFO_0_OR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_OR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_OR,
      PCE_ADPCMEXTRAPREC_INFO_0_OR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_OR },
         { "12-bit", OPTION_VAL_12_BIT_OR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_OR,
      PCE_ADPCMVOLUME_LABEL_CAT_OR,
      PCE_ADPCMVOLUME_INFO_0_OR,
      PCE_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_OR,
      PCE_CDDAVOLUME_LABEL_CAT_OR,
      PCE_ADPCMVOLUME_INFO_0_OR,
      PCE_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_OR,
      PCE_CDPSGVOLUME_LABEL_CAT_OR,
      PCE_ADPCMVOLUME_INFO_0_OR,
      PCE_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_OR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_OR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_OR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_OR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_or = {
   option_cats_or,
   option_defs_or
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_VIDEO_LABEL_PL "Wideo"
#define CATEGORY_VIDEO_INFO_0_PL "Skonfiguruj proporcje, wyświetlaj przycinanie i inne parametry wyjściowe obrazu."
#define CATEGORY_AUDIO_LABEL_PL NULL
#define CATEGORY_AUDIO_INFO_0_PL "Skonfiguruj emulowane urządzenia audio."
#define CATEGORY_INPUT_LABEL_PL "Wejście"
#define CATEGORY_INPUT_INFO_0_PL NULL
#define CATEGORY_HACKS_LABEL_PL "Hacki emulacyjne"
#define CATEGORY_HACKS_INFO_0_PL "Skonfiguruj przetaktowanie procesora i dokładność emulacji wpływające na niską wydajność i kompatybilność."
#define CATEGORY_CD_LABEL_PL NULL
#define CATEGORY_CD_INFO_0_PL "Skonfiguruj ustawienia związane z emulacją PC Engine CD."
#define PCE_PALETTE_LABEL_PL "Paleta kolorów"
#define PCE_PALETTE_INFO_0_PL NULL
#define OPTION_VAL_RGB_PL NULL
#define OPTION_VAL_COMPOSITE_PL "Kompozytowy"
#define PCE_ASPECT_RATIO_LABEL_PL "Współczynnik proporcji"
#define PCE_ASPECT_RATIO_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_6_5_PL NULL
#define OPTION_VAL_4_3_PL NULL
#define OPTION_VAL_UNCORRECTED_PL "Niepoprawione"
#define PCE_SCALING_LABEL_PL "Skalowanie rozdzielczości"
#define PCE_SCALING_INFO_0_PL NULL
#define OPTION_VAL_LORES_PL "Niska rozdzielczość"
#define OPTION_VAL_HIRES_PL "Wysoka rozdzielczość"
#define PCE_HIRES_BLEND_LABEL_PL NULL
#define PCE_HIRES_BLEND_INFO_0_PL NULL
#define PCE_H_OVERSCAN_LABEL_PL NULL
#define PCE_H_OVERSCAN_INFO_0_PL NULL
#define PCE_INITIAL_SCANLINE_LABEL_PL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_3_PL "3 (domyślnie)"
#define PCE_LAST_SCANLINE_LABEL_PL NULL
#define PCE_LAST_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_242_PL "242 (domyślnie)"
#define PCE_PSGREVISION_LABEL_PL NULL
#define PCE_PSGREVISION_INFO_0_PL NULL
#define OPTION_VAL_HUC6280_PL NULL
#define OPTION_VAL_HUC6280A_PL NULL
#define PCE_RESAMP_QUALITY_LABEL_PL NULL
#define PCE_RESAMP_QUALITY_INFO_0_PL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PL "Pokaż zaawansowane ustawienia wejścia/Turbo"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_PL "Czułość myszy"
#define PCE_MOUSE_SENSITIVITY_INFO_0_PL "Wyższe wartości sprawią, że kursor myszy będzie się szybszy."
#define OPTION_VAL_0_125_PL NULL
#define OPTION_VAL_0_250_PL NULL
#define OPTION_VAL_0_375_PL NULL
#define OPTION_VAL_0_500_PL NULL
#define OPTION_VAL_0_625_PL NULL
#define OPTION_VAL_0_750_PL NULL
#define OPTION_VAL_0_875_PL NULL
#define OPTION_VAL_1_000_PL NULL
#define OPTION_VAL_1_125_PL NULL
#define OPTION_VAL_1_25_PL NULL
#define OPTION_VAL_1_50_PL NULL
#define OPTION_VAL_1_75_PL NULL
#define OPTION_VAL_2_00_PL NULL
#define OPTION_VAL_2_25_PL NULL
#define OPTION_VAL_2_50_PL NULL
#define OPTION_VAL_2_75_PL NULL
#define OPTION_VAL_3_00_PL NULL
#define OPTION_VAL_3_25_PL NULL
#define OPTION_VAL_3_50_PL NULL
#define OPTION_VAL_3_75_PL NULL
#define OPTION_VAL_4_00_PL NULL
#define OPTION_VAL_4_25_PL NULL
#define OPTION_VAL_4_50_PL NULL
#define OPTION_VAL_4_75_PL NULL
#define OPTION_VAL_5_00_PL NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_PL "Zezwalaj na przeciwne kierunki"
#define PCE_UP_DOWN_ALLOWED_INFO_0_PL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_PL "Wyłącz resetowanie systemu (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_PL NULL
#define PCE_MULTITAP_LABEL_PL NULL
#define PCE_MULTITAP_INFO_0_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PL NULL
#define OPTION_VAL_2_BUTTONS_PL NULL
#define OPTION_VAL_6_BUTTONS_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_PL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PL NULL
#define PCE_TURBO_TOGGLING_LABEL_PL NULL
#define PCE_TURBO_TOGGLING_INFO_0_PL NULL
#define OPTION_VAL_TOGGLE_PL "Przełącz"
#define OPTION_VAL_ALWAYS_PL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_PL "Alternatywny skrót Turbo"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_PL NULL
#define PCE_TURBO_DELAY_LABEL_PL "Turbo Prędkość"
#define PCE_TURBO_DELAY_INFO_0_PL NULL
#define OPTION_VAL_FAST_PL "Szybkie"
#define OPTION_VAL_MEDIUM_PL "Średni"
#define OPTION_VAL_SLOW_PL "Powolny"
#define PCE_P0_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_PL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_PL NULL
#define PCE_CDIMAGECACHE_LABEL_PL NULL
#define PCE_CDIMAGECACHE_INFO_0_PL NULL
#define PCE_CDBIOS_LABEL_PL NULL
#define PCE_CDBIOS_INFO_0_PL NULL
#define OPTION_VAL_GAMES_EXPRESS_PL NULL
#define OPTION_VAL_SYSTEM_CARD_1_PL "Karta systemowa 1"
#define OPTION_VAL_SYSTEM_CARD_2_PL "Karta systemowa 2"
#define OPTION_VAL_SYSTEM_CARD_3_PL "Karta systemowa 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_PL "Karta systemowa 2 USA"
#define OPTION_VAL_SYSTEM_CARD_3_US_PL "Karta systemowa 3 USA"
#define PCE_ARCADECARD_LABEL_PL "Karta Arcade (wymagany restart)"
#define PCE_ARCADECARD_INFO_0_PL NULL
#define PCE_CDSPEED_LABEL_PL "(CD) Prędkość CD"
#define PCE_CDSPEED_LABEL_CAT_PL "Prędkość CD"
#define PCE_CDSPEED_INFO_0_PL "Wyższe wartości umożliwiają szybsze ładowanie, ale mogą powodować problemy z kilkoma grami."
#define PCE_ADPCMEXTRAPREC_LABEL_PL "(CD) precyzja ADPCM"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_PL "Dokładność ADPCM"
#define PCE_ADPCMEXTRAPREC_INFO_0_PL "Pełna precyzja 12-bitów dla predyktora ADPCM MSM5205 może zmniejszyć szum podczas odtwarzania ADPCM."
#define OPTION_VAL_10_BIT_PL "10-bitowe"
#define OPTION_VAL_12_BIT_PL "12-bitowe"
#define PCE_ADPCMVOLUME_LABEL_PL "(CD) Głośność ADPCM %"
#define PCE_ADPCMVOLUME_LABEL_CAT_PL "Głośność ADPCM %"
#define PCE_ADPCMVOLUME_INFO_0_PL "Tylko gra CD. Ustawienie tej kontroli głośności może spowodować przycinanie próbki."
#define PCE_ADPCMVOLUME_INFO_1_PL "Ustawienie zbyt dużej regulacji głośności może spowodować przycinanie próbki."
#define PCE_CDDAVOLUME_LABEL_PL "(CD) Głośność CDDA %"
#define PCE_CDDAVOLUME_LABEL_CAT_PL "Głośność CDDA %"
#define PCE_CDPSGVOLUME_LABEL_PL "(CD) Głośność CD PSG %"
#define PCE_CDPSGVOLUME_LABEL_CAT_PL "Głośność CD PSG %"
#define PCE_NOSPRITELIMIT_LABEL_PL "Bez limitu duszków"
#define PCE_NOSPRITELIMIT_INFO_0_PL NULL
#define PCE_OCMULTIPLIER_LABEL_PL NULL
#define PCE_OCMULTIPLIER_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PL,
      CATEGORY_VIDEO_INFO_0_PL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PL,
      CATEGORY_AUDIO_INFO_0_PL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PL,
      CATEGORY_HACKS_INFO_0_PL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PL,
      CATEGORY_CD_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_PL,
      NULL,
      PCE_PALETTE_INFO_0_PL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PL },
         { "Composite", OPTION_VAL_COMPOSITE_PL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_PL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_PL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "6:5", OPTION_VAL_6_5_PL },
         { "4:3", OPTION_VAL_4_3_PL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_PL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_PL,
      NULL,
      PCE_SCALING_INFO_0_PL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "lores", OPTION_VAL_LORES_PL },
         { "hires", OPTION_VAL_HIRES_PL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_PL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_PL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_PL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_PL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_PL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_PL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_PL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_PL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_PL,
      NULL,
      PCE_PSGREVISION_INFO_0_PL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_PL },
         { "HuC6280A", OPTION_VAL_HUC6280A_PL },
         { "auto", OPTION_VAL_AUTO_PL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_PL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_PL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_PL },
         { "0.250", OPTION_VAL_0_250_PL },
         { "0.375", OPTION_VAL_0_375_PL },
         { "0.500", OPTION_VAL_0_500_PL },
         { "0.625", OPTION_VAL_0_625_PL },
         { "0.750", OPTION_VAL_0_750_PL },
         { "0.875", OPTION_VAL_0_875_PL },
         { "1.000", OPTION_VAL_1_000_PL },
         { "1.125", OPTION_VAL_1_125_PL },
         { "1.25", OPTION_VAL_1_25_PL },
         { "1.50", OPTION_VAL_1_50_PL },
         { "1.75", OPTION_VAL_1_75_PL },
         { "2.00", OPTION_VAL_2_00_PL },
         { "2.25", OPTION_VAL_2_25_PL },
         { "2.50", OPTION_VAL_2_50_PL },
         { "2.75", OPTION_VAL_2_75_PL },
         { "3.00", OPTION_VAL_3_00_PL },
         { "3.25", OPTION_VAL_3_25_PL },
         { "3.50", OPTION_VAL_3_50_PL },
         { "3.75", OPTION_VAL_3_75_PL },
         { "4.00", OPTION_VAL_4_00_PL },
         { "4.25", OPTION_VAL_4_25_PL },
         { "4.50", OPTION_VAL_4_50_PL },
         { "4.75", OPTION_VAL_4_75_PL },
         { "5.00", OPTION_VAL_5_00_PL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_PL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_PL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_PL,
      NULL,
      PCE_MULTITAP_INFO_0_PL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_PL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_PL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_PL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_PL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_PL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_PL,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_PL },
         { "always", OPTION_VAL_ALWAYS_PL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_PL,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_PL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_PL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_PL },
         { "Medium", OPTION_VAL_MEDIUM_PL },
         { "Slow", OPTION_VAL_SLOW_PL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_PL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_PL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_PL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_PL,
      NULL,
      PCE_CDBIOS_INFO_0_PL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_PL,
      NULL,
      PCE_ARCADECARD_INFO_0_PL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_PL,
      PCE_CDSPEED_LABEL_CAT_PL,
      PCE_CDSPEED_INFO_0_PL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_PL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_PL,
      PCE_ADPCMEXTRAPREC_INFO_0_PL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_PL },
         { "12-bit", OPTION_VAL_12_BIT_PL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_PL,
      PCE_ADPCMVOLUME_LABEL_CAT_PL,
      PCE_ADPCMVOLUME_INFO_0_PL,
      PCE_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_PL,
      PCE_CDDAVOLUME_LABEL_CAT_PL,
      PCE_ADPCMVOLUME_INFO_0_PL,
      PCE_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_PL,
      PCE_CDPSGVOLUME_LABEL_CAT_PL,
      PCE_ADPCMVOLUME_INFO_0_PL,
      PCE_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_PL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_PL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_VIDEO_LABEL_PT_BR "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_BR "Configura os parâmentros da taxa de proporção, recorte de exibição e outras saídas de imagem."
#define CATEGORY_AUDIO_LABEL_PT_BR "Áudio"
#define CATEGORY_AUDIO_INFO_0_PT_BR "Configure os dispositivos de áudio emulados."
#define CATEGORY_INPUT_LABEL_PT_BR "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_BR "Configura a entrada da pistola de luz, mouse e controle."
#define CATEGORY_HACKS_LABEL_PT_BR "Hacks de emulação"
#define CATEGORY_HACKS_INFO_0_PT_BR "Configure os parâmetros de precisão de overclock e emulação do processador que afetam o baixo desempenho e a compatibilidade."
#define CATEGORY_CD_LABEL_PT_BR "CD do PC Engine"
#define CATEGORY_CD_INFO_0_PT_BR "Altera as configurações relacionadas à emulação de CD do PC Engine."
#define PCE_PALETTE_LABEL_PT_BR "Paleta de cores"
#define PCE_PALETTE_INFO_0_PT_BR "Vídeo composto tenta recriar a saída original do console e pode exibir mais detalhes em alguns jogos."
#define OPTION_VAL_RGB_PT_BR NULL
#define OPTION_VAL_COMPOSITE_PT_BR "Composto"
#define PCE_ASPECT_RATIO_LABEL_PT_BR "Proporção de tela"
#define PCE_ASPECT_RATIO_INFO_0_PT_BR "Escolhe a proporção de tela preferida do conteúdo. Isso se aplicará somente quando a proporção de tela do RetroArch estiver configurada como 'Fornecida pelo núcleo' nas configurações de vídeo."
#define OPTION_VAL_AUTO_PT_BR "Automática"
#define OPTION_VAL_6_5_PT_BR NULL
#define OPTION_VAL_4_3_PT_BR NULL
#define OPTION_VAL_UNCORRECTED_PT_BR "Não corrigida"
#define PCE_SCALING_LABEL_PT_BR "Escala de resolução"
#define PCE_SCALING_INFO_0_PT_BR "\"Automática\" permitirá variar a resolução. \"Baixa resolução\" pode comprimir os píxeis. \"Alta resolução\" será na largura máxima."
#define OPTION_VAL_LORES_PT_BR "Baixa resolução"
#define OPTION_VAL_HIRES_PT_BR "Alta resolução"
#define PCE_HIRES_BLEND_LABEL_PT_BR "Nível de mesclagem em alta resolução"
#define PCE_HIRES_BLEND_INFO_0_PT_BR "Mescla pixeis no modo de alta resolução. Valores maiores borrarão mais a imagem."
#define PCE_H_OVERSCAN_LABEL_PT_BR "Mostrar overscan horizontal"
#define PCE_H_OVERSCAN_INFO_0_PT_BR "\"Automática\" tentará se adaptar aos jogos, cortando áreas vazias."
#define PCE_INITIAL_SCANLINE_LABEL_PT_BR "Linha de verificação inicial"
#define PCE_INITIAL_SCANLINE_INFO_0_PT_BR "Primeira linha de verificação renderizada. Valores maiores cortarão a parte superior da imagem."
#define OPTION_VAL_3_PT_BR "3 (padrão)"
#define PCE_LAST_SCANLINE_LABEL_PT_BR "Linha de verificação final"
#define PCE_LAST_SCANLINE_INFO_0_PT_BR "Última linha de verificação renderizada. Valores menores cortarão a parte inferior da imagem."
#define OPTION_VAL_242_PT_BR "242 (padrão)"
#define PCE_PSGREVISION_LABEL_PT_BR "Chip de áudio PSG (requer reinício)"
#define PCE_PSGREVISION_INFO_0_PT_BR "HuC6280 representa o PC Engine original, HuC6280A representa o SuperGrafx e CoreGrafx I."
#define OPTION_VAL_HUC6280_PT_BR NULL
#define OPTION_VAL_HUC6280A_PT_BR NULL
#define PCE_RESAMP_QUALITY_LABEL_PT_BR "Qualidade da reamostragem Owl"
#define PCE_RESAMP_QUALITY_INFO_0_PT_BR "Valores maiores melhoram a relação sinal-ruído e preservam as frequências maiores, mas aumentam o custo computacional e podem causar maior latência e recorte caso o volume seja configurado muito alto."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_BR "Mostrar as configurações avançadas de entrada e do turbo"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_BR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_PT_BR "Sensibilidade do mouse"
#define PCE_MOUSE_SENSITIVITY_INFO_0_PT_BR "Valores maiores tornarão a movimentação do cursor do mouse mais rápida."
#define OPTION_VAL_0_125_PT_BR "0,125"
#define OPTION_VAL_0_250_PT_BR "0,250"
#define OPTION_VAL_0_375_PT_BR "0,375"
#define OPTION_VAL_0_500_PT_BR "0,500"
#define OPTION_VAL_0_625_PT_BR "0,625"
#define OPTION_VAL_0_750_PT_BR "0,750"
#define OPTION_VAL_0_875_PT_BR "0,875"
#define OPTION_VAL_1_000_PT_BR "1,000"
#define OPTION_VAL_1_125_PT_BR "1,125"
#define OPTION_VAL_1_25_PT_BR "1,25"
#define OPTION_VAL_1_50_PT_BR "1,50"
#define OPTION_VAL_1_75_PT_BR "1,75"
#define OPTION_VAL_2_00_PT_BR "2,00"
#define OPTION_VAL_2_25_PT_BR "2,25"
#define OPTION_VAL_2_50_PT_BR "2,50"
#define OPTION_VAL_2_75_PT_BR "2,75"
#define OPTION_VAL_3_00_PT_BR "3,00"
#define OPTION_VAL_3_25_PT_BR "3,25"
#define OPTION_VAL_3_50_PT_BR "3,50"
#define OPTION_VAL_3_75_PT_BR "3,75"
#define OPTION_VAL_4_00_PT_BR "4,00"
#define OPTION_VAL_4_25_PT_BR "4,25"
#define OPTION_VAL_4_50_PT_BR "4,50"
#define OPTION_VAL_4_75_PT_BR "4,75"
#define OPTION_VAL_5_00_PT_BR "5,00"
#define PCE_UP_DOWN_ALLOWED_LABEL_PT_BR "Permitir direções opostas"
#define PCE_UP_DOWN_ALLOWED_INFO_0_PT_BR "Esta opção permitirá pressionar, alternar ou segurar rapidamente as direções esquerda e direita (ou cima e baixo) ao mesmo tempo. Pode causar falhas de movimento."
#define PCE_DISABLE_SOFTRESET_LABEL_PT_BR "Desativar a reinicialização suave (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_PT_BR "Ao pressionar RUN e SELECT simultaneamente, desativa ambos os botões temporariamente em vez de reinicializar."
#define PCE_MULTITAP_LABEL_PT_BR "Multitap de 5 portas"
#define PCE_MULTITAP_INFO_0_PT_BR "Ativa emulação de multitap de até 5 jogadores. A desativação é necessária em alguns casos (por ex. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_BR NULL
#define OPTION_VAL_2_BUTTONS_PT_BR NULL
#define OPTION_VAL_6_BUTTONS_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_BR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_BR NULL
#define PCE_TURBO_TOGGLING_LABEL_PT_BR "Modo de atalho do turbo"
#define PCE_TURBO_TOGGLING_INFO_0_PT_BR "Habilita os botões turbo. Os atalhos (botões III e IV) podem comportar-se como interruptores ou como botões dedicados (segure para usar)."
#define OPTION_VAL_TOGGLE_PT_BR "Interruptor"
#define OPTION_VAL_ALWAYS_PT_BR "Dedicado"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR "Atalho alternativo do turbo"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_PT_BR "Atribui os botões L3 e R3 do RetroPad como atalhos do turbo, em vez dos botões III e IV. Somente funciona no modo interruptor e enquanto não tiver outras atribuições aos botões L3 e R3. Você pode evitar o remapeamento dos botões III e IV ao alterar para o modo de controle de 6 botões com isso."
#define PCE_TURBO_DELAY_LABEL_PT_BR "Velocidade do turbo"
#define PCE_TURBO_DELAY_INFO_0_PT_BR "Define a taxa de repetição dos botões pressionados."
#define OPTION_VAL_FAST_PT_BR "Rápida"
#define OPTION_VAL_MEDIUM_PT_BR "Média"
#define OPTION_VAL_SLOW_PT_BR "Lenta"
#define PCE_P0_TURBO_I_ENABLE_LABEL_PT_BR "Turbo I do J1"
#define PCE_P0_TURBO_II_ENABLE_LABEL_PT_BR "Turbo II do J1"
#define PCE_P1_TURBO_I_ENABLE_LABEL_PT_BR "Turbo I do J2"
#define PCE_P1_TURBO_II_ENABLE_LABEL_PT_BR "Turbo II do J2"
#define PCE_P2_TURBO_I_ENABLE_LABEL_PT_BR "Turbo I do J3"
#define PCE_P2_TURBO_II_ENABLE_LABEL_PT_BR "Turbo II do J3"
#define PCE_P3_TURBO_I_ENABLE_LABEL_PT_BR "Turbo I do J4"
#define PCE_P3_TURBO_II_ENABLE_LABEL_PT_BR "Turbo II do J4"
#define PCE_P4_TURBO_I_ENABLE_LABEL_PT_BR "Turbo I do J5"
#define PCE_P4_TURBO_II_ENABLE_LABEL_PT_BR "Turbo II do J5"
#define PCE_CDIMAGECACHE_LABEL_PT_BR "Cache de imagens do CD (requer reinício)"
#define PCE_CDIMAGECACHE_INFO_0_PT_BR "Carrega a imagem completa na memória na inicialização. Eventualmente, pode diminuir o tempo de carregamento ao custo de um tempo de inicialização maior."
#define PCE_CDBIOS_LABEL_PT_BR "BIOS de CD (requer reinício)"
#define PCE_CDBIOS_INFO_0_PT_BR "A maioria dos jogos podem rodar em \"System Card 3\". \"Games Express\" é necessário para vários jogos não licenciados."
#define OPTION_VAL_GAMES_EXPRESS_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_2_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_3_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_PT_BR "System Card 2 — EUA"
#define OPTION_VAL_SYSTEM_CARD_3_US_PT_BR "System Card 3 — EUA"
#define PCE_ARCADECARD_LABEL_PT_BR "Arcade Card (requer reinício)"
#define PCE_ARCADECARD_INFO_0_PT_BR "Caso a opção esteja ativada, permite os modos otimizados dos jogos de SCD para ACD."
#define PCE_CDSPEED_LABEL_PT_BR "(CD) Velocidade do CD"
#define PCE_CDSPEED_LABEL_CAT_PT_BR "Velocidade do CD"
#define PCE_CDSPEED_INFO_0_PT_BR "Valores maiores permitem carregar mais rápido, mas podem causar problemas em alguns jogos."
#define PCE_ADPCMEXTRAPREC_LABEL_PT_BR "(CD) Precisão do ADPCM"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_BR "Precisão do ADPCM"
#define PCE_ADPCMEXTRAPREC_INFO_0_PT_BR "A precisão de 12 bits para a predição do MSM5205 pode reduzir o problema de ruído durante a reprodução do ADPCM."
#define OPTION_VAL_10_BIT_PT_BR "10 bits"
#define OPTION_VAL_12_BIT_PT_BR "12 bits"
#define PCE_ADPCMVOLUME_LABEL_PT_BR "(CD) Volume do ADPCM (%)"
#define PCE_ADPCMVOLUME_LABEL_CAT_PT_BR "Volume do ADPCM (%)"
#define PCE_ADPCMVOLUME_INFO_0_PT_BR "Somente em CD. Definir o controle de volume muito alto pode causar cortes de amostra."
#define PCE_ADPCMVOLUME_INFO_1_PT_BR "Definir o controle de volume muito alto pode causar cortes de amostra."
#define PCE_CDDAVOLUME_LABEL_PT_BR "(CD) Volume do CDDA (%)"
#define PCE_CDDAVOLUME_LABEL_CAT_PT_BR "Volume do CDDA (%)"
#define PCE_CDPSGVOLUME_LABEL_PT_BR "(CD) Volume do PSG de CD (%)"
#define PCE_CDPSGVOLUME_LABEL_CAT_PT_BR "Volume do PSG de CD (%)"
#define PCE_NOSPRITELIMIT_LABEL_PT_BR "Sem tempo limite do sprite"
#define PCE_NOSPRITELIMIT_INFO_0_PT_BR "Remove o limite de hardware de 16 sprites por linha de verificação. ATENÇÃO: pode causar falhas gráficas em alguns jogos (como Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_PT_BR "Multiplicador do Overclock de CPU"
#define PCE_OCMULTIPLIER_INFO_0_PT_BR "Valores maiores podem reduzir a lentidão em jogos. ATENÇÃO: podem causar falhas e fechar o jogo."

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_BR,
      CATEGORY_VIDEO_INFO_0_PT_BR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_BR,
      CATEGORY_AUDIO_INFO_0_PT_BR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_BR,
      CATEGORY_HACKS_INFO_0_PT_BR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_BR,
      CATEGORY_CD_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_PT_BR,
      NULL,
      PCE_PALETTE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_BR },
         { "Composite", OPTION_VAL_COMPOSITE_PT_BR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_PT_BR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_PT_BR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "6:5", OPTION_VAL_6_5_PT_BR },
         { "4:3", OPTION_VAL_4_3_PT_BR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_PT_BR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_PT_BR,
      NULL,
      PCE_SCALING_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "lores", OPTION_VAL_LORES_PT_BR },
         { "hires", OPTION_VAL_HIRES_PT_BR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_PT_BR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_PT_BR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_PT_BR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_BR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_PT_BR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PT_BR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_PT_BR,
      NULL,
      PCE_PSGREVISION_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_PT_BR },
         { "HuC6280A", OPTION_VAL_HUC6280A_PT_BR },
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_PT_BR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_BR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_BR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_PT_BR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_PT_BR },
         { "0.250", OPTION_VAL_0_250_PT_BR },
         { "0.375", OPTION_VAL_0_375_PT_BR },
         { "0.500", OPTION_VAL_0_500_PT_BR },
         { "0.625", OPTION_VAL_0_625_PT_BR },
         { "0.750", OPTION_VAL_0_750_PT_BR },
         { "0.875", OPTION_VAL_0_875_PT_BR },
         { "1.000", OPTION_VAL_1_000_PT_BR },
         { "1.125", OPTION_VAL_1_125_PT_BR },
         { "1.25", OPTION_VAL_1_25_PT_BR },
         { "1.50", OPTION_VAL_1_50_PT_BR },
         { "1.75", OPTION_VAL_1_75_PT_BR },
         { "2.00", OPTION_VAL_2_00_PT_BR },
         { "2.25", OPTION_VAL_2_25_PT_BR },
         { "2.50", OPTION_VAL_2_50_PT_BR },
         { "2.75", OPTION_VAL_2_75_PT_BR },
         { "3.00", OPTION_VAL_3_00_PT_BR },
         { "3.25", OPTION_VAL_3_25_PT_BR },
         { "3.50", OPTION_VAL_3_50_PT_BR },
         { "3.75", OPTION_VAL_3_75_PT_BR },
         { "4.00", OPTION_VAL_4_00_PT_BR },
         { "4.25", OPTION_VAL_4_25_PT_BR },
         { "4.50", OPTION_VAL_4_50_PT_BR },
         { "4.75", OPTION_VAL_4_75_PT_BR },
         { "5.00", OPTION_VAL_5_00_PT_BR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_PT_BR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_PT_BR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_PT_BR,
      NULL,
      PCE_MULTITAP_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_BR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_BR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_BR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_BR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_BR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_PT_BR,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_PT_BR },
         { "always", OPTION_VAL_ALWAYS_PT_BR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_PT_BR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_PT_BR },
         { "Medium", OPTION_VAL_MEDIUM_PT_BR },
         { "Slow", OPTION_VAL_SLOW_PT_BR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_PT_BR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_PT_BR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_PT_BR,
      NULL,
      PCE_CDBIOS_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_BR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_BR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_BR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_BR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PT_BR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PT_BR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_PT_BR,
      NULL,
      PCE_ARCADECARD_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_PT_BR,
      PCE_CDSPEED_LABEL_CAT_PT_BR,
      PCE_CDSPEED_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_PT_BR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_BR,
      PCE_ADPCMEXTRAPREC_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_PT_BR },
         { "12-bit", OPTION_VAL_12_BIT_PT_BR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_PT_BR,
      PCE_ADPCMVOLUME_LABEL_CAT_PT_BR,
      PCE_ADPCMVOLUME_INFO_0_PT_BR,
      PCE_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_PT_BR,
      PCE_CDDAVOLUME_LABEL_CAT_PT_BR,
      PCE_ADPCMVOLUME_INFO_0_PT_BR,
      PCE_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_PT_BR,
      PCE_CDPSGVOLUME_LABEL_CAT_PT_BR,
      PCE_ADPCMVOLUME_INFO_0_PT_BR,
      PCE_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_PT_BR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_PT_BR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_VIDEO_LABEL_PT_PT "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_PT NULL
#define CATEGORY_AUDIO_LABEL_PT_PT "Áudio"
#define CATEGORY_AUDIO_INFO_0_PT_PT NULL
#define CATEGORY_INPUT_LABEL_PT_PT "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define CATEGORY_HACKS_LABEL_PT_PT NULL
#define CATEGORY_HACKS_INFO_0_PT_PT NULL
#define CATEGORY_CD_LABEL_PT_PT NULL
#define CATEGORY_CD_INFO_0_PT_PT NULL
#define PCE_PALETTE_LABEL_PT_PT NULL
#define PCE_PALETTE_INFO_0_PT_PT NULL
#define OPTION_VAL_RGB_PT_PT NULL
#define OPTION_VAL_COMPOSITE_PT_PT NULL
#define PCE_ASPECT_RATIO_LABEL_PT_PT "Proporção do ecrã"
#define PCE_ASPECT_RATIO_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT "Automático"
#define OPTION_VAL_6_5_PT_PT NULL
#define OPTION_VAL_4_3_PT_PT NULL
#define OPTION_VAL_UNCORRECTED_PT_PT NULL
#define PCE_SCALING_LABEL_PT_PT NULL
#define PCE_SCALING_INFO_0_PT_PT NULL
#define OPTION_VAL_LORES_PT_PT "Baixa qualidade"
#define OPTION_VAL_HIRES_PT_PT "Alta qualidade"
#define PCE_HIRES_BLEND_LABEL_PT_PT NULL
#define PCE_HIRES_BLEND_INFO_0_PT_PT NULL
#define PCE_H_OVERSCAN_LABEL_PT_PT NULL
#define PCE_H_OVERSCAN_INFO_0_PT_PT NULL
#define PCE_INITIAL_SCANLINE_LABEL_PT_PT NULL
#define PCE_INITIAL_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_3_PT_PT "3 (Padrão)"
#define PCE_LAST_SCANLINE_LABEL_PT_PT NULL
#define PCE_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_242_PT_PT "242 (Padrão)"
#define PCE_PSGREVISION_LABEL_PT_PT NULL
#define PCE_PSGREVISION_INFO_0_PT_PT NULL
#define OPTION_VAL_HUC6280_PT_PT NULL
#define OPTION_VAL_HUC6280A_PT_PT NULL
#define PCE_RESAMP_QUALITY_LABEL_PT_PT NULL
#define PCE_RESAMP_QUALITY_INFO_0_PT_PT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_PT NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_PT NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_PT_PT NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_PT_PT NULL
#define OPTION_VAL_0_125_PT_PT NULL
#define OPTION_VAL_0_250_PT_PT NULL
#define OPTION_VAL_0_375_PT_PT NULL
#define OPTION_VAL_0_500_PT_PT NULL
#define OPTION_VAL_0_625_PT_PT NULL
#define OPTION_VAL_0_750_PT_PT NULL
#define OPTION_VAL_0_875_PT_PT NULL
#define OPTION_VAL_1_000_PT_PT NULL
#define OPTION_VAL_1_125_PT_PT NULL
#define OPTION_VAL_1_25_PT_PT NULL
#define OPTION_VAL_1_50_PT_PT NULL
#define OPTION_VAL_1_75_PT_PT NULL
#define OPTION_VAL_2_00_PT_PT NULL
#define OPTION_VAL_2_25_PT_PT NULL
#define OPTION_VAL_2_50_PT_PT NULL
#define OPTION_VAL_2_75_PT_PT NULL
#define OPTION_VAL_3_00_PT_PT NULL
#define OPTION_VAL_3_25_PT_PT NULL
#define OPTION_VAL_3_50_PT_PT NULL
#define OPTION_VAL_3_75_PT_PT NULL
#define OPTION_VAL_4_00_PT_PT NULL
#define OPTION_VAL_4_25_PT_PT NULL
#define OPTION_VAL_4_50_PT_PT NULL
#define OPTION_VAL_4_75_PT_PT NULL
#define OPTION_VAL_5_00_PT_PT NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_PT_PT NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_PT_PT NULL
#define PCE_DISABLE_SOFTRESET_LABEL_PT_PT NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_PT_PT NULL
#define PCE_MULTITAP_LABEL_PT_PT NULL
#define PCE_MULTITAP_INFO_0_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_PT NULL
#define OPTION_VAL_2_BUTTONS_PT_PT NULL
#define OPTION_VAL_6_BUTTONS_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_PT NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_PT NULL
#define PCE_TURBO_TOGGLING_LABEL_PT_PT NULL
#define PCE_TURBO_TOGGLING_INFO_0_PT_PT NULL
#define OPTION_VAL_TOGGLE_PT_PT NULL
#define OPTION_VAL_ALWAYS_PT_PT NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT NULL
#define PCE_TURBO_DELAY_LABEL_PT_PT NULL
#define PCE_TURBO_DELAY_INFO_0_PT_PT NULL
#define OPTION_VAL_FAST_PT_PT NULL
#define OPTION_VAL_MEDIUM_PT_PT NULL
#define OPTION_VAL_SLOW_PT_PT NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_PT_PT NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_PT_PT NULL
#define PCE_CDIMAGECACHE_LABEL_PT_PT "Cache da Imagem do CD (Reinicialização necessária)"
#define PCE_CDIMAGECACHE_INFO_0_PT_PT NULL
#define PCE_CDBIOS_LABEL_PT_PT NULL
#define PCE_CDBIOS_INFO_0_PT_PT NULL
#define OPTION_VAL_GAMES_EXPRESS_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_PT "Cartão de Sistema 1"
#define OPTION_VAL_SYSTEM_CARD_2_PT_PT "Cartão de Sistema 2"
#define OPTION_VAL_SYSTEM_CARD_3_PT_PT "Cartão de Sistema 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_PT_PT "Cartão de Sistema 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_PT_PT "Cartão de Sistema 3 US"
#define PCE_ARCADECARD_LABEL_PT_PT NULL
#define PCE_ARCADECARD_INFO_0_PT_PT NULL
#define PCE_CDSPEED_LABEL_PT_PT "(CD) Velocidade do CD"
#define PCE_CDSPEED_LABEL_CAT_PT_PT "Velocidade do CD"
#define PCE_CDSPEED_INFO_0_PT_PT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_PT_PT NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_PT NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_PT_PT NULL
#define OPTION_VAL_10_BIT_PT_PT NULL
#define OPTION_VAL_12_BIT_PT_PT NULL
#define PCE_ADPCMVOLUME_LABEL_PT_PT NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_ADPCMVOLUME_INFO_0_PT_PT NULL
#define PCE_ADPCMVOLUME_INFO_1_PT_PT NULL
#define PCE_CDDAVOLUME_LABEL_PT_PT NULL
#define PCE_CDDAVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_CDPSGVOLUME_LABEL_PT_PT NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_NOSPRITELIMIT_LABEL_PT_PT NULL
#define PCE_NOSPRITELIMIT_INFO_0_PT_PT NULL
#define PCE_OCMULTIPLIER_LABEL_PT_PT NULL
#define PCE_OCMULTIPLIER_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_PT,
      CATEGORY_VIDEO_INFO_0_PT_PT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_PT,
      CATEGORY_AUDIO_INFO_0_PT_PT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_PT,
      CATEGORY_HACKS_INFO_0_PT_PT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_PT,
      CATEGORY_CD_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_PT_PT,
      NULL,
      PCE_PALETTE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_PT },
         { "Composite", OPTION_VAL_COMPOSITE_PT_PT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_PT_PT,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_PT_PT,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "6:5", OPTION_VAL_6_5_PT_PT },
         { "4:3", OPTION_VAL_4_3_PT_PT },
         { "uncorrected", OPTION_VAL_UNCORRECTED_PT_PT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_PT_PT,
      NULL,
      PCE_SCALING_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "lores", OPTION_VAL_LORES_PT_PT },
         { "hires", OPTION_VAL_HIRES_PT_PT },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_PT_PT,
      NULL,
      PCE_HIRES_BLEND_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_PT_PT,
      NULL,
      PCE_H_OVERSCAN_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_PT_PT,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_PT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_PT_PT,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PT_PT },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_PT_PT,
      NULL,
      PCE_PSGREVISION_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_PT_PT },
         { "HuC6280A", OPTION_VAL_HUC6280A_PT_PT },
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_PT_PT,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_PT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_PT_PT,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_PT_PT,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_PT_PT },
         { "0.250", OPTION_VAL_0_250_PT_PT },
         { "0.375", OPTION_VAL_0_375_PT_PT },
         { "0.500", OPTION_VAL_0_500_PT_PT },
         { "0.625", OPTION_VAL_0_625_PT_PT },
         { "0.750", OPTION_VAL_0_750_PT_PT },
         { "0.875", OPTION_VAL_0_875_PT_PT },
         { "1.000", OPTION_VAL_1_000_PT_PT },
         { "1.125", OPTION_VAL_1_125_PT_PT },
         { "1.25", OPTION_VAL_1_25_PT_PT },
         { "1.50", OPTION_VAL_1_50_PT_PT },
         { "1.75", OPTION_VAL_1_75_PT_PT },
         { "2.00", OPTION_VAL_2_00_PT_PT },
         { "2.25", OPTION_VAL_2_25_PT_PT },
         { "2.50", OPTION_VAL_2_50_PT_PT },
         { "2.75", OPTION_VAL_2_75_PT_PT },
         { "3.00", OPTION_VAL_3_00_PT_PT },
         { "3.25", OPTION_VAL_3_25_PT_PT },
         { "3.50", OPTION_VAL_3_50_PT_PT },
         { "3.75", OPTION_VAL_3_75_PT_PT },
         { "4.00", OPTION_VAL_4_00_PT_PT },
         { "4.25", OPTION_VAL_4_25_PT_PT },
         { "4.50", OPTION_VAL_4_50_PT_PT },
         { "4.75", OPTION_VAL_4_75_PT_PT },
         { "5.00", OPTION_VAL_5_00_PT_PT },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_PT_PT,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_PT_PT,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_PT_PT,
      NULL,
      PCE_MULTITAP_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_PT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_PT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_PT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_PT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_PT,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_PT_PT,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_PT_PT },
         { "always", OPTION_VAL_ALWAYS_PT_PT },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_PT_PT,
      NULL,
      PCE_TURBO_DELAY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_PT_PT },
         { "Medium", OPTION_VAL_MEDIUM_PT_PT },
         { "Slow", OPTION_VAL_SLOW_PT_PT },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_PT_PT,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_PT_PT,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_PT_PT,
      NULL,
      PCE_CDBIOS_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_PT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_PT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_PT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_PT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PT_PT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PT_PT },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_PT_PT,
      NULL,
      PCE_ARCADECARD_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_PT_PT,
      PCE_CDSPEED_LABEL_CAT_PT_PT,
      PCE_CDSPEED_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_PT_PT,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_PT_PT,
      PCE_ADPCMEXTRAPREC_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_PT_PT },
         { "12-bit", OPTION_VAL_12_BIT_PT_PT },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_PT_PT,
      PCE_ADPCMVOLUME_LABEL_CAT_PT_PT,
      PCE_ADPCMVOLUME_INFO_0_PT_PT,
      PCE_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_PT_PT,
      PCE_CDDAVOLUME_LABEL_CAT_PT_PT,
      PCE_ADPCMVOLUME_INFO_0_PT_PT,
      PCE_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_PT_PT,
      PCE_CDPSGVOLUME_LABEL_CAT_PT_PT,
      PCE_ADPCMVOLUME_INFO_0_PT_PT,
      PCE_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_PT_PT,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_PT_PT,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU "Настройка соотношения сторон, кадрирования и прочих параметров изображения."
#define CATEGORY_AUDIO_LABEL_RU "Аудио"
#define CATEGORY_AUDIO_INFO_0_RU "Настройки эмуляции аудиоустройств."
#define CATEGORY_INPUT_LABEL_RU "Ввод"
#define CATEGORY_INPUT_INFO_0_RU "Настройка ввода светового пистолета, мыши и контроллера."
#define CATEGORY_HACKS_LABEL_RU "Хаки эмуляции"
#define CATEGORY_HACKS_INFO_0_RU "Настройка разгона процессора и параметров точности эмуляции, влияющих на производительность и совместимость."
#define CATEGORY_CD_LABEL_RU NULL
#define CATEGORY_CD_INFO_0_RU "Настройка параметров эмуляции PC Engine CD."
#define PCE_PALETTE_LABEL_RU "Цветовая палитра"
#define PCE_PALETTE_INFO_0_RU "Композит пытается воссоздать оригинальное изображение консоли и может повышать детализацию в некоторых играх."
#define OPTION_VAL_RGB_RU NULL
#define OPTION_VAL_COMPOSITE_RU "Композит"
#define PCE_ASPECT_RATIO_LABEL_RU "Соотношение сторон"
#define PCE_ASPECT_RATIO_INFO_0_RU "Выбор предпочтительного соотношения сторон контента. Применяется только при выборе режима соотношения сторон 'Настройка ядра' в настройках видео RetroArch."
#define OPTION_VAL_AUTO_RU "Авто"
#define OPTION_VAL_6_5_RU NULL
#define OPTION_VAL_4_3_RU NULL
#define OPTION_VAL_UNCORRECTED_RU "Без коррекции"
#define PCE_SCALING_LABEL_RU "Масштабирование разрешения"
#define PCE_SCALING_INFO_0_RU "'Авто' разрешает изменение разрешения. 'Низкое разрешение' может искажать пиксели. 'Высокое разрешение' поддерживает максимальную ширину."
#define OPTION_VAL_LORES_RU "Низкое разрешение"
#define OPTION_VAL_HIRES_RU "Высокое разрешение"
#define PCE_HIRES_BLEND_LABEL_RU "Сила смешивания в высоком разрешении"
#define PCE_HIRES_BLEND_INFO_0_RU "Смешивать пиксели в режиме высокого разрешения. Более высокие значения сильнее размывают изображение."
#define PCE_H_OVERSCAN_LABEL_RU "Показывать гориз. вылеты развёртки"
#define PCE_H_OVERSCAN_INFO_0_RU "Режим 'Авто' адаптируется к играм, кадрируя пустые области."
#define PCE_INITIAL_SCANLINE_LABEL_RU "Первая строка развёртки"
#define PCE_INITIAL_SCANLINE_INFO_0_RU "Строка развёртки, отображаемая первой. Повышение значения обрезает верхний край картинки."
#define OPTION_VAL_3_RU "3 (по умолчанию)"
#define PCE_LAST_SCANLINE_LABEL_RU "Последняя строка развёртки"
#define PCE_LAST_SCANLINE_INFO_0_RU "Строка развёртки, отображаемая последней. Уменьшение значения обрезает нижний край картинки."
#define OPTION_VAL_242_RU "242 (по умолчанию)"
#define PCE_PSGREVISION_LABEL_RU "Аудиочип PSG (требуется перезапуск)"
#define PCE_PSGREVISION_INFO_0_RU "HuC6280 имитирует звучание PC Engine, HuC6280A - звучание SuperGrafx и CoreGrafx I."
#define OPTION_VAL_HUC6280_RU NULL
#define OPTION_VAL_HUC6280A_RU NULL
#define PCE_RESAMP_QUALITY_LABEL_RU "Качество ресемплера Owl"
#define PCE_RESAMP_QUALITY_INFO_0_RU "Более высокие значения улучшают соотношение сигнал-шум и сохраняют высокие частоты, но повышают сложность вычислений, могут увеличивать задержку и вызывать нелинейные искажения при завышении громкости."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_RU "Отображение расширенных настроек ввода/турбо-кнопок"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_RU "Показывать расширенные параметры, включая мультитап, мышь и турбо-кнопки. Для применения изменений может потребоваться повторно вызвать меню."
#define PCE_MOUSE_SENSITIVITY_LABEL_RU "Чувствительность мыши"
#define PCE_MOUSE_SENSITIVITY_INFO_0_RU "Повышение значения увеличивает скорость курсора мыши."
#define OPTION_VAL_0_125_RU NULL
#define OPTION_VAL_0_250_RU NULL
#define OPTION_VAL_0_375_RU NULL
#define OPTION_VAL_0_500_RU NULL
#define OPTION_VAL_0_625_RU NULL
#define OPTION_VAL_0_750_RU NULL
#define OPTION_VAL_0_875_RU NULL
#define OPTION_VAL_1_000_RU NULL
#define OPTION_VAL_1_125_RU NULL
#define OPTION_VAL_1_25_RU NULL
#define OPTION_VAL_1_50_RU NULL
#define OPTION_VAL_1_75_RU NULL
#define OPTION_VAL_2_00_RU NULL
#define OPTION_VAL_2_25_RU NULL
#define OPTION_VAL_2_50_RU NULL
#define OPTION_VAL_2_75_RU NULL
#define OPTION_VAL_3_00_RU NULL
#define OPTION_VAL_3_25_RU NULL
#define OPTION_VAL_3_50_RU NULL
#define OPTION_VAL_3_75_RU NULL
#define OPTION_VAL_4_00_RU NULL
#define OPTION_VAL_4_25_RU NULL
#define OPTION_VAL_4_50_RU NULL
#define OPTION_VAL_4_75_RU NULL
#define OPTION_VAL_5_00_RU NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_RU "Разрешить противоположные направления"
#define PCE_UP_DOWN_ALLOWED_INFO_0_RU "При включении позволяет нажимать / быстро менять / одновременно зажимать направления влево и вправо (или вверх и вниз). Может вызывать глитчи, связанные с перемещением."
#define PCE_DISABLE_SOFTRESET_LABEL_RU "Откл. мягкий сброс (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_RU "При одновременном нажатии RUN и SELECT вместо сброса обе кнопки будут временно отключаться."
#define PCE_MULTITAP_LABEL_RU "Multitap на 5 контроллеров"
#define PCE_MULTITAP_INFO_0_RU "Включает эмуляцию multitap до 5 игроков. Отключение настройки требуется лишь в отдельных случаях (напр. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_RU "Тип джойстика Игрока 1"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 1. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define OPTION_VAL_2_BUTTONS_RU "2-кнопочный"
#define OPTION_VAL_6_BUTTONS_RU "6-кнопочный"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_RU "Тип джойстика Игрока 2"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 2. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_RU "Тип джойстика Игрока 3"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 3. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_RU "Тип джойстика Игрока 4"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 4. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_RU "Тип джойстика Игрока 5"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 5. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_TURBO_TOGGLING_LABEL_RU "Режим турбо-кнопок"
#define PCE_TURBO_TOGGLING_INFO_0_RU "Включение турбо-кнопок. Активаторы (кнопки III и IV) могут работать как переключатели или как выделенные кнопки, включаемые при удержании."
#define OPTION_VAL_TOGGLE_RU "Переключатели"
#define OPTION_VAL_ALWAYS_RU "Выделенные"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_RU "Альтернативное включение турбо"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_RU "Назначает для включения турбо кнопки RetroPad L3/R3 вместо кнопок III и IV. Работает только с режимом 'Переключение' и при условии, что кнопки L3/R3 не используются для других действий. Позволяет избежать перепривязки кнопок III и IV при включении 6-кнопочного режима."
#define PCE_TURBO_DELAY_LABEL_RU "Скорость турбо"
#define PCE_TURBO_DELAY_INFO_0_RU "Выбор скорости повтора при нажатии кнопок."
#define OPTION_VAL_FAST_RU "Высокая"
#define OPTION_VAL_MEDIUM_RU "Средняя"
#define OPTION_VAL_SLOW_RU "Низкая"
#define PCE_P0_TURBO_I_ENABLE_LABEL_RU "Игрок 1 Турбо I"
#define PCE_P0_TURBO_II_ENABLE_LABEL_RU "Игрок 1 Турбо II"
#define PCE_P1_TURBO_I_ENABLE_LABEL_RU "Игрок 2 Турбо I"
#define PCE_P1_TURBO_II_ENABLE_LABEL_RU "Игрок 2 Турбо II"
#define PCE_P2_TURBO_I_ENABLE_LABEL_RU "Игрок 3 Турбо I"
#define PCE_P2_TURBO_II_ENABLE_LABEL_RU "Игрок 3 Турбо II"
#define PCE_P3_TURBO_I_ENABLE_LABEL_RU "Игрок 4 Турбо I"
#define PCE_P3_TURBO_II_ENABLE_LABEL_RU "Игрок 4 Турбо II"
#define PCE_P4_TURBO_I_ENABLE_LABEL_RU "Игрок 5 Турбо I"
#define PCE_P4_TURBO_II_ENABLE_LABEL_RU "Игрок 5 Турбо II"
#define PCE_CDIMAGECACHE_LABEL_RU "Кэшировать образ CD (требуется перезапуск)"
#define PCE_CDIMAGECACHE_INFO_0_RU "При запуске образ диска полностью загружается в память. Ускоряет загрузки, но увеличивает время запуска."
#define PCE_CDBIOS_LABEL_RU "BIOS CD (требуется перезапуск)"
#define PCE_CDBIOS_INFO_0_RU "Большинство игр запускается с 'System Card 3'. 'Games Express' требуется для отдельных нелицензированных игр."
#define OPTION_VAL_GAMES_EXPRESS_RU NULL
#define OPTION_VAL_SYSTEM_CARD_1_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_RU NULL
#define PCE_ARCADECARD_LABEL_RU "Arcade Card (требуется перезапуск)"
#define PCE_ARCADECARD_INFO_0_RU "При включении разрешает дополнительные режимы для игр SCD с улучшениями ACD."
#define PCE_CDSPEED_LABEL_RU "(CD) Скорость CD"
#define PCE_CDSPEED_LABEL_CAT_RU "Cкорость CD"
#define PCE_CDSPEED_INFO_0_RU "Более высокие значения ускоряют загрузки, но могут вызывать проблемы в отдельных играх."
#define PCE_ADPCMEXTRAPREC_LABEL_RU "(CD) Точность ADPCM"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_RU "Точность ADPCM"
#define PCE_ADPCMEXTRAPREC_INFO_0_RU "Полная 12-битная точность предсказателя ADPCM MSM5205 помогает уменьшить протяжный шум при воспроизведении ADPCM."
#define OPTION_VAL_10_BIT_RU "10-битная"
#define OPTION_VAL_12_BIT_RU "12-битная"
#define PCE_ADPCMVOLUME_LABEL_RU "(CD) Громкость ADPCM"
#define PCE_ADPCMVOLUME_LABEL_CAT_RU "Громкость ADPCM (%)"
#define PCE_ADPCMVOLUME_INFO_0_RU "Только для игр на CD. Превышение уровня громкости может вызывать искажения звука."
#define PCE_ADPCMVOLUME_INFO_1_RU "Превышение уровня громкости может вызывать искажения звука."
#define PCE_CDDAVOLUME_LABEL_RU "(CD) Громкость CDDA"
#define PCE_CDDAVOLUME_LABEL_CAT_RU "Громкость CDDA (%)"
#define PCE_CDPSGVOLUME_LABEL_RU "(CD) Громкость CD PSG %"
#define PCE_CDPSGVOLUME_LABEL_CAT_RU "Громкость PSG (%)"
#define PCE_NOSPRITELIMIT_LABEL_RU "Без ограничения спрайтов"
#define PCE_NOSPRITELIMIT_INFO_0_RU "Убирает аппаратное ограничение в 16 спрайтов на линию развёртки. В некоторых играх может вызывать проблемы с графикой (например Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_RU "Множитель разгона CPU"
#define PCE_OCMULTIPLIER_INFO_0_RU "Повышение значения уменьшает замедления в играх. ВНИМАНИЕ: может приводить к багам и вылетам."

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RU,
      CATEGORY_VIDEO_INFO_0_RU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RU,
      CATEGORY_AUDIO_INFO_0_RU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RU,
      CATEGORY_HACKS_INFO_0_RU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_RU,
      CATEGORY_CD_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_RU,
      NULL,
      PCE_PALETTE_INFO_0_RU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_RU },
         { "Composite", OPTION_VAL_COMPOSITE_RU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_RU,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_RU,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "6:5", OPTION_VAL_6_5_RU },
         { "4:3", OPTION_VAL_4_3_RU },
         { "uncorrected", OPTION_VAL_UNCORRECTED_RU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_RU,
      NULL,
      PCE_SCALING_INFO_0_RU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "lores", OPTION_VAL_LORES_RU },
         { "hires", OPTION_VAL_HIRES_RU },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_RU,
      NULL,
      PCE_HIRES_BLEND_INFO_0_RU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_RU,
      NULL,
      PCE_H_OVERSCAN_INFO_0_RU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_RU,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_RU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_RU,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_RU,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_RU },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_RU,
      NULL,
      PCE_PSGREVISION_INFO_0_RU,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_RU },
         { "HuC6280A", OPTION_VAL_HUC6280A_RU },
         { "auto", OPTION_VAL_AUTO_RU },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_RU,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_RU,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_RU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_RU,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_RU },
         { "0.250", OPTION_VAL_0_250_RU },
         { "0.375", OPTION_VAL_0_375_RU },
         { "0.500", OPTION_VAL_0_500_RU },
         { "0.625", OPTION_VAL_0_625_RU },
         { "0.750", OPTION_VAL_0_750_RU },
         { "0.875", OPTION_VAL_0_875_RU },
         { "1.000", OPTION_VAL_1_000_RU },
         { "1.125", OPTION_VAL_1_125_RU },
         { "1.25", OPTION_VAL_1_25_RU },
         { "1.50", OPTION_VAL_1_50_RU },
         { "1.75", OPTION_VAL_1_75_RU },
         { "2.00", OPTION_VAL_2_00_RU },
         { "2.25", OPTION_VAL_2_25_RU },
         { "2.50", OPTION_VAL_2_50_RU },
         { "2.75", OPTION_VAL_2_75_RU },
         { "3.00", OPTION_VAL_3_00_RU },
         { "3.25", OPTION_VAL_3_25_RU },
         { "3.50", OPTION_VAL_3_50_RU },
         { "3.75", OPTION_VAL_3_75_RU },
         { "4.00", OPTION_VAL_4_00_RU },
         { "4.25", OPTION_VAL_4_25_RU },
         { "4.50", OPTION_VAL_4_50_RU },
         { "4.75", OPTION_VAL_4_75_RU },
         { "5.00", OPTION_VAL_5_00_RU },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_RU,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_RU,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_RU,
      NULL,
      PCE_MULTITAP_INFO_0_RU,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_RU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_RU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_RU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_RU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_RU,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_RU,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_RU },
         { "always", OPTION_VAL_ALWAYS_RU },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_RU,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_RU,
      NULL,
      PCE_TURBO_DELAY_INFO_0_RU,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_RU },
         { "Medium", OPTION_VAL_MEDIUM_RU },
         { "Slow", OPTION_VAL_SLOW_RU },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_RU,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_RU,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_RU,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_RU,
      NULL,
      PCE_CDBIOS_INFO_0_RU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_RU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_RU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_RU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_RU },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_RU },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_RU },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_RU,
      NULL,
      PCE_ARCADECARD_INFO_0_RU,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_RU,
      PCE_CDSPEED_LABEL_CAT_RU,
      PCE_CDSPEED_INFO_0_RU,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_RU,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_RU,
      PCE_ADPCMEXTRAPREC_INFO_0_RU,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_RU },
         { "12-bit", OPTION_VAL_12_BIT_RU },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_RU,
      PCE_ADPCMVOLUME_LABEL_CAT_RU,
      PCE_ADPCMVOLUME_INFO_0_RU,
      PCE_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_RU,
      PCE_CDDAVOLUME_LABEL_CAT_RU,
      PCE_ADPCMVOLUME_INFO_0_RU,
      PCE_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_RU,
      PCE_CDPSGVOLUME_LABEL_CAT_RU,
      PCE_ADPCMVOLUME_INFO_0_RU,
      PCE_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_RU,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_RU,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_AUDIO_LABEL_SK "Zvuk"
#define CATEGORY_AUDIO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK "Vstup"
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_HACKS_LABEL_SK "Emulačné hacky"
#define CATEGORY_HACKS_INFO_0_SK NULL
#define CATEGORY_CD_LABEL_SK NULL
#define CATEGORY_CD_INFO_0_SK NULL
#define PCE_PALETTE_LABEL_SK "Farebná paleta"
#define PCE_PALETTE_INFO_0_SK NULL
#define OPTION_VAL_RGB_SK NULL
#define OPTION_VAL_COMPOSITE_SK "Kompozit"
#define PCE_ASPECT_RATIO_LABEL_SK "Pomer strán"
#define PCE_ASPECT_RATIO_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_6_5_SK NULL
#define OPTION_VAL_4_3_SK NULL
#define OPTION_VAL_UNCORRECTED_SK "Neopravené"
#define PCE_SCALING_LABEL_SK NULL
#define PCE_SCALING_INFO_0_SK NULL
#define OPTION_VAL_LORES_SK "Nízke rozlíšenie"
#define OPTION_VAL_HIRES_SK "Vysoké rozlíšenie"
#define PCE_HIRES_BLEND_LABEL_SK NULL
#define PCE_HIRES_BLEND_INFO_0_SK NULL
#define PCE_H_OVERSCAN_LABEL_SK NULL
#define PCE_H_OVERSCAN_INFO_0_SK NULL
#define PCE_INITIAL_SCANLINE_LABEL_SK NULL
#define PCE_INITIAL_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_3_SK "3 (predvolené)"
#define PCE_LAST_SCANLINE_LABEL_SK NULL
#define PCE_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_242_SK "242 (predvolené)"
#define PCE_PSGREVISION_LABEL_SK NULL
#define PCE_PSGREVISION_INFO_0_SK NULL
#define OPTION_VAL_HUC6280_SK NULL
#define OPTION_VAL_HUC6280A_SK NULL
#define PCE_RESAMP_QUALITY_LABEL_SK NULL
#define PCE_RESAMP_QUALITY_INFO_0_SK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SK NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_SK "Citlivosť myši"
#define PCE_MOUSE_SENSITIVITY_INFO_0_SK NULL
#define OPTION_VAL_0_125_SK NULL
#define OPTION_VAL_0_250_SK NULL
#define OPTION_VAL_0_375_SK NULL
#define OPTION_VAL_0_500_SK NULL
#define OPTION_VAL_0_625_SK NULL
#define OPTION_VAL_0_750_SK NULL
#define OPTION_VAL_0_875_SK NULL
#define OPTION_VAL_1_000_SK NULL
#define OPTION_VAL_1_125_SK NULL
#define OPTION_VAL_1_25_SK NULL
#define OPTION_VAL_1_50_SK NULL
#define OPTION_VAL_1_75_SK NULL
#define OPTION_VAL_2_00_SK NULL
#define OPTION_VAL_2_25_SK NULL
#define OPTION_VAL_2_50_SK NULL
#define OPTION_VAL_2_75_SK NULL
#define OPTION_VAL_3_00_SK NULL
#define OPTION_VAL_3_25_SK NULL
#define OPTION_VAL_3_50_SK NULL
#define OPTION_VAL_3_75_SK NULL
#define OPTION_VAL_4_00_SK NULL
#define OPTION_VAL_4_25_SK NULL
#define OPTION_VAL_4_50_SK NULL
#define OPTION_VAL_4_75_SK NULL
#define OPTION_VAL_5_00_SK NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_SK NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_SK NULL
#define PCE_DISABLE_SOFTRESET_LABEL_SK NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_SK NULL
#define PCE_MULTITAP_LABEL_SK NULL
#define PCE_MULTITAP_INFO_0_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SK NULL
#define OPTION_VAL_2_BUTTONS_SK "2 tlačidlá"
#define OPTION_VAL_6_BUTTONS_SK "6 tlačidiel"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_SK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SK NULL
#define PCE_TURBO_TOGGLING_LABEL_SK NULL
#define PCE_TURBO_TOGGLING_INFO_0_SK NULL
#define OPTION_VAL_TOGGLE_SK "Prepnúť"
#define OPTION_VAL_ALWAYS_SK "Vyhradené"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_SK NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_SK NULL
#define PCE_TURBO_DELAY_LABEL_SK "Turbo rýchlosť"
#define PCE_TURBO_DELAY_INFO_0_SK NULL
#define OPTION_VAL_FAST_SK "Rýchlo"
#define OPTION_VAL_MEDIUM_SK "Stredné"
#define OPTION_VAL_SLOW_SK "Pomalé"
#define PCE_P0_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_SK NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_SK NULL
#define PCE_CDIMAGECACHE_LABEL_SK NULL
#define PCE_CDIMAGECACHE_INFO_0_SK NULL
#define PCE_CDBIOS_LABEL_SK NULL
#define PCE_CDBIOS_INFO_0_SK NULL
#define OPTION_VAL_GAMES_EXPRESS_SK NULL
#define OPTION_VAL_SYSTEM_CARD_1_SK "Systémová karta 1"
#define OPTION_VAL_SYSTEM_CARD_2_SK "Systémová karta 2"
#define OPTION_VAL_SYSTEM_CARD_3_SK "Systémová karta 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_SK "Systémová karta 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_SK "Systémová karta 3 US"
#define PCE_ARCADECARD_LABEL_SK NULL
#define PCE_ARCADECARD_INFO_0_SK NULL
#define PCE_CDSPEED_LABEL_SK "(CD) CD rýchlosť"
#define PCE_CDSPEED_LABEL_CAT_SK "CD rýchlosť"
#define PCE_CDSPEED_INFO_0_SK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_SK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_SK NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_SK NULL
#define OPTION_VAL_10_BIT_SK NULL
#define OPTION_VAL_12_BIT_SK NULL
#define PCE_ADPCMVOLUME_LABEL_SK "(CD) ADPCM hlasitosť %"
#define PCE_ADPCMVOLUME_LABEL_CAT_SK "ADPCM hlasitosť %"
#define PCE_ADPCMVOLUME_INFO_0_SK NULL
#define PCE_ADPCMVOLUME_INFO_1_SK NULL
#define PCE_CDDAVOLUME_LABEL_SK "(CD) CDDA hlasitosť %"
#define PCE_CDDAVOLUME_LABEL_CAT_SK "CDDA hlasitosť %"
#define PCE_CDPSGVOLUME_LABEL_SK "(CD) PSG hlasitosť %"
#define PCE_CDPSGVOLUME_LABEL_CAT_SK "CD PSG hlasitosť %"
#define PCE_NOSPRITELIMIT_LABEL_SK NULL
#define PCE_NOSPRITELIMIT_INFO_0_SK NULL
#define PCE_OCMULTIPLIER_LABEL_SK NULL
#define PCE_OCMULTIPLIER_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SK,
      CATEGORY_VIDEO_INFO_0_SK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SK,
      CATEGORY_AUDIO_INFO_0_SK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SK,
      CATEGORY_HACKS_INFO_0_SK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SK,
      CATEGORY_CD_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_SK,
      NULL,
      PCE_PALETTE_INFO_0_SK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SK },
         { "Composite", OPTION_VAL_COMPOSITE_SK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_SK,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_SK,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "6:5", OPTION_VAL_6_5_SK },
         { "4:3", OPTION_VAL_4_3_SK },
         { "uncorrected", OPTION_VAL_UNCORRECTED_SK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_SK,
      NULL,
      PCE_SCALING_INFO_0_SK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "lores", OPTION_VAL_LORES_SK },
         { "hires", OPTION_VAL_HIRES_SK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_SK,
      NULL,
      PCE_HIRES_BLEND_INFO_0_SK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_SK,
      NULL,
      PCE_H_OVERSCAN_INFO_0_SK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_SK,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_SK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_SK,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_SK,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SK },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_SK,
      NULL,
      PCE_PSGREVISION_INFO_0_SK,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_SK },
         { "HuC6280A", OPTION_VAL_HUC6280A_SK },
         { "auto", OPTION_VAL_AUTO_SK },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_SK,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SK,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_SK,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_SK },
         { "0.250", OPTION_VAL_0_250_SK },
         { "0.375", OPTION_VAL_0_375_SK },
         { "0.500", OPTION_VAL_0_500_SK },
         { "0.625", OPTION_VAL_0_625_SK },
         { "0.750", OPTION_VAL_0_750_SK },
         { "0.875", OPTION_VAL_0_875_SK },
         { "1.000", OPTION_VAL_1_000_SK },
         { "1.125", OPTION_VAL_1_125_SK },
         { "1.25", OPTION_VAL_1_25_SK },
         { "1.50", OPTION_VAL_1_50_SK },
         { "1.75", OPTION_VAL_1_75_SK },
         { "2.00", OPTION_VAL_2_00_SK },
         { "2.25", OPTION_VAL_2_25_SK },
         { "2.50", OPTION_VAL_2_50_SK },
         { "2.75", OPTION_VAL_2_75_SK },
         { "3.00", OPTION_VAL_3_00_SK },
         { "3.25", OPTION_VAL_3_25_SK },
         { "3.50", OPTION_VAL_3_50_SK },
         { "3.75", OPTION_VAL_3_75_SK },
         { "4.00", OPTION_VAL_4_00_SK },
         { "4.25", OPTION_VAL_4_25_SK },
         { "4.50", OPTION_VAL_4_50_SK },
         { "4.75", OPTION_VAL_4_75_SK },
         { "5.00", OPTION_VAL_5_00_SK },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_SK,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_SK,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_SK,
      NULL,
      PCE_MULTITAP_INFO_0_SK,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_SK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_SK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_SK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_SK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_SK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_SK,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_SK },
         { "always", OPTION_VAL_ALWAYS_SK },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_SK,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_SK,
      NULL,
      PCE_TURBO_DELAY_INFO_0_SK,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_SK },
         { "Medium", OPTION_VAL_MEDIUM_SK },
         { "Slow", OPTION_VAL_SLOW_SK },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_SK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_SK,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_SK,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_SK,
      NULL,
      PCE_CDBIOS_INFO_0_SK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SK },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SK },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SK },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_SK,
      NULL,
      PCE_ARCADECARD_INFO_0_SK,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_SK,
      PCE_CDSPEED_LABEL_CAT_SK,
      PCE_CDSPEED_INFO_0_SK,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_SK,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_SK,
      PCE_ADPCMEXTRAPREC_INFO_0_SK,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_SK },
         { "12-bit", OPTION_VAL_12_BIT_SK },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_SK,
      PCE_ADPCMVOLUME_LABEL_CAT_SK,
      PCE_ADPCMVOLUME_INFO_0_SK,
      PCE_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_SK,
      PCE_CDDAVOLUME_LABEL_CAT_SK,
      PCE_ADPCMVOLUME_INFO_0_SK,
      PCE_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_SK,
      PCE_CDPSGVOLUME_LABEL_CAT_SK,
      PCE_ADPCMVOLUME_INFO_0_SK,
      PCE_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_SK,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_SK,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR NULL
#define CATEGORY_AUDIO_LABEL_SR "Zvuk"
#define CATEGORY_AUDIO_INFO_0_SR NULL
#define CATEGORY_INPUT_LABEL_SR "Ulaz"
#define CATEGORY_INPUT_INFO_0_SR NULL
#define CATEGORY_HACKS_LABEL_SR NULL
#define CATEGORY_HACKS_INFO_0_SR NULL
#define CATEGORY_CD_LABEL_SR NULL
#define CATEGORY_CD_INFO_0_SR NULL
#define PCE_PALETTE_LABEL_SR NULL
#define PCE_PALETTE_INFO_0_SR NULL
#define OPTION_VAL_RGB_SR NULL
#define OPTION_VAL_COMPOSITE_SR NULL
#define PCE_ASPECT_RATIO_LABEL_SR "Odnos ekrana"
#define PCE_ASPECT_RATIO_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_6_5_SR NULL
#define OPTION_VAL_4_3_SR NULL
#define OPTION_VAL_UNCORRECTED_SR NULL
#define PCE_SCALING_LABEL_SR NULL
#define PCE_SCALING_INFO_0_SR NULL
#define OPTION_VAL_LORES_SR NULL
#define OPTION_VAL_HIRES_SR NULL
#define PCE_HIRES_BLEND_LABEL_SR NULL
#define PCE_HIRES_BLEND_INFO_0_SR NULL
#define PCE_H_OVERSCAN_LABEL_SR NULL
#define PCE_H_OVERSCAN_INFO_0_SR NULL
#define PCE_INITIAL_SCANLINE_LABEL_SR NULL
#define PCE_INITIAL_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_3_SR NULL
#define PCE_LAST_SCANLINE_LABEL_SR NULL
#define PCE_LAST_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_242_SR NULL
#define PCE_PSGREVISION_LABEL_SR NULL
#define PCE_PSGREVISION_INFO_0_SR NULL
#define OPTION_VAL_HUC6280_SR NULL
#define OPTION_VAL_HUC6280A_SR NULL
#define PCE_RESAMP_QUALITY_LABEL_SR NULL
#define PCE_RESAMP_QUALITY_INFO_0_SR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SR NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SR NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_SR NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_SR NULL
#define OPTION_VAL_0_125_SR NULL
#define OPTION_VAL_0_250_SR NULL
#define OPTION_VAL_0_375_SR NULL
#define OPTION_VAL_0_500_SR NULL
#define OPTION_VAL_0_625_SR NULL
#define OPTION_VAL_0_750_SR NULL
#define OPTION_VAL_0_875_SR NULL
#define OPTION_VAL_1_000_SR NULL
#define OPTION_VAL_1_125_SR NULL
#define OPTION_VAL_1_25_SR NULL
#define OPTION_VAL_1_50_SR NULL
#define OPTION_VAL_1_75_SR NULL
#define OPTION_VAL_2_00_SR NULL
#define OPTION_VAL_2_25_SR NULL
#define OPTION_VAL_2_50_SR NULL
#define OPTION_VAL_2_75_SR NULL
#define OPTION_VAL_3_00_SR NULL
#define OPTION_VAL_3_25_SR NULL
#define OPTION_VAL_3_50_SR NULL
#define OPTION_VAL_3_75_SR NULL
#define OPTION_VAL_4_00_SR NULL
#define OPTION_VAL_4_25_SR NULL
#define OPTION_VAL_4_50_SR NULL
#define OPTION_VAL_4_75_SR NULL
#define OPTION_VAL_5_00_SR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_SR NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_SR NULL
#define PCE_DISABLE_SOFTRESET_LABEL_SR NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_SR NULL
#define PCE_MULTITAP_LABEL_SR NULL
#define PCE_MULTITAP_INFO_0_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SR NULL
#define OPTION_VAL_2_BUTTONS_SR NULL
#define OPTION_VAL_6_BUTTONS_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_SR NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SR NULL
#define PCE_TURBO_TOGGLING_LABEL_SR NULL
#define PCE_TURBO_TOGGLING_INFO_0_SR NULL
#define OPTION_VAL_TOGGLE_SR NULL
#define OPTION_VAL_ALWAYS_SR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_SR NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_SR NULL
#define PCE_TURBO_DELAY_LABEL_SR NULL
#define PCE_TURBO_DELAY_INFO_0_SR NULL
#define OPTION_VAL_FAST_SR NULL
#define OPTION_VAL_MEDIUM_SR NULL
#define OPTION_VAL_SLOW_SR NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_SR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_SR NULL
#define PCE_CDIMAGECACHE_LABEL_SR NULL
#define PCE_CDIMAGECACHE_INFO_0_SR NULL
#define PCE_CDBIOS_LABEL_SR NULL
#define PCE_CDBIOS_INFO_0_SR NULL
#define OPTION_VAL_GAMES_EXPRESS_SR NULL
#define OPTION_VAL_SYSTEM_CARD_1_SR NULL
#define OPTION_VAL_SYSTEM_CARD_2_SR NULL
#define OPTION_VAL_SYSTEM_CARD_3_SR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SR NULL
#define PCE_ARCADECARD_LABEL_SR NULL
#define PCE_ARCADECARD_INFO_0_SR NULL
#define PCE_CDSPEED_LABEL_SR NULL
#define PCE_CDSPEED_LABEL_CAT_SR NULL
#define PCE_CDSPEED_INFO_0_SR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_SR NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_SR NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_SR NULL
#define OPTION_VAL_10_BIT_SR NULL
#define OPTION_VAL_12_BIT_SR NULL
#define PCE_ADPCMVOLUME_LABEL_SR NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_SR NULL
#define PCE_ADPCMVOLUME_INFO_0_SR NULL
#define PCE_ADPCMVOLUME_INFO_1_SR NULL
#define PCE_CDDAVOLUME_LABEL_SR NULL
#define PCE_CDDAVOLUME_LABEL_CAT_SR NULL
#define PCE_CDPSGVOLUME_LABEL_SR NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_SR NULL
#define PCE_NOSPRITELIMIT_LABEL_SR NULL
#define PCE_NOSPRITELIMIT_INFO_0_SR NULL
#define PCE_OCMULTIPLIER_LABEL_SR NULL
#define PCE_OCMULTIPLIER_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SR,
      CATEGORY_VIDEO_INFO_0_SR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SR,
      CATEGORY_AUDIO_INFO_0_SR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SR,
      CATEGORY_HACKS_INFO_0_SR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SR,
      CATEGORY_CD_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_SR,
      NULL,
      PCE_PALETTE_INFO_0_SR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SR },
         { "Composite", OPTION_VAL_COMPOSITE_SR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_SR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_SR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "6:5", OPTION_VAL_6_5_SR },
         { "4:3", OPTION_VAL_4_3_SR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_SR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_SR,
      NULL,
      PCE_SCALING_INFO_0_SR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "lores", OPTION_VAL_LORES_SR },
         { "hires", OPTION_VAL_HIRES_SR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_SR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_SR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_SR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_SR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_SR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_SR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_SR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_SR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_SR,
      NULL,
      PCE_PSGREVISION_INFO_0_SR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_SR },
         { "HuC6280A", OPTION_VAL_HUC6280A_SR },
         { "auto", OPTION_VAL_AUTO_SR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_SR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_SR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_SR },
         { "0.250", OPTION_VAL_0_250_SR },
         { "0.375", OPTION_VAL_0_375_SR },
         { "0.500", OPTION_VAL_0_500_SR },
         { "0.625", OPTION_VAL_0_625_SR },
         { "0.750", OPTION_VAL_0_750_SR },
         { "0.875", OPTION_VAL_0_875_SR },
         { "1.000", OPTION_VAL_1_000_SR },
         { "1.125", OPTION_VAL_1_125_SR },
         { "1.25", OPTION_VAL_1_25_SR },
         { "1.50", OPTION_VAL_1_50_SR },
         { "1.75", OPTION_VAL_1_75_SR },
         { "2.00", OPTION_VAL_2_00_SR },
         { "2.25", OPTION_VAL_2_25_SR },
         { "2.50", OPTION_VAL_2_50_SR },
         { "2.75", OPTION_VAL_2_75_SR },
         { "3.00", OPTION_VAL_3_00_SR },
         { "3.25", OPTION_VAL_3_25_SR },
         { "3.50", OPTION_VAL_3_50_SR },
         { "3.75", OPTION_VAL_3_75_SR },
         { "4.00", OPTION_VAL_4_00_SR },
         { "4.25", OPTION_VAL_4_25_SR },
         { "4.50", OPTION_VAL_4_50_SR },
         { "4.75", OPTION_VAL_4_75_SR },
         { "5.00", OPTION_VAL_5_00_SR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_SR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_SR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_SR,
      NULL,
      PCE_MULTITAP_INFO_0_SR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_SR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_SR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_SR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_SR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_SR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_SR,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_SR },
         { "always", OPTION_VAL_ALWAYS_SR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_SR,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_SR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_SR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_SR },
         { "Medium", OPTION_VAL_MEDIUM_SR },
         { "Slow", OPTION_VAL_SLOW_SR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_SR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_SR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_SR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_SR,
      NULL,
      PCE_CDBIOS_INFO_0_SR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_SR,
      NULL,
      PCE_ARCADECARD_INFO_0_SR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_SR,
      PCE_CDSPEED_LABEL_CAT_SR,
      PCE_CDSPEED_INFO_0_SR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_SR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_SR,
      PCE_ADPCMEXTRAPREC_INFO_0_SR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_SR },
         { "12-bit", OPTION_VAL_12_BIT_SR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_SR,
      PCE_ADPCMVOLUME_LABEL_CAT_SR,
      PCE_ADPCMVOLUME_INFO_0_SR,
      PCE_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_SR,
      PCE_CDDAVOLUME_LABEL_CAT_SR,
      PCE_ADPCMVOLUME_INFO_0_SR,
      PCE_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_SR,
      PCE_CDPSGVOLUME_LABEL_CAT_SR,
      PCE_ADPCMVOLUME_INFO_0_SR,
      PCE_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_SR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_SR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_VIDEO_LABEL_SV NULL
#define CATEGORY_VIDEO_INFO_0_SV "Konfigurera bildformat, beskärning av skärmen och andra bildutdatainställningar."
#define CATEGORY_AUDIO_LABEL_SV "Ljud"
#define CATEGORY_AUDIO_INFO_0_SV "Konfigurera emulerade ljudenheter."
#define CATEGORY_INPUT_LABEL_SV "Inmatning"
#define CATEGORY_INPUT_INFO_0_SV "Konfigurera ljuspistol, mus och kontrollinmatning."
#define CATEGORY_HACKS_LABEL_SV "Emulator Hacks"
#define CATEGORY_HACKS_INFO_0_SV "Konfigurera processorns överklockning och emuleringsnoggrannhetsparametrar som påverkar prestanda och kompatibilitet på låg nivå."
#define CATEGORY_CD_LABEL_SV NULL
#define CATEGORY_CD_INFO_0_SV "Konfigurera inställningar relaterade till PC Engine CD-emulering."
#define PCE_PALETTE_LABEL_SV "Färgpalett"
#define PCE_PALETTE_INFO_0_SV "Composite försöker återskapa den ursprungliga konsolens utmatning och kan visa fler detaljer i vissa spel."
#define OPTION_VAL_RGB_SV NULL
#define OPTION_VAL_COMPOSITE_SV "Komposit"
#define PCE_ASPECT_RATIO_LABEL_SV "Bildformat"
#define PCE_ASPECT_RATIO_INFO_0_SV "Välj det föredragna bildformatet för Innehållet. Detta kommer endast att tillämpas när RetroArchs bildformat är inställt på \"Kärnspecifikt\" i Video-inställningarna."
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_6_5_SV NULL
#define OPTION_VAL_4_3_SV NULL
#define OPTION_VAL_UNCORRECTED_SV "Okorrigerad"
#define PCE_SCALING_LABEL_SV "Upplösningsskalning"
#define PCE_SCALING_INFO_0_SV "\"Automatiskt\" kommer att tillåta att upplösningen ändras. \"Låg upplösning\" kan krossa pixlar. \"Hög upplösning\" kommer att hålla sig till den maximala bredden."
#define OPTION_VAL_LORES_SV "Låg upplösning"
#define OPTION_VAL_HIRES_SV "Hög upplösning"
#define PCE_HIRES_BLEND_LABEL_SV "Styrka för hög upplösningsblandning"
#define PCE_HIRES_BLEND_INFO_0_SV "Blanda ihop pixlar när du är i högupplösningsläge. Högre värden kommer att göra bilden ännu suddigare."
#define PCE_H_OVERSCAN_LABEL_SV "Visa horisontell överskanning"
#define PCE_H_OVERSCAN_INFO_0_SV "\"Automatiskt\" kommer att försöka anpassa sig till spel genom att beskära tomma områden."
#define PCE_INITIAL_SCANLINE_LABEL_SV "Initiell skanlinje"
#define PCE_INITIAL_SCANLINE_INFO_0_SV "Första renderade skanlinjen. Högre värden kommer att beskära toppen av bilden."
#define OPTION_VAL_3_SV "3 (Standard)"
#define PCE_LAST_SCANLINE_LABEL_SV "Sista skanlinjen"
#define PCE_LAST_SCANLINE_INFO_0_SV "Sista renderade skanlinjen. Lägre värden kommer att beskära botten av bilden."
#define OPTION_VAL_242_SV "242 (Standard)"
#define PCE_PSGREVISION_LABEL_SV "PSG ljudchipp (Omstart krävs)"
#define PCE_PSGREVISION_INFO_0_SV "HuC6280 representerar den ursprungliga PC Engine, HuC6280A representerar SuperGrafx och CoreGrafx I."
#define OPTION_VAL_HUC6280_SV NULL
#define OPTION_VAL_HUC6280A_SV NULL
#define PCE_RESAMP_QUALITY_LABEL_SV "Kvalitet för Owl-omvandlare"
#define PCE_RESAMP_QUALITY_INFO_0_SV "Högre värden ger bättre signal till brusförhållande och bevarande av högre frekvenser, men ökar beräkningskostnaden och kan orsaka högre latens och ljudklippning om volymen är inställd för högt."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SV "Visa avancerade inställningar för indata/turbo"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SV "Visa multitap-flerspelaradaptern, mus, turbo-knappar och avancerade parametrar. OBS!: Du kanske behöver gå tillbaka i spelet och återgå till menyn för att uppdatera listan."
#define PCE_MOUSE_SENSITIVITY_LABEL_SV "Muskänslighet"
#define PCE_MOUSE_SENSITIVITY_INFO_0_SV "Högre värden kommer få muspekaren att röra sig snabbare."
#define OPTION_VAL_0_125_SV NULL
#define OPTION_VAL_0_250_SV NULL
#define OPTION_VAL_0_375_SV NULL
#define OPTION_VAL_0_500_SV NULL
#define OPTION_VAL_0_625_SV NULL
#define OPTION_VAL_0_750_SV NULL
#define OPTION_VAL_0_875_SV NULL
#define OPTION_VAL_1_000_SV NULL
#define OPTION_VAL_1_125_SV NULL
#define OPTION_VAL_1_25_SV NULL
#define OPTION_VAL_1_50_SV NULL
#define OPTION_VAL_1_75_SV NULL
#define OPTION_VAL_2_00_SV NULL
#define OPTION_VAL_2_25_SV NULL
#define OPTION_VAL_2_50_SV NULL
#define OPTION_VAL_2_75_SV NULL
#define OPTION_VAL_3_00_SV NULL
#define OPTION_VAL_3_25_SV NULL
#define OPTION_VAL_3_50_SV NULL
#define OPTION_VAL_3_75_SV NULL
#define OPTION_VAL_4_00_SV NULL
#define OPTION_VAL_4_25_SV NULL
#define OPTION_VAL_4_50_SV NULL
#define OPTION_VAL_4_75_SV NULL
#define OPTION_VAL_5_00_SV NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_SV "Tillåt motsatta riktningar"
#define PCE_UP_DOWN_ALLOWED_INFO_0_SV "Genom att aktivera detta tillåts att trycka på / snabbt alternera / hålla ned både vänster och höger (eller upp och ned) riktningar samtidigt. Detta kan orsaka rörelsebaserade fel."
#define PCE_DISABLE_SOFTRESET_LABEL_SV "Inaktivera mjukåterställning (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_SV "När RUN och SELECT trycks ned samtidigt, inaktiveras båda knapparna tillfälligt istället för att återställa dem."
#define PCE_MULTITAP_LABEL_SV "Multitap-flerspelaradapter med 5-portar kontroller"
#define PCE_MULTITAP_INFO_0_SV "Aktivera emulering av flerspelar-adapter upp till 5-spelare. Att inaktivera detta krävs endast i vissa fall (t.ex. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_SV "Standard joypad-typ för spelare 1 (P1)"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SV "Välj detta ifall port 1-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define OPTION_VAL_2_BUTTONS_SV "2 knappar"
#define OPTION_VAL_6_BUTTONS_SV "6 knappar"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_SV "Standard joypad-typ för spelare 2 (P2)"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SV "Välj detta ifall port 2-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_SV "Standard joypad-typ för spelare 3 (P3)"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SV "Välj detta ifall port 3-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_SV "Standard joypad-typ för spelare 4 (P4)"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SV "Välj detta ifall port 4-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_SV "Standard joypad-typ för spelare 5 (P5)"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SV "Välj detta ifall port 5-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd \"Lägesväxlings\"-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_TURBO_TOGGLING_LABEL_SV "Turbo snabbtangent-läge"
#define PCE_TURBO_TOGGLING_INFO_0_SV "Aktivera turboknappar. Snabbtangenter (knapparna III och IV) kan bete sig som antingen växla eller dedikerade (håll för att använda) turboknappar."
#define OPTION_VAL_TOGGLE_SV "Växla"
#define OPTION_VAL_ALWAYS_SV "Dedikerad"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_SV "Alternativ snabbtangent för turbo"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_SV "Tilldela RetroPads L3/R3-knappar som snabbtangenter för turbo-läge istället för knappar III och IV. Fungerar endast i \"Växel\"-läget och endast så länge inget är tilldelat L3/R3-knapparna. Du kan undvika omkartläggning av knappar III och IV när du växlar till 6-knapps kontrollläge med detta."
#define PCE_TURBO_DELAY_LABEL_SV "Turbo-hastighet"
#define PCE_TURBO_DELAY_INFO_0_SV "Välj hur snabbt knapptryckningar upprepas."
#define OPTION_VAL_FAST_SV "Snabb"
#define OPTION_VAL_MEDIUM_SV NULL
#define OPTION_VAL_SLOW_SV "Långsam"
#define PCE_P0_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_SV NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_SV NULL
#define PCE_CDIMAGECACHE_LABEL_SV "Skivavbildningscache (omstart krävs)"
#define PCE_CDIMAGECACHE_INFO_0_SV "Ladda in hela avbilden i minnet vid start. Kan potentiellt minska laddningstiderna till förmån för en ökad starttid."
#define PCE_CDBIOS_LABEL_SV "CD-BIOS (Omstart krävs)"
#define PCE_CDBIOS_INFO_0_SV "De flesta spel kan köras på \"Systemkort 3\". \"Games Express\" krävs för flera olicensierade spel."
#define OPTION_VAL_GAMES_EXPRESS_SV NULL
#define OPTION_VAL_SYSTEM_CARD_1_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SV NULL
#define PCE_ARCADECARD_LABEL_SV "Arcade Card (Omstart krävs)"
#define PCE_ARCADECARD_INFO_0_SV "Lämna denna inställning aktiverad för att tillåta förbättrade lägen för Arcade CD-ROM²-förbättrade Super CD-ROM²-spel."
#define PCE_CDSPEED_LABEL_SV "(CD) CD-hastighet"
#define PCE_CDSPEED_LABEL_CAT_SV "CD-hastighet"
#define PCE_CDSPEED_INFO_0_SV "Högre värden möjliggör snabbare laddningstider men kan orsaka problem med några spel."
#define PCE_ADPCMEXTRAPREC_LABEL_SV NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_SV NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_SV "Full precision av 12 bitar för MSM5205 ADPCM-predictorn kan minska vinande ljud under ADPCM-uppspelningen."
#define OPTION_VAL_10_BIT_SV NULL
#define OPTION_VAL_12_BIT_SV NULL
#define PCE_ADPCMVOLUME_LABEL_SV "(CD) ADPCM Volym %"
#define PCE_ADPCMVOLUME_LABEL_CAT_SV "Volym för ADPCM %"
#define PCE_ADPCMVOLUME_INFO_0_SV "Endast CD-spel. Ifall du ställer in volymen för högt kan ljudkvaliten försämras och leda till samplingsklippning."
#define PCE_ADPCMVOLUME_INFO_1_SV "Ifall du ställer in volymen för högt kan ljudkvaliten försämras och leda till samplingsklippning."
#define PCE_CDDAVOLUME_LABEL_SV "(CD) CDDA Volym %"
#define PCE_CDDAVOLUME_LABEL_CAT_SV "Volym för CDDA %"
#define PCE_CDPSGVOLUME_LABEL_SV "(CD) CD PSG Volym %"
#define PCE_CDPSGVOLUME_LABEL_CAT_SV "Volym för CD PSG %"
#define PCE_NOSPRITELIMIT_LABEL_SV "Ingen blockfigursgräns"
#define PCE_NOSPRITELIMIT_INFO_0_SV "Ta bort hårdvarubegränsningen på 16 sprites per skanlinje. VARNING!: Kan orsaka grafikfel i vissa spel (som exempelvis Bloody Wolf)."
#define PCE_OCMULTIPLIER_LABEL_SV "CPU-överklockningsmultiplikator"
#define PCE_OCMULTIPLIER_INFO_0_SV "Högre värden kan minska inbromsningar i spel. VARNING!: Kan orsaka fel och krascher."

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SV,
      CATEGORY_VIDEO_INFO_0_SV
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SV,
      CATEGORY_AUDIO_INFO_0_SV
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SV,
      CATEGORY_HACKS_INFO_0_SV
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SV,
      CATEGORY_CD_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_SV,
      NULL,
      PCE_PALETTE_INFO_0_SV,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SV },
         { "Composite", OPTION_VAL_COMPOSITE_SV },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_SV,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_SV,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "6:5", OPTION_VAL_6_5_SV },
         { "4:3", OPTION_VAL_4_3_SV },
         { "uncorrected", OPTION_VAL_UNCORRECTED_SV },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_SV,
      NULL,
      PCE_SCALING_INFO_0_SV,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "lores", OPTION_VAL_LORES_SV },
         { "hires", OPTION_VAL_HIRES_SV },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_SV,
      NULL,
      PCE_HIRES_BLEND_INFO_0_SV,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_SV,
      NULL,
      PCE_H_OVERSCAN_INFO_0_SV,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_SV,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_SV,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SV },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_SV,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_SV,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SV },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_SV,
      NULL,
      PCE_PSGREVISION_INFO_0_SV,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_SV },
         { "HuC6280A", OPTION_VAL_HUC6280A_SV },
         { "auto", OPTION_VAL_AUTO_SV },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_SV,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SV },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_SV,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_SV,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_SV,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_SV },
         { "0.250", OPTION_VAL_0_250_SV },
         { "0.375", OPTION_VAL_0_375_SV },
         { "0.500", OPTION_VAL_0_500_SV },
         { "0.625", OPTION_VAL_0_625_SV },
         { "0.750", OPTION_VAL_0_750_SV },
         { "0.875", OPTION_VAL_0_875_SV },
         { "1.000", OPTION_VAL_1_000_SV },
         { "1.125", OPTION_VAL_1_125_SV },
         { "1.25", OPTION_VAL_1_25_SV },
         { "1.50", OPTION_VAL_1_50_SV },
         { "1.75", OPTION_VAL_1_75_SV },
         { "2.00", OPTION_VAL_2_00_SV },
         { "2.25", OPTION_VAL_2_25_SV },
         { "2.50", OPTION_VAL_2_50_SV },
         { "2.75", OPTION_VAL_2_75_SV },
         { "3.00", OPTION_VAL_3_00_SV },
         { "3.25", OPTION_VAL_3_25_SV },
         { "3.50", OPTION_VAL_3_50_SV },
         { "3.75", OPTION_VAL_3_75_SV },
         { "4.00", OPTION_VAL_4_00_SV },
         { "4.25", OPTION_VAL_4_25_SV },
         { "4.50", OPTION_VAL_4_50_SV },
         { "4.75", OPTION_VAL_4_75_SV },
         { "5.00", OPTION_VAL_5_00_SV },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_SV,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_SV,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_SV,
      NULL,
      PCE_MULTITAP_INFO_0_SV,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_SV,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_SV,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_SV,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_SV,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_SV,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_SV,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_SV },
         { "always", OPTION_VAL_ALWAYS_SV },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_SV,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_SV,
      NULL,
      PCE_TURBO_DELAY_INFO_0_SV,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_SV },
         { "Medium", OPTION_VAL_MEDIUM_SV },
         { "Slow", OPTION_VAL_SLOW_SV },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_SV,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_SV,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_SV,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_SV,
      NULL,
      PCE_CDBIOS_INFO_0_SV,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SV },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SV },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SV },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SV },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SV },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SV },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_SV,
      NULL,
      PCE_ARCADECARD_INFO_0_SV,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_SV,
      PCE_CDSPEED_LABEL_CAT_SV,
      PCE_CDSPEED_INFO_0_SV,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_SV,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_SV,
      PCE_ADPCMEXTRAPREC_INFO_0_SV,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_SV },
         { "12-bit", OPTION_VAL_12_BIT_SV },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_SV,
      PCE_ADPCMVOLUME_LABEL_CAT_SV,
      PCE_ADPCMVOLUME_INFO_0_SV,
      PCE_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_SV,
      PCE_CDDAVOLUME_LABEL_CAT_SV,
      PCE_ADPCMVOLUME_INFO_0_SV,
      PCE_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_SV,
      PCE_CDPSGVOLUME_LABEL_CAT_SV,
      PCE_ADPCMVOLUME_INFO_0_SV,
      PCE_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_SV,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_SV,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR "En boy oranını yapılandırın, kırpmayı ve diğer görüntü çıktı parametrelerini görüntüleyin."
#define CATEGORY_AUDIO_LABEL_TR "Ses"
#define CATEGORY_AUDIO_INFO_0_TR "Taklit edilmiş ses cihazlarını yapılandırın."
#define CATEGORY_INPUT_LABEL_TR "Giriş"
#define CATEGORY_INPUT_INFO_0_TR "Light gun, fare ve oyun kolu girişini yapılandırın."
#define CATEGORY_HACKS_LABEL_TR "Emülatör Geliştirmeleri"
#define CATEGORY_HACKS_INFO_0_TR "Düşük seviyeli performans ve uyumluluğu etkileyen işlemci hız aşırtma ve emulatör doğruluğu parametrelerini yapılandırın."
#define CATEGORY_CD_LABEL_TR NULL
#define CATEGORY_CD_INFO_0_TR "PC Engine CD emulatörü ilgili ayarları yapılandırın."
#define PCE_PALETTE_LABEL_TR "Renk Paleti"
#define PCE_PALETTE_INFO_0_TR "Kompozit video ayarı orjinal konsolun video çıkışını taklit etmeye çalışır ve bazı oyunlarda daha fazla ayrıntı sunabilir."
#define OPTION_VAL_RGB_TR NULL
#define OPTION_VAL_COMPOSITE_TR NULL
#define PCE_ASPECT_RATIO_LABEL_TR "En Boy Oranı"
#define PCE_ASPECT_RATIO_INFO_0_TR "Tercih edilen içerik en boy oranını seçin. Bu, yalnızca RetroArch en boy oranı Video ayarlarında 'Çekirdek Tarafından Sağlanan' olarak ayarlandığında uygulanacaktır."
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_6_5_TR NULL
#define OPTION_VAL_4_3_TR NULL
#define OPTION_VAL_UNCORRECTED_TR "Düzeltilmemiş"
#define PCE_SCALING_LABEL_TR "Çözünürlük Ölçekleme"
#define PCE_SCALING_INFO_0_TR "'Otomatik' çözünürlüğün değişmesine izin verecektir. 'Düşük Çözünürlük' pikselleri ezebilir. 'Yüksek Çözünürlük' azami genişlikte kalacaktır."
#define OPTION_VAL_LORES_TR "Düşük Çözünürlük"
#define OPTION_VAL_HIRES_TR "Yüksek Çözünürlük"
#define PCE_HIRES_BLEND_LABEL_TR "Yüksek Çözünürlüklü Karıştırma Gücü"
#define PCE_HIRES_BLEND_INFO_0_TR "Yüksek çözünürlük kipinde pikselleri birbirine karıştırın. Daha yüksek değerler görüntüyü daha fazla bulanıklaştırır."
#define PCE_H_OVERSCAN_LABEL_TR "Yatay Aşırı Taramayı Göster"
#define PCE_H_OVERSCAN_INFO_0_TR "'Otomatik', boş alanları kırparak oyunlara uyum sağlamaya çalışacaktır."
#define PCE_INITIAL_SCANLINE_LABEL_TR "İlk Tarama Çizgisi"
#define PCE_INITIAL_SCANLINE_INFO_0_TR "İlk işlenen tarama çizgisi. Yükseltilen değerler görüntünün üstünü kırpacaktır."
#define OPTION_VAL_3_TR "3 (Varsayılan)"
#define PCE_LAST_SCANLINE_LABEL_TR "Son Tarama Çizgisi"
#define PCE_LAST_SCANLINE_INFO_0_TR "Son işlenen tarama çizgisi. Düşürülen değerler görüntünün alt kısmını kırpacaktır."
#define OPTION_VAL_242_TR "242 (Varsayılan)"
#define PCE_PSGREVISION_LABEL_TR "PSG Ses Çipi (Yeniden Başlatılmalı)"
#define PCE_PSGREVISION_INFO_0_TR "HuC6280, orijinal PC Motorunu, HuC6280A, SuperGrafx ve CoreGrafx I'i temsil eder."
#define OPTION_VAL_HUC6280_TR NULL
#define OPTION_VAL_HUC6280A_TR NULL
#define PCE_RESAMP_QUALITY_LABEL_TR "Owl Örnekleyici Kalitesi"
#define PCE_RESAMP_QUALITY_INFO_0_TR "Daha yüksek değerler, daha iyi sinyal-gürültü oranı ve daha yüksek frekansların korunmasını sağlar, ancak hesaplama süresini artırır ve ses seviyesi çok yüksek ayarlanırsa daha yüksek gecikmeye ve kırpılmaya neden olabilir."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_TR "Gelişmiş Giriş/Turbo Ayarlarını Göster"
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_TR "Multitap, Fare, Turbo Düğmeleri ve gelişmiş parametreleri gösterin. NOT: Listeyi yenilemek için oyuna geri dönüp menüye tekrar girmeniz gerekebilir."
#define PCE_MOUSE_SENSITIVITY_LABEL_TR "Fare Hassasiyeti"
#define PCE_MOUSE_SENSITIVITY_INFO_0_TR "Daha yüksek değerler, fare imlecinin daha hızlı hareket etmesini sağlar."
#define OPTION_VAL_0_125_TR NULL
#define OPTION_VAL_0_250_TR NULL
#define OPTION_VAL_0_375_TR NULL
#define OPTION_VAL_0_500_TR NULL
#define OPTION_VAL_0_625_TR NULL
#define OPTION_VAL_0_750_TR NULL
#define OPTION_VAL_0_875_TR NULL
#define OPTION_VAL_1_000_TR NULL
#define OPTION_VAL_1_125_TR NULL
#define OPTION_VAL_1_25_TR NULL
#define OPTION_VAL_1_50_TR NULL
#define OPTION_VAL_1_75_TR NULL
#define OPTION_VAL_2_00_TR NULL
#define OPTION_VAL_2_25_TR NULL
#define OPTION_VAL_2_50_TR NULL
#define OPTION_VAL_2_75_TR NULL
#define OPTION_VAL_3_00_TR NULL
#define OPTION_VAL_3_25_TR NULL
#define OPTION_VAL_3_50_TR NULL
#define OPTION_VAL_3_75_TR NULL
#define OPTION_VAL_4_00_TR NULL
#define OPTION_VAL_4_25_TR NULL
#define OPTION_VAL_4_50_TR NULL
#define OPTION_VAL_4_75_TR NULL
#define OPTION_VAL_5_00_TR NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_TR "Karşı Yönlere İzin Ver"
#define PCE_UP_DOWN_ALLOWED_INFO_0_TR "Bunun etkinleştirilmesi, aynı anda hem sol hem de sağ (veya yukarı ve aşağı) yönlere basılmasına / hızlı bir şekilde değiştirilmesine / basılı tutulmasına olanak tanır. Bu, hareket tabanlı aksaklıklara neden olabilir."
#define PCE_DISABLE_SOFTRESET_LABEL_TR "Yazılımdan Sıfırlama Devre Dışı (RUN+SELECT)"
#define PCE_DISABLE_SOFTRESET_INFO_0_TR "RUN ve SELECT tuşlarına aynı anda basıldığında, yeniden başlatmak yerine iki tuşu da geçici olarak devre dışı bırak."
#define PCE_MULTITAP_LABEL_TR "Multitap 5-port Kontrolcü"
#define PCE_MULTITAP_INFO_0_TR "5 oyuncuya kadar çoklu kontrolcü desteğini etkinleştirin. Bunu devre dışı bırakmak bazı durumlarda gereklidir (örnek. Cho Aniki)."
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_TR "P1 Varsayılan Joypad Tipi"
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TR "Port 1 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define OPTION_VAL_2_BUTTONS_TR "2 Düğmeli"
#define OPTION_VAL_6_BUTTONS_TR "6 Düğmeli"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_TR "P2 Varsayılan Joypad Tipi"
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TR "Port 2 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_TR "P3 Varsayılan Joypad Tipi"
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TR "Port 3 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_TR "P4 Varsayılan Joypad Tipi"
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TR "Port 4 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_TR "P5 Varsayılan Joypad Tipi"
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TR "Port 5 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_TURBO_TOGGLING_LABEL_TR "Turbo Kısayol Tuşu Kipi"
#define PCE_TURBO_TOGGLING_INFO_0_TR "Turbo düğmelerini etkinleştirin. Kısayol tuşları (düğmeler III ve IV), geçiş anahtarı veya özel (kullanmak için basılı tutun) turbo düğmeleri gibi davranabilir."
#define OPTION_VAL_TOGGLE_TR "Değiştir"
#define OPTION_VAL_ALWAYS_TR "Atanmış"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_TR "Alternatif Turbo Kısayol Tuşu"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_TR "RetroPad L3/R3 düğmelerini III ve IV düğmeleri yerine turbo kısayol tuşları olarak atayın. Yalnızca 'Geçiş' kipinde ve L3/R3 düğmelerine hiçbir şey atanmadığı sürece çalışır. Bununla 6 düğmeli denetleyici kipine geçerken III ve IV düğmelerinin yeniden eşlenmesini önleyebilirsiniz."
#define PCE_TURBO_DELAY_LABEL_TR "Turbo Hızı"
#define PCE_TURBO_DELAY_INFO_0_TR "Düğmelere ne kadar hızlı basılacağını seçin."
#define OPTION_VAL_FAST_TR "Hızlı"
#define OPTION_VAL_MEDIUM_TR "Orta"
#define OPTION_VAL_SLOW_TR "Yavaş"
#define PCE_P0_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_TR NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_TR NULL
#define PCE_CDIMAGECACHE_LABEL_TR "CD Kalıbı Önbelleği (Yeniden Başlatılmalı)"
#define PCE_CDIMAGECACHE_INFO_0_TR "Başlangıç sırasında bütün kalıbı hafızaya yükler. Başlangıç sürecini uzatmak pahasına oyundaki yüklenme sürelerini kısaltabilir."
#define PCE_CDBIOS_LABEL_TR "CD Bios (Yeniden Başlatılmalı)"
#define PCE_CDBIOS_INFO_0_TR "Oyunların çoğu \"System Card 3\" üzerinde çalışabilir. Birkaç lisanssız oyun, Game Express'e ihtiyaç duyar."
#define OPTION_VAL_GAMES_EXPRESS_TR NULL
#define OPTION_VAL_SYSTEM_CARD_1_TR "Sistem Kartı 1"
#define OPTION_VAL_SYSTEM_CARD_2_TR "Sistem Kartı 2"
#define OPTION_VAL_SYSTEM_CARD_3_TR "Sistem Kartı 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_TR "Sistem Kartı 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_TR "Sistem Kartı 3 US"
#define PCE_ARCADECARD_LABEL_TR "Arcade Kart (Yeniden Başlatılmalı)"
#define PCE_ARCADECARD_INFO_0_TR "ACD ile geliştirilmiş SCD oyunlarının gelişmiş kiplerine izin vermek için bu seçeneği etkin bırakın."
#define PCE_CDSPEED_LABEL_TR "(CD) CD Hızı"
#define PCE_CDSPEED_LABEL_CAT_TR "CD Hızı"
#define PCE_CDSPEED_INFO_0_TR "Yükseltilen değerler daha hızlı yüklenmeyi etkinleştiririr, birkaç oyunda sorunlara sebep olabilir."
#define PCE_ADPCMEXTRAPREC_LABEL_TR "(CD) ADPCM hassasiyeti"
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_TR "ADPCM hassasiyeti"
#define PCE_ADPCMEXTRAPREC_INFO_0_TR "MSM5205 ADPCM tahmincisi için 12 bitlik tam hassasiyet, ADPCM oynatma sırasında titreşen gürültüyü azaltabilir."
#define OPTION_VAL_10_BIT_TR NULL
#define OPTION_VAL_12_BIT_TR NULL
#define PCE_ADPCMVOLUME_LABEL_TR "(CD) ADPCM Ses Seviyesi %"
#define PCE_ADPCMVOLUME_LABEL_CAT_TR "ADPCM Ses Seviyesi %"
#define PCE_ADPCMVOLUME_INFO_0_TR "Sadece CD oyunları için. Bu ses ayarını aşırı yükseltmek seste yırtılmalara sebep olabilir."
#define PCE_ADPCMVOLUME_INFO_1_TR "Bu ses ayarını aşırı yükseltmek seste yırtılmalara sebep olabilir."
#define PCE_CDDAVOLUME_LABEL_TR "(CD) CDDA Ses Seviyesi %"
#define PCE_CDDAVOLUME_LABEL_CAT_TR "CDDA Ses Seviyesi %"
#define PCE_CDPSGVOLUME_LABEL_TR "(CD) CD PSG Ses Seviyesi %"
#define PCE_CDPSGVOLUME_LABEL_CAT_TR "CD PSG Ses Seviyesi %"
#define PCE_NOSPRITELIMIT_LABEL_TR "Hareket Sınırını Kaldır"
#define PCE_NOSPRITELIMIT_INFO_0_TR "Tarama satırı başına 16 karakterlik donanım sınırını kaldırın. UYARI: Bazı oyunlarda (Bloody Wolf gibi) grafik hatasına neden olabilir."
#define PCE_OCMULTIPLIER_LABEL_TR "CPU Hız Aşırtma Çarpanı"
#define PCE_OCMULTIPLIER_INFO_0_TR "Yükseltilen değer bazı oyunlardaki yavaşlamaları düşürebilir. UYARI: Bozulmalara ve çökmelere sebep olabilir."

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_TR,
      CATEGORY_VIDEO_INFO_0_TR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_TR,
      CATEGORY_AUDIO_INFO_0_TR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_TR,
      CATEGORY_HACKS_INFO_0_TR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_TR,
      CATEGORY_CD_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_TR,
      NULL,
      PCE_PALETTE_INFO_0_TR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_TR },
         { "Composite", OPTION_VAL_COMPOSITE_TR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_TR,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_TR,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "6:5", OPTION_VAL_6_5_TR },
         { "4:3", OPTION_VAL_4_3_TR },
         { "uncorrected", OPTION_VAL_UNCORRECTED_TR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_TR,
      NULL,
      PCE_SCALING_INFO_0_TR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "lores", OPTION_VAL_LORES_TR },
         { "hires", OPTION_VAL_HIRES_TR },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_TR,
      NULL,
      PCE_HIRES_BLEND_INFO_0_TR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_TR,
      NULL,
      PCE_H_OVERSCAN_INFO_0_TR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_TR,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_TR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_TR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_TR,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_TR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_TR },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_TR,
      NULL,
      PCE_PSGREVISION_INFO_0_TR,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_TR },
         { "HuC6280A", OPTION_VAL_HUC6280A_TR },
         { "auto", OPTION_VAL_AUTO_TR },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_TR,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_TR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_TR,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_TR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_TR,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_TR },
         { "0.250", OPTION_VAL_0_250_TR },
         { "0.375", OPTION_VAL_0_375_TR },
         { "0.500", OPTION_VAL_0_500_TR },
         { "0.625", OPTION_VAL_0_625_TR },
         { "0.750", OPTION_VAL_0_750_TR },
         { "0.875", OPTION_VAL_0_875_TR },
         { "1.000", OPTION_VAL_1_000_TR },
         { "1.125", OPTION_VAL_1_125_TR },
         { "1.25", OPTION_VAL_1_25_TR },
         { "1.50", OPTION_VAL_1_50_TR },
         { "1.75", OPTION_VAL_1_75_TR },
         { "2.00", OPTION_VAL_2_00_TR },
         { "2.25", OPTION_VAL_2_25_TR },
         { "2.50", OPTION_VAL_2_50_TR },
         { "2.75", OPTION_VAL_2_75_TR },
         { "3.00", OPTION_VAL_3_00_TR },
         { "3.25", OPTION_VAL_3_25_TR },
         { "3.50", OPTION_VAL_3_50_TR },
         { "3.75", OPTION_VAL_3_75_TR },
         { "4.00", OPTION_VAL_4_00_TR },
         { "4.25", OPTION_VAL_4_25_TR },
         { "4.50", OPTION_VAL_4_50_TR },
         { "4.75", OPTION_VAL_4_75_TR },
         { "5.00", OPTION_VAL_5_00_TR },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_TR,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_TR,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_TR,
      NULL,
      PCE_MULTITAP_INFO_0_TR,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_TR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_TR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_TR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_TR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_TR,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_TR,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_TR },
         { "always", OPTION_VAL_ALWAYS_TR },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_TR,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_TR,
      NULL,
      PCE_TURBO_DELAY_INFO_0_TR,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_TR },
         { "Medium", OPTION_VAL_MEDIUM_TR },
         { "Slow", OPTION_VAL_SLOW_TR },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_TR,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_TR,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_TR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_TR,
      NULL,
      PCE_CDBIOS_INFO_0_TR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_TR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_TR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_TR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_TR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_TR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_TR },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_TR,
      NULL,
      PCE_ARCADECARD_INFO_0_TR,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_TR,
      PCE_CDSPEED_LABEL_CAT_TR,
      PCE_CDSPEED_INFO_0_TR,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_TR,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_TR,
      PCE_ADPCMEXTRAPREC_INFO_0_TR,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_TR },
         { "12-bit", OPTION_VAL_12_BIT_TR },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_TR,
      PCE_ADPCMVOLUME_LABEL_CAT_TR,
      PCE_ADPCMVOLUME_INFO_0_TR,
      PCE_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_TR,
      PCE_CDDAVOLUME_LABEL_CAT_TR,
      PCE_ADPCMVOLUME_INFO_0_TR,
      PCE_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_TR,
      PCE_CDPSGVOLUME_LABEL_CAT_TR,
      PCE_ADPCMVOLUME_INFO_0_TR,
      PCE_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_TR,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_TR,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK "Відео"
#define CATEGORY_VIDEO_INFO_0_UK NULL
#define CATEGORY_AUDIO_LABEL_UK "Аудіо"
#define CATEGORY_AUDIO_INFO_0_UK "Налаштування емуляції аудіопристроїв."
#define CATEGORY_INPUT_LABEL_UK "Ввід"
#define CATEGORY_INPUT_INFO_0_UK NULL
#define CATEGORY_HACKS_LABEL_UK "Гаки емуляції"
#define CATEGORY_HACKS_INFO_0_UK "Налаштування розгону процесора та точності емуляції, що впливають на низькорівневу продуктивність та сумісність."
#define CATEGORY_CD_LABEL_UK NULL
#define CATEGORY_CD_INFO_0_UK NULL
#define PCE_PALETTE_LABEL_UK "Кольорова палітра"
#define PCE_PALETTE_INFO_0_UK "Композитний намагається відтворити оригінальний вивід консолі та може показати більше деталей у деяких іграх."
#define OPTION_VAL_RGB_UK NULL
#define OPTION_VAL_COMPOSITE_UK "Композитний"
#define PCE_ASPECT_RATIO_LABEL_UK "Співвідношення сторін"
#define PCE_ASPECT_RATIO_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK "Авто"
#define OPTION_VAL_6_5_UK NULL
#define OPTION_VAL_4_3_UK NULL
#define OPTION_VAL_UNCORRECTED_UK "Не коректне"
#define PCE_SCALING_LABEL_UK NULL
#define PCE_SCALING_INFO_0_UK NULL
#define OPTION_VAL_LORES_UK NULL
#define OPTION_VAL_HIRES_UK NULL
#define PCE_HIRES_BLEND_LABEL_UK NULL
#define PCE_HIRES_BLEND_INFO_0_UK NULL
#define PCE_H_OVERSCAN_LABEL_UK "Показати горизонтальну розгортку"
#define PCE_H_OVERSCAN_INFO_0_UK NULL
#define PCE_INITIAL_SCANLINE_LABEL_UK NULL
#define PCE_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_3_UK "3 (за замовчуванням)"
#define PCE_LAST_SCANLINE_LABEL_UK NULL
#define PCE_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_242_UK "242 (за замовчуванням)"
#define PCE_PSGREVISION_LABEL_UK NULL
#define PCE_PSGREVISION_INFO_0_UK NULL
#define OPTION_VAL_HUC6280_UK NULL
#define OPTION_VAL_HUC6280A_UK NULL
#define PCE_RESAMP_QUALITY_LABEL_UK NULL
#define PCE_RESAMP_QUALITY_INFO_0_UK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_UK NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_UK NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_UK "Чутливість миші"
#define PCE_MOUSE_SENSITIVITY_INFO_0_UK "Великі значення змусять курсор миші рухатися швидше."
#define OPTION_VAL_0_125_UK NULL
#define OPTION_VAL_0_250_UK NULL
#define OPTION_VAL_0_375_UK NULL
#define OPTION_VAL_0_500_UK NULL
#define OPTION_VAL_0_625_UK NULL
#define OPTION_VAL_0_750_UK NULL
#define OPTION_VAL_0_875_UK NULL
#define OPTION_VAL_1_000_UK NULL
#define OPTION_VAL_1_125_UK NULL
#define OPTION_VAL_1_25_UK NULL
#define OPTION_VAL_1_50_UK NULL
#define OPTION_VAL_1_75_UK NULL
#define OPTION_VAL_2_00_UK NULL
#define OPTION_VAL_2_25_UK NULL
#define OPTION_VAL_2_50_UK NULL
#define OPTION_VAL_2_75_UK NULL
#define OPTION_VAL_3_00_UK NULL
#define OPTION_VAL_3_25_UK NULL
#define OPTION_VAL_3_50_UK NULL
#define OPTION_VAL_3_75_UK NULL
#define OPTION_VAL_4_00_UK NULL
#define OPTION_VAL_4_25_UK NULL
#define OPTION_VAL_4_50_UK NULL
#define OPTION_VAL_4_75_UK NULL
#define OPTION_VAL_5_00_UK NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_UK "Дозволити протилежні напрямки"
#define PCE_UP_DOWN_ALLOWED_INFO_0_UK "Увімкнення цього дозволить одночасно натискати / швидко чергувати/утримувати одночасно ліворуч та праворуч (чи донизу) напрямки. Це може спричинити глітчі руху."
#define PCE_DISABLE_SOFTRESET_LABEL_UK "Вимкнути програмне скидання (РУХ+ВИБІР)"
#define PCE_DISABLE_SOFTRESET_INFO_0_UK "Коли РУХ та ВИБІР одночасно натиснуто, тимчасово вимкнуться обидві кнопки замість скидання."
#define PCE_MULTITAP_LABEL_UK NULL
#define PCE_MULTITAP_INFO_0_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_UK NULL
#define OPTION_VAL_2_BUTTONS_UK NULL
#define OPTION_VAL_6_BUTTONS_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_UK NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_UK NULL
#define PCE_TURBO_TOGGLING_LABEL_UK "Турборежим гарячих клавіш"
#define PCE_TURBO_TOGGLING_INFO_0_UK "Увімкнути турбокнопки. Гарячі клавіші (кнопки III та IV) можуть поводити себе як перемикачі або виділені (утримування) турбокнопки."
#define OPTION_VAL_TOGGLE_UK "Перемикач"
#define OPTION_VAL_ALWAYS_UK "Виділений"
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_UK "Альтернативні турбокнопки"
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_UK NULL
#define PCE_TURBO_DELAY_LABEL_UK NULL
#define PCE_TURBO_DELAY_INFO_0_UK NULL
#define OPTION_VAL_FAST_UK "Швидко"
#define OPTION_VAL_MEDIUM_UK NULL
#define OPTION_VAL_SLOW_UK NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_UK NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_UK NULL
#define PCE_CDIMAGECACHE_LABEL_UK "Кеш образу CD (потрібен перезапуск)"
#define PCE_CDIMAGECACHE_INFO_0_UK "Завантажувати повне зображення в пам'ять під час запуску. Може зменшувати час завантаження за рахунок збільшення часу запуску."
#define PCE_CDBIOS_LABEL_UK NULL
#define PCE_CDBIOS_INFO_0_UK NULL
#define OPTION_VAL_GAMES_EXPRESS_UK NULL
#define OPTION_VAL_SYSTEM_CARD_1_UK NULL
#define OPTION_VAL_SYSTEM_CARD_2_UK NULL
#define OPTION_VAL_SYSTEM_CARD_3_UK NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_UK NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_UK NULL
#define PCE_ARCADECARD_LABEL_UK NULL
#define PCE_ARCADECARD_INFO_0_UK NULL
#define PCE_CDSPEED_LABEL_UK NULL
#define PCE_CDSPEED_LABEL_CAT_UK NULL
#define PCE_CDSPEED_INFO_0_UK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_UK NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_UK NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_UK NULL
#define OPTION_VAL_10_BIT_UK NULL
#define OPTION_VAL_12_BIT_UK NULL
#define PCE_ADPCMVOLUME_LABEL_UK NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_UK NULL
#define PCE_ADPCMVOLUME_INFO_0_UK NULL
#define PCE_ADPCMVOLUME_INFO_1_UK NULL
#define PCE_CDDAVOLUME_LABEL_UK NULL
#define PCE_CDDAVOLUME_LABEL_CAT_UK NULL
#define PCE_CDPSGVOLUME_LABEL_UK NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_UK NULL
#define PCE_NOSPRITELIMIT_LABEL_UK NULL
#define PCE_NOSPRITELIMIT_INFO_0_UK NULL
#define PCE_OCMULTIPLIER_LABEL_UK NULL
#define PCE_OCMULTIPLIER_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_UK,
      CATEGORY_VIDEO_INFO_0_UK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_UK,
      CATEGORY_AUDIO_INFO_0_UK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_UK,
      CATEGORY_HACKS_INFO_0_UK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_UK,
      CATEGORY_CD_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_UK,
      NULL,
      PCE_PALETTE_INFO_0_UK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_UK },
         { "Composite", OPTION_VAL_COMPOSITE_UK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_UK,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_UK,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "6:5", OPTION_VAL_6_5_UK },
         { "4:3", OPTION_VAL_4_3_UK },
         { "uncorrected", OPTION_VAL_UNCORRECTED_UK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_UK,
      NULL,
      PCE_SCALING_INFO_0_UK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "lores", OPTION_VAL_LORES_UK },
         { "hires", OPTION_VAL_HIRES_UK },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_UK,
      NULL,
      PCE_HIRES_BLEND_INFO_0_UK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_UK,
      NULL,
      PCE_H_OVERSCAN_INFO_0_UK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_UK,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_UK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_UK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_UK,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_UK,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_UK },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_UK,
      NULL,
      PCE_PSGREVISION_INFO_0_UK,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_UK },
         { "HuC6280A", OPTION_VAL_HUC6280A_UK },
         { "auto", OPTION_VAL_AUTO_UK },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_UK,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_UK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_UK,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_UK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_UK,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_UK },
         { "0.250", OPTION_VAL_0_250_UK },
         { "0.375", OPTION_VAL_0_375_UK },
         { "0.500", OPTION_VAL_0_500_UK },
         { "0.625", OPTION_VAL_0_625_UK },
         { "0.750", OPTION_VAL_0_750_UK },
         { "0.875", OPTION_VAL_0_875_UK },
         { "1.000", OPTION_VAL_1_000_UK },
         { "1.125", OPTION_VAL_1_125_UK },
         { "1.25", OPTION_VAL_1_25_UK },
         { "1.50", OPTION_VAL_1_50_UK },
         { "1.75", OPTION_VAL_1_75_UK },
         { "2.00", OPTION_VAL_2_00_UK },
         { "2.25", OPTION_VAL_2_25_UK },
         { "2.50", OPTION_VAL_2_50_UK },
         { "2.75", OPTION_VAL_2_75_UK },
         { "3.00", OPTION_VAL_3_00_UK },
         { "3.25", OPTION_VAL_3_25_UK },
         { "3.50", OPTION_VAL_3_50_UK },
         { "3.75", OPTION_VAL_3_75_UK },
         { "4.00", OPTION_VAL_4_00_UK },
         { "4.25", OPTION_VAL_4_25_UK },
         { "4.50", OPTION_VAL_4_50_UK },
         { "4.75", OPTION_VAL_4_75_UK },
         { "5.00", OPTION_VAL_5_00_UK },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_UK,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_UK,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_UK,
      NULL,
      PCE_MULTITAP_INFO_0_UK,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_UK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_UK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_UK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_UK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_UK,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_UK,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_UK },
         { "always", OPTION_VAL_ALWAYS_UK },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_UK,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_UK,
      NULL,
      PCE_TURBO_DELAY_INFO_0_UK,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_UK },
         { "Medium", OPTION_VAL_MEDIUM_UK },
         { "Slow", OPTION_VAL_SLOW_UK },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_UK,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_UK,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_UK,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_UK,
      NULL,
      PCE_CDBIOS_INFO_0_UK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_UK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_UK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_UK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_UK },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_UK },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_UK },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_UK,
      NULL,
      PCE_ARCADECARD_INFO_0_UK,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_UK,
      PCE_CDSPEED_LABEL_CAT_UK,
      PCE_CDSPEED_INFO_0_UK,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_UK,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_UK,
      PCE_ADPCMEXTRAPREC_INFO_0_UK,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_UK },
         { "12-bit", OPTION_VAL_12_BIT_UK },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_UK,
      PCE_ADPCMVOLUME_LABEL_CAT_UK,
      PCE_ADPCMVOLUME_INFO_0_UK,
      PCE_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_UK,
      PCE_CDDAVOLUME_LABEL_CAT_UK,
      PCE_ADPCMVOLUME_INFO_0_UK,
      PCE_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_UK,
      PCE_CDPSGVOLUME_LABEL_CAT_UK,
      PCE_ADPCMVOLUME_INFO_0_UK,
      PCE_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_UK,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_UK,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_VIDEO_LABEL_VAL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_VAL NULL
#define CATEGORY_AUDIO_LABEL_VAL "Àudio"
#define CATEGORY_AUDIO_INFO_0_VAL NULL
#define CATEGORY_INPUT_LABEL_VAL "Entrada"
#define CATEGORY_INPUT_INFO_0_VAL NULL
#define CATEGORY_HACKS_LABEL_VAL NULL
#define CATEGORY_HACKS_INFO_0_VAL NULL
#define CATEGORY_CD_LABEL_VAL NULL
#define CATEGORY_CD_INFO_0_VAL NULL
#define PCE_PALETTE_LABEL_VAL NULL
#define PCE_PALETTE_INFO_0_VAL NULL
#define OPTION_VAL_RGB_VAL NULL
#define OPTION_VAL_COMPOSITE_VAL NULL
#define PCE_ASPECT_RATIO_LABEL_VAL "Relació d'aspecte"
#define PCE_ASPECT_RATIO_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL "Selecció automàtica"
#define OPTION_VAL_6_5_VAL NULL
#define OPTION_VAL_4_3_VAL NULL
#define OPTION_VAL_UNCORRECTED_VAL NULL
#define PCE_SCALING_LABEL_VAL NULL
#define PCE_SCALING_INFO_0_VAL NULL
#define OPTION_VAL_LORES_VAL NULL
#define OPTION_VAL_HIRES_VAL NULL
#define PCE_HIRES_BLEND_LABEL_VAL NULL
#define PCE_HIRES_BLEND_INFO_0_VAL NULL
#define PCE_H_OVERSCAN_LABEL_VAL NULL
#define PCE_H_OVERSCAN_INFO_0_VAL NULL
#define PCE_INITIAL_SCANLINE_LABEL_VAL NULL
#define PCE_INITIAL_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_3_VAL NULL
#define PCE_LAST_SCANLINE_LABEL_VAL NULL
#define PCE_LAST_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_242_VAL NULL
#define PCE_PSGREVISION_LABEL_VAL NULL
#define PCE_PSGREVISION_INFO_0_VAL NULL
#define OPTION_VAL_HUC6280_VAL NULL
#define OPTION_VAL_HUC6280A_VAL NULL
#define PCE_RESAMP_QUALITY_LABEL_VAL NULL
#define PCE_RESAMP_QUALITY_INFO_0_VAL "Els valors alts donen una millor proporció i preservació d'altes freqüències de relació senyal-soroll, però augmenta el cost de recursos i pot causar major latència i retallada d'imatge si el volum es posa massa alt."
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_VAL NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_VAL NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_VAL NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_VAL NULL
#define OPTION_VAL_0_125_VAL "0,125"
#define OPTION_VAL_0_250_VAL "0,250"
#define OPTION_VAL_0_375_VAL "0,375"
#define OPTION_VAL_0_500_VAL "0,500"
#define OPTION_VAL_0_625_VAL "0,625"
#define OPTION_VAL_0_750_VAL "0,750"
#define OPTION_VAL_0_875_VAL "0,875"
#define OPTION_VAL_1_000_VAL "1,000"
#define OPTION_VAL_1_125_VAL "1,125"
#define OPTION_VAL_1_25_VAL "1,25"
#define OPTION_VAL_1_50_VAL "1,50"
#define OPTION_VAL_1_75_VAL "1,75"
#define OPTION_VAL_2_00_VAL "2,00"
#define OPTION_VAL_2_25_VAL "2,25"
#define OPTION_VAL_2_50_VAL "2,50"
#define OPTION_VAL_2_75_VAL "2,75"
#define OPTION_VAL_3_00_VAL "3,00"
#define OPTION_VAL_3_25_VAL "3,25"
#define OPTION_VAL_3_50_VAL "3,50"
#define OPTION_VAL_3_75_VAL "3,75"
#define OPTION_VAL_4_00_VAL "4,00"
#define OPTION_VAL_4_25_VAL "4,25"
#define OPTION_VAL_4_50_VAL "4,50"
#define OPTION_VAL_4_75_VAL "4,75"
#define OPTION_VAL_5_00_VAL "5,00"
#define PCE_UP_DOWN_ALLOWED_LABEL_VAL NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_VAL NULL
#define PCE_DISABLE_SOFTRESET_LABEL_VAL NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_VAL NULL
#define PCE_MULTITAP_LABEL_VAL NULL
#define PCE_MULTITAP_INFO_0_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VAL NULL
#define OPTION_VAL_2_BUTTONS_VAL NULL
#define OPTION_VAL_6_BUTTONS_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_VAL NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VAL NULL
#define PCE_TURBO_TOGGLING_LABEL_VAL NULL
#define PCE_TURBO_TOGGLING_INFO_0_VAL NULL
#define OPTION_VAL_TOGGLE_VAL NULL
#define OPTION_VAL_ALWAYS_VAL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_VAL NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_VAL NULL
#define PCE_TURBO_DELAY_LABEL_VAL NULL
#define PCE_TURBO_DELAY_INFO_0_VAL NULL
#define OPTION_VAL_FAST_VAL NULL
#define OPTION_VAL_MEDIUM_VAL NULL
#define OPTION_VAL_SLOW_VAL NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_VAL NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_VAL NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_VAL NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_VAL NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_VAL NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_VAL NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_VAL NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_VAL NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_VAL NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_VAL NULL
#define PCE_CDIMAGECACHE_LABEL_VAL NULL
#define PCE_CDIMAGECACHE_INFO_0_VAL NULL
#define PCE_CDBIOS_LABEL_VAL NULL
#define PCE_CDBIOS_INFO_0_VAL NULL
#define OPTION_VAL_GAMES_EXPRESS_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_1_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_2_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_3_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_VAL NULL
#define PCE_ARCADECARD_LABEL_VAL NULL
#define PCE_ARCADECARD_INFO_0_VAL NULL
#define PCE_CDSPEED_LABEL_VAL NULL
#define PCE_CDSPEED_LABEL_CAT_VAL NULL
#define PCE_CDSPEED_INFO_0_VAL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_VAL NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_VAL NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_VAL NULL
#define OPTION_VAL_10_BIT_VAL NULL
#define OPTION_VAL_12_BIT_VAL NULL
#define PCE_ADPCMVOLUME_LABEL_VAL NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_VAL NULL
#define PCE_ADPCMVOLUME_INFO_0_VAL NULL
#define PCE_ADPCMVOLUME_INFO_1_VAL NULL
#define PCE_CDDAVOLUME_LABEL_VAL NULL
#define PCE_CDDAVOLUME_LABEL_CAT_VAL NULL
#define PCE_CDPSGVOLUME_LABEL_VAL NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_VAL NULL
#define PCE_NOSPRITELIMIT_LABEL_VAL NULL
#define PCE_NOSPRITELIMIT_INFO_0_VAL NULL
#define PCE_OCMULTIPLIER_LABEL_VAL NULL
#define PCE_OCMULTIPLIER_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VAL,
      CATEGORY_VIDEO_INFO_0_VAL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VAL,
      CATEGORY_AUDIO_INFO_0_VAL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VAL,
      CATEGORY_INPUT_INFO_0_VAL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VAL,
      CATEGORY_HACKS_INFO_0_VAL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_VAL,
      CATEGORY_CD_INFO_0_VAL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_VAL,
      NULL,
      PCE_PALETTE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_VAL },
         { "Composite", OPTION_VAL_COMPOSITE_VAL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_VAL,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_VAL,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VAL },
         { "6:5", OPTION_VAL_6_5_VAL },
         { "4:3", OPTION_VAL_4_3_VAL },
         { "uncorrected", OPTION_VAL_UNCORRECTED_VAL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_VAL,
      NULL,
      PCE_SCALING_INFO_0_VAL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VAL },
         { "lores", OPTION_VAL_LORES_VAL },
         { "hires", OPTION_VAL_HIRES_VAL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_VAL,
      NULL,
      PCE_HIRES_BLEND_INFO_0_VAL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_VAL,
      NULL,
      PCE_H_OVERSCAN_INFO_0_VAL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VAL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_VAL,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VAL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_VAL,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_VAL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_VAL,
      NULL,
      PCE_PSGREVISION_INFO_0_VAL,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_VAL },
         { "HuC6280A", OPTION_VAL_HUC6280A_VAL },
         { "auto", OPTION_VAL_AUTO_VAL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_VAL,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_VAL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VAL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_VAL,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_VAL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_VAL,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_VAL },
         { "0.250", OPTION_VAL_0_250_VAL },
         { "0.375", OPTION_VAL_0_375_VAL },
         { "0.500", OPTION_VAL_0_500_VAL },
         { "0.625", OPTION_VAL_0_625_VAL },
         { "0.750", OPTION_VAL_0_750_VAL },
         { "0.875", OPTION_VAL_0_875_VAL },
         { "1.000", OPTION_VAL_1_000_VAL },
         { "1.125", OPTION_VAL_1_125_VAL },
         { "1.25", OPTION_VAL_1_25_VAL },
         { "1.50", OPTION_VAL_1_50_VAL },
         { "1.75", OPTION_VAL_1_75_VAL },
         { "2.00", OPTION_VAL_2_00_VAL },
         { "2.25", OPTION_VAL_2_25_VAL },
         { "2.50", OPTION_VAL_2_50_VAL },
         { "2.75", OPTION_VAL_2_75_VAL },
         { "3.00", OPTION_VAL_3_00_VAL },
         { "3.25", OPTION_VAL_3_25_VAL },
         { "3.50", OPTION_VAL_3_50_VAL },
         { "3.75", OPTION_VAL_3_75_VAL },
         { "4.00", OPTION_VAL_4_00_VAL },
         { "4.25", OPTION_VAL_4_25_VAL },
         { "4.50", OPTION_VAL_4_50_VAL },
         { "4.75", OPTION_VAL_4_75_VAL },
         { "5.00", OPTION_VAL_5_00_VAL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_VAL,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_VAL,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_VAL,
      NULL,
      PCE_MULTITAP_INFO_0_VAL,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_VAL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_VAL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_VAL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_VAL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_VAL,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_VAL,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_VAL },
         { "always", OPTION_VAL_ALWAYS_VAL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_VAL,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_VAL,
      NULL,
      PCE_TURBO_DELAY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_VAL },
         { "Medium", OPTION_VAL_MEDIUM_VAL },
         { "Slow", OPTION_VAL_SLOW_VAL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_VAL,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_VAL,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_VAL,
      NULL,
      PCE_CDBIOS_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_VAL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_VAL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_VAL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_VAL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_VAL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_VAL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_VAL,
      NULL,
      PCE_ARCADECARD_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_VAL,
      PCE_CDSPEED_LABEL_CAT_VAL,
      PCE_CDSPEED_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_VAL,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_VAL,
      PCE_ADPCMEXTRAPREC_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_VAL },
         { "12-bit", OPTION_VAL_12_BIT_VAL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_VAL,
      PCE_ADPCMVOLUME_LABEL_CAT_VAL,
      PCE_ADPCMVOLUME_INFO_0_VAL,
      PCE_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_VAL,
      PCE_CDDAVOLUME_LABEL_CAT_VAL,
      PCE_ADPCMVOLUME_INFO_0_VAL,
      PCE_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_VAL,
      PCE_CDPSGVOLUME_LABEL_CAT_VAL,
      PCE_ADPCMVOLUME_INFO_0_VAL,
      PCE_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_VAL,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_VAL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_VAL,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_VAL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN "Hình ảnh"
#define CATEGORY_VIDEO_INFO_0_VN NULL
#define CATEGORY_AUDIO_LABEL_VN "Âm thanh"
#define CATEGORY_AUDIO_INFO_0_VN "Chỉnh sửa âm thanh của giả lập."
#define CATEGORY_INPUT_LABEL_VN "Input Driver"
#define CATEGORY_INPUT_INFO_0_VN NULL
#define CATEGORY_HACKS_LABEL_VN "Hacks giả lập"
#define CATEGORY_HACKS_INFO_0_VN "Định cấu hình các thông số độ chính xác của việc ép xung và mô phỏng bộ xử lý ảnh hưởng đến hiệu suất và khả năng tương thích ở mức thấp."
#define CATEGORY_CD_LABEL_VN NULL
#define CATEGORY_CD_INFO_0_VN "Định cấu hình cài đặt liên quan đến trình mô phỏng PC Engine CD."
#define PCE_PALETTE_LABEL_VN "Bảng màu"
#define PCE_PALETTE_INFO_0_VN "Tổng hợp các cố gắng để tạo lại đầu ra bảng điều khiển ban đầu và có thể hiển thị thêm chi tiết trong một số trò chơi."
#define OPTION_VAL_RGB_VN NULL
#define OPTION_VAL_COMPOSITE_VN "Kết hợp"
#define PCE_ASPECT_RATIO_LABEL_VN NULL
#define PCE_ASPECT_RATIO_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_6_5_VN NULL
#define OPTION_VAL_4_3_VN NULL
#define OPTION_VAL_UNCORRECTED_VN NULL
#define PCE_SCALING_LABEL_VN NULL
#define PCE_SCALING_INFO_0_VN NULL
#define OPTION_VAL_LORES_VN NULL
#define OPTION_VAL_HIRES_VN NULL
#define PCE_HIRES_BLEND_LABEL_VN NULL
#define PCE_HIRES_BLEND_INFO_0_VN NULL
#define PCE_H_OVERSCAN_LABEL_VN NULL
#define PCE_H_OVERSCAN_INFO_0_VN NULL
#define PCE_INITIAL_SCANLINE_LABEL_VN NULL
#define PCE_INITIAL_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_3_VN "3 (Mặc định)"
#define PCE_LAST_SCANLINE_LABEL_VN NULL
#define PCE_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_242_VN "242 (Mặc định)"
#define PCE_PSGREVISION_LABEL_VN NULL
#define PCE_PSGREVISION_INFO_0_VN NULL
#define OPTION_VAL_HUC6280_VN NULL
#define OPTION_VAL_HUC6280A_VN NULL
#define PCE_RESAMP_QUALITY_LABEL_VN NULL
#define PCE_RESAMP_QUALITY_INFO_0_VN NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_VN NULL
#define PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_VN NULL
#define PCE_MOUSE_SENSITIVITY_LABEL_VN NULL
#define PCE_MOUSE_SENSITIVITY_INFO_0_VN NULL
#define OPTION_VAL_0_125_VN NULL
#define OPTION_VAL_0_250_VN NULL
#define OPTION_VAL_0_375_VN NULL
#define OPTION_VAL_0_500_VN NULL
#define OPTION_VAL_0_625_VN NULL
#define OPTION_VAL_0_750_VN NULL
#define OPTION_VAL_0_875_VN NULL
#define OPTION_VAL_1_000_VN NULL
#define OPTION_VAL_1_125_VN NULL
#define OPTION_VAL_1_25_VN NULL
#define OPTION_VAL_1_50_VN NULL
#define OPTION_VAL_1_75_VN NULL
#define OPTION_VAL_2_00_VN NULL
#define OPTION_VAL_2_25_VN NULL
#define OPTION_VAL_2_50_VN NULL
#define OPTION_VAL_2_75_VN NULL
#define OPTION_VAL_3_00_VN NULL
#define OPTION_VAL_3_25_VN NULL
#define OPTION_VAL_3_50_VN NULL
#define OPTION_VAL_3_75_VN NULL
#define OPTION_VAL_4_00_VN NULL
#define OPTION_VAL_4_25_VN NULL
#define OPTION_VAL_4_50_VN NULL
#define OPTION_VAL_4_75_VN NULL
#define OPTION_VAL_5_00_VN NULL
#define PCE_UP_DOWN_ALLOWED_LABEL_VN NULL
#define PCE_UP_DOWN_ALLOWED_INFO_0_VN NULL
#define PCE_DISABLE_SOFTRESET_LABEL_VN NULL
#define PCE_DISABLE_SOFTRESET_INFO_0_VN NULL
#define PCE_MULTITAP_LABEL_VN NULL
#define PCE_MULTITAP_INFO_0_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VN NULL
#define OPTION_VAL_2_BUTTONS_VN NULL
#define OPTION_VAL_6_BUTTONS_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_VN NULL
#define PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VN NULL
#define PCE_TURBO_TOGGLING_LABEL_VN NULL
#define PCE_TURBO_TOGGLING_INFO_0_VN NULL
#define OPTION_VAL_TOGGLE_VN NULL
#define OPTION_VAL_ALWAYS_VN NULL
#define PCE_TURBO_TOGGLE_HOTKEY_LABEL_VN NULL
#define PCE_TURBO_TOGGLE_HOTKEY_INFO_0_VN NULL
#define PCE_TURBO_DELAY_LABEL_VN NULL
#define PCE_TURBO_DELAY_INFO_0_VN NULL
#define OPTION_VAL_FAST_VN NULL
#define OPTION_VAL_MEDIUM_VN NULL
#define OPTION_VAL_SLOW_VN NULL
#define PCE_P0_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P0_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P1_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P1_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P2_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P2_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P3_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P3_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_P4_TURBO_I_ENABLE_LABEL_VN NULL
#define PCE_P4_TURBO_II_ENABLE_LABEL_VN NULL
#define PCE_CDIMAGECACHE_LABEL_VN NULL
#define PCE_CDIMAGECACHE_INFO_0_VN NULL
#define PCE_CDBIOS_LABEL_VN NULL
#define PCE_CDBIOS_INFO_0_VN NULL
#define OPTION_VAL_GAMES_EXPRESS_VN NULL
#define OPTION_VAL_SYSTEM_CARD_1_VN NULL
#define OPTION_VAL_SYSTEM_CARD_2_VN NULL
#define OPTION_VAL_SYSTEM_CARD_3_VN NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_VN NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_VN NULL
#define PCE_ARCADECARD_LABEL_VN NULL
#define PCE_ARCADECARD_INFO_0_VN NULL
#define PCE_CDSPEED_LABEL_VN NULL
#define PCE_CDSPEED_LABEL_CAT_VN NULL
#define PCE_CDSPEED_INFO_0_VN NULL
#define PCE_ADPCMEXTRAPREC_LABEL_VN NULL
#define PCE_ADPCMEXTRAPREC_LABEL_CAT_VN NULL
#define PCE_ADPCMEXTRAPREC_INFO_0_VN NULL
#define OPTION_VAL_10_BIT_VN NULL
#define OPTION_VAL_12_BIT_VN NULL
#define PCE_ADPCMVOLUME_LABEL_VN NULL
#define PCE_ADPCMVOLUME_LABEL_CAT_VN NULL
#define PCE_ADPCMVOLUME_INFO_0_VN NULL
#define PCE_ADPCMVOLUME_INFO_1_VN NULL
#define PCE_CDDAVOLUME_LABEL_VN NULL
#define PCE_CDDAVOLUME_LABEL_CAT_VN NULL
#define PCE_CDPSGVOLUME_LABEL_VN NULL
#define PCE_CDPSGVOLUME_LABEL_CAT_VN NULL
#define PCE_NOSPRITELIMIT_LABEL_VN NULL
#define PCE_NOSPRITELIMIT_INFO_0_VN NULL
#define PCE_OCMULTIPLIER_LABEL_VN NULL
#define PCE_OCMULTIPLIER_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VN,
      CATEGORY_VIDEO_INFO_0_VN
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VN,
      CATEGORY_AUDIO_INFO_0_VN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VN,
      CATEGORY_HACKS_INFO_0_VN
   },
   {
      "cd",
      CATEGORY_CD_LABEL_VN,
      CATEGORY_CD_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "pce_palette",
      PCE_PALETTE_LABEL_VN,
      NULL,
      PCE_PALETTE_INFO_0_VN,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_VN },
         { "Composite", OPTION_VAL_COMPOSITE_VN },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_aspect_ratio",
      PCE_ASPECT_RATIO_LABEL_VN,
      NULL,
      PCE_ASPECT_RATIO_INFO_0_VN,
      NULL, 
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "6:5", OPTION_VAL_6_5_VN },
         { "4:3", OPTION_VAL_4_3_VN },
         { "uncorrected", OPTION_VAL_UNCORRECTED_VN },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      PCE_SCALING_LABEL_VN,
      NULL,
      PCE_SCALING_INFO_0_VN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "lores", OPTION_VAL_LORES_VN },
         { "hires", OPTION_VAL_HIRES_VN },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      PCE_HIRES_BLEND_LABEL_VN,
      NULL,
      PCE_HIRES_BLEND_INFO_0_VN,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      PCE_H_OVERSCAN_LABEL_VN,
      NULL,
      PCE_H_OVERSCAN_INFO_0_VN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      PCE_INITIAL_SCANLINE_LABEL_VN,
      NULL,
      PCE_INITIAL_SCANLINE_INFO_0_VN,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      PCE_LAST_SCANLINE_LABEL_VN,
      NULL,
      PCE_LAST_SCANLINE_INFO_0_VN,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_VN },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      PCE_PSGREVISION_LABEL_VN,
      NULL,
      PCE_PSGREVISION_INFO_0_VN,
      NULL,
      "audio",
      {
         { "HuC6280", OPTION_VAL_HUC6280_VN },
         { "HuC6280A", OPTION_VAL_HUC6280A_VN },
         { "auto", OPTION_VAL_AUTO_VN },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_resamp_quality",
      PCE_RESAMP_QUALITY_LABEL_VN,
      NULL,
      PCE_RESAMP_QUALITY_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_LABEL_VN,
      NULL,
      PCE_SHOW_ADVANCED_INPUT_SETTINGS_INFO_0_VN,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      PCE_MOUSE_SENSITIVITY_LABEL_VN,
      NULL,
      PCE_MOUSE_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         { "0.125", OPTION_VAL_0_125_VN },
         { "0.250", OPTION_VAL_0_250_VN },
         { "0.375", OPTION_VAL_0_375_VN },
         { "0.500", OPTION_VAL_0_500_VN },
         { "0.625", OPTION_VAL_0_625_VN },
         { "0.750", OPTION_VAL_0_750_VN },
         { "0.875", OPTION_VAL_0_875_VN },
         { "1.000", OPTION_VAL_1_000_VN },
         { "1.125", OPTION_VAL_1_125_VN },
         { "1.25", OPTION_VAL_1_25_VN },
         { "1.50", OPTION_VAL_1_50_VN },
         { "1.75", OPTION_VAL_1_75_VN },
         { "2.00", OPTION_VAL_2_00_VN },
         { "2.25", OPTION_VAL_2_25_VN },
         { "2.50", OPTION_VAL_2_50_VN },
         { "2.75", OPTION_VAL_2_75_VN },
         { "3.00", OPTION_VAL_3_00_VN },
         { "3.25", OPTION_VAL_3_25_VN },
         { "3.50", OPTION_VAL_3_50_VN },
         { "3.75", OPTION_VAL_3_75_VN },
         { "4.00", OPTION_VAL_4_00_VN },
         { "4.25", OPTION_VAL_4_25_VN },
         { "4.50", OPTION_VAL_4_50_VN },
         { "4.75", OPTION_VAL_4_75_VN },
         { "5.00", OPTION_VAL_5_00_VN },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_up_down_allowed",
      PCE_UP_DOWN_ALLOWED_LABEL_VN,
      NULL,
      PCE_UP_DOWN_ALLOWED_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_disable_softreset",
      PCE_DISABLE_SOFTRESET_LABEL_VN,
      NULL,
      PCE_DISABLE_SOFTRESET_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_multitap",
      PCE_MULTITAP_LABEL_VN,
      NULL,
      PCE_MULTITAP_INFO_0_VN,
      NULL,
      "input",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_default_joypad_type_p1",
      PCE_DEFAULT_JOYPAD_TYPE_P1_LABEL_VN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p2",
      PCE_DEFAULT_JOYPAD_TYPE_P2_LABEL_VN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p3",
      PCE_DEFAULT_JOYPAD_TYPE_P3_LABEL_VN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p4",
      PCE_DEFAULT_JOYPAD_TYPE_P4_LABEL_VN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_default_joypad_type_p5",
      PCE_DEFAULT_JOYPAD_TYPE_P5_LABEL_VN,
      NULL,
      PCE_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_Turbo_Toggling",
      PCE_TURBO_TOGGLING_LABEL_VN,
      NULL,
      PCE_TURBO_TOGGLING_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "toggle", OPTION_VAL_TOGGLE_VN },
         { "always", OPTION_VAL_ALWAYS_VN },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      PCE_TURBO_TOGGLE_HOTKEY_LABEL_VN,
      NULL,
      PCE_TURBO_TOGGLE_HOTKEY_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      PCE_TURBO_DELAY_LABEL_VN,
      NULL,
      PCE_TURBO_DELAY_INFO_0_VN,
      NULL,
      "input",
      {
         { "Fast", OPTION_VAL_FAST_VN },
         { "Medium", OPTION_VAL_MEDIUM_VN },
         { "Slow", OPTION_VAL_SLOW_VN },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_p0_turbo_I_enable",
      PCE_P0_TURBO_I_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      PCE_P0_TURBO_II_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      PCE_P1_TURBO_I_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      PCE_P1_TURBO_II_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      PCE_P2_TURBO_I_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      PCE_P2_TURBO_II_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      PCE_P3_TURBO_I_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      PCE_P3_TURBO_II_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      PCE_P4_TURBO_I_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      PCE_P4_TURBO_II_ENABLE_LABEL_VN,
      NULL,
      NULL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdimagecache",
      PCE_CDIMAGECACHE_LABEL_VN,
      NULL,
      PCE_CDIMAGECACHE_INFO_0_VN,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      PCE_CDBIOS_LABEL_VN,
      NULL,
      PCE_CDBIOS_INFO_0_VN,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_VN },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_VN },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_VN },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_VN },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_VN },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_VN },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      PCE_ARCADECARD_LABEL_VN,
      NULL,
      PCE_ARCADECARD_INFO_0_VN,
      NULL,
      "cd",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_cdspeed",
      PCE_CDSPEED_LABEL_VN,
      PCE_CDSPEED_LABEL_CAT_VN,
      PCE_CDSPEED_INFO_0_VN,
      NULL,
      "cd",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      PCE_ADPCMEXTRAPREC_LABEL_VN,
      PCE_ADPCMEXTRAPREC_LABEL_CAT_VN,
      PCE_ADPCMEXTRAPREC_INFO_0_VN,
      NULL,
      "cd",
      {
         { "10-bit", OPTION_VAL_10_BIT_VN },
         { "12-bit", OPTION_VAL_12_BIT_VN },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_adpcmvolume",
      PCE_ADPCMVOLUME_LABEL_VN,
      PCE_ADPCMVOLUME_LABEL_CAT_VN,
      PCE_ADPCMVOLUME_INFO_0_VN,
      PCE_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cddavolume",
      PCE_CDDAVOLUME_LABEL_VN,
      PCE_CDDAVOLUME_LABEL_CAT_VN,
      PCE_ADPCMVOLUME_INFO_0_VN,
      PCE_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      PCE_CDPSGVOLUME_LABEL_VN,
      PCE_CDPSGVOLUME_LABEL_CAT_VN,
      PCE_ADPCMVOLUME_INFO_0_VN,
      PCE_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_nospritelimit",
      PCE_NOSPRITELIMIT_LABEL_VN,
      NULL,
      PCE_NOSPRITELIMIT_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      PCE_OCMULTIPLIER_LABEL_VN,
      NULL,
      PCE_OCMULTIPLIER_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL},
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif