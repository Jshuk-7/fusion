workspace "fusion"
    architecture "x64"
    configurations { "Debug", "Release", "Dist" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

include "fusion/build-fusion.lua"
include "testbed/build-testbed.lua"