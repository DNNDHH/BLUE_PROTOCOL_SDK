#pragma once

 

// Package: Fang_expedition_DetailItemData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.OnClickRandomRewardListView__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Param_TimeIndex;                                   // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangValue;                                         // 0x00AC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature");
static_assert(sizeof(Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature) == 0x0000B0, "Wrong size on Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature");
static_assert(offsetof(Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature, AreaData) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature, Param_TimeIndex) == 0x0000A8, "Member 'Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature::Param_TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature, FangValue) == 0x0000AC, "Member 'Fang_expedition_DetailItemData_C_OnClickRandomRewardListView__DelegateSignature::FangValue' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ExecuteUbergraph_Fang_expedition_DetailItemData
// 0x0040 (0x0040 - 0x0000)
struct Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E76[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_3;            // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData");
static_assert(sizeof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData) == 0x000040, "Wrong size on Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000004, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000038, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000039, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData, CallFunc_NotEqual_IntInt_ReturnValue_3) == 0x00003A, "Member 'Fang_expedition_DetailItemData_C_ExecuteUbergraph_Fang_expedition_DetailItemData::CallFunc_NotEqual_IntInt_ReturnValue_3' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetAreaData
// 0x0160 (0x0160 - 0x0000)
struct Fang_expedition_DetailItemData_C_SetAreaData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<int32>                                 RandomTypeSet;                                     // 0x00A8(0x0010)(Edit, BlueprintVisible)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E77[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetData_NG;                               // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E78[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E79[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetExpeditionPlaySlotFreeCount_ReturnValue; // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7A[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F0(0x0018)()
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0118(0x0018)()
	struct FSBFang_expeditionRandomRewardListData CallFunc_Array_Get_Item;                           // 0x0130(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7B[0x2];                                     // 0x015A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_SetAreaData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemData_C_SetAreaData");
static_assert(sizeof(Fang_expedition_DetailItemData_C_SetAreaData) == 0x000160, "Wrong size on Fang_expedition_DetailItemData_C_SetAreaData");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, AreaData) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, RandomTypeSet) == 0x0000A8, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::RandomTypeSet' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, Temp_byte_Variable) == 0x0000B8, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, Temp_byte_Variable_1) == 0x0000B9, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, Temp_int_Array_Index_Variable) == 0x0000BC, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, Temp_bool_Variable) == 0x0000C0, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_SetData_NG) == 0x0000C1, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_SetData_NG' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C8, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, K2Node_Select_Default) == 0x0000D8, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000E0, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_GetExpeditionPlaySlotFreeCount_ReturnValue) == 0x0000E8, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_GetExpeditionPlaySlotFreeCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Greater_IntInt_ReturnValue) == 0x0000EC, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F0, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Replace_ReturnValue) == 0x000108, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000118, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Array_Get_Item) == 0x000130, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Array_Add_ReturnValue) == 0x00014C, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Array_Find_ReturnValue) == 0x000150, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, Temp_int_Loop_Counter_Variable) == 0x000154, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000158, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Less_IntInt_ReturnValue) == 0x000159, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetAreaData, CallFunc_Add_IntInt_ReturnValue) == 0x00015C, "Member 'Fang_expedition_DetailItemData_C_SetAreaData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateTimeButtonText
// 0x00C0 (0x00C0 - 0x0000)
struct Fang_expedition_DetailItemData_C_UpdateTimeButtonText final
{
public:
	TArray<class UFang_expedition_DetailTimeBtn_C*> WidgetList;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E7C[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCmnBtn16_C*>                    WidgetLista;                                       // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7D[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailTimeBtn_C*       CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UFang_expedition_DetailTimeBtn_C*> K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Variable_1;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E7E[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailTimeBtn_C*       CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7F[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A8(0x0018)()
};
static_assert(alignof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemData_C_UpdateTimeButtonText");
static_assert(sizeof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText) == 0x0000C0, "Wrong size on Fang_expedition_DetailItemData_C_UpdateTimeButtonText");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, WidgetList) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::WidgetList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, LoopEnd) == 0x000010, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, WidgetLista) == 0x000018, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::WidgetLista' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, Temp_int_Variable) == 0x000028, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Array_Get_Item) == 0x000038, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, K2Node_MakeArray_Array) == 0x000050, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, Temp_int_Variable_1) == 0x000060, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000070, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Add_IntInt_ReturnValue_1) == 0x000074, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Add_IntInt_ReturnValue_2) == 0x000078, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Array_LastIndex_ReturnValue) == 0x00007C, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Add_IntInt_ReturnValue_3) == 0x000080, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Divide_IntInt_ReturnValue) == 0x000084, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Conv_IntToString_ReturnValue) == 0x000088, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Replace_ReturnValue) == 0x000098, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateTimeButtonText, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A8, "Member 'Fang_expedition_DetailItemData_C_UpdateTimeButtonText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeTimeIndex
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DetailItemData_C_ChangeTimeIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimationSkip;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_ChangeTimeIndex) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemData_C_ChangeTimeIndex");
static_assert(sizeof(Fang_expedition_DetailItemData_C_ChangeTimeIndex) == 0x000008, "Wrong size on Fang_expedition_DetailItemData_C_ChangeTimeIndex");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ChangeTimeIndex, Param_Index) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_ChangeTimeIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ChangeTimeIndex, AnimationSkip) == 0x000004, "Member 'Fang_expedition_DetailItemData_C_ChangeTimeIndex::AnimationSkip' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRewardList
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_DetailItemData_C_UpdateRewardList final
{
public:
	bool                                          AnimationSkip;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_UpdateRewardList) == 0x000001, "Wrong alignment on Fang_expedition_DetailItemData_C_UpdateRewardList");
