#pragma once

 

// Package: StepListItem_Quest

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function StepListItem_Quest.StepListItem_Quest_C.OnSetQuestTitle
// 0x02A0 (0x02A0 - 0x0000)
struct StepListItem_Quest_C_OnSetQuestTitle final
{
public:
	struct FQuestMasterData                       QuestMasterData;                                   // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71B2[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStepListItem_Title_C*                  CallFunc_GetTitle_AsStep_List_Item_Title;          // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0128(0x0018)()
	class UStepListItem_Title_C*                  CallFunc_GetTitle_AsStep_List_Item_Title_1;        // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0148(0x0040)(HasGetValueTypeHash)
	class UStepListItem_Title_C*                  CallFunc_GetTitle_AsStep_List_Item_Title_2;        // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71B3[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item;                           // 0x01A8(0x0060)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71B4[0x3];                                     // 0x020D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71B5[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0218(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71B6[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0260(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0270(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCheatManager*                        K2Node_DynamicCast_AsSBCheat_Manager;              // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsQuestListDebug_ReturnValue;             // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x029A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepListItem_Quest_C_OnSetQuestTitle) == 0x000008, "Wrong alignment on StepListItem_Quest_C_OnSetQuestTitle");
static_assert(sizeof(StepListItem_Quest_C_OnSetQuestTitle) == 0x0002A0, "Wrong size on StepListItem_Quest_C_OnSetQuestTitle");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, QuestMasterData) == 0x000000, "Member 'StepListItem_Quest_C_OnSetQuestTitle::QuestMasterData' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, Temp_int_Array_Index_Variable) == 0x000118, "Member 'StepListItem_Quest_C_OnSetQuestTitle::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_GetTitle_AsStep_List_Item_Title) == 0x000120, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_GetTitle_AsStep_List_Item_Title' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_Conv_NameToText_ReturnValue) == 0x000128, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_GetTitle_AsStep_List_Item_Title_1) == 0x000140, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_GetTitle_AsStep_List_Item_Title_1' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, K2Node_MakeStruct_FormatArgumentData) == 0x000148, "Member 'StepListItem_Quest_C_OnSetQuestTitle::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_GetTitle_AsStep_List_Item_Title_2) == 0x000188, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_GetTitle_AsStep_List_Item_Title_2' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, Temp_int_Loop_Counter_Variable) == 0x000190, "Member 'StepListItem_Quest_C_OnSetQuestTitle::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_Add_IntInt_ReturnValue) == 0x000194, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_GetNetworkDataCache_IsValid) == 0x000198, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0001A0, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_Array_Get_Item) == 0x0001A8, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_Array_Length_ReturnValue) == 0x000208, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_Less_IntInt_ReturnValue) == 0x00020C, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_Add_IntInt_ReturnValue_1) == 0x000210, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, K2Node_MakeStruct_FormatArgumentData_1) == 0x000218, "Member 'StepListItem_Quest_C_OnSetQuestTitle::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000258, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, K2Node_MakeArray_Array) == 0x000260, "Member 'StepListItem_Quest_C_OnSetQuestTitle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_Format_ReturnValue) == 0x000270, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_GetPlayerController_ReturnValue) == 0x000288, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, K2Node_DynamicCast_AsSBCheat_Manager) == 0x000290, "Member 'StepListItem_Quest_C_OnSetQuestTitle::K2Node_DynamicCast_AsSBCheat_Manager' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, K2Node_DynamicCast_bSuccess) == 0x000298, "Member 'StepListItem_Quest_C_OnSetQuestTitle::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_IsQuestListDebug_ReturnValue) == 0x000299, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_IsQuestListDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_OnSetQuestTitle, CallFunc_IsValid_ReturnValue) == 0x00029A, "Member 'StepListItem_Quest_C_OnSetQuestTitle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StepListItem_Quest.StepListItem_Quest_C.OnSetInterruptQuestTitle
// 0x0008 (0x0008 - 0x0000)
struct StepListItem_Quest_C_OnSetInterruptQuestTitle final
{
public:
	class UStepListItem_Title_C*                  CallFunc_GetTitle_AsStep_List_Item_Title;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepListItem_Quest_C_OnSetInterruptQuestTitle) == 0x000008, "Wrong alignment on StepListItem_Quest_C_OnSetInterruptQuestTitle");
static_assert(sizeof(StepListItem_Quest_C_OnSetInterruptQuestTitle) == 0x000008, "Wrong size on StepListItem_Quest_C_OnSetInterruptQuestTitle");
static_assert(offsetof(StepListItem_Quest_C_OnSetInterruptQuestTitle, CallFunc_GetTitle_AsStep_List_Item_Title) == 0x000000, "Member 'StepListItem_Quest_C_OnSetInterruptQuestTitle::CallFunc_GetTitle_AsStep_List_Item_Title' has a wrong offset!");

// Function StepListItem_Quest.StepListItem_Quest_C.GetTitle
// 0x0018 (0x0018 - 0x0000)
struct StepListItem_Quest_C_GetTitle final
{
public:
	class UStepListItem_Title_C*                  AsStep_List_Item_Title;                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStepListItem_Title_C*                  K2Node_DynamicCast_AsStep_List_Item_Title;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepListItem_Quest_C_GetTitle) == 0x000008, "Wrong alignment on StepListItem_Quest_C_GetTitle");
static_assert(sizeof(StepListItem_Quest_C_GetTitle) == 0x000018, "Wrong size on StepListItem_Quest_C_GetTitle");
static_assert(offsetof(StepListItem_Quest_C_GetTitle, AsStep_List_Item_Title) == 0x000000, "Member 'StepListItem_Quest_C_GetTitle::AsStep_List_Item_Title' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_GetTitle, K2Node_DynamicCast_AsStep_List_Item_Title) == 0x000008, "Member 'StepListItem_Quest_C_GetTitle::K2Node_DynamicCast_AsStep_List_Item_Title' has a wrong offset!");
static_assert(offsetof(StepListItem_Quest_C_GetTitle, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'StepListItem_Quest_C_GetTitle::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

