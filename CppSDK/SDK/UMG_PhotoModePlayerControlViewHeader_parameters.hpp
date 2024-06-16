#pragma once

 

// Package: UMG_PhotoModePlayerControlViewHeader

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader
// 0x0020 (0x0020 - 0x0000)
struct UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7F6D[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPhotoModeController*                 CallFunc_GetPhotoModeController_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPhotoModePlayerControlData*          CallFunc_GetSelectedPlayerControlData_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bValue;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader) == 0x000008, "Wrong alignment on UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader");
static_assert(sizeof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader) == 0x000020, "Wrong size on UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, EntryPoint) == 0x000000, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, Temp_bool_Variable) == 0x000006, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, CallFunc_GetPhotoModeController_ReturnValue) == 0x000008, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::CallFunc_GetPhotoModeController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, CallFunc_GetSelectedPlayerControlData_ReturnValue) == 0x000010, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::CallFunc_GetSelectedPlayerControlData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, K2Node_CustomEvent_bValue) == 0x000018, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::K2Node_CustomEvent_bValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader, K2Node_Select_Default) == 0x000019, "Member 'UMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader::K2Node_Select_Default' has a wrong offset!");

// Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.SetShowHeaderItem
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem) == 0x000001, "Wrong alignment on UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem");
static_assert(sizeof(UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem) == 0x000001, "Wrong size on UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem");
static_assert(offsetof(UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem, bValue) == 0x000000, "Member 'UMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem::bValue' has a wrong offset!");

}

