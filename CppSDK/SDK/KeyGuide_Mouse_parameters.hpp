#pragma once

 

// Package: KeyGuide_Mouse

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.ExecuteUbergraph_KeyGuide_Mouse
// 0x02E0 (0x02E0 - 0x0000)
struct KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            K2Node_CustomEvent_KeyConfigData;                  // 0x0008(0x01C8)(ConstParm)
	TArray<ESBKeyConfigAction>                    K2Node_MakeArray_Array;                            // 0x01D0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_MakeJumpAttackText_ReturnValue;           // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_MakeDodgeAttackText_ReturnValue;          // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0200(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0218(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array_1;                          // 0x0238(0x0010)(ReferenceParm, ContainsInstancedReference)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> CallFunc_MakePare_Return_Value;                    // 0x0248(0x0050)(ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            CallFunc_Map_Keys_Keys;                            // 0x0298(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Map_Find_Value;                           // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x02B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B9C[0x1];                                     // 0x02B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyToTextString_ReturnValue;           // 0x02B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02C8(0x0018)()
};
static_assert(alignof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse");
static_assert(sizeof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse) == 0x0002E0, "Wrong size on KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, EntryPoint) == 0x000000, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, Temp_int_Array_Index_Variable) == 0x000004, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, K2Node_CustomEvent_KeyConfigData) == 0x000008, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::K2Node_CustomEvent_KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, K2Node_MakeArray_Array) == 0x0001D0, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_MakeJumpAttackText_ReturnValue) == 0x0001E0, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_MakeJumpAttackText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_MakeDodgeAttackText_ReturnValue) == 0x0001F0, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_MakeDodgeAttackText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Conv_StringToText_ReturnValue) == 0x000200, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000218, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, Temp_int_Loop_Counter_Variable) == 0x000230, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Add_IntInt_ReturnValue) == 0x000234, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, K2Node_MakeArray_Array_1) == 0x000238, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_MakePare_Return_Value) == 0x000248, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_MakePare_Return_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Map_Keys_Keys) == 0x000298, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Array_Get_Item) == 0x0002A8, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Array_Length_ReturnValue) == 0x0002B0, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Map_Find_Value) == 0x0002B4, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Map_Find_ReturnValue) == 0x0002B5, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Less_IntInt_ReturnValue) == 0x0002B6, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_GetKeyToTextString_ReturnValue) == 0x0002B8, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_GetKeyToTextString_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002C8, "Member 'KeyGuide_Mouse_C_ExecuteUbergraph_KeyGuide_Mouse::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.ApplyKeyConfigData
// 0x01C8 (0x01C8 - 0x0000)
struct KeyGuide_Mouse_C_ApplyKeyConfigData final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(KeyGuide_Mouse_C_ApplyKeyConfigData) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_ApplyKeyConfigData");
static_assert(sizeof(KeyGuide_Mouse_C_ApplyKeyConfigData) == 0x0001C8, "Wrong size on KeyGuide_Mouse_C_ApplyKeyConfigData");
static_assert(offsetof(KeyGuide_Mouse_C_ApplyKeyConfigData, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse_C_ApplyKeyConfigData::KeyConfigData' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeMovesText
// 0x0288 (0x0288 - 0x0000)
struct KeyGuide_Mouse_C_MakeMovesText final
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
	uint8                                         Pad_4B9D[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9E[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBKeyConfigAction>                    K2Node_MakeArray_Array;                            // 0x0230(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item;                           // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B9F[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA0[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key;                 // 0x0250(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA1[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse_C_MakeMovesText) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_MakeMovesText");
static_assert(sizeof(KeyGuide_Mouse_C_MakeMovesText) == 0x000288, "Wrong size on KeyGuide_Mouse_C_MakeMovesText");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse_C_MakeMovesText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, ReturnValue) == 0x0001C8, "Member 'KeyGuide_Mouse_C_MakeMovesText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, Text) == 0x0001D8, "Member 'KeyGuide_Mouse_C_MakeMovesText::Text' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, Temp_string_Variable) == 0x0001E8, "Member 'KeyGuide_Mouse_C_MakeMovesText::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, Temp_string_Variable_1) == 0x0001F8, "Member 'KeyGuide_Mouse_C_MakeMovesText::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, Temp_int_Array_Index_Variable) == 0x000208, "Member 'KeyGuide_Mouse_C_MakeMovesText::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, Temp_int_Loop_Counter_Variable) == 0x00020C, "Member 'KeyGuide_Mouse_C_MakeMovesText::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_Add_IntInt_ReturnValue) == 0x000210, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_JoinStringArray_ReturnValue) == 0x000218, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_Array_Add_ReturnValue) == 0x000228, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, K2Node_MakeArray_Array) == 0x000230, "Member 'KeyGuide_Mouse_C_MakeMovesText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_Array_Add_ReturnValue_1) == 0x000240, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_Array_Get_Item) == 0x000244, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_Array_Length_ReturnValue) == 0x000248, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_KeyConfigActionToKey_Key) == 0x000250, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_KeyConfigActionToKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_Less_IntInt_ReturnValue) == 0x000268, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000270, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeMovesText, CallFunc_Array_Add_ReturnValue_2) == 0x000280, "Member 'KeyGuide_Mouse_C_MakeMovesText::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeDodgeAttackText
// 0x0250 (0x0250 - 0x0000)
struct KeyGuide_Mouse_C_MakeDodgeAttackText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 ReturnValue;                                       // 0x01C8(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          Vissibility;                                       // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA2[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key;                 // 0x01E0(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key_1;               // 0x01F8(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0230(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse_C_MakeDodgeAttackText) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_MakeDodgeAttackText");
static_assert(sizeof(KeyGuide_Mouse_C_MakeDodgeAttackText) == 0x000250, "Wrong size on KeyGuide_Mouse_C_MakeDodgeAttackText");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, ReturnValue) == 0x0001C8, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, Vissibility) == 0x0001D8, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::Vissibility' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, CallFunc_KeyConfigActionToKey_Key) == 0x0001E0, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::CallFunc_KeyConfigActionToKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, CallFunc_KeyConfigActionToKey_Key_1) == 0x0001F8, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::CallFunc_KeyConfigActionToKey_Key_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000210, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x000220, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, K2Node_MakeArray_Array) == 0x000230, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeDodgeAttackText, CallFunc_JoinStringArray_ReturnValue) == 0x000240, "Member 'KeyGuide_Mouse_C_MakeDodgeAttackText::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakeJumpAttackText
// 0x0250 (0x0250 - 0x0000)
struct KeyGuide_Mouse_C_MakeJumpAttackText final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 ReturnValue;                                       // 0x01C8(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          Vissibility;                                       // 0x01D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA3[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key;                 // 0x01E0(0x0018)(HasGetValueTypeHash)
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key_1;               // 0x01F8(0x0018)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue_1;            // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0230(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse_C_MakeJumpAttackText) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_MakeJumpAttackText");
static_assert(sizeof(KeyGuide_Mouse_C_MakeJumpAttackText) == 0x000250, "Wrong size on KeyGuide_Mouse_C_MakeJumpAttackText");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, ReturnValue) == 0x0001C8, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, Vissibility) == 0x0001D8, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::Vissibility' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, CallFunc_KeyConfigActionToKey_Key) == 0x0001E0, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::CallFunc_KeyConfigActionToKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, CallFunc_KeyConfigActionToKey_Key_1) == 0x0001F8, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::CallFunc_KeyConfigActionToKey_Key_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000210, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, CallFunc_GetKeyTextByKey_ReturnValue_1) == 0x000220, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::CallFunc_GetKeyTextByKey_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, K2Node_MakeArray_Array) == 0x000230, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakeJumpAttackText, CallFunc_JoinStringArray_ReturnValue) == 0x000240, "Member 'KeyGuide_Mouse_C_MakeJumpAttackText::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.MakePare
// 0x00E8 (0x00E8 - 0x0000)
struct KeyGuide_Mouse_C_MakePare final
{
public:
	TArray<class USBRuntimeTextBlock*>            Key;                                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<ESBKeyConfigAction>                    Value;                                             // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Return_Value;                                      // 0x0020(0x0050)(Parm, OutParm, ContainsInstancedReference)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Pare;                                              // 0x0070(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA4[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA5[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_Mouse_C_MakePare) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_MakePare");
static_assert(sizeof(KeyGuide_Mouse_C_MakePare) == 0x0000E8, "Wrong size on KeyGuide_Mouse_C_MakePare");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, Key) == 0x000000, "Member 'KeyGuide_Mouse_C_MakePare::Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, Value) == 0x000010, "Member 'KeyGuide_Mouse_C_MakePare::Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, Return_Value) == 0x000020, "Member 'KeyGuide_Mouse_C_MakePare::Return_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, Pare) == 0x000070, "Member 'KeyGuide_Mouse_C_MakePare::Pare' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'KeyGuide_Mouse_C_MakePare::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, CallFunc_Array_Length_ReturnValue) == 0x0000C4, "Member 'KeyGuide_Mouse_C_MakePare::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'KeyGuide_Mouse_C_MakePare::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'KeyGuide_Mouse_C_MakePare::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, Temp_int_Array_Index_Variable) == 0x0000D0, "Member 'KeyGuide_Mouse_C_MakePare::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'KeyGuide_Mouse_C_MakePare::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_MakePare, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000E0, "Member 'KeyGuide_Mouse_C_MakePare::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.SetTextVisible
// 0x0007 (0x0007 - 0x0000)
struct KeyGuide_Mouse_C_SetTextVisible final
{
public:
	ESkillActionPosition                          SkillActionPosition;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsVisible;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse_C_SetTextVisible) == 0x000001, "Wrong alignment on KeyGuide_Mouse_C_SetTextVisible");
