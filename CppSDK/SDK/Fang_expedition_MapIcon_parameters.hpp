#pragma once

 

// Package: Fang_expedition_MapIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnIconSelect__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature");
static_assert(sizeof(Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature) == 0x000010, "Wrong size on Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature");
static_assert(offsetof(Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature, ID) == 0x000000, "Member 'Fang_expedition_MapIcon_C_OnIconSelect__DelegateSignature::ID' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.OnMultiIconSelect__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature) == 0x000004, "Wrong alignment on Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature");
static_assert(sizeof(Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature) == 0x000004, "Wrong size on Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature");
static_assert(offsetof(Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature, Param_Index) == 0x000000, "Member 'Fang_expedition_MapIcon_C_OnMultiIconSelect__DelegateSignature::Param_Index' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ExecuteUbergraph_Fang_expedition_MapIcon
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon) == 0x000004, "Wrong alignment on Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon");
static_assert(sizeof(Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon) == 0x000008, "Wrong size on Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon");
static_assert(offsetof(Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon, EntryPoint) == 0x000000, "Member 'Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'Fang_expedition_MapIcon_C_ExecuteUbergraph_Fang_expedition_MapIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetData
// 0x0030 (0x0030 - 0x0000)
struct Fang_expedition_MapIcon_C_SetData final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         IconType;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_NewIcon;                                     // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_TimeIcon;                                    // 0x0015(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EE6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapIcon_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_MapIcon_C_SetData");
static_assert(sizeof(Fang_expedition_MapIcon_C_SetData) == 0x000030, "Wrong size on Fang_expedition_MapIcon_C_SetData");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, ID) == 0x000000, "Member 'Fang_expedition_MapIcon_C_SetData::ID' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, IconType) == 0x000010, "Member 'Fang_expedition_MapIcon_C_SetData::IconType' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Param_NewIcon) == 0x000014, "Member 'Fang_expedition_MapIcon_C_SetData::Param_NewIcon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Param_TimeIcon) == 0x000015, "Member 'Fang_expedition_MapIcon_C_SetData::Param_TimeIcon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Temp_bool_Variable) == 0x000016, "Member 'Fang_expedition_MapIcon_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Temp_byte_Variable) == 0x000017, "Member 'Fang_expedition_MapIcon_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Temp_byte_Variable_1) == 0x000018, "Member 'Fang_expedition_MapIcon_C_SetData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Temp_bool_Variable_1) == 0x000019, "Member 'Fang_expedition_MapIcon_C_SetData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Temp_byte_Variable_2) == 0x00001A, "Member 'Fang_expedition_MapIcon_C_SetData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, Temp_byte_Variable_3) == 0x00001B, "Member 'Fang_expedition_MapIcon_C_SetData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'Fang_expedition_MapIcon_C_SetData::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000028, "Member 'Fang_expedition_MapIcon_C_SetData::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'Fang_expedition_MapIcon_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, K2Node_Select_Default) == 0x00002D, "Member 'Fang_expedition_MapIcon_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetData, K2Node_Select_Default_1) == 0x00002E, "Member 'Fang_expedition_MapIcon_C_SetData::K2Node_Select_Default_1' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconData
// 0x0090 (0x0090 - 0x0000)
struct Fang_expedition_MapIcon_C_SetIconData final
{
public:
	struct FSBFang_expeditionIconData             IconData;                                          // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EE7[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EE8[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_2;         // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_3;         // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EE9[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckNewMark_OutParam;                    // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapIcon_C_SetIconData) == 0x000008, "Wrong alignment on Fang_expedition_MapIcon_C_SetIconData");
static_assert(sizeof(Fang_expedition_MapIcon_C_SetIconData) == 0x000090, "Wrong size on Fang_expedition_MapIcon_C_SetIconData");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, IconData) == 0x000000, "Member 'Fang_expedition_MapIcon_C_SetIconData::IconData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, Temp_bool_Variable) == 0x000058, "Member 'Fang_expedition_MapIcon_C_SetIconData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, Temp_byte_Variable) == 0x000059, "Member 'Fang_expedition_MapIcon_C_SetIconData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, Temp_byte_Variable_1) == 0x00005A, "Member 'Fang_expedition_MapIcon_C_SetIconData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, Temp_byte_Variable_2) == 0x00005B, "Member 'Fang_expedition_MapIcon_C_SetIconData::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000068, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, Temp_byte_Variable_3) == 0x000069, "Member 'Fang_expedition_MapIcon_C_SetIconData::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_PlayAnimation_ReturnValue_1) == 0x000070, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000078, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, Temp_bool_Variable_1) == 0x000079, "Member 'Fang_expedition_MapIcon_C_SetIconData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_IsAnimationPlaying_ReturnValue_2) == 0x00007A, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_IsAnimationPlaying_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_IsAnimationPlaying_ReturnValue_3) == 0x00007B, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_IsAnimationPlaying_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x00007C, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, K2Node_SwitchInteger_CmpSuccess) == 0x000080, "Member 'Fang_expedition_MapIcon_C_SetIconData::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, K2Node_Select_Default) == 0x000089, "Member 'Fang_expedition_MapIcon_C_SetIconData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, CallFunc_CheckNewMark_OutParam) == 0x00008A, "Member 'Fang_expedition_MapIcon_C_SetIconData::CallFunc_CheckNewMark_OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconData, K2Node_Select_Default_1) == 0x00008B, "Member 'Fang_expedition_MapIcon_C_SetIconData::K2Node_Select_Default_1' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.SetIconStatus
// 0x000D (0x000D - 0x0000)
struct Fang_expedition_MapIcon_C_SetIconStatus final
{
public:
	ESBFang_expeditionStatus                      Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Multi;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Time;                                              // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          New;                                               // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_MapIcon_C_SetIconStatus) == 0x000001, "Wrong alignment on Fang_expedition_MapIcon_C_SetIconStatus");
static_assert(sizeof(Fang_expedition_MapIcon_C_SetIconStatus) == 0x00000D, "Wrong size on Fang_expedition_MapIcon_C_SetIconStatus");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Status) == 0x000000, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Status' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Multi) == 0x000001, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Multi' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Time) == 0x000002, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Time' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, New) == 0x000003, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::New' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Temp_bool_Variable) == 0x000004, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Temp_byte_Variable) == 0x000005, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Temp_byte_Variable_1) == 0x000006, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Temp_bool_Variable_1) == 0x000007, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, K2Node_Select_Default) == 0x000008, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Temp_byte_Variable_2) == 0x000009, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, Temp_byte_Variable_3) == 0x00000A, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, K2Node_Select_Default_1) == 0x00000B, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_SetIconStatus, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'Fang_expedition_MapIcon_C_SetIconStatus::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.CheckNewMark
// 0x0060 (0x0060 - 0x0000)
struct Fang_expedition_MapIcon_C_CheckNewMark final
{
public:
	TArray<class FString>                         InAreaList;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          OutParam;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsFind;                                            // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EEA[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EEB[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_MapIcon_C_CheckNewMark) == 0x000008, "Wrong alignment on Fang_expedition_MapIcon_C_CheckNewMark");
static_assert(sizeof(Fang_expedition_MapIcon_C_CheckNewMark) == 0x000060, "Wrong size on Fang_expedition_MapIcon_C_CheckNewMark");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, InAreaList) == 0x000000, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::InAreaList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, OutParam) == 0x000010, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, IsFind) == 0x000011, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::IsFind' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_Array_Get_Item) == 0x000020, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_GetCharacterId_ReturnValue) == 0x000038, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_GetPlayerId_ReturnValue) == 0x000048, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_IsReadedID_IsValid) == 0x000058, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_IsReadedID_ReturnValue) == 0x000059, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_CheckNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x00005A, "Member 'Fang_expedition_MapIcon_C_CheckNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.ClearNewMark
// 0x0060 (0x0060 - 0x0000)
struct Fang_expedition_MapIcon_C_ClearNewMark final
{
public:
	class FString                                 InParam;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EEC[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_RegistReadedID_bIsValid;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_MapIcon_C_ClearNewMark) == 0x000008, "Wrong alignment on Fang_expedition_MapIcon_C_ClearNewMark");
