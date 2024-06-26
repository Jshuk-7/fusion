project "testbed"
   kind "ConsoleApp"
   language "C"
   cdialect "C99"
   targetdir "bin/%{cfg.buildcfg}"
   staticruntime "off"

   files { "src/**.h", "src/**.c" }

   includedirs
   {
      "src",

	  -- Include fusion
	  "../fusion/src"
   }

   links
   {
      "fusion",
      "raylib"
   }

   targetdir ("../bin/" .. OutputDir .. "/%{prj.name}")
   objdir ("../bin/int/" .. OutputDir .. "/%{prj.name}")

   filter "configurations:Debug"
       defines { "FS_DEBUG" }
       runtime "Debug"
       symbols "On"

   filter "configurations:Release"
       defines { "FS_RELEASE" }
       runtime "Release"
       optimize "On"
       symbols "On"

   filter "configurations:Dist"
       defines { "FS_DIST" }
       runtime "Release"
       optimize "On"
       symbols "Off"