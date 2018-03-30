
Debian
====================
This directory contains files used to package motiond/motion-qt
for Debian-based Linux systems. If you compile motiond/motion-qt yourself, there are some useful files here.

## motion: URI support ##


motion-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install motion-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your motion-qt binary to `/usr/bin`
and the `../../share/pixmaps/motion128.png` to `/usr/share/pixmaps`

motion-qt.protocol (KDE)

