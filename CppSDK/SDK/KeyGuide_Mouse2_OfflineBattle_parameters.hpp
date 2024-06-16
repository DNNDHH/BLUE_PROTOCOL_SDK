#pragma once

 

// Package: KeyGuide_Mouse2_OfflineBattle

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle
// 0x0260 (0x0260 - 0x0000)
struct KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            K2Node_CustomEvent_KeyConfigData;                  // 0x0008(0x01C8)(ConstParm)
	TArray<class UWidget*>                        CallFunc_KeyGuide_GetVerticalChildWidget_out;      // 0x01D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            CallFunc_KeyGuide_GetPareItems_outActionTextArray; // 0x01E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<ESBKeyConfigAction>                    CallFunc_KeyGuide_GetPareItems_outActionConfigArray; // 0x01F0(0x0010)(ReferenceParm)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> CallFunc_KeyGuide_MakePare_Return_Value;           // 0x0200(0x0050)(ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            CallFunc_Map_Keys_Keys;                            // 0x0250(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle");
static_assert(sizeof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle) == 0x000260, "Wrong size on KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle, EntryPoint) == 0x000000, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle, K2Node_CustomEvent_KeyConfigData) == 0x000008, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle::K2Node_CustomEvent_KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle, CallFunc_KeyGuide_GetVerticalChildWidget_out) == 0x0001D0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle::CallFunc_KeyGuide_GetVerticalChildWidget_out' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle, CallFunc_KeyGuide_GetPareItems_outActionTextArray) == 0x0001E0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle::CallFunc_KeyGuide_GetPareItems_outActionTextArray' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle, CallFunc_KeyGuide_GetPareItems_outActionConfigArray) == 0x0001F0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle::CallFunc_KeyGuide_GetPareItems_outActionConfigArray' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle, CallFunc_KeyGuide_MakePare_Return_Value) == 0x000200, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle::CallFunc_KeyGuide_MakePare_Return_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle, CallFunc_Map_Keys_Keys) == 0x000250, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle::CallFunc_Map_Keys_Keys' has a wrong offset!");

// Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.ApplyKeyConfigData
// 0x01C8 (0x01C8 - 0x0000)
struct KeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(KeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData");
static_assert(sizeof(KeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData) == 0x0001C8, "Wrong size on KeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse2_OfflineBattle_C_ApplyKeyConfigData::KeyConfigData' has a wrong offset!");

// Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.MakeMovesText
// 0x0288 (0x0288 - 0x0000)
struct KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 ReturnValue;                                       // 0x01C8(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	TArray<class FString>                         Text;                                              // 0x01D8(0x0010)(Edit, BlueprintVisible)
	class FString                                 Temp_string_Variable;                              // 0x01E8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x01F8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9C[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9D[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBKeyConfigAction>                    K2Node_MakeArray_Array;                            // 0x0230(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item;                           // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9E[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A9F[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key;                 // 0x0250(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AA0[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText");
static_assert(sizeof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText) == 0x000288, "Wrong size on KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, ReturnValue) == 0x0001C8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, Text) == 0x0001D8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::Text' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, Temp_string_Variable) == 0x0001E8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, Temp_string_Variable_1) == 0x0001F8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, Temp_int_Array_Index_Variable) == 0x000208, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, Temp_int_Loop_Counter_Variable) == 0x00020C, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_Add_IntInt_ReturnValue) == 0x000210, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_JoinStringArray_ReturnValue) == 0x000218, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_Array_Add_ReturnValue) == 0x000228, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, K2Node_MakeArray_Array) == 0x000230, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_Array_Add_ReturnValue_1) == 0x000240, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_Array_Get_Item) == 0x000244, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_Array_Length_ReturnValue) == 0x000248, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_KeyConfigActionToKey_Key) == 0x000250, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_KeyConfigActionToKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_Less_IntInt_ReturnValue) == 0x000268, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000270, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText, CallFunc_Array_Add_ReturnValue_2) == 0x000280, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakeMovesText::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.MakePare
// 0x00E8 (0x00E8 - 0x0000)
struct KeyGuide_Mouse2_OfflineBattle_C_MakePare final
{
public:
	TArray<class USBRuntimeTextBlock*>            Key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<ESBKeyConfigAction>                    Value;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Return_Value;                                      // 0x0020(0x0050)(Parm, OutParm, ContainsInstancedReference)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Pare;                                              // 0x0070(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AA1[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AA2[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse2_OfflineBattle_C_MakePare) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_OfflineBattle_C_MakePare");
static_assert(sizeof(KeyGuide_Mouse2_OfflineBattle_C_MakePare) == 0x0000E8, "Wrong size on KeyGuide_Mouse2_OfflineBattle_C_MakePare");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, Key) == 0x000000, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, Value) == 0x000010, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, Return_Value) == 0x000020, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::Return_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, Pare) == 0x000070, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::Pare' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, Temp_int_Array_Index_Variable) == 0x0000C4, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, Temp_int_Loop_Counter_Variable) == 0x0000C8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, CallFunc_Add_IntInt_ReturnValue) == 0x0000DC, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_MakePare, CallFunc_Array_Get_Item_1) == 0x0000E0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_MakePare::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.GetKeyToTextString
// 0x0228 (0x0228 - 0x0000)
struct KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDash;                                            // 0x01C9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAutoRun;                                         // 0x01CA(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AA3[0x5];                                     // 0x01CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x01D0(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key;                 // 0x01E0(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0208(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString");
static_assert(sizeof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString) == 0x000228, "Wrong size on KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, KeyConfigAction) == 0x0001C8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, IsDash) == 0x0001C9, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::IsDash' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, IsAutoRun) == 0x0001CA, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::IsAutoRun' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, ReturnValue) == 0x0001D0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, CallFunc_KeyConfigActionToKey_Key) == 0x0001E0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::CallFunc_KeyConfigActionToKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, CallFunc_GetKeyTextByKey_ReturnValue) == 0x0001F8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, K2Node_MakeArray_Array) == 0x000208, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString, CallFunc_JoinStringArray_ReturnValue) == 0x000218, "Member 'KeyGuide_Mouse2_OfflineBattle_C_GetKeyToTextString::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C.KeyConfigActionToKey
// 0x0228 (0x0228 - 0x0000)
struct KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AA4[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Key;                                               // 0x01D0(0x0018)(Parm, OutParm, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AA5[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_MouseKeyToKey_ReturnValue;                // 0x01F0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4AA6[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0210(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey");
static_assert(sizeof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey) == 0x000228, "Wrong size on KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, KeyConfigAction) == 0x0001C8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, Key) == 0x0001D0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, CallFunc_GetActionKeyMouse_MouseKey) == 0x0001E8, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x0001E9, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, CallFunc_MouseKeyToKey_ReturnValue) == 0x0001F0, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::CallFunc_MouseKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000208, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000210, "Member 'KeyGuide_Mouse2_OfflineBattle_C_KeyConfigActionToKey::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");

}

