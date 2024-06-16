#pragma once

 

// Package: MapWidget_AreaName

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_AreaName.MapWidget_AreaName_C.Setup
// 0x0070 (0x0070 - 0x0000)
struct MapWidget_AreaName_C_Setup final
{
public:
	class FString                                 MapId;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetMapSymbolIconTextureByMapId_OutIconTexture; // 0x0010(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_461D[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_461E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetZoneShortNameByZoneId_ReturnValue;     // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
};
static_assert(alignof(MapWidget_AreaName_C_Setup) == 0x000008, "Wrong alignment on MapWidget_AreaName_C_Setup");
static_assert(sizeof(MapWidget_AreaName_C_Setup) == 0x000070, "Wrong size on MapWidget_AreaName_C_Setup");
static_assert(offsetof(MapWidget_AreaName_C_Setup, MapId) == 0x000000, "Member 'MapWidget_AreaName_C_Setup::MapId' has a wrong offset!");
static_assert(offsetof(MapWidget_AreaName_C_Setup, CallFunc_GetMapSymbolIconTextureByMapId_OutIconTexture) == 0x000010, "Member 'MapWidget_AreaName_C_Setup::CallFunc_GetMapSymbolIconTextureByMapId_OutIconTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_AreaName_C_Setup, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000038, "Member 'MapWidget_AreaName_C_Setup::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_AreaName_C_Setup, CallFunc_Conv_StringToName_ReturnValue) == 0x00003C, "Member 'MapWidget_AreaName_C_Setup::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_AreaName_C_Setup, CallFunc_GetZoneShortNameByZoneId_ReturnValue) == 0x000048, "Member 'MapWidget_AreaName_C_Setup::CallFunc_GetZoneShortNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_AreaName_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'MapWidget_AreaName_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

