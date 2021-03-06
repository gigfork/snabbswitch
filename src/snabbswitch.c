/* Copyright 2012 Snabb GmbH. See the file COPYING for license details. */

#include <stdio.h>

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

int main(int argc, char **argv)
{
  lua_State* L = luaL_newstate();
  luaL_openlibs(L);
  return luaL_dostring(L, "require \"main\"");
}

