#pragma once

 

// Package: ImagineStackBResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ImagineStackBResult.ImagineStackBResult_C.Set Info
// 0x0148 (0x0148 - 0x0000)
struct ImagineStackBResult_C_Set_Info final
{
public:
	struct FOwnItemInfo                           Param_ItemData;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetItemName_OutName;                      // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemName_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D31[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0130(0x0018)()
};
static_assert(alignof(ImagineStackBResult_C_Set_Info) == 0x000008, "Wrong alignment on ImagineStackBResult_C_Set_Info");
static_assert(sizeof(ImagineStackBResult_C_Set_Info) == 0x000148, "Wrong size on ImagineStackBResult_C_Set_Info");
static_assert(offsetof(ImagineStackBResult_C_Set_Info, Param_ItemData) == 0x000000, "Member 'ImagineStackBResult_C_Set_Info::Param_ItemData' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_Set_Info, CallFunc_GetItemName_OutName) == 0x000118, "Member 'ImagineStackBResult_C_Set_Info::CallFunc_GetItemName_OutName' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_Set_Info, CallFunc_GetItemName_ReturnValue) == 0x000128, "Member 'ImagineStackBResult_C_Set_Info::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_Set_Info, CallFunc_Conv_StringToText_ReturnValue) == 0x000130, "Member 'ImagineStackBResult_C_Set_Info::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ImagineStackBResult.ImagineStackBResult_C.UpdateStackBIcon
// 0x0001 (0x0001 - 0x0000)
struct ImagineStackBResult_C_UpdateStackBIcon final
{
public:
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineStackBResult_C_UpdateStackBIcon) == 0x000001, "Wrong alignment on ImagineStackBResult_C_UpdateStackBIcon");
static_assert(sizeof(ImagineStackBResult_C_UpdateStackBIcon) == 0x000001, "Wrong size on ImagineStackBResult_C_UpdateStackBIcon");
static_assert(offsetof(ImagineStackBResult_C_UpdateStackBIcon, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x000000, "Member 'ImagineStackBResult_C_UpdateStackBIcon::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");

// Function ImagineStackBResult.ImagineStackBResult_C.ImageLoad
// 0x00C0 (0x00C0 - 0x0000)
struct ImagineStackBResult_C_ImageLoad final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D32[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0008(0x00B0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineStackBResult_C_ImageLoad) == 0x000008, "Wrong alignment on ImagineStackBResult_C_ImageLoad");
static_assert(sizeof(ImagineStackBResult_C_ImageLoad) == 0x0000C0, "Wrong size on ImagineStackBResult_C_ImageLoad");
static_assert(offsetof(ImagineStackBResult_C_ImageLoad, Param_Index) == 0x000000, "Member 'ImagineStackBResult_C_ImageLoad::Param_Index' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_ImageLoad, CallFunc_FindImagineMaster_bIsValid) == 0x000004, "Member 'ImagineStackBResult_C_ImageLoad::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_ImageLoad, CallFunc_FindImagineMaster_ImagineMaster) == 0x000008, "Member 'ImagineStackBResult_C_ImageLoad::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_ImageLoad, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'ImagineStackBResult_C_ImageLoad::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ImagineStackBResult.ImagineStackBResult_C.SetPrevData
// 0x0128 (0x0128 - 0x0000)
struct ImagineStackBResult_C_SetPrevData final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue_1;               // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineStackBResult_C_SetPrevData) == 0x000008, "Wrong alignment on ImagineStackBResult_C_SetPrevData");
static_assert(sizeof(ImagineStackBResult_C_SetPrevData) == 0x000128, "Wrong size on ImagineStackBResult_C_SetPrevData");
static_assert(offsetof(ImagineStackBResult_C_SetPrevData, OwnItemInfo) == 0x000000, "Member 'ImagineStackBResult_C_SetPrevData::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_SetPrevData, CallFunc_GetStackBNum_ReturnValue) == 0x000118, "Member 'ImagineStackBResult_C_SetPrevData::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_SetPrevData, CallFunc_GetStackBNum_ReturnValue_1) == 0x00011C, "Member 'ImagineStackBResult_C_SetPrevData::CallFunc_GetStackBNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_SetPrevData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000120, "Member 'ImagineStackBResult_C_SetPrevData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBResult_C_SetPrevData, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000121, "Member 'ImagineStackBResult_C_SetPrevData::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");

}

