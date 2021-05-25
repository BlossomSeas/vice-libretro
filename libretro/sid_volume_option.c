int sid_volume_6581 = 100;
int sid_volume_8580 = 100;


int retro_getsidvolume()
{
   if (vice_opt.SidModel == SID_MODEL_6581) {
      return sid_volume_6581;
   }

   else {
      return sid_volume_8580;
   }
}


void getvars_sid_volume_option()
{
   struct retro_variable var;


   var.key = "vice_resid_volume_6581";
   var.value = NULL;

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      sid_volume_6581 = atoi(var.value);
   }  

  
   var.key = "vice_resid_volume_8580";
   var.value = NULL;

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      sid_volume_8580 = atoi(var.value);
   }
}