static_assert(sizeof(KeyGuide_Mouse_C_SetTextVisible) == 0x000007, "Wrong size on KeyGuide_Mouse_C_SetTextVisible");
static_assert(offsetof(KeyGuide_Mouse_C_SetTextVisible, SkillActionPosition) == 0x000000, "Member 'KeyGuide_Mouse_C_SetTextVisible::SkillActionPosition' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_SetTextVisible, Param_IsVisible) == 0x000001, "Member 'KeyGuide_Mouse_C_SetTextVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_SetTextVisible, Temp_bool_Variable) == 0x000002, "Member 'KeyGuide_Mouse_C_SetTextVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_SetTextVisible, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'KeyGuide_Mouse_C_SetTextVisible::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_SetTextVisible, Temp_byte_Variable) == 0x000004, "Member 'KeyGuide_Mouse_C_SetTextVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_SetTextVisible, Temp_byte_Variable_1) == 0x000005, "Member 'KeyGuide_Mouse_C_SetTextVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_SetTextVisible, K2Node_Select_Default) == 0x000006, "Member 'KeyGuide_Mouse_C_SetTextVisible::K2Node_Select_Default' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.InitializeVisibility
// 0x0020 (0x0020 - 0x0000)
struct KeyGuide_Mouse_C_InitializeVisibility final
{
public:
	bool                                          Vissibility;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_Mouse_C_InitializeVisibility) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_InitializeVisibility");
