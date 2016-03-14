extern __(status_t) __(txt_MoveCursor) ( uint16_t value2, uint16_t value1 ) ;
extern __(status_t) __(txt_PutChar) ( uint8_t value1 ) ;
extern __(status_t) __(putCH) ( uint8_t value1 ) ;
extern __(status_t) __(txt_PutString) (char* str) ;
extern __(status_t) __(putstr) (char* str) ;
extern __(result_t) __(txt_FGColour) ( __(colour_t) value1 ) ;
extern __(result_t) __(txt_BGColour) ( __(colour_t) value1 ) ;
extern __(result_t) __(txt_FontID) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Width) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Height) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Xgap) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Ygap) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Bold) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Inverse) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Italic) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Opacity) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Underline) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Attributes) ( uint16_t value1 ) ;
extern __(result_t) __(txt_Wrap) ( uint16_t value1 ) ;
extern __(status_t) __(gfx_Cls) (void) ;
extern __(status_t) __(gfx_ChangeColour) ( __(colour_t) value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_Circle) ( uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_CircleFilled) ( uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_Line) ( uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_Rectangle) ( uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_RectangleFilled) ( uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_Triangle) ( uint16_t value7, uint16_t value6, uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_TriangleFilled) ( uint16_t value7, uint16_t value6, uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_PutPixel) ( uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_MoveTo) ( uint16_t value2, uint16_t value1 ) ;
extern __(status_t) __(gfx_LineTo) ( uint16_t value2, uint16_t value1 ) ;
extern __(status_t) __(gfx_Clipping) ( uint16_t value1 ) ;
extern __(status_t) __(gfx_ClipWindow) ( uint16_t value4, uint16_t value3, uint16_t value2, uint16_t value1 ) ;
extern __(status_t) __(gfx_SetClipRegion) (void) ;
extern __(status_t) __(gfx_Ellipse) ( uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_EllipseFilled) ( uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_Panel) ( uint16_t value6, uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, __(colour_t) value1 ) ;
extern __(status_t) __(gfx_Slider) ( uint16_t value8, uint16_t value7, uint16_t value6, uint16_t value5, uint16_t value4, __(colour_t) value3, uint16_t value2, int16_t value1 ) ;
extern __(status_t) __(gfx_ScreenCopyPaste) ( uint16_t value6, uint16_t value5, uint16_t value4, uint16_t value3, uint16_t value2, uint16_t value1 ) ;
extern __(result_t) __(gfx_BevelShadow) ( uint16_t value1 ) ;
extern __(result_t) __(gfx_BevelWidth) ( uint16_t value1 ) ;
extern __(result_t) __(gfx_BGcolour) ( __(colour_t) value1 ) ;
extern __(result_t) __(gfx_OutlineColour) ( __(colour_t) value1 ) ;
extern __(result_t) __(gfx_Contrast) ( uint16_t value1 ) ;
extern __(result_t) __(gfx_FrameDelay) ( uint16_t value1 ) ;
extern __(result_t) __(gfx_LinePattern) ( uint16_t value1 ) ;
extern __(result_t) __(gfx_ScreenMode) ( __(orientation_t) value1 ) ;
extern __(result_t) __(gfx_Transparency) ( uint16_t value1 ) ;
extern __(result_t) __(gfx_TransparentColour) ( __(colour_t) value1 ) ;
extern __(status_t) __(gfx_Set) ( uint16_t value2, uint16_t value1 ) ;
extern __(status_t) __(setbaudWait) ( __(baud_rate_t) value1 ) ;
extern __(status_t) __(touch_DetectRegion) ( uint16_t value4, uint16_t value3, uint16_t value2, uint16_t value1 ) ;
extern __(status_t) __(touch_Set) ( __(touch_mode_t) value1 ) ;
extern __(result_t) __(touch_Get) ( __(touch_status_t) value1 ) ;
extern __(result_t) __(pin_HI) ( uint16_t value1 ) ;
extern __(result_t) __(pin_LO) ( uint16_t value1 ) ;
