
    












	
   //printf("N value is %5d \n", n);    
((ReadByteHDMITX_CAT(REG_CLK_CTRL0)) & (~M_EXT_MCLK_SEL)) | B_EXT_256FS);


((unsigned long)ReadByteHDMITX_CAT(REGPktAudCTSCnt2) & 0xF) << 16;

(long)((VModeTables[info->tv_mode].PixClk * 10000) << 8) / (128 *
CTS);
   }
   {
   }
   else if (SampleFreq < 68100)// 48KHz
   }
   {

   }
   {

       info->audiopath_sf = FS_96K;
   }
   {
   }
   {

   }




   unsigned char audio_fifo_flag = 0xe4;// default mapping. Audio FIFO 3 from audio source 3; Audio FIFO 2 from audio source 2; Audio FIFO 1 from audio source 1; Audio FIFO 0 from audio source 0

	
   {

   }
   {


~(B_AUD_EN_I2S3 | B_AUD_EN_I2S2 | B_AUD_EN_I2S1);
   {
   WriteByteHDMITX_CAT(REG_AUDIO_CTRL3,
((AudioEnable & B_AUD_SPDIF) ? B_CHSTSEL : 0) |
bChannelSwap);






== 0)
 B_OSF_LOCK)

               else






