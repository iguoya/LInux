#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.app"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[845]; const double alignment; void * const ptr;}  app_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\164\000\000\000\000\000\000\050\003\000\000\000"
  "\000\000\000\000\000\000\000\000\001\000\000\000\301\324\170\174"
  "\002\000\000\000\164\000\000\000\003\000\114\000\170\000\000\000"
  "\174\000\000\000\204\325\371\327\000\000\000\000\174\000\000\000"
  "\014\000\166\000\210\000\000\000\104\003\000\000\324\265\002\000"
  "\377\377\377\377\104\003\000\000\001\000\114\000\110\003\000\000"
  "\114\003\000\000\165\151\057\000\001\000\000\000\167\151\156\144"
  "\157\167\056\147\154\141\144\145\054\025\000\000\001\000\000\000"
  "\170\332\355\230\117\117\023\101\030\306\357\174\212\161\256\146"
  "\151\013\306\160\330\135\022\017\020\023\023\057\030\217\146\072"
  "\373\166\167\354\164\146\335\231\145\341\346\215\004\017\304\203"
  "\232\000\211\251\162\300\013\361\337\301\120\201\057\303\272\345"
  "\133\070\333\202\374\253\164\251\006\153\341\066\335\171\237\276"
  "\333\347\367\354\073\351\332\323\013\015\216\346\041\122\114\012"
  "\007\127\306\313\030\201\240\322\143\302\167\360\243\271\031\153"
  "\012\117\273\143\366\055\313\102\263\040\040\042\032\074\224\060"
  "\035\040\237\023\017\320\344\370\235\362\170\031\131\226\051\142"
  "\102\103\124\043\024\334\061\204\354\010\236\305\054\002\205\070"
  "\253\072\330\327\365\333\370\270\321\244\151\124\352\224\311\352"
  "\123\240\032\121\116\224\162\360\254\256\077\146\302\223\011\106"
  "\314\163\160\322\135\347\205\246\064\214\144\010\221\136\104\202"
  "\064\300\301\363\114\261\052\007\354\316\105\061\330\245\243\335"
  "\336\305\224\010\253\046\151\254\260\073\103\270\352\133\257\231"
  "\316\277\372\001\023\361\102\266\371\042\335\136\151\157\355\266"
  "\267\232\375\164\036\324\110\314\265\225\060\117\007\330\235\052"
  "\227\213\052\002\140\176\240\261\173\267\207\204\006\214\173\335"
  "\265\371\224\303\020\026\225\074\156\010\345\114\232\165\044\223"
  "\174\221\123\070\254\071\147\353\154\304\274\256\251\176\276\072"
  "\052\274\244\255\203\130\333\113\143\156\330\012\144\103\372\046"
  "\123\062\127\026\156\326\371\325\005\265\247\154\353\155\313\275"
  "\130\153\051\360\311\242\363\115\071\251\002\307\156\366\245\225"
  "\265\336\246\113\073\077\136\175\354\325\157\040\067\007\165\264"
  "\247\253\100\201\315\203\262\016\063\165\241\334\056\165\315\070"
  "\165\055\044\264\156\036\375\076\166\100\115\133\104\153\102\115"
  "\302\313\105\157\116\313\260\237\310\134\075\333\337\056\235\201"
  "\170\011\250\235\264\063\131\014\356\375\322\303\033\246\207\170"
  "\052\103\316\324\364\241\240\124\061\260\351\306\352\176\253\225"
  "\056\067\263\357\257\315\044\377\377\041\033\271\142\276\040\374"
  "\250\051\147\264\016\146\270\007\104\170\034\042\007\253\100\046"
  "\117\074\106\270\364\061\352\072\371\353\054\105\052\041\141\010"
  "\306\105\041\273\107\360\060\014\204\312\225\204\247\110\136\220"
  "\216\210\120\234\150\142\350\073\170\021\014\313\375\157\237\323"
  "\225\367\007\317\127\367\367\232\127\225\237\313\310\316\307\347"
  "\367\352\277\104\171\142\330\307\176\110\007\306\335\336\133\063"
  "\203\342\340\315\327\321\040\076\344\363\242\062\274\363\242\223"
  "\044\035\104\100\274\201\303\144\216\237\154\173\317\344\351\152"
  "\217\237\153\032\246\211\321\073\174\322\265\335\164\347\335\150"
  "\244\347\137\122\236\030\152\312\355\255\335\164\143\351\340\303"
  "\247\164\171\363\242\367\015\327\224\170\145\364\210\147\073\057"
  "\263\326\372\315\163\375\247\177\035\006\246\174\372\246\117\154"
  "\036\157\330\245\023\357\064\177\002\361\233\203\227\000\050\165"
  "\165\141\171\051\057\000\000\000\000\000\000\000" };

static GStaticResource static_resource = { app_resource_data.data, sizeof (app_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *app_get_resource (void);
GResource *app_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(appresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(appresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(appresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(appresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void appresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void appresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
