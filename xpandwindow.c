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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "xpand.h"

int main(int argc, char *argv[]) {
    int opt;
    char *window_value;
    char *scale_value;
    while ((opt = getopt(argc, argv, "w:s:")) != -1) {
        switch (opt) {
            case 'w':
                window_value = optarg;
                break;
            case 's':
                scale_value = optarg;
                break;
            case '?':
                break;
        }
    }
    // TODO: bounds checking
    int wid = atoi(window_value);
    int scale = atoi(scale_value);
    printf("xpandwindow: xpanding window %d with scale %d\n", wid, scale);
    return XpandWindow(wid, scale);
}
