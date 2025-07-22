# build guide

## Setup custom ESP-IDF in Windows
- We need HOJA's custom ESP-IDF. Clone it from here. We want the `hoja_stable` branch.
    - git clone --recursive -b hoja_stable https://github.com/HandHeldLegend/esp-idf.git
- use the Windows installer tool. 
    - see the link on this page: https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/windows-setup.html
- In the installer: select `Use an existing ESP-IDF directory`. Navigate to the folder where you cloned the custom ESP-IDF
- The installer then asks you to choose a folder for ESP-IDF tools. Select any folder. I believe it needs to be different than the folder in the previous step.
    - NOTE: you CAN have multiple ESP-IDFs installed on the same machine.
    - my current folder structure:
        - for HOJA's esp-idf: C:\esp\esp-idf-hoja
        - for official esp-idf: C:\esp\v5.5-rc1
        - for tools: C:\esp\tools
- I recommend ensuring that the Command Prompt Desktop shortcut is checked during installation.

## Build
1. Clone this repo.
2. Open ESP-IDF terminal (you may use the Desktop shortcut created during installation)
3. In the terminal, change the directory to the directory of this README file.
4. Run in ESP-IDF terminal: `idf.py build`

## Flash onto device
5. Run in ESP-IDF terminal: `idf.py -p [PORT] flash`
    - Replace `[PORT]` with your ESP32 board's USB port name. e.g. COM5. You can find this using the Device Manager.
    - Sometimes the flash can fail without reason. If it fails, try running the flash command again.
    - alternatively, you can run `idf.py flash`. This will build and flash to your device with one command.