#include "License.h"

#include "Tables.h"
#include "Models.h"
#include "OssCompat.h"

__attribute__((visibility("hidden")))
const ControllerListItem gControllerList[] = {
	{ HDA_INTEL_OAK,			"Intel Oaktrail" },
	{ HDA_INTEL_BAY,			"Intel BayTrail" },
	{ HDA_INTEL_HSW1,			"Intel Haswell" },
	{ HDA_INTEL_SER8HDMI,		"Intel Series 8 HDMI" },
	{ HDA_INTEL_HSW3,			"Intel Haswell" },
	{ HDA_INTEL_BDW1,			"Intel Broadwell" },
	{ HDA_INTEL_CPT,			"Intel Cougar Point"},
	{ HDA_INTEL_PATSBURG,		"Intel Patsburg"},
	{ HDA_INTEL_PPT1,			"Intel Panther Point"},
	{ HDA_INTEL_LPT1,			"Intel Lynx Point"},
	{ HDA_INTEL_LPT2,			"Intel Lynx Point"},
	{ HDA_INTEL_WPT1,			"Intel Wildcat Point"},
	{ HDA_INTEL_WELLSBURG1,		"Intel Wellsburg"},
	{ HDA_INTEL_WELLSBURG2,		"Intel Wellsburg"},
	{ HDA_INTEL_LPTLP1,		"Intel Lynx Point-LP"},
	{ HDA_INTEL_LPTLP2,		"Intel Lynx Point-LP"},
	{ HDA_INTEL_BDW2,		"Intel Broadwell"},
	{ HDA_INTEL_SRPTLP,		"Intel Sunrise Point-LP"},
	{ HDA_INTEL_KBLKLP,		"Intel Kabylake-LP"},
	{ HDA_INTEL_SRPT,		"Intel Sunrise Point"},
	{ HDA_INTEL_KBLK,		"Intel Kabylake"},
	{ HDA_INTEL_UNPT,			"Intel Union Point"},
	{ HDA_INTEL_82801F,			"Intel 82801F" },
	{ HDA_INTEL_63XXESB,		"Intel 631x/632xESB" },
	{ HDA_INTEL_82801G,			"Intel 82801G" },
	{ HDA_INTEL_82801H,			"Intel 82801H" },
	{ HDA_INTEL_82801I,			"Intel 82801I" },
	{ HDA_INTEL_82801JI,		"Intel 82801JI" },
	{ HDA_INTEL_82801JD,		"Intel 82801JD"},
	{ HDA_INTEL_PCH,			"Intel PCH" },
	{ HDA_INTEL_PCH2,			"Intel 5 Series/3400 Series"},
	{ HDA_INTEL_SCH,			"Intel SCH" },
	{ HDA_NVIDIA_MCP51,			"NVidia MCP51" },
	{ HDA_NVIDIA_MCP55,			"NVidia MCP55" },
	{ HDA_NVIDIA_MCP61_1,		"NVidia MCP61" },
	{ HDA_NVIDIA_MCP61_2,		"NVidia MCP61" },
	{ HDA_NVIDIA_MCP65_1,		"NVidia MCP65" },
	{ HDA_NVIDIA_MCP65_2,		"NVidia MCP65" },
	{ HDA_NVIDIA_MCP67_1,		"NVidia MCP67" },
	{ HDA_NVIDIA_MCP67_2,		"NVidia MCP67" },
	{ HDA_NVIDIA_MCP73_1,		"NVidia MCP73" },
	{ HDA_NVIDIA_MCP73_2,		"NVidia MCP73" },
	{ HDA_NVIDIA_MCP78_1,		"NVidia MCP78" },
	{ HDA_NVIDIA_MCP78_2,		"NVidia MCP78" },
	{ HDA_NVIDIA_MCP78_3,		"NVidia MCP78" },
	{ HDA_NVIDIA_MCP78_4,		"NVidia MCP78" },
	{ HDA_NVIDIA_MCP79_1,		"NVidia MCP79" },
	{ HDA_NVIDIA_MCP79_2,		"NVidia MCP79" },
	{ HDA_NVIDIA_MCP79_3,		"NVidia MCP79" },
	{ HDA_NVIDIA_MCP79_4,		"NVidia MCP79" },
	{ HDA_NVIDIA_MCP89_1,		"NVidia MCP89"},
	{ HDA_NVIDIA_MCP89_2,		"NVidia MCP89"},
	{ HDA_NVIDIA_MCP89_3,		"NVidia MCP89"},
	{ HDA_NVIDIA_MCP89_4,		"NVidia MCP89"},
	{ HDA_NVIDIA_0BE2,			"NVidia (0x0be2)"},
	{ HDA_NVIDIA_0BE3,			"NVidia (0x0be3)"},
	{ HDA_NVIDIA_0BE4,			"NVidia (0x0be4)"},
	{ HDA_NVIDIA_GT100,			"NVidia GT100"},
	{ HDA_NVIDIA_GT104,			"NVidia GT104"},
	{ HDA_NVIDIA_GT106,			"NVidia GT106"},
	{ HDA_NVIDIA_GT108,			"NVidia GT108"},
	{ HDA_NVIDIA_GT116,			"NVidia GT116"},
	{ HDA_NVIDIA_GF119,			"NVidia GF119"},
	{ HDA_NVIDIA_GF110_1,		"NVidia GF110"},
	{ HDA_NVIDIA_GF110_2,		"NVidia GF110"},
	{ HDA_ATI_SB450,			"ATI SB450" },
	{ HDA_ATI_SB600,			"ATI SB600" },
	{ HDA_ATI_RS600,			"ATI RS600" },
	{ HDA_ATI_RS690,			"ATI RS690" },
	{ HDA_ATI_RS780,			"ATI RS780" },
	{ HDA_ATI_R600,				"ATI R600" },
	{ HDA_ATI_RV610,			"ATI RV610" },
	{ HDA_ATI_RV620,			"ATI RV620" },
	{ HDA_ATI_RV630,			"ATI RV630" },
	{ HDA_ATI_RV635,			"ATI RV635" },
	{ HDA_ATI_RV710,			"ATI RV710" },
	{ HDA_ATI_RV730,			"ATI RV730" },
	{ HDA_ATI_RV740,			"ATI RV740" },
	{ HDA_ATI_RV770,			"ATI RV770" },
	{ HDA_ATI_RV810,			"ATI RV810"},
	{ HDA_ATI_RV830,			"ATI RV830"},
	{ HDA_ATI_RV840,			"ATI RV840"},
	{ HDA_ATI_RV870,			"ATI RV870"},
	{ HDA_ATI_RV910,			"ATI RV910"},
	{ HDA_ATI_RV930,			"ATI RV930"},
	{ HDA_ATI_RV940,			"ATI RV940"},
	{ HDA_ATI_RV970,			"ATI RV970"},
	{ HDA_ATI_R1000,			"ATI R1000"},
	{ HDA_ATI_OLAND,			"AMD OLAND"},
	{ HDA_ATI_BONAIR,			"AMD BONAIR"},
	{ HDA_ATI_TAHITI,			"AMD TAHITI"},
	{ HDA_ATI_HAWAII,			"AMD HAWAII"},
	{ HDA_ATI_BUFFIN,			"AMD BUFFIN"},
	{ HDA_ATI_VEGA,				"AMD VEGA"},
	{ HDA_AMD_HUDSON2,			"AMD Hudson-2" },

	{ HDA_RDC_M3010,			"RDC M3010"},
	{ HDA_VIA_VT82XX,			"VIA VT8251/8237A" },
	{ HDA_SIS_966,				"SiS 966" },
	{ HDA_ULI_M5461,			"ULI M5461" },
	/* Unknown controller */
	{ HDA_INTEL_ALL,			"Intel (Unknown)" },
	{ HDA_NVIDIA_ALL,			"NVidia (Unknown)" },
	{ HDA_ATI_ALL,				"ATI (Unknown)" },
	{ HDA_AMD_ALL,				"AMD (Unknown)" },
	{ HDA_VIA_ALL,				"VIA (Unknown)" },
	{ HDA_SIS_ALL,				"SiS (Unknown)" },
	{ HDA_ULI_ALL,				"ULI (Unknown)" },
	{ 0,                        NULL }
};

