#pragma once

 

// Package: TacticalSkillInfoForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnSkillTypeRadioBtnSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature final
{
public:
	int32                                         InSelectedSkillTypeId;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelectedSkillId;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature) == 0x000004, "Wrong alignment on TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature) == 0x000008, "Wrong size on TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature, InSelectedSkillTypeId) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature::InSelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature, InSelectedSkillId) == 0x000004, "Member 'TacticalSkillInfoForBattleSet_C_OnSkillTypeRadioBtnSelected__DelegateSignature::InSelectedSkillId' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.ExecuteUbergraph_TacticalSkillInfoForBattleSet
// 0x0160 (0x0160 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83DE[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83DF[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InSkillTypeId)>          K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E0[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTacticalSkillTypeRadioBtn_C*           K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E2[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InSkillTypeId)>          K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E3[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSkillTypeId;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E4[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E5[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTacticalSkillTypeRadioBtn_C*           K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn_1; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E6[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0140(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet) == 0x000008, "Wrong alignment on TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet) == 0x000160, "Wrong size on TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, EntryPoint) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, Temp_int_Variable) == 0x000004, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, Temp_int_Variable_1) == 0x00000C, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_Event_IsDesignTime) == 0x000014, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_IsValid_ReturnValue_1) == 0x000015, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_GetChildAt_ReturnValue) == 0x000038, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_IsValid_ReturnValue_3) == 0x000040, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn) == 0x000048, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000054, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000068, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00006C, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_CustomEvent_InSkillTypeId) == 0x000070, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_CustomEvent_InSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, Temp_int_Variable_2) == 0x000074, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_IsValid_ReturnValue_4) == 0x000078, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_GetChildAt_ReturnValue_1) == 0x000080, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_IsValid_ReturnValue_5) == 0x000088, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn_1) == 0x000090, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000099, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Add_IntInt_ReturnValue_1) == 0x00009C, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A0, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Conv_IntToString_ReturnValue) == 0x0000C8, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_MakeArray_Array) == 0x000130, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, CallFunc_Format_ReturnValue) == 0x000140, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet, K2Node_Select_Default) == 0x000158, "Member 'TacticalSkillInfoForBattleSet_C_ExecuteUbergraph_TacticalSkillInfoForBattleSet::K2Node_Select_Default' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.OnRadioBtnSelected
// 0x0004 (0x0004 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected final
{
public:
	int32                                         InSkillTypeId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected) == 0x000004, "Wrong alignment on TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected) == 0x000004, "Wrong size on TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected, InSkillTypeId) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_OnRadioBtnSelected::InSkillTypeId' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on TacticalSkillInfoForBattleSet_C_PreConstruct");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on TacticalSkillInfoForBattleSet_C_PreConstruct");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSKill
