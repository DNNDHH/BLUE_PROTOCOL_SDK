#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest
// 0x0150 (0x0150 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DAB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DAC[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DAD[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetDeletedQuestList_ReturnValue;          // 0x0090(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DAE[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           CallFunc_Make_Quest_Name_Array_QuestNames;         // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x00B8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DAF[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB0[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0130(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest) == 0x000150, "Wrong size on BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_IsStandalone_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_GetQuestComponent_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, Temp_int_Variable) == 0x000024, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_GetDeletedQuestList_ReturnValue) == 0x000090, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_GetDeletedQuestList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Make_Quest_Name_Array_QuestNames) == 0x0000A8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Make_Quest_Name_Array_QuestNames' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, K2Node_MakeArray_Array) == 0x000118, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Array_Length_ReturnValue_1) == 0x000128, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Format_ReturnValue) == 0x000130, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_Greater_IntInt_ReturnValue) == 0x000148, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000149, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Make Quest Name Array
// 0x0340 (0x0340 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array final
{
public:
	TArray<int32>                                 QuestList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FText>                           QuestNames;                                        // 0x0010(0x0010)(Parm, OutParm)
	TArray<class FText>                           QuestNameList;                                     // 0x0020(0x0010)(Edit, BlueprintVisible)
	class FText                                   QuestNameTemplate;                                 // 0x0030(0x0018)(Edit, BlueprintVisible)
	int32                                         Counter;                                           // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0058(0x0040)(HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DB1[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB2[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB3[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DB4[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Array_Get_Item_1;                         // 0x0140(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB5[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0160(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x01A0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01E0(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x01F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0200(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0218(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1DB6[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item_2;                         // 0x0238(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0250(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0290(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x02B8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02F8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0310(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0320(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array) == 0x000340, "Wrong size on BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, QuestList) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::QuestList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, QuestNames) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::QuestNames' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, QuestNameList) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::QuestNameList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, QuestNameTemplate) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::QuestNameTemplate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, Counter) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::Counter' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, Temp_int_Array_Index_Variable) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, Temp_int_Variable) == 0x000054, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, Temp_int_Loop_Counter_Variable_1) == 0x00009C, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Add_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, Temp_int_Array_Index_Variable_1) == 0x0000AC, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_GetQuestName_ReturnValue) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Percent_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_SwitchInteger_CmpSuccess) == 0x0000E8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000F0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeArray_Array) == 0x000130, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Array_Length_ReturnValue_1) == 0x000158, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeStruct_FormatArgumentData_2) == 0x000160, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001A0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeArray_Array_1) == 0x0001E0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeArray_Array_2) == 0x0001F0, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Format_ReturnValue) == 0x000200, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Format_ReturnValue_1) == 0x000218, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Array_Length_ReturnValue_2) == 0x000230, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Less_IntInt_ReturnValue_1) == 0x000234, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Array_Get_Item_2) == 0x000238, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeStruct_FormatArgumentData_4) == 0x000250, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Format_ReturnValue_2) == 0x000290, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_GetTextFromAsset_ReturnValue) == 0x0002A8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeStruct_FormatArgumentData_5) == 0x0002B8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002F8, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, K2Node_MakeArray_Array_3) == 0x000310, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Format_ReturnValue_3) == 0x000320, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array, CallFunc_Add_IntInt_ReturnValue_2) == 0x000338, "Member 'BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Make_Quest_Name_Array::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

}

