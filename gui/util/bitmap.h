/*
 * This file is part of MPlayer.
 *
 * MPlayer is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * MPlayer is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with MPlayer; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPLAYER_GUI_BITMAP_H
#define MPLAYER_GUI_BITMAP_H

#define TRANSPARENT  0xffff00ff   // transparent color (opaque fuchsia/magenta)
#define ALPHA_OPAQUE 0xff000000

// for legacy reasons, we must treat all kind of fuchsia/magenta as transparent
#define IS_TRANSPARENT(c) ((ALPHA_OPAQUE | (c)) == TRANSPARENT)

typedef struct {
    unsigned long Width;
    unsigned long Height;
    unsigned int BPP;
    unsigned long ImageSize;
    char *Image;
} txSample;

void bpFree(txSample *bf);
int bpRead(char *fname, txSample *bf);
int Convert32to1(txSample *in, txSample *out);

#endif /* MPLAYER_GUI_BITMAP_H */
