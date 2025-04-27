# YakHUDClock
![GitHub License](https://img.shields.io/github/license/yak3d/YakHUDClock)

This project serves as an example and a working mod for The Elder Scrolls IV: Oblivion Remastered. You will need to follow the steps on [Unreal Engine 5.x Sample Project for Oblivion Remastered](https://www.nexusmods.com/oblivionremastered/mods/880) in order for this project to work 100% in Unreal Engine. Most importantly, **you will need to build the engine from source**.

## Building
1. [Download the Unreal Engine Source code](https://dev.epicgames.com/documentation/en-us/unreal-engine/downloading-source-code-in-unreal-engine?application_version=5.3)
   - Be sure to use the 5.3.2 tag
2. Follow the instructions from the UE 5.x Sample Project for the changes to make in the code
3. [Build Unreal Engine](https://dev.epicgames.com/documentation/en-us/unreal-engine/downloading-source-code-in-unreal-engine?application_version=5.3)
4. Clone this project and open this project in the built version of Unreal

## Structure
The main blueprints are `ModActor` and `YakHUDClock`. `ModActor` serves as the entry point to the mod and `YakHUDClock` is the UI element this mod adds.
