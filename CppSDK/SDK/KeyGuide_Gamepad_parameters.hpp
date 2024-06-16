#pragma once

 

// Package: KeyGuide_Gamepad

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ExecuteUbergraph_KeyGuide_Gamepad
// 0x0308 (0x0308 - 0x0000)
struct KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerClassKeyConfigData            K2Node_CustomEvent_KeyConfigData;                  // 0x0010(0x01C8)(ConstParm)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> CallFunc_MakePare_Pair1;                           // 0x01D8(0x0050)(ContainsInstancedReference)
	class FString                                 CallFunc_KeyGuide_Gamepad_MakeJumpAttackText_ReturnValue; // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class USBRuntimeTextBlock*>            CallFunc_Map_Keys_Keys;                            // 0x0238(0x0010)(ReferenceParm, ContainsInstancedReference)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0248(0x0018)()
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item;                           // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            CallFunc_Map_Find_Value;                           // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BAE[0x2];                                     // 0x026A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_KeyGuide_Gamepad_MakeString_ReturnValue;  // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BAF[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_KeyGuide_Gamepad_MakeDodgeAttackText_ReturnValue; // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0298(0x0018)()
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue;       // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayTextByAction_ReturnValue_1;     // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x02D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02F0(0x0018)()
};
static_assert(alignof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad) == 0x000008, "Wrong alignment on KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad");
static_assert(sizeof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad) == 0x000308, "Wrong size on KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, EntryPoint) == 0x000000, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, Temp_int_Array_Index_Variable) == 0x000004, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, K2Node_CustomEvent_KeyConfigData) == 0x000010, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::K2Node_CustomEvent_KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_MakePare_Pair1) == 0x0001D8, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_MakePare_Pair1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_KeyGuide_Gamepad_MakeJumpAttackText_ReturnValue) == 0x000228, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_KeyGuide_Gamepad_MakeJumpAttackText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Map_Keys_Keys) == 0x000238, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Conv_StringToText_ReturnValue) == 0x000248, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Array_Get_Item) == 0x000260, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Map_Find_Value) == 0x000268, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Map_Find_ReturnValue) == 0x000269, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Array_Length_ReturnValue) == 0x00026C, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_KeyGuide_Gamepad_MakeString_ReturnValue) == 0x000270, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_KeyGuide_Gamepad_MakeString_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Less_IntInt_ReturnValue) == 0x000280, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_KeyGuide_Gamepad_MakeDodgeAttackText_ReturnValue) == 0x000288, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_KeyGuide_Gamepad_MakeDodgeAttackText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000298, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_GetDisplayTextByAction_ReturnValue) == 0x0002B0, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_GetDisplayTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_GetDisplayTextByAction_ReturnValue_1) == 0x0002C0, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_GetDisplayTextByAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Replace_ReturnValue) == 0x0002D0, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Replace_ReturnValue_1) == 0x0002E0, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002F0, "Member 'KeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ApplyKeyConfigData
// 0x01C8 (0x01C8 - 0x0000)
struct KeyGuide_Gamepad_C_ApplyKeyConfigData final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(KeyGuide_Gamepad_C_ApplyKeyConfigData) == 0x000008, "Wrong alignment on KeyGuide_Gamepad_C_ApplyKeyConfigData");
static_assert(sizeof(KeyGuide_Gamepad_C_ApplyKeyConfigData) == 0x0001C8, "Wrong size on KeyGuide_Gamepad_C_ApplyKeyConfigData");
static_assert(offsetof(KeyGuide_Gamepad_C_ApplyKeyConfigData, KeyConfigData) == 0x000000, "Member 'KeyGuide_Gamepad_C_ApplyKeyConfigData::KeyConfigData' has a wrong offset!");

// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.MakePare
// 0x00E8 (0x00E8 - 0x0000)
struct KeyGuide_Gamepad_C_MakePare final
{
public:
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Pair1;                                             // 0x0000(0x0050)(Parm, OutParm, ContainsInstancedReference)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Pair;                                              // 0x0050(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BB0[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBKeyConfigAction>                    K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	TArray<class USBRuntimeTextBlock*>            K2Node_MakeArray_Array_1;                          // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	ESBKeyConfigAction                            CallFunc_Array_Get_Item;                           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BB1[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBRuntimeTextBlock*                    CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_Gamepad_C_MakePare) == 0x000008, "Wrong alignment on KeyGuide_Gamepad_C_MakePare");
static_assert(sizeof(KeyGuide_Gamepad_C_MakePare) == 0x0000E8, "Wrong size on KeyGuide_Gamepad_C_MakePare");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, Pair1) == 0x000000, "Member 'KeyGuide_Gamepad_C_MakePare::Pair1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, Pair) == 0x000050, "Member 'KeyGuide_Gamepad_C_MakePare::Pair' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'KeyGuide_Gamepad_C_MakePare::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'KeyGuide_Gamepad_C_MakePare::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'KeyGuide_Gamepad_C_MakePare::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, K2Node_MakeArray_Array) == 0x0000B0, "Member 'KeyGuide_Gamepad_C_MakePare::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, K2Node_MakeArray_Array_1) == 0x0000C0, "Member 'KeyGuide_Gamepad_C_MakePare::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'KeyGuide_Gamepad_C_MakePare::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'KeyGuide_Gamepad_C_MakePare::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'KeyGuide_Gamepad_C_MakePare::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_MakePare, CallFunc_Less_IntInt_ReturnValue) == 0x0000E4, "Member 'KeyGuide_Gamepad_C_MakePare::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.SetTextVisible
// 0x0007 (0x0007 - 0x0000)
struct KeyGuide_Gamepad_C_SetTextVisible final
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
static_assert(alignof(KeyGuide_Gamepad_C_SetTextVisible) == 0x000001, "Wrong alignment on KeyGuide_Gamepad_C_SetTextVisible");
static_assert(sizeof(KeyGuide_Gamepad_C_SetTextVisible) == 0x000007, "Wrong size on KeyGuide_Gamepad_C_SetTextVisible");
static_assert(offsetof(KeyGuide_Gamepad_C_SetTextVisible, SkillActionPosition) == 0x000000, "Member 'KeyGuide_Gamepad_C_SetTextVisible::SkillActionPosition' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_SetTextVisible, Param_IsVisible) == 0x000001, "Member 'KeyGuide_Gamepad_C_SetTextVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_SetTextVisible, Temp_bool_Variable) == 0x000002, "Member 'KeyGuide_Gamepad_C_SetTextVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_SetTextVisible, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'KeyGuide_Gamepad_C_SetTextVisible::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_SetTextVisible, Temp_byte_Variable) == 0x000004, "Member 'KeyGuide_Gamepad_C_SetTextVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_SetTextVisible, Temp_byte_Variable_1) == 0x000005, "Member 'KeyGuide_Gamepad_C_SetTextVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_SetTextVisible, K2Node_Select_Default) == 0x000006, "Member 'KeyGuide_Gamepad_C_SetTextVisible::K2Node_Select_Default' has a wrong offset!");

// Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.InitializeVisibility
// 0x0020 (0x0020 - 0x0000)
struct KeyGuide_Gamepad_C_InitializeVisibility final
{
public:
	bool                                          Vissibility;                                       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BB2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(KeyGuide_Gamepad_C_InitializeVisibility) == 0x000008, "Wrong alignment on KeyGuide_Gamepad_C_InitializeVisibility");
static_assert(sizeof(KeyGuide_Gamepad_C_InitializeVisibility) == 0x000020, "Wrong size on KeyGuide_Gamepad_C_InitializeVisibility");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, Vissibility) == 0x000000, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::Vissibility' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, Temp_bool_Variable) == 0x000001, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, Temp_byte_Variable) == 0x000002, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, K2Node_Select_Default) == 0x000004, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KeyGuide_Gamepad_C_InitializeVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'KeyGuide_Gamepad_C_InitializeVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

