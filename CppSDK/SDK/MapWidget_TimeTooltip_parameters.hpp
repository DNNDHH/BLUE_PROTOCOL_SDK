#pragma once

 

// Package: MapWidget_TimeTooltip

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_MapWidget_Tooltip1_TextureTypes_structs.hpp"


namespace SDK::Params
{

// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct MapWidget_TimeTooltip_C_SetName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MapWidget_TimeTooltip_C_SetName) == 0x000008, "Wrong alignment on MapWidget_TimeTooltip_C_SetName");
static_assert(sizeof(MapWidget_TimeTooltip_C_SetName) == 0x000018, "Wrong size on MapWidget_TimeTooltip_C_SetName");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetName, InText) == 0x000000, "Member 'MapWidget_TimeTooltip_C_SetName::InText' has a wrong offset!");

// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.GetName
// 0x0030 (0x0030 - 0x0000)
struct MapWidget_TimeTooltip_C_GetName final
{
public:
	class FText                                   OutName;                                           // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(MapWidget_TimeTooltip_C_GetName) == 0x000008, "Wrong alignment on MapWidget_TimeTooltip_C_GetName");
static_assert(sizeof(MapWidget_TimeTooltip_C_GetName) == 0x000030, "Wrong size on MapWidget_TimeTooltip_C_GetName");
static_assert(offsetof(MapWidget_TimeTooltip_C_GetName, OutName) == 0x000000, "Member 'MapWidget_TimeTooltip_C_GetName::OutName' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeTooltip_C_GetName, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'MapWidget_TimeTooltip_C_GetName::CallFunc_GetText_ReturnValue' has a wrong offset!");

// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.SetTooltipTextureType
// 0x0028 (0x0028 - 0x0000)
struct MapWidget_TimeTooltip_C_SetTooltipTextureType final
{
public:
	E_MapWidget_Tooltip1_TextureTypes             InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MapWidget_Tooltip1_TextureTypes             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E8E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TimeTooltip_C_SetTooltipTextureType) == 0x000008, "Wrong alignment on MapWidget_TimeTooltip_C_SetTooltipTextureType");
static_assert(sizeof(MapWidget_TimeTooltip_C_SetTooltipTextureType) == 0x000028, "Wrong size on MapWidget_TimeTooltip_C_SetTooltipTextureType");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetTooltipTextureType, InType) == 0x000000, "Member 'MapWidget_TimeTooltip_C_SetTooltipTextureType::InType' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetTooltipTextureType, Temp_byte_Variable) == 0x000001, "Member 'MapWidget_TimeTooltip_C_SetTooltipTextureType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetTooltipTextureType, Temp_object_Variable) == 0x000008, "Member 'MapWidget_TimeTooltip_C_SetTooltipTextureType::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetTooltipTextureType, Temp_object_Variable_1) == 0x000010, "Member 'MapWidget_TimeTooltip_C_SetTooltipTextureType::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetTooltipTextureType, Temp_object_Variable_2) == 0x000018, "Member 'MapWidget_TimeTooltip_C_SetTooltipTextureType::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetTooltipTextureType, K2Node_Select_Default) == 0x000020, "Member 'MapWidget_TimeTooltip_C_SetTooltipTextureType::K2Node_Select_Default' has a wrong offset!");

// Function MapWidget_TimeTooltip.MapWidget_TimeTooltip_C.SetEndTime
// 0x0010 (0x0010 - 0x0000)
struct MapWidget_TimeTooltip_C_SetEndTime final
{
public:
	struct FDateTime                              DateTime;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTimeAndTemplateType_ReturnValue;   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MapWidget_TimeTooltip_C_SetEndTime) == 0x000008, "Wrong alignment on MapWidget_TimeTooltip_C_SetEndTime");
static_assert(sizeof(MapWidget_TimeTooltip_C_SetEndTime) == 0x000010, "Wrong size on MapWidget_TimeTooltip_C_SetEndTime");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetEndTime, DateTime) == 0x000000, "Member 'MapWidget_TimeTooltip_C_SetEndTime::DateTime' has a wrong offset!");
static_assert(offsetof(MapWidget_TimeTooltip_C_SetEndTime, CallFunc_SetDateTimeAndTemplateType_ReturnValue) == 0x000008, "Member 'MapWidget_TimeTooltip_C_SetEndTime::CallFunc_SetDateTimeAndTemplateType_ReturnValue' has a wrong offset!");

}

