#pragma once

 

// Package: LicenseDisp

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LicenseDisp.LicenseDisp_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LicenseDisp_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LicenseDisp_C_PreConstruct) == 0x000001, "Wrong alignment on LicenseDisp_C_PreConstruct");
static_assert(sizeof(LicenseDisp_C_PreConstruct) == 0x000001, "Wrong size on LicenseDisp_C_PreConstruct");
static_assert(offsetof(LicenseDisp_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LicenseDisp_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LicenseDisp.LicenseDisp_C.ExecuteUbergraph_LicenseDisp
// 0x0088 (0x0088 - 0x0000)
struct LicenseDisp_C_ExecuteUbergraph_LicenseDisp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FB1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULicenseTextWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FB2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULicenseSTRIXLogoWidget_C*              CallFunc_Create_ReturnValue_1;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetTextNumFromAsset_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FB3[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetAt_ReturnValue;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FB4[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULicenseLogoWidget_C*                   CallFunc_Create_ReturnValue_2;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp) == 0x000008, "Wrong alignment on LicenseDisp_C_ExecuteUbergraph_LicenseDisp");
static_assert(sizeof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp) == 0x000088, "Wrong size on LicenseDisp_C_ExecuteUbergraph_LicenseDisp");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, EntryPoint) == 0x000000, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::EntryPoint' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_Create_ReturnValue) == 0x000008, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, K2Node_Event_IsDesignTime) == 0x000010, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_Create_ReturnValue_1) == 0x000018, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, K2Node_MakeStruct_Margin) == 0x000020, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_GetTextNumFromAsset_ReturnValue) == 0x000030, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_GetTextNumFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_AddChild_ReturnValue) == 0x000038, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, Temp_int_Variable) == 0x000040, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, K2Node_MakeStruct_Margin_1) == 0x000044, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_GetTextFromAssetAt_ReturnValue) == 0x000058, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_GetTextFromAssetAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_Create_ReturnValue_2) == 0x000070, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000078, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(LicenseDisp_C_ExecuteUbergraph_LicenseDisp, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x000080, "Member 'LicenseDisp_C_ExecuteUbergraph_LicenseDisp::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");

}

