#if defined(__XVIC__)
      {
         "vice_vic20_external_palette",
         "Video > VIC Color Palette",
         "'Colodore' is recommended for the most accurate colors.",
         {
            { "default", "Internal" },
            { "colodore_vic", "Colodore" },
            { "mike-pal", "Mike (PAL)" },
            { "mike-ntsc", "Mike (NTSC)" },
            { "vice", "Vice" },
            { NULL, NULL },
         },
         "colodore_vic"
      },
#elif defined(__XPLUS4__)
      {
         "vice_plus4_external_palette",
         "Video > TED Color Palette",
         "'Colodore' is recommended for the most accurate colors.",
         {
            { "default", "Internal" },
            { "colodore_ted", "Colodore" },
            { "yape-pal", "Yape (PAL)" },
            { "yape-ntsc", "Yape (NTSC)" },
            { NULL, NULL },
         },
         "colodore_ted"
      },
#elif defined(__XPET__)
      {
         "vice_pet_external_palette",
         "Video > CRTC Color Palette",
         "",
         {
            { "default", "Internal" },
            { "green", "Green" },
            { "amber", "Amber" },
            { "white", "White" },
            { NULL, NULL },
         },
         "default"
      },
#elif defined(__XCBM2__)
      {
         "vice_cbm2_external_palette",
         "Video > CRTC Color Palette",
         "",
         {
            { "default", "Internal" },
            { "green", "Green" },
            { "amber", "Amber" },
            { "white", "White" },
            { NULL, NULL },
         },
         "default"
      },
#elif !defined(__X64DTV__)
      {
         "vice_external_palette",
         "Video > VIC-II Color Palette",
         "'Colodore' is recommended for most accurate colors.",
         {
            { "default", "Internal" },
            { "colodore", "Colodore" },
            { "pepto-pal", "Pepto (PAL)" },
#if 0
            { "pepto-palold", "Pepto (old PAL)" },
#endif
            { "pepto-ntsc", "Pepto (NTSC)" },
            { "pepto-ntsc-sony", "Pepto (NTSC, Sony)" },
            { "cjam", "ChristopherJam" },
            { "c64hq", "C64HQ" },
            { "c64s", "C64S" },
            { "ccs64", "CCS64" },
            { "community-colors", "Community Colors" },
            { "deekay", "Deekay" },
            { "frodo", "Frodo" },
            { "godot", "Godot" },
            { "pc64", "PC64" },
            { "ptoing", "Ptoing" },
            { "rgb", "RGB" },
            { "vice", "VICE" },
/* ========================================= */
            { "vivid", "Vivid" },
            { "external", "External" },
/* ========================================= */
            { NULL, NULL },
         },
         "colodore"
      },
#endif
