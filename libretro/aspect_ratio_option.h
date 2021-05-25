#if defined(__X64__) || defined(__X64SC__) || defined(__X64DTV__) || defined(__X128__) || defined(__XSCPU64__) || defined(__XCBM5x0__) || defined(__XVIC__) || defined(__XPLUS4__)
      {
         "vice_aspect_ratio",
         "Video > Pixel Aspect Ratio",
         "Hotkey toggling disables this option until core restart.",
         {
            { "auto", "Automatic" },
            { "pal", "PAL" },
         /* ================================ */
            { "raw", "1:1" },
         /* ================================ */
            { "ntsc", "NTSC" },
            { NULL, NULL },
         },
         "auto"
      },
#endif