static_assert(sizeof(KeyGuide_Mouse_C_InitializeVisibility) == 0x000020, "Wrong size on KeyGuide_Mouse_C_InitializeVisibility");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, Vissibility) == 0x000000, "Member 'KeyGuide_Mouse_C_InitializeVisibility::Vissibility' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, Temp_bool_Variable) == 0x000001, "Member 'KeyGuide_Mouse_C_InitializeVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, Temp_byte_Variable) == 0x000002, "Member 'KeyGuide_Mouse_C_InitializeVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'KeyGuide_Mouse_C_InitializeVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, K2Node_Select_Default) == 0x000004, "Member 'KeyGuide_Mouse_C_InitializeVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'KeyGuide_Mouse_C_InitializeVisibility::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'KeyGuide_Mouse_C_InitializeVisibility::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'KeyGuide_Mouse_C_InitializeVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_InitializeVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'KeyGuide_Mouse_C_InitializeVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.GetKeyToTextString
// 0x0270 (0x0270 - 0x0000)
struct KeyGuide_Mouse_C_GetKeyToTextString final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDash;                                            // 0x01C9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA7[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x01D0(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BA8[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyConfigActionToKey_Key;                 // 0x01E8(0x0018)(HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0200(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA9[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetKeyTextByKey_ReturnValue;              // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BAA[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x021C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0240(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0250(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse_C_GetKeyToTextString) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_GetKeyToTextString");
static_assert(sizeof(KeyGuide_Mouse_C_GetKeyToTextString) == 0x000270, "Wrong size on KeyGuide_Mouse_C_GetKeyToTextString");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, KeyConfigAction) == 0x0001C8, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, IsDash) == 0x0001C9, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::IsDash' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, ReturnValue) == 0x0001D0, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, Temp_int_Variable) == 0x0001E0, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E4, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, CallFunc_KeyConfigActionToKey_Key) == 0x0001E8, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::CallFunc_KeyConfigActionToKey_Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, Temp_int_Variable_1) == 0x000200, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, CallFunc_GetKeyTextByKey_ReturnValue) == 0x000208, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::CallFunc_GetKeyTextByKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, Temp_bool_Variable) == 0x000218, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, Temp_bool_Variable_1) == 0x000219, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, K2Node_Select_Default) == 0x00021C, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, CallFunc_GetTextFromAsset_ReturnValue) == 0x000220, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, CallFunc_Concat_StrStr_ReturnValue) == 0x000230, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, K2Node_Select_Default_1) == 0x000240, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, K2Node_MakeArray_Array) == 0x000250, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_GetKeyToTextString, CallFunc_JoinStringArray_ReturnValue) == 0x000260, "Member 'KeyGuide_Mouse_C_GetKeyToTextString::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

