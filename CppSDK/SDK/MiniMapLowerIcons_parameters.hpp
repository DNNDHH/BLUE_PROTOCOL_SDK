#pragma once

 

// Package: MiniMapLowerIcons

#include "Basic.hpp"


namespace SDK::Params
{

// Function MiniMapLowerIcons.MiniMapLowerIcons_C.AddIcon
// 0x0028 (0x0028 - 0x0000)
struct MiniMapLowerIcons_C_AddIcon final
{
public:
	class USBMiniMapIconBase*                     InIconWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ZOrder;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BAB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     IconWidget;                                        // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BAC[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapLowerIcons_C_AddIcon) == 0x000008, "Wrong alignment on MiniMapLowerIcons_C_AddIcon");
static_assert(sizeof(MiniMapLowerIcons_C_AddIcon) == 0x000028, "Wrong size on MiniMapLowerIcons_C_AddIcon");
static_assert(offsetof(MiniMapLowerIcons_C_AddIcon, InIconWidget) == 0x000000, "Member 'MiniMapLowerIcons_C_AddIcon::InIconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_AddIcon, ZOrder) == 0x000008, "Member 'MiniMapLowerIcons_C_AddIcon::ZOrder' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_AddIcon, IconWidget) == 0x000010, "Member 'MiniMapLowerIcons_C_AddIcon::IconWidget' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_AddIcon, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000018, "Member 'MiniMapLowerIcons_C_AddIcon::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_AddIcon, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'MiniMapLowerIcons_C_AddIcon::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MiniMapLowerIcons.MiniMapLowerIcons_C.OnCreateWarpPointExIcon
// 0x0048 (0x0048 - 0x0000)
struct MiniMapLowerIcons_C_OnCreateWarpPointExIcon final
{
public:
	class FString                                 LevelName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PortalName;                                        // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UMiniMapIconWarpPointEx_C*              IconWarpPointEx;                                   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMiniMapIconWarpPointEx_C*              CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIconBase*                     CallFunc_AddIcon_IconWidget;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon) == 0x000008, "Wrong alignment on MiniMapLowerIcons_C_OnCreateWarpPointExIcon");
static_assert(sizeof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon) == 0x000048, "Wrong size on MiniMapLowerIcons_C_OnCreateWarpPointExIcon");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, LevelName) == 0x000000, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::LevelName' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, PortalName) == 0x000010, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::PortalName' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, IconWarpPointEx) == 0x000020, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::IconWarpPointEx' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000030, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000038, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapLowerIcons_C_OnCreateWarpPointExIcon, CallFunc_AddIcon_IconWidget) == 0x000040, "Member 'MiniMapLowerIcons_C_OnCreateWarpPointExIcon::CallFunc_AddIcon_IconWidget' has a wrong offset!");

}

