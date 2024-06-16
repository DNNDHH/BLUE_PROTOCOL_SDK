#pragma once

 

// Package: MapWidget_RegionIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.OnPressed__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_RegionIcon_C_OnPressed__DelegateSignature final
{
public:
	class FString                                 InRegionMapId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_RegionIcon_C_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on MapWidget_RegionIcon_C_OnPressed__DelegateSignature");
static_assert(sizeof(MapWidget_RegionIcon_C_OnPressed__DelegateSignature) == 0x000010, "Wrong size on MapWidget_RegionIcon_C_OnPressed__DelegateSignature");
static_assert(offsetof(MapWidget_RegionIcon_C_OnPressed__DelegateSignature, InRegionMapId) == 0x000000, "Member 'MapWidget_RegionIcon_C_OnPressed__DelegateSignature::InRegionMapId' has a wrong offset!");

// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.ExecuteUbergraph_MapWidget_RegionIcon
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7931[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip4_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon) == 0x000008, "Wrong alignment on MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon");
static_assert(sizeof(MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon) == 0x000010, "Wrong size on MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon");
static_assert(offsetof(MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon, EntryPoint) == 0x000000, "Member 'MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.GetToolTipWidget_0
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_RegionIcon_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_RegionIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on MapWidget_RegionIcon_C_GetToolTipWidget_0");
static_assert(sizeof(MapWidget_RegionIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong size on MapWidget_RegionIcon_C_GetToolTipWidget_0");
static_assert(offsetof(MapWidget_RegionIcon_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MapWidget_RegionIcon_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");

// Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.SetRegion
// 0x0060 (0x0060 - 0x0000)
struct MapWidget_RegionIcon_C_SetRegion final
{
public:
	class FString                                 InRegionMapId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0018(0x0018)()
	class FString                                 CallFunc_GetZoneNameByZoneId_ReturnValue;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_RegionIcon_C_SetRegion) == 0x000008, "Wrong alignment on MapWidget_RegionIcon_C_SetRegion");
static_assert(sizeof(MapWidget_RegionIcon_C_SetRegion) == 0x000060, "Wrong size on MapWidget_RegionIcon_C_SetRegion");
static_assert(offsetof(MapWidget_RegionIcon_C_SetRegion, InRegionMapId) == 0x000000, "Member 'MapWidget_RegionIcon_C_SetRegion::InRegionMapId' has a wrong offset!");
static_assert(offsetof(MapWidget_RegionIcon_C_SetRegion, CallFunc_Conv_StringToName_ReturnValue) == 0x000010, "Member 'MapWidget_RegionIcon_C_SetRegion::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_RegionIcon_C_SetRegion, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'MapWidget_RegionIcon_C_SetRegion::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_RegionIcon_C_SetRegion, CallFunc_GetZoneNameByZoneId_ReturnValue) == 0x000030, "Member 'MapWidget_RegionIcon_C_SetRegion::CallFunc_GetZoneNameByZoneId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_RegionIcon_C_SetRegion, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'MapWidget_RegionIcon_C_SetRegion::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_RegionIcon_C_SetRegion, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'MapWidget_RegionIcon_C_SetRegion::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

