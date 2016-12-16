//
//  shim.h
//  CSDL2
//
//  Created by Andrey Volodin on 16/12/16.
//  Copyright © 2016 s1ddok. All rights reserved.
//

#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>

#if defined(SDL_VIDEO_DRIVER_X11)

void* SDL_SysWMinfo_init_version(SDL_SysWMinfo* info) {
  SDL_VERSION(&info->version);
}
void* SDL_SysWMinfo_get_x11_display(SDL_SysWMinfo* info) {
  return (void*)info->info.x11.display;
}

void* SDL_SysWMinfo_get_x11_window(SDL_SysWMinfo* info) {
  return (void*)(uintptr_t)info->info.x11.window;
}

#endif
