xpand
=====

xpand provides tools to zoom windows by a integer scale factor. It requires a
compositing window manager.

The targeted window is unmapped and a new window is created with scaled
dimensions. xpand reads the offscreen window pixmap and renders it at a scaled
resolution in the new window, redirecting all events to the backing window.

xpandwindow
-----------

xpandwindow scales a given window using xpand.

TODO
----

- use procedures defined in xpand.h to implement LD_PRELOAD hack to expand
  created windows for a program