// Function KeyGuide_Mouse.KeyGuide_Mouse_C.KeyConfigActionToKey
// 0x0228 (0x0228 - 0x0000)
struct KeyGuide_Mouse_C_KeyConfigActionToKey final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBKeyConfigAction                            KeyConfigAction;                                   // 0x01C8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BAB[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   Key;                                               // 0x01D0(0x0018)(Parm, OutParm, HasGetValueTypeHash)
	ESBKeyConfigMouseKey                          CallFunc_GetActionKeyMouse_MouseKey;               // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigKeyboardKey                       CallFunc_GetActionKeyMouse_KeyboardKey;            // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BAC[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_MouseKeyToKey_ReturnValue;                // 0x01F0(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BAD[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_KeyboardKeyToKey_ReturnValue;             // 0x0210(0x0018)(HasGetValueTypeHash)
};
static_assert(alignof(KeyGuide_Mouse_C_KeyConfigActionToKey) == 0x000008, "Wrong alignment on KeyGuide_Mouse_C_KeyConfigActionToKey");
static_assert(sizeof(KeyGuide_Mouse_C_KeyConfigActionToKey) == 0x000228, "Wrong size on KeyGuide_Mouse_C_KeyConfigActionToKey");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, KeyConfigAction) == 0x0001C8, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, Key) == 0x0001D0, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::Key' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, CallFunc_GetActionKeyMouse_MouseKey) == 0x0001E8, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::CallFunc_GetActionKeyMouse_MouseKey' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, CallFunc_GetActionKeyMouse_KeyboardKey) == 0x0001E9, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::CallFunc_GetActionKeyMouse_KeyboardKey' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, CallFunc_MouseKeyToKey_ReturnValue) == 0x0001F0, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::CallFunc_MouseKeyToKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000208, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse_C_KeyConfigActionToKey, CallFunc_KeyboardKeyToKey_ReturnValue) == 0x000210, "Member 'KeyGuide_Mouse_C_KeyConfigActionToKey::CallFunc_KeyboardKeyToKey_ReturnValue' has a wrong offset!");

}

