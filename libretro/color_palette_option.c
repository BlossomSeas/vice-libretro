static void external_palette_load(const char *mode, const char *file, unsigned char *pal)
{
   FILE *fp;
   char *systemFolder;
   char *paletteFile;
   char strTmp[512];
   int lcv;

   static bool init = false;


   if (!init) {
      init = true;
      return;
   }


   if (strcmp(mode, "external")) {
      return;
   }

   if (!environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &systemFolder) || !systemFolder) {
      return;
   }


   paletteFile = (char*) calloc(1, strlen(systemFolder) + strlen("/vice/") + strlen(file) + 1);
   sprintf(paletteFile, "%s/vice/%s", systemFolder, file);


   fp = fopen(paletteFile, "r");
   if (!fp) {
      fprintf(stderr, "External palette not found: %s\n", paletteFile);
      free(paletteFile);
      return;
   }


   /* ======================================== */


   lcv = 0;
   while (fgets(strTmp, sizeof(strTmp), fp) != 0) {
      unsigned char r,g,b,d;

      if (strTmp[0] == '#') {
         continue;
      }

      if (sscanf(strTmp, "%02x %02x %02x %01x\n", &r, &g, &b, &d) != 4) {
         continue;
      }


      pal[lcv+0] = r;
      pal[lcv+1] = g;
      pal[lcv+2] = b;
      pal[lcv+3] = d;
      lcv += 4;
   }


   free(paletteFile);
}


static void external_palette_vic20(const char *mode)
{
   extern unsigned char vic20_external_vpl[];
   external_palette_load(mode, "vic20_external.vpl", (unsigned char *) vic20_external_vpl);
}


static void external_palette_plus4(const char *mode)
{
   extern unsigned char plus4_external_vpl[];
   external_palette_load(mode, "plus4_external.vpl", (unsigned char *) plus4_external_vpl);
}


static void external_palette_pet(const char *mode)
{
   extern unsigned char pet_external_vpl[];
   external_palette_load(mode, "pet_external.vpl", (unsigned char *) pet_external_vpl);
}


static void external_palette_cbm2(const char *mode)
{
   extern unsigned char cbm2_external_vpl[];
   external_palette_load(mode, "cbm2_external.vpl", (unsigned char *) cbm2_external_vpl);
}


static void external_palette_vicii(const char *mode)
{
   extern unsigned char vicii_external_vpl[];
   external_palette_load(mode, "vicii_external.vpl", (unsigned char *) vicii_external_vpl);
}


static void getvars_color_palette_option()
{
#if defined(__XVIC__)
   struct retro_variable var = { "vice_vic20_external_palette" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      external_palette_vic20(var.value);
   }

   hide_option("vice_vic20_external_palette_dummy");
#elif defined(__XPLUS4__)
   struct retro_variable var = { "vice_plus4_external_palette" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      external_palette_plus4(var.value);
   }

   hide_option("vice_plus4_external_palette_dummy");
#elif defined(__XPET__)
   struct retro_variable var = { "vice_pet_external_palette" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      external_palette_pet(var.value);
   }

   hide_option("vice_pet_external_palette_dummy");
#elif defined(__XCBM2__)
   struct retro_variable var = { "vice_cbm2_external_palette" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      external_palette_cbm2(var.value);
   }

   hide_option("vice_cbm2_external_palette_dummy");
#else
   struct retro_variable var = { "vice_external_palette" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      external_palette_vicii(var.value);
   }

   hide_option("vice_external_palette_dummy");
#endif
}