__attribute__((visibility("hidden")))
const CodecListItem gCodecList[] = {
	{ HDA_CODEC_CS4206,			"Cirrus Logic CS4206" },
	{ HDA_CODEC_CS4207,			"Cirrus Logic CS4207" },
	{ HDA_CODEC_CS4210,			"Cirrus Logic CS4210" },
	{ HDA_CODEC_ALC221,			"Realtek ALC221" },
	{ HDA_CODEC_ALC233,			"Realtek ALC233" },
	{ HDA_CODEC_ALC260,			"Realtek ALC260" },
	{ HDA_CODEC_ALC262,			"Realtek ALC262" },
	{ HDA_CODEC_ALC267,			"Realtek ALC267" },
	{ HDA_CODEC_ALC268,			"Realtek ALC268" },
	{ HDA_CODEC_ALC269,			"Realtek ALC269" },
	{ HDA_CODEC_ALC270,			"Realtek ALC270" },
	{ HDA_CODEC_ALC272,			"Realtek ALC272" },
	{ HDA_CODEC_ALC273,			"Realtek ALC273" },
	{ HDA_CODEC_ALC275,			"Realtek ALC275" },
	{ HDA_CODEC_ALC276,			"Realtek ALC276" },
	{ HDA_CODEC_ALC282,			"Realtek ALC282" },
	{ HDA_CODEC_ALC292,			"Realtek ALC292" },
	{ HDA_CODEC_ALC295,			"Realtek ALC295" },
	{ HDA_CODEC_ALC660,			"Realtek ALC660" },
	{ HDA_CODEC_ALC662,			"Realtek ALC662" },
#if 0
	{ HDA_CODEC_ALC662, 0x0002,	"Realtek ALC662 rev2" },
#endif
	{ HDA_CODEC_ALC663,			"Realtek ALC663" },
	{ HDA_CODEC_ALC665,			"Realtek ALC665" },
	{ HDA_CODEC_ALC670,			"Realtek ALC670" },
	{ HDA_CODEC_ALC680,			"Realtek ALC680" },
#if 0
	{ HDA_CODEC_ALC861, 0x0340,	"Realtek ALC660" },
#endif
	{ HDA_CODEC_ALC861,			"Realtek ALC861" },
	{ HDA_CODEC_ALC861VD,		"Realtek ALC861-VD" },
	{ HDA_CODEC_ALC880,			"Realtek ALC880" },
	{ HDA_CODEC_ALC882,			"Realtek ALC882" },
	{ HDA_CODEC_ALC883,			"Realtek ALC883" },
	{ HDA_CODEC_ALC885,			"Realtek ALC885" },
#if 0
	{ HDA_CODEC_ALC885, 0x0101,	"Realtek ALC889A" },
	{ HDA_CODEC_ALC885, 0x0103,	"Realtek ALC889A" },
#endif
	{ HDA_CODEC_ALC887,			"Realtek ALC887" },
	{ HDA_CODEC_ALC888,			"Realtek ALC888" },
#if 0
	{ HDA_CODEC_ALC888, 0x0101,	"Realtek ALC1200" },
#endif
	{ HDA_CODEC_ALC889,			"Realtek ALC889" },
	{ HDA_CODEC_ALC892,			"Realtek ALC892" },
	{ HDA_CODEC_ALC898,			"Realtek ALC898" },
	{ HDA_CODEC_ALC899,			"Realtek ALC899" },
	{ HDA_CODEC_ALC1150,			"Realtek ALC1150" },
	{ HDA_CODEC_ALC1220,			"Realtek ALC1220" },
	{ HDA_CODEC_AD1882,			"Analog Devices AD1882" },
	{ HDA_CODEC_AD1882A,		"Analog Devices AD1882A" },
	{ HDA_CODEC_AD1883,			"Analog Devices AD1883" },
	{ HDA_CODEC_AD1884,			"Analog Devices AD1884" },
	{ HDA_CODEC_AD1884A,		"Analog Devices AD1884A" },
	{ HDA_CODEC_AD1981HD,		"Analog Devices AD1981HD" },
	{ HDA_CODEC_AD1983,			"Analog Devices AD1983" },
	{ HDA_CODEC_AD1984,			"Analog Devices AD1984" },
	{ HDA_CODEC_AD1984A,		"Analog Devices AD1984A" },
	{ HDA_CODEC_AD1984B,		"Analog Devices AD1984B" },
	{ HDA_CODEC_AD1986A,		"Analog Devices AD1986A" },
	{ HDA_CODEC_AD1987,			"Analog Devices AD1987" },
	{ HDA_CODEC_AD1988,			"Analog Devices AD1988A" },
	{ HDA_CODEC_AD1988B,		"Analog Devices AD1988B" },
	{ HDA_CODEC_AD1989A,		"Analog Devices AD1989A" },
	{ HDA_CODEC_AD1989B,		"Analog Devices AD1989B" },
	{ HDA_CODEC_CA0110,			"Creative CA0110-IBG" },
	{ HDA_CODEC_CA0110_2,		"Creative CA0110-IBG" },
	{ HDA_CODEC_CA0132,			"Creative CA0132" },
	{ HDA_CODEC_SB0880,			"Creative SB0880 X-Fi" },
	{ HDA_CODEC_CMI9880,		"CMedia CMI9880" },
	{ HDA_CODEC_CMI98802,		"CMedia CMI9880" },
	{ HDA_CODEC_CXD9872RDK,		"Sigmatel CXD9872RD/K" },
	{ HDA_CODEC_CXD9872AKD,		"Sigmatel CXD9872AKD" },
	{ HDA_CODEC_STAC9200D,		"Sigmatel STAC9200D" },
	{ HDA_CODEC_STAC9204X,		"Sigmatel STAC9204X" },
	{ HDA_CODEC_STAC9204D,		"Sigmatel STAC9204D" },
	{ HDA_CODEC_STAC9205X,		"Sigmatel STAC9205X" },
	{ HDA_CODEC_STAC9205D,		"Sigmatel STAC9205D" },
	{ HDA_CODEC_STAC9220,		"Sigmatel STAC9220" },
	{ HDA_CODEC_STAC9220_A1,	"Sigmatel STAC9220_A1" },
	{ HDA_CODEC_STAC9220_A2,	"Sigmatel STAC9220_A2" },
	{ HDA_CODEC_STAC9221,		"Sigmatel STAC9221" },
	{ HDA_CODEC_STAC9221_A2,	"Sigmatel STAC9221_A2" },
	{ HDA_CODEC_STAC9221D,		"Sigmatel STAC9221D" },
	{ HDA_CODEC_STAC922XD,		"Sigmatel STAC9220D/9223D" },
	{ HDA_CODEC_STAC9227X,		"Sigmatel STAC9227X" },
	{ HDA_CODEC_STAC9227D,		"Sigmatel STAC9227D" },
	{ HDA_CODEC_STAC9228X,		"Sigmatel STAC9228X" },
	{ HDA_CODEC_STAC9228D,		"Sigmatel STAC9228D" },
	{ HDA_CODEC_STAC9229X,		"Sigmatel STAC9229X" },
	{ HDA_CODEC_STAC9229D,		"Sigmatel STAC9229D" },
	{ HDA_CODEC_STAC9230X,		"Sigmatel STAC9230X" },
	{ HDA_CODEC_STAC9230D,		"Sigmatel STAC9230D" },
	{ HDA_CODEC_STAC9250,		"Sigmatel STAC9250" },
	{ HDA_CODEC_STAC9251,		"Sigmatel STAC9251" },
	{ HDA_CODEC_STAC9255,		"Sigmatel STAC9255" },
	{ HDA_CODEC_STAC9255D,		"Sigmatel STAC9255D" },
	{ HDA_CODEC_STAC9254,		"Sigmatel STAC9254" },
	{ HDA_CODEC_STAC9254D,		"Sigmatel STAC9254D" },
	{ HDA_CODEC_STAC9271X,		"Sigmatel STAC9271X" },
	{ HDA_CODEC_STAC9271D,		"Sigmatel STAC9271D" },
	{ HDA_CODEC_STAC9272X,		"Sigmatel STAC9272X" },
	{ HDA_CODEC_STAC9272D,		"Sigmatel STAC9272D" },
	{ HDA_CODEC_STAC9273X,		"Sigmatel STAC9273X" },
	{ HDA_CODEC_STAC9273D,		"Sigmatel STAC9273D" },
	{ HDA_CODEC_STAC9274,		"Sigmatel STAC9274" },
	{ HDA_CODEC_STAC9274D,		"Sigmatel STAC9274D" },
	{ HDA_CODEC_STAC9274X5NH,	"Sigmatel STAC9274X5NH" },
	{ HDA_CODEC_STAC9274D5NH,	"Sigmatel STAC9274D5NH" },
	{ HDA_CODEC_STAC9872AK,		"Sigmatel STAC9872AK" },
	{ HDA_CODEC_IDT92HD005,		"IDT 92HD005" },
	{ HDA_CODEC_IDT92HD005D,	"IDT 92HD005D" },
	{ HDA_CODEC_IDT92HD206X,	"IDT 92HD206X" },
	{ HDA_CODEC_IDT92HD206D,	"IDT 92HD206D" },
	{ HDA_CODEC_IDT92HD66B1X5,	"IDT 92HD66B1X5" },
	{ HDA_CODEC_IDT92HD66B2X5,	"IDT 92HD66B2X5" },
	{ HDA_CODEC_IDT92HD66B3X5,	"IDT 92HD66B3X5" },
	{ HDA_CODEC_IDT92HD66C1X5,	"IDT 92HD66C1X5" },
	{ HDA_CODEC_IDT92HD66C2X5,	"IDT 92HD66C2X5" },
	{ HDA_CODEC_IDT92HD66C3X5,	"IDT 92HD66C3X5" },
	{ HDA_CODEC_IDT92HD66B1X3,	"IDT 92HD66B1X3" },
	{ HDA_CODEC_IDT92HD66B2X3,	"IDT 92HD66B2X3" },
	{ HDA_CODEC_IDT92HD66B3X3,	"IDT 92HD66B3X3" },
	{ HDA_CODEC_IDT92HD66C1X3,	"IDT 92HD66C1X3" },
	{ HDA_CODEC_IDT92HD66C2X3,	"IDT 92HD66C2X3" },
	{ HDA_CODEC_IDT92HD66C3_65,	"IDT 92HD66C3_65" },
	{ HDA_CODEC_IDT92HD700X,	"IDT 92HD700X" },
	{ HDA_CODEC_IDT92HD700D,	"IDT 92HD700D" },
	{ HDA_CODEC_IDT92HD71B5,	"IDT 92HD71B5" },
	{ HDA_CODEC_IDT92HD71B5_2,	"IDT 92HD71B5" },
	{ HDA_CODEC_IDT92HD71B6,	"IDT 92HD71B6" },
	{ HDA_CODEC_IDT92HD71B6_2,	"IDT 92HD71B6" },
	{ HDA_CODEC_IDT92HD71B7,	"IDT 92HD71B7" },
	{ HDA_CODEC_IDT92HD71B7_2,	"IDT 92HD71B7" },
	{ HDA_CODEC_IDT92HD71B8,	"IDT 92HD71B8" },
	{ HDA_CODEC_IDT92HD71B8_2,	"IDT 92HD71B8" },
	{ HDA_CODEC_IDT92HD73C1,	"IDT 92HD73C1" },
	{ HDA_CODEC_IDT92HD73D1,	"IDT 92HD73D1" },
	{ HDA_CODEC_IDT92HD73E1,	"IDT 92HD73E1" },
	{ HDA_CODEC_IDT92HD75B3,	"IDT 92HD75B3" },
	{ HDA_CODEC_IDT92HD75BX,	"IDT 92HD75BX" },
	{ HDA_CODEC_IDT92HD81B1C,	"IDT 92HD81B1C" },
	{ HDA_CODEC_IDT92HD81B1X,	"IDT 92HD81B1X" },
	{ HDA_CODEC_IDT92HD83C1C,	"IDT 92HD83C1C" },
	{ HDA_CODEC_IDT92HD83C1X,	"IDT 92HD83C1X" },
	{ HDA_CODEC_IDT92HD87B1_3,	"IDT 92HD87B1/3" },
	{ HDA_CODEC_IDT92HD87B2_4,	"IDT 92HD87B2/4" },
	{ HDA_CODEC_IDT92HD89C3,	"IDT 92HD89C3" },
	{ HDA_CODEC_IDT92HD89C2,	"IDT 92HD89C2" },
	{ HDA_CODEC_IDT92HD89C1,	"IDT 92HD89C1" },
	{ HDA_CODEC_IDT92HD89B3,	"IDT 92HD89B3" },
	{ HDA_CODEC_IDT92HD89B2,	"IDT 92HD89B2" },
	{ HDA_CODEC_IDT92HD89B1,	"IDT 92HD89B1" },
	{ HDA_CODEC_IDT92HD89E3,	"IDT 92HD89E3" },
	{ HDA_CODEC_IDT92HD89E2,	"IDT 92HD89E2" },
	{ HDA_CODEC_IDT92HD89E1,	"IDT 92HD89E1" },
	{ HDA_CODEC_IDT92HD89D3,	"IDT 92HD89D3" },
	{ HDA_CODEC_IDT92HD89D2,	"IDT 92HD89D2" },
	{ HDA_CODEC_IDT92HD89D1,	"IDT 92HD89D1" },
	{ HDA_CODEC_IDT92HD89F3,	"IDT 92HD89F3" },
	{ HDA_CODEC_IDT92HD89F2,	"IDT 92HD89F2" },
	{ HDA_CODEC_IDT92HD89F1,	"IDT 92HD89F1" },
	{ HDA_CODEC_IDT92HD90BXX,	"IDT 92HD90BXX" },
	{ HDA_CODEC_IDT92HD91BXX,	"IDT 92HD91BXX" },
	{ HDA_CODEC_IDT92HD93BXX,	"IDT 92HD93BXX" },
	{ HDA_CODEC_IDT92HD98BXX,	"IDT 92HD98BXX" },
	{ HDA_CODEC_IDT92HD99BXX,	"IDT 92HD99BXX" },
	{ HDA_CODEC_IDTID7695,		"IDT ID7695" },
	{ HDA_CODEC_CX20549,		"Conexant CX20549 (Venice)" },
	{ HDA_CODEC_CX20551,		"Conexant CX20551 (Waikiki)" },
	{ HDA_CODEC_CX20561,		"Conexant CX20561 (Hermosa)" },
	{ HDA_CODEC_CX20582,		"Conexant CX20582 (Pebble)" },
	{ HDA_CODEC_CX20583,		"Conexant CX20583 (Pebble HSF)" },
	{ HDA_CODEC_CX20584,		"Conexant CX20584" },
	{ HDA_CODEC_CX20585,		"Conexant CX20585" },
	{ HDA_CODEC_CX20588,		"Conexant CX20588" },
	{ HDA_CODEC_CX20590,		"Conexant CX20590" },
	{ HDA_CODEC_CX20631,		"Conexant CX20631" },
	{ HDA_CODEC_CX20632,		"Conexant CX20632" },
	{ HDA_CODEC_CX20641,		"Conexant CX20641" },
	{ HDA_CODEC_CX20642,		"Conexant CX20642" },
	{ HDA_CODEC_CX20651,		"Conexant CX20651" },
	{ HDA_CODEC_CX20652,		"Conexant CX20652" },
	{ HDA_CODEC_CX20664,		"Conexant CX20664" },
	{ HDA_CODEC_CX20665,		"Conexant CX20665" },
	{ HDA_CODEC_VT1708_8,		"VIA VT1708_8" },
	{ HDA_CODEC_VT1708_9,		"VIA VT1708_9" },
	{ HDA_CODEC_VT1708_A,		"VIA VT1708_A" },
	{ HDA_CODEC_VT1708_B,		"VIA VT1708_B" },
	{ HDA_CODEC_VT1709_0,		"VIA VT1709_0" },
	{ HDA_CODEC_VT1709_1,		"VIA VT1709_1" },
	{ HDA_CODEC_VT1709_2,		"VIA VT1709_2" },
	{ HDA_CODEC_VT1709_3,		"VIA VT1709_3" },
	{ HDA_CODEC_VT1709_4,		"VIA VT1709_4" },
	{ HDA_CODEC_VT1709_5,		"VIA VT1709_5" },
	{ HDA_CODEC_VT1709_6,		"VIA VT1709_6" },
	{ HDA_CODEC_VT1709_7,		"VIA VT1709_7" },
	{ HDA_CODEC_VT1708B_0,		"VIA VT1708B_0" },
	{ HDA_CODEC_VT1708B_1,		"VIA VT1708B_1" },
	{ HDA_CODEC_VT1708B_2,		"VIA VT1708B_2" },
	{ HDA_CODEC_VT1708B_3,		"VIA VT1708B_3" },
	{ HDA_CODEC_VT1708B_4,		"VIA VT1708B_4" },
	{ HDA_CODEC_VT1708B_5,		"VIA VT1708B_5" },
	{ HDA_CODEC_VT1708B_6,		"VIA VT1708B_6" },
	{ HDA_CODEC_VT1708B_7,		"VIA VT1708B_7" },
	{ HDA_CODEC_VT1708S_0,		"VIA VT1708S_0" },
	{ HDA_CODEC_VT1708S_1,		"VIA VT1708S_1" },
	{ HDA_CODEC_VT1708S_2,		"VIA VT1708S_2" },
	{ HDA_CODEC_VT1708S_3,		"VIA VT1708S_3" },
	{ HDA_CODEC_VT1708S_4,		"VIA VT1708S_4" },
	{ HDA_CODEC_VT1708S_5,		"VIA VT1708S_5" },
	{ HDA_CODEC_VT1708S_6,		"VIA VT1708S_6" },
	{ HDA_CODEC_VT1708S_7,		"VIA VT1708S_7" },
	{ HDA_CODEC_VT1702_0,		"VIA VT1702_0" },
	{ HDA_CODEC_VT1702_1,		"VIA VT1702_1" },
	{ HDA_CODEC_VT1702_2,		"VIA VT1702_2" },
	{ HDA_CODEC_VT1702_3,		"VIA VT1702_3" },
	{ HDA_CODEC_VT1702_4,		"VIA VT1702_4" },
	{ HDA_CODEC_VT1702_5,		"VIA VT1702_5" },
	{ HDA_CODEC_VT1702_6,		"VIA VT1702_6" },
	{ HDA_CODEC_VT1702_7,		"VIA VT1702_7" },
	{ HDA_CODEC_VT1716S_0,		"VIA VT1716S_0" },
	{ HDA_CODEC_VT1716S_1,		"VIA VT1716S_1" },
	{ HDA_CODEC_VT1718S_0,		"VIA VT1718S_0" },
	{ HDA_CODEC_VT1718S_1,		"VIA VT1718S_1" },
	{ HDA_CODEC_VT1802_0,		"VIA VT1802_0" },
	{ HDA_CODEC_VT1802_1,		"VIA VT1802_1" },
	{ HDA_CODEC_VT1812,			"VIA VT1812" },
	{ HDA_CODEC_VT1818S,		"VIA VT1818S" },
	{ HDA_CODEC_VT1828S,		"VIA VT1828S" },
	{ HDA_CODEC_VT2002P_0,		"VIA VT2002P_0" },
	{ HDA_CODEC_VT2002P_1,		"VIA VT2002P_1" },
	{ HDA_CODEC_VT2020,			"VIA VT2020" },
	{ HDA_CODEC_ATIRS600_1,		"ATI RS600 HDMI" },
	{ HDA_CODEC_ATIRS600_2,		"ATI RS600 HDMI" },
	{ HDA_CODEC_ATIRS690,		"ATI RS690/780 HDMI" },
	{ HDA_CODEC_ATIR6XX,		"ATI R6xx HDMI" },
	{ HDA_CODEC_NVIDIAMCP67,	"NVidia MCP67 HDMI" },
	{ HDA_CODEC_NVIDIAMCP73,	"NVidia MCP73 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78_2,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78_3,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP78_4,	"NVidia MCP78 HDMI" },
	{ HDA_CODEC_NVIDIAMCP7A,	"NVidia MCP7A HDMI" },
	{ HDA_CODEC_NVIDIAGT220, 	"NVidia GT220 HDMI" },
	{ HDA_CODEC_NVIDIAGT21X, 	"NVidia GT21x HDMI" },
	{ HDA_CODEC_NVIDIAMCP89, 	"NVidia MCP89 HDMI" },
	{ HDA_CODEC_NVIDIAGT240, 	"NVidia GT240 HDMI" },
	{ HDA_CODEC_NVIDIAGTS450, 	"NVidia GTS450 HDMI" },
	{ HDA_CODEC_NVIDIAGT440, 	"NVidia GT440 HDMI" },
	{ HDA_CODEC_NVIDIAGTX550, 	"NVidia GTX550 HDMI" },
	{ HDA_CODEC_NVIDIAGTX570, 	"NVidia GTX570 HDMI" },
	{ HDA_CODEC_NVIDIAGT610, 	"NVidia GT610 HDMI" },
	{ HDA_CODEC_NVIDIATEGRA30,	"NVIDIA Tegra30" },
	{ HDA_CODEC_NVIDIATEGRA114,	"NVIDIA Tegra114" },
	{ HDA_CODEC_NVIDIATEGRA124,	"NVIDIA Tegra124" },
	{ HDA_CODEC_NVIDIATEGRA210,	"NVIDIA Tegra210" },
	{ HDA_CODEC_INTELIP,		"Intel Ibex Peak HDMI" },
	{ HDA_CODEC_INTELBL,		"Intel Bearlake HDMI" },
	{ HDA_CODEC_INTELCA,		"Intel Cantiga HDMI" },
	{ HDA_CODEC_INTELEL,		"Intel Eaglelake HDMI" },
	{ HDA_CODEC_INTELIP2,		"Intel Ibex Peak HDMI" },
	{ HDA_CODEC_INTELCPT,		"Intel Cougar Point HDMI" },
	{ HDA_CODEC_INTELPPT,		"Intel Panther Point HDMI" },
	{ HDA_CODEC_INTELHSW,		"Intel Haswell HDMI" },
	{ HDA_CODEC_INTELBDW,		"Intel Broadwell HDMI" },
	{ HDA_CODEC_INTELSKLK,		"Intel Skylake HDMI" },
	{ HDA_CODEC_INTELKBLK,		"Intel Kabylake HDMI" },
	{ HDA_CODEC_INTELCL,		"Intel Crestline HDMI" },
	{ HDA_CODEC_INTELWB,		"Intel Wellsburg HDMI"},
	{ HDA_CODEC_SII1390,		"Silicon Image SiI1390 HDMI" },
	{ HDA_CODEC_SII1392,		"Silicon Image SiI1392 HDMI" },
	/* Unknown codec */
	{ HDA_CODEC_ADXXXX,			"Analog Devices (Unknown)" },
	{ HDA_CODEC_AGEREXXXX,		"Lucent/Agere Systems (Unknown)" },
	{ HDA_CODEC_ALCXXXX,		"Realtek (Unknown)" },
	{ HDA_CODEC_ATIXXXX,		"ATI (Unknown)" },
	{ HDA_CODEC_CAXXXX,			"Creative (Unknown)" },
	{ HDA_CODEC_CMIXXXX,		"CMedia (Unknown)" },
	{ HDA_CODEC_CMIXXXX2,		"CMedia (Unknown)" },
	{ HDA_CODEC_CSXXXX,			"Cirrus Logic (Unknown)" },
	{ HDA_CODEC_CXXXXX,			"Conexant (Unknown)" },
	{ HDA_CODEC_CHXXXX,			"Chrontel (Unknown)" },
	{ HDA_CODEC_IDTXXXX,		"IDT (Unknown)" },
	{ HDA_CODEC_INTELXXXX,		"Intel (Unknown)" },
	{ HDA_CODEC_MOTOXXXX,		"Motorola (Unknown)" },
	{ HDA_CODEC_NVIDIAXXXX,		"NVidia (Unknown)" },
	{ HDA_CODEC_SIIXXXX,		"Silicon Image (Unknown)" },
	{ HDA_CODEC_STACXXXX,		"Sigmatel (Unknown)" },
	{ HDA_CODEC_VTXXXX,			"VIA (Unknown)" },
	{ 0,						NULL }
};

__attribute__((visibility("hidden")))
const RateTableItem gRateTable[] = {
	{   8000, 1, 0x0000, 0x0000, 0x0500 },	/* (48000 * 1) / 6 */
	{   9600, 0, 0x0000, 0x0000, 0x0400 },	/* (48000 * 1) / 5 */
	{  12000, 0, 0x0000, 0x0000, 0x0300 },	/* (48000 * 1) / 4 */
	{  16000, 1, 0x0000, 0x0000, 0x0200 },	/* (48000 * 1) / 3 */
	{  18000, 0, 0x0000, 0x1000, 0x0700 },	/* (48000 * 3) / 8 */
	{  19200, 0, 0x0000, 0x0800, 0x0400 },	/* (48000 * 2) / 5 */
	{  24000, 0, 0x0000, 0x0000, 0x0100 },	/* (48000 * 1) / 2 */
	{  28800, 0, 0x0000, 0x1000, 0x0400 },	/* (48000 * 3) / 5 */
	{  32000, 1, 0x0000, 0x0800, 0x0200 },	/* (48000 * 2) / 3 */
	{  36000, 0, 0x0000, 0x1000, 0x0300 },	/* (48000 * 3) / 4 */
	{  38400, 0, 0x0000, 0x1800, 0x0400 },	/* (48000 * 4) / 5 */
	{  48000, 1, 0x0000, 0x0000, 0x0000 },	/* (48000 * 1) / 1 */
	{  64000, 0, 0x0000, 0x1800, 0x0200 },	/* (48000 * 4) / 3 */
	{  72000, 0, 0x0000, 0x1000, 0x0100 },	/* (48000 * 3) / 2 */
	{  96000, 1, 0x0000, 0x0800, 0x0000 },	/* (48000 * 2) / 1 */
	{ 144000, 0, 0x0000, 0x1000, 0x0000 },	/* (48000 * 3) / 1 */
	{ 192000, 1, 0x0000, 0x1800, 0x0000 },	/* (48000 * 4) / 1 */
	{   8820, 0, 0x4000, 0x0000, 0x0400 },	/* (44100 * 1) / 5 */
	{  11025, 1, 0x4000, 0x0000, 0x0300 },	/* (44100 * 1) / 4 */
	{  12600, 0, 0x4000, 0x0800, 0x0600 },	/* (44100 * 2) / 7 */
	{  14700, 0, 0x4000, 0x0000, 0x0200 },	/* (44100 * 1) / 3 */
	{  17640, 0, 0x4000, 0x0800, 0x0400 },	/* (44100 * 2) / 5 */
	{  18900, 0, 0x4000, 0x1000, 0x0600 },	/* (44100 * 3) / 7 */
	{  22050, 1, 0x4000, 0x0000, 0x0100 },	/* (44100 * 1) / 2 */
	{  25200, 0, 0x4000, 0x1800, 0x0600 },	/* (44100 * 4) / 7 */
	{  26460, 0, 0x4000, 0x1000, 0x0400 },	/* (44100 * 3) / 5 */
	{  29400, 0, 0x4000, 0x0800, 0x0200 },	/* (44100 * 2) / 3 */
	{  33075, 0, 0x4000, 0x1000, 0x0300 },	/* (44100 * 3) / 4 */
	{  35280, 0, 0x4000, 0x1800, 0x0400 },	/* (44100 * 4) / 5 */
	{  44100, 1, 0x4000, 0x0000, 0x0000 },	/* (44100 * 1) / 1 */
	{  58800, 0, 0x4000, 0x1800, 0x0200 },	/* (44100 * 4) / 3 */
	{  66150, 0, 0x4000, 0x1000, 0x0100 },	/* (44100 * 3) / 2 */
	{  88200, 1, 0x4000, 0x0800, 0x0000 },	/* (44100 * 2) / 1 */
	{ 132300, 0, 0x4000, 0x1000, 0x0000 },	/* (44100 * 3) / 1 */
	{ 176400, 1, 0x4000, 0x1800, 0x0000 },	/* (44100 * 4) / 1 */
	{      0, 0,      0,      0,      0 }
};

__attribute__((visibility("hidden")))
const QuirkType gQuirkTypes[] = {
	{ "gpio0",			HDA_QUIRK_GPIO0 },
	{ "gpio1",			HDA_QUIRK_GPIO1 },
	{ "gpio2",			HDA_QUIRK_GPIO2 },
	{ "gpio3",			HDA_QUIRK_GPIO3 },
	{ "gpio4",			HDA_QUIRK_GPIO4 },
	{ "gpio5",			HDA_QUIRK_GPIO5 },
	{ "gpio6",			HDA_QUIRK_GPIO6 },
	{ "gpio7",			HDA_QUIRK_GPIO7 },
	{ "gpioflush",		HDA_QUIRK_GPIOFLUSH },
	{ "softpcmvol",		HDA_QUIRK_SOFTPCMVOL },
	{ "fixedrate",		HDA_QUIRK_FIXEDRATE },
	{ "forcestereo",	HDA_QUIRK_FORCESTEREO },
	{ "eapdinv",		HDA_QUIRK_EAPDINV },
	{ "dmapos",			HDA_QUIRK_DMAPOS },
	{ "senseinv",		HDA_QUIRK_SENSEINV },
	{ "ivref50",		HDA_QUIRK_IVREF50 },
	{ "ivref80",		HDA_QUIRK_IVREF80 },
	{ "ivref100",		HDA_QUIRK_IVREF100 },
	{ "ovref50",		HDA_QUIRK_OVREF50 },
	{ "ovref80",		HDA_QUIRK_OVREF80 },
	{ "ovref100",		HDA_QUIRK_OVREF100 },
	{ "ivref",			HDA_QUIRK_IVREF },
	{ "ovref",			HDA_QUIRK_OVREF },
	{ "vref",			HDA_QUIRK_VREF },
	{ NULL,				0 }
};

__attribute__((visibility("hidden")))
const QuirkListItem gQuirkList[] = {
	/*
	 * XXX Force stereo quirk. Monoural recording / playback
	 *     on few codecs (especially ALC880) seems broken or
	 *     perhaps unsupported.
	 */
	{ HDA_MATCH_ALL, HDA_MATCH_ALL, HDA_QUIRK_FORCESTEREO | HDA_QUIRK_IVREF, 0 },
	{ ACER_ALL_SUBVENDOR, HDA_MATCH_ALL, HDA_QUIRK_GPIO0, 0 },
	{ ASUS_G2K_SUBVENDOR, HDA_CODEC_ALC660, HDA_QUIRK_GPIO0, 0 },
	{ ASUS_M5200_SUBVENDOR, HDA_CODEC_ALC880, HDA_QUIRK_GPIO0, 0 },
	{ ASUS_A7M_SUBVENDOR, HDA_CODEC_ALC880, HDA_QUIRK_GPIO0, 0 },
	{ ASUS_A7T_SUBVENDOR, HDA_CODEC_ALC882, HDA_QUIRK_GPIO0, 0 },
	{ ASUS_W2J_SUBVENDOR, HDA_CODEC_ALC882, HDA_QUIRK_GPIO0, 0 },
	{ ASUS_U5F_SUBVENDOR, HDA_CODEC_AD1986A, HDA_QUIRK_EAPDINV, 0 },
	{ ASUS_A8X_SUBVENDOR, HDA_CODEC_AD1986A, HDA_QUIRK_EAPDINV, 0 },
	{ ASUS_F3JC_SUBVENDOR, HDA_CODEC_ALC861, HDA_QUIRK_OVREF, 0 },
	{ UNIWILL_9075_SUBVENDOR, HDA_CODEC_ALC861, HDA_QUIRK_OVREF, 0 },
	/*{ ASUS_M2N_SUBVENDOR, HDA_CODEC_AD1988, HDA_QUIRK_IVREF80, HDA_QUIRK_IVREF50 | HDA_QUIRK_IVREF100 },*/
	{ MEDION_MD95257_SUBVENDOR, HDA_CODEC_ALC880, HDA_QUIRK_GPIO1, 0 },
	{ LENOVO_3KN100_SUBVENDOR, HDA_CODEC_AD1986A, HDA_QUIRK_EAPDINV | HDA_QUIRK_SENSEINV, 0 },
	{ SAMSUNG_Q1_SUBVENDOR, HDA_CODEC_AD1986A, HDA_QUIRK_EAPDINV, 0 },
	{ APPLE_MB3_SUBVENDOR, HDA_CODEC_ALC885, HDA_QUIRK_GPIO0 | HDA_QUIRK_OVREF50, 0},
	{ APPLE_INTEL_MAC, HDA_CODEC_STAC9221, HDA_QUIRK_GPIO0 | HDA_QUIRK_GPIO1, 0 },
	{ APPLE_MACBOOKAIR31, HDA_CODEC_CS4206, HDA_QUIRK_GPIO1 | HDA_QUIRK_GPIO3, 0 },
	{ APPLE_MACBOOKPRO55, HDA_CODEC_CS4206, HDA_QUIRK_GPIO1 | HDA_QUIRK_GPIO3, 0 },
	{ APPLE_MACBOOKPRO71, HDA_CODEC_CS4206, HDA_QUIRK_GPIO1 | HDA_QUIRK_GPIO3, 0 },
	{ HDA_INTEL_MACBOOKPRO92, HDA_CODEC_CS4206, HDA_QUIRK_GPIO1 | HDA_QUIRK_GPIO3, 0 },
	{ DELL_D630_SUBVENDOR, HDA_CODEC_STAC9205X, HDA_QUIRK_GPIO0, 0 },
	{ DELL_V1400_SUBVENDOR, HDA_CODEC_STAC9228X, HDA_QUIRK_GPIO2, 0 },
	{ DELL_V1500_SUBVENDOR, HDA_CODEC_STAC9205X, HDA_QUIRK_GPIO0, 0 },
	{ HDA_MATCH_ALL, HDA_CODEC_AD1988, HDA_QUIRK_IVREF80, HDA_QUIRK_IVREF50 | HDA_QUIRK_IVREF100 },
	{ HDA_MATCH_ALL, HDA_CODEC_AD1988B, HDA_QUIRK_IVREF80, HDA_QUIRK_IVREF50 | HDA_QUIRK_IVREF100 },
	{ HDA_MATCH_ALL, HDA_CODEC_CX20549, 0, HDA_QUIRK_FORCESTEREO },
	{ 0, 0, 0, 0 }
};

__attribute__((visibility("hidden")))
const MixerValueName MixerValueNamesBind[SOUND_MIXER_NRDEVICES] = {
{"Main",	SOUND_MIXER_VOLUME, 80},		// SOUND_MIXER_VOLUME
{"Bass",	SOUND_MIXER_BASS, 50},		// SOUND_MIXER_BASS
{"Trable",	SOUND_MIXER_TREBLE, 50},		// SOUND_MIXER_TREBLE
{"Synth",	SOUND_MIXER_SYNTH, 90},	// (was 75) SOUND_MIXER_SYNTH
{"PCM",		SOUND_MIXER_PCM, 95},	// (was 75) SOUND_MIXER_PCM
{"Speaker",	SOUND_MIXER_SPEAKER, 90},	// (was 75) SOUND_MIXER_SPEAKER
{"Line",	SOUND_MIXER_LINE, 75},		// (was 75) SOUND_MIXER_LINE
{"Mic",		SOUND_MIXER_MIC, 50},		// SOUND_MIXER_MIC
{"CD",		SOUND_MIXER_CD, 90},	// SOUND_MIXER_CD
{"iMix",	SOUND_MIXER_IMIX, 70},		// [?] SOUND_MIXER_IMIX
{"AltPCM",	SOUND_MIXER_ALTPCM, 30},		// [?] SOUND_MIXER_ALTPCM
{"Rec",		SOUND_MIXER_RECLEV, 75},		// SOUND_MIXER_RECLEV
{"iGain",	SOUND_MIXER_IGAIN, 80},		// SOUND_MIXER_IGAIN
{"oGain",	SOUND_MIXER_OGAIN, 50},		// SOUND_MIXER_OGAIN
{"Line1",	SOUND_MIXER_LINE1, 30},		// (was 75) SOUND_MIXER_LINE1
{"Line2",	SOUND_MIXER_LINE2, 10},		// [?] SOUND_MIXER_LINE2
{"Line3",	SOUND_MIXER_LINE3, 10},		// [?] SOUND_MIXER_LINE3
{"Dig1",	SOUND_MIXER_DIGITAL1, 10},		// [?] SOUND_MIXER_DIGITAL1
{"Dig2",	SOUND_MIXER_DIGITAL2, 10},		// [?] SOUND_MIXER_DIGITAL2
{"Dig3",	SOUND_MIXER_DIGITAL3, 10},		// [?] SOUND_MIXER_DIGITAL3
{"PhoneIn",	SOUND_MIXER_PHONEIN, 0},		// [?] SOUND_MIXER_PHONEIN
{"PhoneOut",	SOUND_MIXER_PHONEOUT, 0},		// [?] SOUND_MIXER_PHONEOUT
{"Video",	SOUND_MIXER_VIDEO, 75},		// SOUND_MIXER_VIDEO
{"Radio",	SOUND_MIXER_RADIO, 0},		// [?] SOUND_MIXER_RADIO
{"Monitor",	SOUND_MIXER_MONITOR, 75}};	// (was 75) SOUND_MIXER_MONITOR

