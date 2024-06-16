#pragma once

 

// Package: WeaponDescription

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WeaponDescription.WeaponDescription_C.ExecuteUbergraph_WeaponDescription
// 0x0100 (0x0100 - 0x0000)
struct WeaponDescription_C_ExecuteUbergraph_WeaponDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49AC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWeaponTypeText_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FSBWeaponMasterData                    K2Node_CustomEvent_WeaponMasterData;               // 0x0030(0x00B0)()
	int32                                         K2Node_CustomEvent_MinLevel;                       // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_MaxLevel;                       // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00E8(0x0018)()
};
static_assert(alignof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription) == 0x000008, "Wrong alignment on WeaponDescription_C_ExecuteUbergraph_WeaponDescription");
static_assert(sizeof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription) == 0x000100, "Wrong size on WeaponDescription_C_ExecuteUbergraph_WeaponDescription");
static_assert(offsetof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription, EntryPoint) == 0x000000, "Member 'WeaponDescription_C_ExecuteUbergraph_WeaponDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription, CallFunc_GetWeaponTypeText_ReturnValue) == 0x000008, "Member 'WeaponDescription_C_ExecuteUbergraph_WeaponDescription::CallFunc_GetWeaponTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WeaponDescription_C_ExecuteUbergraph_WeaponDescription::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription, K2Node_CustomEvent_WeaponMasterData) == 0x000030, "Member 'WeaponDescription_C_ExecuteUbergraph_WeaponDescription::K2Node_CustomEvent_WeaponMasterData' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription, K2Node_CustomEvent_MinLevel) == 0x0000E0, "Member 'WeaponDescription_C_ExecuteUbergraph_WeaponDescription::K2Node_CustomEvent_MinLevel' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription, K2Node_CustomEvent_MaxLevel) == 0x0000E4, "Member 'WeaponDescription_C_ExecuteUbergraph_WeaponDescription::K2Node_CustomEvent_MaxLevel' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_ExecuteUbergraph_WeaponDescription, CallFunc_Conv_IntToText_ReturnValue) == 0x0000E8, "Member 'WeaponDescription_C_ExecuteUbergraph_WeaponDescription::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WeaponDescription.WeaponDescription_C.Set WeaponData
// 0x00B8 (0x00B8 - 0x0000)
struct WeaponDescription_C_Set_WeaponData final
{
public:
	struct FSBWeaponMasterData                    Param_WeaponMasterData;                            // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         MinLevel;                                          // 0x00B0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLevel;                                          // 0x00B4(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponDescription_C_Set_WeaponData) == 0x000008, "Wrong alignment on WeaponDescription_C_Set_WeaponData");
static_assert(sizeof(WeaponDescription_C_Set_WeaponData) == 0x0000B8, "Wrong size on WeaponDescription_C_Set_WeaponData");
static_assert(offsetof(WeaponDescription_C_Set_WeaponData, Param_WeaponMasterData) == 0x000000, "Member 'WeaponDescription_C_Set_WeaponData::Param_WeaponMasterData' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_Set_WeaponData, MinLevel) == 0x0000B0, "Member 'WeaponDescription_C_Set_WeaponData::MinLevel' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_Set_WeaponData, MaxLevel) == 0x0000B4, "Member 'WeaponDescription_C_Set_WeaponData::MaxLevel' has a wrong offset!");