// 0x0034 (0x0034 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_SetSKill final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsSkillTypeSelectableLevel;                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsSkillTypeSelectMode;                           // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E7[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InEquippedSkillTypeId;                             // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelectedSkillTypeId;                             // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsSkillTypeSelectMode;                        // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSkillTypeSelectableLevel;                   // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E8[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83E9[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilitySkillId_OutAbilityAlphaSkillId; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilitySkillId_OutAbilityBetaSkillId;  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83EA[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_SetSKill) == 0x000004, "Wrong alignment on TacticalSkillInfoForBattleSet_C_SetSKill");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_SetSKill) == 0x000034, "Wrong size on TacticalSkillInfoForBattleSet_C_SetSKill");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, InSkillId) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::InSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, InSkillLevel) == 0x000004, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::InSkillLevel' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, InIsSkillTypeSelectableLevel) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::InIsSkillTypeSelectableLevel' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, InIsSkillTypeSelectMode) == 0x000009, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::InIsSkillTypeSelectMode' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, InEquippedSkillTypeId) == 0x00000C, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::InEquippedSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, InSelectedSkillTypeId) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::InSelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, LocalIsSkillTypeSelectMode) == 0x000014, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::LocalIsSkillTypeSelectMode' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, LocalIsSkillTypeSelectableLevel) == 0x000015, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::LocalIsSkillTypeSelectableLevel' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, CallFunc_Clamp_ReturnValue) == 0x000018, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, CallFunc_GetAbilitySkillId_OutAbilityAlphaSkillId) == 0x000020, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::CallFunc_GetAbilitySkillId_OutAbilityAlphaSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, CallFunc_GetAbilitySkillId_OutAbilityBetaSkillId) == 0x000024, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::CallFunc_GetAbilitySkillId_OutAbilityBetaSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, CallFunc_BooleanAND_ReturnValue) == 0x000028, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, Temp_int_Variable) == 0x00002C, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSKill, K2Node_Select_Default) == 0x000030, "Member 'TacticalSkillInfoForBattleSet_C_SetSKill::K2Node_Select_Default' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetInfoType
// 0x00A8 (0x00A8 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_SetInfoType final
{
public:
	bool                                          InIsSkillTypeSelectableLevel;                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsSkillTypeSelectMode;                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83EB[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InEquippedSkillTypeId;                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEquippedSkillTypeId;                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsSkillTypeSelectMode;                        // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83EC[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       LocalSkillIconAsCanvasSlot;                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsSkillTypeSelectableLevel;                   // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83ED[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83EE[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_3;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckAbilityMastery_OutIsMastery;         // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckAbilityMastery_OutIsMastery_1;       // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83EF[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnchors                               K2Node_MakeStruct_Anchors;                         // 0x0060(0x0010)(NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83F0[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default_3;                           // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default_4;                           // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               K2Node_MakeStruct_Anchors_1;                       // 0x0084(0x0010)(NoDestructor)
	struct FAnchors                               K2Node_Select_Default_5;                           // 0x0094(0x0010)(NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_SetInfoType) == 0x000008, "Wrong alignment on TacticalSkillInfoForBattleSet_C_SetInfoType");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_SetInfoType) == 0x0000A8, "Wrong size on TacticalSkillInfoForBattleSet_C_SetInfoType");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, InIsSkillTypeSelectableLevel) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::InIsSkillTypeSelectableLevel' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, InIsSkillTypeSelectMode) == 0x000001, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::InIsSkillTypeSelectMode' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, InEquippedSkillTypeId) == 0x000004, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::InEquippedSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, LocalEquippedSkillTypeId) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::LocalEquippedSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, LocalIsSkillTypeSelectMode) == 0x00000C, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::LocalIsSkillTypeSelectMode' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, LocalSkillIconAsCanvasSlot) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::LocalSkillIconAsCanvasSlot' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, LocalIsSkillTypeSelectableLevel) == 0x000018, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::LocalIsSkillTypeSelectableLevel' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_struct_Variable) == 0x00001C, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_struct_Variable_1) == 0x000024, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_bool_Variable) == 0x00002C, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_MakeLiteralByte_ReturnValue) == 0x00002D, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_bool_Variable_1) == 0x00002E, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_bool_Variable_2) == 0x00002F, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_byte_Variable) == 0x000030, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_byte_Variable_1) == 0x000031, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_bool_Variable_3) == 0x000032, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_bool_Variable_4) == 0x000033, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000034, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_bool_Variable_5) == 0x000035, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_struct_Variable_2) == 0x000038, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_struct_Variable_3) == 0x000040, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_bool_Variable_6) == 0x000048, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_CheckAbilityMastery_OutIsMastery) == 0x00004A, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_CheckAbilityMastery_OutIsMastery' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00004B, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_CheckAbilityMastery_OutIsMastery_1) == 0x00004C, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_CheckAbilityMastery_OutIsMastery_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_Select_Default) == 0x00004D, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue_1) == 0x00004E, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue_2) == 0x00004F, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000050, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue_3) == 0x000058, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000059, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_Select_Default_1) == 0x00005A, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_byte_Variable_2) == 0x00005B, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue_4) == 0x00005C, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, Temp_byte_Variable_3) == 0x00005D, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_MakeStruct_Anchors) == 0x000060, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_MakeStruct_Anchors' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_Select_Default_2) == 0x000070, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_Select_Default_3) == 0x000074, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_Select_Default_4) == 0x00007C, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_MakeStruct_Anchors_1) == 0x000084, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_MakeStruct_Anchors_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_Select_Default_5) == 0x000094, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, K2Node_Select_Default_6) == 0x0000A4, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue_5) == 0x0000A5, "Member 'TacticalSkillInfoForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.UpdateSkillTypeRadioBtn
// 0x0050 (0x0050 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn final
{
public:
	int32                                         InSkillTypeId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83F1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTacticalSkillTypeRadioBtn_C*           LocalRadioBtn;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkillTypeId_OutSkillTypeId;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83F2[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83F3[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83F4[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTacticalSkillTypeRadioBtn_C*           K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83F5[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn) == 0x000008, "Wrong alignment on TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn) == 0x000050, "Wrong size on TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, InSkillTypeId) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::InSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, LocalRadioBtn) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::LocalRadioBtn' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, Temp_int_Variable) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_GetSkillTypeId_OutSkillTypeId) == 0x000014, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_GetSkillTypeId_OutSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn) == 0x000038, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_GetChildrenCount_ReturnValue) == 0x000044, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004C, "Member 'TacticalSkillInfoForBattleSet_C_UpdateSkillTypeRadioBtn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeSelectMode
// 0x0058 (0x0058 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode final
{
public:
	bool                                          InIsSelectMode;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83F6[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InEquippedSkillTypeId;                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTacticalSkillTypeRadioBtn_C*           LocalRadioBtn;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEquippedSkillTypeId;                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsSelectMode;                                 // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83F7[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSkillTypeId_OutSkillTypeId;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83F8[0x1];                                     // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83F9[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83FA[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83FB[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTacticalSkillTypeRadioBtn_C*           K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83FC[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode) == 0x000008, "Wrong alignment on TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode) == 0x000058, "Wrong size on TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, InIsSelectMode) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::InIsSelectMode' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, InEquippedSkillTypeId) == 0x000004, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::InEquippedSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, LocalRadioBtn) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::LocalRadioBtn' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, LocalEquippedSkillTypeId) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::LocalEquippedSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, LocalIsSelectMode) == 0x000014, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::LocalIsSelectMode' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, Temp_byte_Variable) == 0x000015, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, Temp_bool_Variable) == 0x000016, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_GetSkillTypeId_OutSkillTypeId) == 0x000018, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_GetSkillTypeId_OutSkillTypeId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_Not_PreBool_ReturnValue) == 0x00001D, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, Temp_byte_Variable_1) == 0x00001E, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, Temp_int_Variable) == 0x000020, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_GetChildrenCount_ReturnValue) == 0x000030, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn) == 0x000040, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::K2Node_DynamicCast_AsTactical_Skill_Type_Radio_Btn' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, K2Node_Select_Default) == 0x000050, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode, CallFunc_IsValid_ReturnValue_2) == 0x000051, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeSelectMode::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.GetAbilitySkillId
// 0x0380 (0x0380 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_GetAbilitySkillId final
{
public:
	int32                                         InBaseSkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutAbilityAlphaSkillId;                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutAbilityBetaSkillId;                             // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83FD[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 LocalAbilitySkillMasterData;                       // 0x0010(0x0058)(Edit, BlueprintVisible)
	struct FSBSkillDataMasterData                 LocalSkillMasterData;                              // 0x0068(0x0058)(Edit, BlueprintVisible)
	int32                                         LocalAbilityBetaSkillId;                           // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalAbilityAlphaSkillId;                          // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           LocalRowNames;                                     // 0x00C8(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             LocalSkillDataTable;                               // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalSkillClassType;                               // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_83FE[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalBaseSkillId;                                  // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_83FF[0x1];                                     // 0x00F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8400[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0110(0x0010)(ReferenceParm)
	class UDataTable*                             CallFunc_GetSkillDataTable_ReturnValue;            // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8401[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8402[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerSkillData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0138(0x0180)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8403[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8404[0x6];                                     // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x02C8(0x0058)()
	bool                                          CallFunc_FindSkillDataMaster_bIsValid_1;           // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8405[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster_1;    // 0x0328(0x0058)()
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId) == 0x000008, "Wrong alignment on TacticalSkillInfoForBattleSet_C_GetAbilitySkillId");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId) == 0x000380, "Wrong size on TacticalSkillInfoForBattleSet_C_GetAbilitySkillId");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, InBaseSkillId) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::InBaseSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, OutAbilityAlphaSkillId) == 0x000004, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::OutAbilityAlphaSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, OutAbilityBetaSkillId) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::OutAbilityBetaSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalAbilitySkillMasterData) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalAbilitySkillMasterData' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalSkillMasterData) == 0x000068, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalSkillMasterData' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalAbilityBetaSkillId) == 0x0000C0, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalAbilityBetaSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalAbilityAlphaSkillId) == 0x0000C4, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalAbilityAlphaSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalRowNames) == 0x0000C8, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalRowNames' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalSkillDataTable) == 0x0000D8, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalSkillDataTable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalSkillClassType) == 0x0000E0, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalSkillClassType' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, LocalBaseSkillId) == 0x0000E4, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::LocalBaseSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, Temp_int_Array_Index_Variable) == 0x0000E8, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000EC, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000ED, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000EE, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000EF, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_BooleanOR_ReturnValue) == 0x0000F0, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_BooleanOR_ReturnValue_1) == 0x0000F1, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_BooleanOR_ReturnValue_2) == 0x0000F2, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, Temp_int_Loop_Counter_Variable) == 0x0000F4, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F8, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, K2Node_SwitchEnum_CmpSuccess) == 0x0000F9, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0000FA, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_BooleanAND_ReturnValue) == 0x0000FB, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_Add_IntInt_ReturnValue) == 0x0000FC, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_GetPlayerManager_ReturnValue) == 0x000100, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000110, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_GetSkillDataTable_ReturnValue) == 0x000120, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_GetSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_IsValid_ReturnValue_1) == 0x000128, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_Array_Get_Item) == 0x00012C, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_GetDataTableRowFromName_OutRow) == 0x000138, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0002B8, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_Array_Length_ReturnValue) == 0x0002BC, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_Less_IntInt_ReturnValue) == 0x0002C0, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_FindSkillDataMaster_bIsValid) == 0x0002C1, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0002C8, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_FindSkillDataMaster_bIsValid_1) == 0x000320, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_FindSkillDataMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_GetAbilitySkillId, CallFunc_FindSkillDataMaster_SkillDataMaster_1) == 0x000328, "Member 'TacticalSkillInfoForBattleSet_C_GetAbilitySkillId::CallFunc_FindSkillDataMaster_SkillDataMaster_1' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.CheckAbilityMastery
// 0x0088 (0x0088 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_CheckAbilityMastery final
{
public:
	int32                                         InAbilitySkillId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsMastery;                                      // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8406[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillId;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8407[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMasterySkill_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8408[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0020(0x0058)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8409[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery) == 0x000008, "Wrong alignment on TacticalSkillInfoForBattleSet_C_CheckAbilityMastery");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery) == 0x000088, "Wrong size on TacticalSkillInfoForBattleSet_C_CheckAbilityMastery");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, InAbilitySkillId) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::InAbilitySkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, OutIsMastery) == 0x000004, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::OutIsMastery' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, LocalSkillId) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::LocalSkillId' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, LocalMasterDataManager) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_IsMasterySkill_ReturnValue) == 0x000018, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_IsMasterySkill_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000019, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000020, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000078, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000079, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00007A, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_BooleanOR_ReturnValue) == 0x00007B, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_GetMasterDataManager_IsValid) == 0x00007C, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_CheckAbilityMastery, CallFunc_GetMasterDataManager_ReturnValue) == 0x000080, "Member 'TacticalSkillInfoForBattleSet_C_CheckAbilityMastery::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C.SetSkillTypeRadioBtnEnable
// 0x0020 (0x0020 - 0x0000)
struct TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable final
{
public:
	class UTacticalSkillTypeRadioBtn_C*           InSkillTypeRadioBtn;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsEnabled;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_840A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTacticalSkillTypeRadioBtn_C*           LocalRadioBtn;                                     // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable) == 0x000008, "Wrong alignment on TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable");
static_assert(sizeof(TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable) == 0x000020, "Wrong size on TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable, InSkillTypeRadioBtn) == 0x000000, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable::InSkillTypeRadioBtn' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable, InIsEnabled) == 0x000008, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable::InIsEnabled' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable, LocalRadioBtn) == 0x000010, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable::LocalRadioBtn' has a wrong offset!");
static_assert(offsetof(TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'TacticalSkillInfoForBattleSet_C_SetSkillTypeRadioBtnEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

