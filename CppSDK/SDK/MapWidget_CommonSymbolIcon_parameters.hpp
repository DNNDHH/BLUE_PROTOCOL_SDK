#pragma once

 

// Package: MapWidget_CommonSymbolIcon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.ExecuteUbergraph_MapWidget_CommonSymbolIcon
// 0x0030 (0x0030 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EDA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMapWidget_IconTooltip1_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon) == 0x000008, "Wrong alignment on MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon) == 0x000030, "Wrong size on MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon, EntryPoint) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'MapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetToolTipWidget_0
// 0x0008 (0x0008 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong size on MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipEnable
// 0x0001 (0x0001 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_SetTooltipEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_SetTooltipEnable) == 0x000001, "Wrong alignment on MapWidget_CommonSymbolIcon_C_SetTooltipEnable");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_SetTooltipEnable) == 0x000001, "Wrong size on MapWidget_CommonSymbolIcon_C_SetTooltipEnable");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetTooltipEnable, IsEnable) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_SetTooltipEnable::IsEnable' has a wrong offset!");

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTextToTooltip
// 0x0030 (0x0030 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_SetTextToTooltip final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_SetTextToTooltip) == 0x000008, "Wrong alignment on MapWidget_CommonSymbolIcon_C_SetTextToTooltip");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_SetTextToTooltip) == 0x000030, "Wrong size on MapWidget_CommonSymbolIcon_C_SetTextToTooltip");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetTextToTooltip, InText) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_SetTextToTooltip::InText' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetTextToTooltip, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'MapWidget_CommonSymbolIcon_C_SetTextToTooltip::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetTextToTooltip, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MapWidget_CommonSymbolIcon_C_SetTextToTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTexture
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_SetIconTexture final
{
public:
	class UTexture2D*                             InTexture;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_SetIconTexture) == 0x000008, "Wrong alignment on MapWidget_CommonSymbolIcon_C_SetIconTexture");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_SetIconTexture) == 0x000010, "Wrong size on MapWidget_CommonSymbolIcon_C_SetIconTexture");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetIconTexture, InTexture) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_SetIconTexture::InTexture' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetIconTexture, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MapWidget_CommonSymbolIcon_C_SetIconTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTextureBySymbolIconType
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType final
{
public:
	EMapSymbolIconType                            InSymbolIconType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7EDB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType) == 0x000008, "Wrong alignment on MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType) == 0x000010, "Wrong size on MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType, InSymbolIconType) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType::InSymbolIconType' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType, CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture) == 0x000008, "Member 'MapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType::CallFunc_GetMapSymbolIconTexture_OutSymbolIconTexture' has a wrong offset!");

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetTooltipText
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_GetTooltipText final
{
public:
	class FString                                 OutTooltipText;                                    // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_GetTooltipText) == 0x000008, "Wrong alignment on MapWidget_CommonSymbolIcon_C_GetTooltipText");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_GetTooltipText) == 0x000010, "Wrong size on MapWidget_CommonSymbolIcon_C_GetTooltipText");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_GetTooltipText, OutTooltipText) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_GetTooltipText::OutTooltipText' has a wrong offset!");

// Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipTextColor
// 0x0030 (0x0030 - 0x0000)
struct MapWidget_CommonSymbolIcon_C_SetTooltipTextColor final
{
public:
	struct FSlateColor                            InColorAndOpacity;                                 // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MapWidget_CommonSymbolIcon_C_SetTooltipTextColor) == 0x000008, "Wrong alignment on MapWidget_CommonSymbolIcon_C_SetTooltipTextColor");
static_assert(sizeof(MapWidget_CommonSymbolIcon_C_SetTooltipTextColor) == 0x000030, "Wrong size on MapWidget_CommonSymbolIcon_C_SetTooltipTextColor");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetTooltipTextColor, InColorAndOpacity) == 0x000000, "Member 'MapWidget_CommonSymbolIcon_C_SetTooltipTextColor::InColorAndOpacity' has a wrong offset!");
static_assert(offsetof(MapWidget_CommonSymbolIcon_C_SetTooltipTextColor, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MapWidget_CommonSymbolIcon_C_SetTooltipTextColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

