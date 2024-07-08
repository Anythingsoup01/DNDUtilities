workspace "DNDUtilities"
	architecture "x64"

	configurations {
		"Debug",
		"Release"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "DiceRoller"
	location "DiceRoller"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" ..outputdir.. "/%{prj.name}")
	objdir ("bin-int/" ..outputdir.. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs{
		"%{prj.name}/src",
	}

	links{

	}

	filter "system:windows"
		systemversion "latest"

		defines{
			"DNDUTILS_PLATFORM_WINDOWS",
		}

	filter "configurations:Debug"
		defines "DNDUTILS_DEBUG"
		symbols "on"

	filter "configurations:Release"
		defines "DNDUTILS_RELEASE"
		optimize "on"