static_assert(sizeof(Fang_expedition_DetailItemData_C_UpdateRewardList) == 0x000001, "Wrong size on Fang_expedition_DetailItemData_C_UpdateRewardList");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRewardList, AnimationSkip) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_UpdateRewardList::AnimationSkip' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.ChangeFangValue
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DetailItemData_C_ChangeFangValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AnimationSkip;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_ChangeFangValue) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemData_C_ChangeFangValue");
static_assert(sizeof(Fang_expedition_DetailItemData_C_ChangeFangValue) == 0x000008, "Wrong size on Fang_expedition_DetailItemData_C_ChangeFangValue");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ChangeFangValue, Value) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_ChangeFangValue::Value' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_ChangeFangValue, AnimationSkip) == 0x000004, "Member 'Fang_expedition_DetailItemData_C_ChangeFangValue::AnimationSkip' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetFangVarietyNum
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DetailItemData_C_SetFangVarietyNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_SetFangVarietyNum) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemData_C_SetFangVarietyNum");
static_assert(sizeof(Fang_expedition_DetailItemData_C_SetFangVarietyNum) == 0x000004, "Wrong size on Fang_expedition_DetailItemData_C_SetFangVarietyNum");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetFangVarietyNum, Num) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_SetFangVarietyNum::Num' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.UpdateRandomRewardData
// 0x0078 (0x0078 - 0x0000)
struct Fang_expedition_DetailItemData_C_UpdateRandomRewardData final
{
public:
	TArray<int32>                                 RewardGroupIndexList;                              // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E80[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionRewardData           WorkReward;                                        // 0x0018(0x0020)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E81[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E82[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E83[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemData_C_UpdateRandomRewardData");
static_assert(sizeof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData) == 0x000078, "Wrong size on Fang_expedition_DetailItemData_C_UpdateRandomRewardData");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, RewardGroupIndexList) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::RewardGroupIndexList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, LoopEnd) == 0x000010, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, WorkReward) == 0x000018, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::WorkReward' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, Temp_int_Variable) == 0x000038, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, Temp_int_Variable_1) == 0x000040, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, Temp_bool_Variable) == 0x000049, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Array_LastIndex_ReturnValue) == 0x00004C, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Not_PreBool_ReturnValue) == 0x000050, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_BooleanAND_ReturnValue) == 0x000051, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000054, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Array_LastIndex_ReturnValue_2) == 0x000058, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, Temp_int_Variable_2) == 0x00005C, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000064, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Add_IntInt_ReturnValue_2) == 0x000068, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Array_Add_ReturnValue_1) == 0x00006C, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000070, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000071, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_UpdateRandomRewardData, CallFunc_Greater_IntInt_ReturnValue) == 0x000072, "Member 'Fang_expedition_DetailItemData_C_UpdateRandomRewardData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetAreaData
// 0x00A8 (0x00A8 - 0x0000)
struct Fang_expedition_DetailItemData_C_GetAreaData final
{
public:
	struct FSBFang_expeditionAreaData             Data;                                              // 0x0000(0x00A8)(Parm, OutParm)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_GetAreaData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemData_C_GetAreaData");
static_assert(sizeof(Fang_expedition_DetailItemData_C_GetAreaData) == 0x0000A8, "Wrong size on Fang_expedition_DetailItemData_C_GetAreaData");
static_assert(offsetof(Fang_expedition_DetailItemData_C_GetAreaData, Data) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_GetAreaData::Data' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.GetSelectTimeIndex
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DetailItemData_C_GetSelectTimeIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_GetSelectTimeIndex) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemData_C_GetSelectTimeIndex");
static_assert(sizeof(Fang_expedition_DetailItemData_C_GetSelectTimeIndex) == 0x000004, "Wrong size on Fang_expedition_DetailItemData_C_GetSelectTimeIndex");
static_assert(offsetof(Fang_expedition_DetailItemData_C_GetSelectTimeIndex, Param_Index) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_GetSelectTimeIndex::Param_Index' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.SetNextButtonDisabled
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_DetailItemData_C_SetNextButtonDisabled final
{
public:
	bool                                          IsDisable;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_SetNextButtonDisabled) == 0x000001, "Wrong alignment on Fang_expedition_DetailItemData_C_SetNextButtonDisabled");
static_assert(sizeof(Fang_expedition_DetailItemData_C_SetNextButtonDisabled) == 0x000001, "Wrong size on Fang_expedition_DetailItemData_C_SetNextButtonDisabled");
static_assert(offsetof(Fang_expedition_DetailItemData_C_SetNextButtonDisabled, IsDisable) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_SetNextButtonDisabled::IsDisable' has a wrong offset!");

// Function Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C.CheckAnimationSkip
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DetailItemData_C_CheckAnimationSkip final
{
public:
	int32                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutParam;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemData_C_CheckAnimationSkip) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemData_C_CheckAnimationSkip");
static_assert(sizeof(Fang_expedition_DetailItemData_C_CheckAnimationSkip) == 0x000008, "Wrong size on Fang_expedition_DetailItemData_C_CheckAnimationSkip");
static_assert(offsetof(Fang_expedition_DetailItemData_C_CheckAnimationSkip, InValue) == 0x000000, "Member 'Fang_expedition_DetailItemData_C_CheckAnimationSkip::InValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_CheckAnimationSkip, OutParam) == 0x000004, "Member 'Fang_expedition_DetailItemData_C_CheckAnimationSkip::OutParam' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemData_C_CheckAnimationSkip, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000005, "Member 'Fang_expedition_DetailItemData_C_CheckAnimationSkip::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

