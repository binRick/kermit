# k3rmit [![Release](https://img.shields.io/github/release/KeyLo99/k3rmit.svg?style=flat-square&color=green)](https://github.com/KeyLo99/k3rmit/releases)
[![AUR](https://img.shields.io/aur/version/k3rmit-git.svg?style=flat-square)](https://aur.archlinux.org/packages/k3rmit-git/) [![License](https://img.shields.io/badge/license-GPLv3-blue.svg?style=flat-square&color=red)](./LICENSE)

### A VTE-based terminal emulator that aims to be simple, fast and effective.

![Kermit the Frog](https://user-images.githubusercontent.com/24392180/59636824-2af20180-915d-11e9-95dd-0a077ebc3cfa.gif)

[VTE](https://developer.gnome.org/vte/) is a [GTK](https://developer.gnome.org/gtk3/3.0/) widget that allows creating a virtual terminal emulator which is used in many emulators such as [GNOME Terminal](https://help.gnome.org/users/gnome-terminal/stable/), [ROXTerm](https://github.com/realh/roxterm) and [evilvte](http://www.calno.com/evilvte/). Although there's a lot of (VTE-based or other) terminal emulator options for GNU/Linux users, `k3rmit` tries to differ from them with its simplicity.   
The project inspired by [Vincent Bernat](https://vincent.bernat.ch/en)'s [article](https://vincent.bernat.ch/en/blog/2017-write-own-terminal) and also his [implementation](https://github.com/vincentbernat/vbeterm) of a custom VTE-based terminal. Also, [Rxvt](https://wiki.archlinux.org/index.php/Rxvt-unicode) and [termite](https://github.com/thestinger/termite)'s appearance are taken as an example.

## Installation

`k3rmit` terminal depends on [vte3](https://www.archlinux.org/packages/extra/x86_64/vte3/) and [gtk3](https://www.archlinux.org/packages/extra/x86_64/gtk3/) packages.

### 🞄 AUR ([k3rmit-git](https://aur.archlinux.org/packages/k3rmit-git/))

### 🞄 CMake

```
mkdir -p build && cd build
cmake ../ -DCMAKE_INSTALL_PREFIX=/usr
make
sudo make install
sudo ldconfig
```

### 🞄 Make

```
make
sudo make install
```

### 🞄 GCC

```
cd src/
gcc -s -O3 -Wall $(pkg-config --cflags vte-2.91) k3rmit.c -o k3rmit.o $(pkg-config --libs vte-2.91)
```

## Features

* Use default shell (with `$SHELL` environment variable)
* Supports transparency with a composite manager (such as [compton](https://github.com/chjj/compton))
* Tab support
* Customizable

## Arguments

```
k3rmit [-h] [-v] [-d] [-c config] [-e command]
-h, show help message and exit
-v, show version
-d, enable debug messages
-c, configuration file to read
-e, command to execute in terminal
```

## Key Bindings

| Key                   | Action                     |
|-----------------------|----------------------------|
| `ctrl-alt-[v]`        | copy to clipboard          |
| `ctrl-alt-[c]`        | paste from clipboard       |
| `ctrl-alt-[t]`        | open a new tab             |
| `ctrl-alt-[r]`        | reload configuration file  |
| `ctrl-[up]`           | increase font size         |
| `ctrl-[down]`         | decrease font size         |
| `ctrl-[=]`            | reset font size to default |
| `ctrl-[return]`       | open a new tab             |
| `ctrl-[right][pgup]`  | switch to the next tab     |
| `ctrl-[left][pgdn]`   | switch to the previous tab |
| `ctrl-[w][backspace]` | close the selected tab     |

Key bindings (`ctrl-alt`) can be set to standard `ctrl-shift` with the config file.

## Customization

### Config

`k3rmit` looks for configuration file in `~/.config/k3rmit.conf`  
The default configuration file is available [here](https://github.com/KeyLo99/k3rmit/blob/master/.config/k3rmit.conf).  
Most of the settings can be changed via the config file including font, opacity and colors.

In order to change the padding of the terminal, create `~/.config/gtk-3.0/gtk.css` if does not exist and specify the values there and restart the terminal.

```
VteTerminal,
TerminalScreen,
vte-terminal {
    padding: 3px 2px 2px 1px;
}
```

The command below can be used to create both configuration files.

```
curl https://raw.githubusercontent.com/KeyLo99/k3rmit/master/.config/k3rmit.conf --output ~/.config/k3rmit.conf && \
printf "VteTerminal,\nTerminalScreen,\nvte-terminal {\n\tpadding: 3px 2px 2px 1px;\n}\n" > ~/.config/gtk-3.0/gtk.css
```

## Screenshots

![Screenshot I](https://user-images.githubusercontent.com/24392180/59642133-88417f00-916c-11e9-956b-0fc41ac752c7.jpg)

![Screenshot II](https://user-images.githubusercontent.com/24392180/59641515-88407f80-916a-11e9-9834-fda387299419.jpg)

![Screenshot III](https://user-images.githubusercontent.com/24392180/59703686-1a946200-9203-11e9-8043-e58dcc9edc64.png)

Vid: [http://www.youtube.com/watch?v=mkr0RhUXf50](http://www.youtube.com/watch?v=mkr0RhUXf50)

## Todo(s)

* Improve scrolling & fix scroll issues
* Add new key combinations for simpler usage

## License

GNU General Public License v3. (see [gpl](https://www.gnu.org/licenses/gpl.txt))

## Credit

Copyright (C) 2019 by KeyLo99 https://www.github.com/KeyLo99
