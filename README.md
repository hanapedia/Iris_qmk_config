# Iris Rev. 7 QMK keymap

My [QMK](https://qmk.fm) keymap for the Keebio Iris Rev. 7. It builds against the stock
`keebio/iris/rev7` keyboard definition from upstream QMK.

- `keymaps/hanapedia/keymap.c`: layers
- `keymaps/hanapedia/config.h`: RGB matrix defaults
- `keymaps/hanapedia/keymap.json`: feature and RGB animation overrides

## Build

GitHub Actions builds the firmware on every push. Download the `firmware` artifact from the
workflow run and unzip it to get `keebio_iris_rev7_hanapedia.hex`.

The QMK version is pinned with `QMK_REF` in `.github/workflows/build.yml`.

## Flash

Flash each half separately, with only that half connected over USB. Run one of the commands
below, then press the reset button on the bottom of the PCB.

Once the firmware is on, there's also a key shortcut: with both halves connected, hold `MO(_FUNC)`, then
the top-left key (`MO(_UTIL)`), then press the bottom-right key (`QK_BOOT`). This puts the
USB-connected half into the bootloader.

```sh
qmk flash keebio_iris_rev7_hanapedia.hex
# or
dfu-programmer atmega32u4 erase && dfu-programmer atmega32u4 flash keebio_iris_rev7_hanapedia.hex && dfu-programmer atmega32u4 reset
```

Left and right are detected by hardware, so both halves get the same file.
