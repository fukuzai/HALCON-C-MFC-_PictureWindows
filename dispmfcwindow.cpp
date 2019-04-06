////////////////////////////////////////////////////////////////////////////////
//  File generated by HalconDevelop for Halcon/C++ Version 5.2
//  (C) MVTec Software GmbH, Orleansstr. 34, 81667 Muenchen, Germany
////////////////////////////////////////////////////////////////////////////////



#include "HalconCpp.h"



void action()
{
  HTuple   WindowHandle;
  Hobject  Image;

  { Herror err = read_image(&Image,"monkey");
  if (err != H_MSG_TRUE) { fprintf(stderr,"could not find image"); exit(1); }}
  // dev_close_window(); no window open in C++
  ::set_window_attr("background_color","black");
  ::open_window(0,0,512,512,0,"","",&WindowHandle);
  ::disp_obj(Image,WindowHandle);
}

int main(int argc, char *argv[])
{
  // Default settings used in HDevelop (can be omitted) 
  reset_obj_db(512,512,0);
  set_system("do_low_error","false");
  action();
  return 0;
}