// Function WeaponDescription.WeaponDescription_C.CollectWeaponParams
// 0x0088 (0x0088 - 0x0000)
struct WeaponDescription_C_CollectWeaponParams final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UTextBlock*                             CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49AD[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBWeaponStatus>                       K2Node_MakeArray_Array_1;                          // 0x0038(0x0010)(ReferenceParm)
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_2;                          // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	ESBWeaponStatus                               CallFunc_Array_Get_Item_1;                         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49AE[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Array_Get_Item_2;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               CallFunc_Array_Get_Item_3;                         // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49AF[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49B0[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49B1[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponDescription_C_CollectWeaponParams) == 0x000008, "Wrong alignment on WeaponDescription_C_CollectWeaponParams");
static_assert(sizeof(WeaponDescription_C_CollectWeaponParams) == 0x000088, "Wrong size on WeaponDescription_C_CollectWeaponParams");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WeaponDescription_C_CollectWeaponParams::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WeaponDescription_C_CollectWeaponParams::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, Temp_int_Array_Index_Variable_1) == 0x00000C, "Member 'WeaponDescription_C_CollectWeaponParams::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'WeaponDescription_C_CollectWeaponParams::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, K2Node_MakeArray_Array) == 0x000018, "Member 'WeaponDescription_C_CollectWeaponParams::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Get_Item) == 0x000028, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, K2Node_MakeArray_Array_1) == 0x000038, "Member 'WeaponDescription_C_CollectWeaponParams::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, K2Node_MakeArray_Array_2) == 0x000048, "Member 'WeaponDescription_C_CollectWeaponParams::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Get_Item_2) == 0x000060, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Get_Item_3) == 0x00006C, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Length_ReturnValue_2) == 0x000070, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Length_ReturnValue_3) == 0x000078, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007C, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_Array_Length_ReturnValue_4) == 0x000080, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000084, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_CollectWeaponParams, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000085, "Member 'WeaponDescription_C_CollectWeaponParams::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function WeaponDescription.WeaponDescription_C.UpdateWeaponParam
// 0x00B8 (0x00B8 - 0x0000)
struct WeaponDescription_C_UpdateWeaponParam final
{
public:
	int32                                         NewParam;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49B2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49B3[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBWeaponStatus>                       CallFunc_Map_Keys_Keys;                            // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWeaponStatus                               CallFunc_Array_Get_Item;                           // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49B4[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49B5[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49B6[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextBlock*                             CallFunc_Map_Find_Value;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49B7[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
};
static_assert(alignof(WeaponDescription_C_UpdateWeaponParam) == 0x000008, "Wrong alignment on WeaponDescription_C_UpdateWeaponParam");
static_assert(sizeof(WeaponDescription_C_UpdateWeaponParam) == 0x0000B8, "Wrong size on WeaponDescription_C_UpdateWeaponParam");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, NewParam) == 0x000000, "Member 'WeaponDescription_C_UpdateWeaponParam::NewParam' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, Temp_bool_Variable) == 0x000004, "Member 'WeaponDescription_C_UpdateWeaponParam::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, Temp_string_Variable) == 0x000008, "Member 'WeaponDescription_C_UpdateWeaponParam::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, Temp_string_Variable_1) == 0x000018, "Member 'WeaponDescription_C_UpdateWeaponParam::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WeaponDescription_C_UpdateWeaponParam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'WeaponDescription_C_UpdateWeaponParam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Map_Keys_Keys) == 0x000038, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Array_Get_Item) == 0x00004C, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Less_IntInt_ReturnValue) == 0x00004D, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_GetLevelStatus_ReturnValue) == 0x000050, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Conv_IntToString_ReturnValue) == 0x000058, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Greater_IntInt_ReturnValue) == 0x000068, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Map_Find_Value) == 0x000070, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Map_Find_ReturnValue) == 0x000078, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, K2Node_Select_Default) == 0x000080, "Member 'WeaponDescription_C_UpdateWeaponParam::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateWeaponParam, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'WeaponDescription_C_UpdateWeaponParam::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponDescription.WeaponDescription_C.UpdateMaxParam
// 0x0050 (0x0050 - 0x0000)
struct WeaponDescription_C_UpdateMaxParam final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBWeaponStatus>                       CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	ESBWeaponStatus                               CallFunc_Array_Get_Item;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49B8[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             CallFunc_Map_Find_Value;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49B9[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevelStatus_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
};
static_assert(alignof(WeaponDescription_C_UpdateMaxParam) == 0x000008, "Wrong alignment on WeaponDescription_C_UpdateMaxParam");
static_assert(sizeof(WeaponDescription_C_UpdateMaxParam) == 0x000050, "Wrong size on WeaponDescription_C_UpdateMaxParam");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, Level) == 0x000000, "Member 'WeaponDescription_C_UpdateMaxParam::Level' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WeaponDescription_C_UpdateMaxParam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WeaponDescription_C_UpdateMaxParam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Array_Get_Item) == 0x000020, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Map_Find_Value) == 0x000028, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Map_Find_ReturnValue) == 0x000030, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_GetLevelStatus_ReturnValue) == 0x000034, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_GetLevelStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponDescription_C_UpdateMaxParam, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'WeaponDescription_C_UpdateMaxParam::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