static_assert(sizeof(Fang_expedition_MapIcon_C_ClearNewMark) == 0x000060, "Wrong size on Fang_expedition_MapIcon_C_ClearNewMark");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, InParam) == 0x000000, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::InParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_GetCharacterId_ReturnValue) == 0x000010, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_GetPlayerId_ReturnValue) == 0x000020, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_IsReadedID_IsValid) == 0x000030, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_IsReadedID_ReturnValue) == 0x000031, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_GetCharacterId_ReturnValue_1) == 0x000038, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_GetPlayerId_ReturnValue_1) == 0x000048, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_MapIcon_C_ClearNewMark, CallFunc_RegistReadedID_bIsValid) == 0x000058, "Member 'Fang_expedition_MapIcon_C_ClearNewMark::CallFunc_RegistReadedID_bIsValid' has a wrong offset!");

// Function Fang_expedition_MapIcon.Fang_expedition_MapIcon_C.GetIconID
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_MapIcon_C_GetIconID final
{
public:
	int32                                         OutParam;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_MapIcon_C_GetIconID) == 0x000004, "Wrong alignment on Fang_expedition_MapIcon_C_GetIconID");
static_assert(sizeof(Fang_expedition_MapIcon_C_GetIconID) == 0x000004, "Wrong size on Fang_expedition_MapIcon_C_GetIconID");
static_assert(offsetof(Fang_expedition_MapIcon_C_GetIconID, OutParam) == 0x000000, "Member 'Fang_expedition_MapIcon_C_GetIconID::OutParam' has a wrong offset!");

}

