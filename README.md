xpand
=====

xpand provides tools to zoom windows by a integer scale factor. It requires
XComposite and XDamage extensions.

The targeted window is redirected offscreen and a new window is created with
scaled dimensions. xpand reads the offscreen window pixmap and renders it at a
scaled resolution in the new window, proxying input events to the backing
window.

Cairo is used for rendering.

xpandwindow
-----------

xpandwindow is a shim to scale a given window using xpand.

TODO
----

- fix rough getopt use in xpandwindow shim
- use procedures defined in xpand.h to implement LD_PRELOAD hack to expand
  created windows for a program
