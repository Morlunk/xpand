//  Copyright © 2015 Andrew Comminos <andrew@morlunk.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#define _GNU_SOURCE
#include <dlfcn.h>
#include <X11/Xlib.h>

// This is an LD_PRELOAD hack to work around clients that don't listen to
// events produced by XSendEvent.
int XNextEvent(Display *display, XEvent *event) {
    int (*xlib_nextevent)(Display*,XEvent*) = dlsym(RTLD_NEXT, "XNextEvent");
    int val = xlib_nextevent(display, event);
    if (event != NULL)
        event->xany.send_event = False; // manually override send_event
    return val;
}
