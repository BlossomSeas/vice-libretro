#if defined(__X64__) || defined(__X64SC__) || defined(__X64DTV__) || defined(__X128__) || defined(__XSCPU64__) || defined(__XCBM5x0__) || defined(__XVIC__) || defined(__XPLUS4__)
      {
         "vice_zoom_mode",
         "Video > Zoom Mode",
         "Crop borders to fit various host screens. Requirements in RetroArch settings:\n- Aspect Ratio: Core provided,\n- Integer Scale: Off.",
         {
            { "disabled", NULL },
            { "small", "Small" },
            { "medium", "Medium" },
            { "maximum", "Maximum" },
            { "manual", "Manual" },
            { NULL, NULL },
         },
         "disabled"
      },
#endif
