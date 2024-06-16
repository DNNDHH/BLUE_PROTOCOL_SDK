#pragma once

 

// Package: MountStackBResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MountStackBResult.MountStackBResult_C.SetImagineData
// 0x0148 (0x0148 - 0x0000)
struct MountStackBResult_C_SetImagineData final
{
public:
	struct FOwnItemInfo                           Data;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MountStackBResult_C_SetImagineData) == 0x000008, "Wrong alignment on MountStackBResult_C_SetImagineData");
static_assert(sizeof(MountStackBResult_C_SetImagineData) == 0x000148, "Wrong size on MountStackBResult_C_SetImagineData");
static_assert(offsetof(MountStackBResult_C_SetImagineData, Data) == 0x000000, "Member 'MountStackBResult_C_SetImagineData::Data' has a wrong offset!");
static_assert(offsetof(MountStackBResult_C_SetImagineData, CallFunc_GetNameText_ReturnValue) == 0x000118, "Member 'MountStackBResult_C_SetImagineData::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBResult_C_SetImagineData, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'MountStackBResult_C_SetImagineData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MountStackBResult_C_SetImagineData, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000140, "Member 'MountStackBResult_C_SetImagineData::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");

}

