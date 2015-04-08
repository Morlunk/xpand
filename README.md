xpand
=====

xpand is a tool to zoom windows by a integer scale factor.

It requires a compositing window manager.

How it Works
------------

The targeted window is unmapped and a new window is created with scaled
dimensions. xpand reads the offscreen window pixmap and renders it at a scaled
resolution in the new window, redirecting all events to the backing window.
