#pragma once

 

// Package: SkillInfoItemForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.OnSkillInfoItemPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature final
{
public:
	class USkillInfoItemForBattleSet_C*           InInfoItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature) == 0x000008, "Wrong alignment on SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature");
static_assert(sizeof(SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature) == 0x000008, "Wrong size on SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature");
static_assert(offsetof(SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature, InInfoItem) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature::InInfoItem' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.ExecuteUbergraph_SkillInfoItemForBattleSet
// 0x0080 (0x0080 - 0x0000)
struct SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_848B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
};
static_assert(alignof(SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet) == 0x000008, "Wrong alignment on SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet");
static_assert(sizeof(SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet) == 0x000080, "Wrong size on SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet");
static_assert(offsetof(SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet, EntryPoint) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet, K2Node_Event_IsDesignTime) == 0x000004, "Member 'SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItemForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItemForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoItemForBattleSet_C_PreConstruct");
static_assert(sizeof(SkillInfoItemForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoItemForBattleSet_C_PreConstruct");
static_assert(offsetof(SkillInfoItemForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSKill
// 0x00C8 (0x00C8 - 0x0000)
struct SkillInfoItemForBattleSet_C_SetSKill final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InSkillClassType;                                  // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsClassAbility;                                  // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          LocalSAP;                                          // 0x0006(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_848C[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerManager*                       LocalSBPlayerManager;                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_848D[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_848E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_848F[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8490[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8491[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8492[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8493[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPassiveSkillEquipped_ReturnValue;       // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8494[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8495[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          CallFunc_Array_Get_Item;                           // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8496[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkillID_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8497[0x1];                                     // 0x008F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSkillNameText_ReturnValue;             // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8498[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassPassiveSkillNameText_ReturnValue; // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItemForBattleSet_C_SetSKill) == 0x000008, "Wrong alignment on SkillInfoItemForBattleSet_C_SetSKill");
static_assert(sizeof(SkillInfoItemForBattleSet_C_SetSKill) == 0x0000C8, "Wrong size on SkillInfoItemForBattleSet_C_SetSKill");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, InSkillId) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_SetSKill::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, InSkillClassType) == 0x000004, "Member 'SkillInfoItemForBattleSet_C_SetSKill::InSkillClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, InIsClassAbility) == 0x000005, "Member 'SkillInfoItemForBattleSet_C_SetSKill::InIsClassAbility' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, LocalSAP) == 0x000006, "Member 'SkillInfoItemForBattleSet_C_SetSKill::LocalSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, LocalSBPlayerCharacter) == 0x000008, "Member 'SkillInfoItemForBattleSet_C_SetSKill::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, LocalSBPlayerManager) == 0x000010, "Member 'SkillInfoItemForBattleSet_C_SetSKill::LocalSBPlayerManager' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_int_Variable) == 0x000018, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000021, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000024, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_bool_Variable) == 0x000028, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_int_Variable_1) == 0x00002C, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_int_Variable_2) == 0x000030, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_bool_True_if_break_was_hit_Variable) == 0x00003C, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_int_Array_Index_Variable) == 0x000040, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Not_PreBool_ReturnValue) == 0x000044, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, Temp_int_Variable_3) == 0x000048, "Member 'SkillInfoItemForBattleSet_C_SetSKill::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00004C, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetValidValue_ReturnValue) == 0x00004D, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, K2Node_SwitchEnum_CmpSuccess) == 0x00004E, "Member 'SkillInfoItemForBattleSet_C_SetSKill::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, K2Node_SwitchEnum_CmpSuccess_1) == 0x000054, "Member 'SkillInfoItemForBattleSet_C_SetSKill::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_MakeLiteralBool_ReturnValue) == 0x000055, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_MakeLiteralInt_ReturnValue) == 0x000058, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000060, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_IsPassiveSkillEquipped_ReturnValue) == 0x00006A, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_IsPassiveSkillEquipped_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_1) == 0x00006B, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_2) == 0x00006C, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_3) == 0x00006D, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, K2Node_Select_Default) == 0x000070, "Member 'SkillInfoItemForBattleSet_C_SetSKill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000078, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_4) == 0x000080, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Array_Get_Item) == 0x000081, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Array_Length_ReturnValue) == 0x000084, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetSkillID_ReturnValue) == 0x000088, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetSkillID_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00008D, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_BooleanAND_ReturnValue) == 0x00008E, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetSkillNameText_ReturnValue) == 0x000090, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetSkillNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x0000A0, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetClassPassiveSkillNameText_ReturnValue) == 0x0000A8, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetClassPassiveSkillNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_GetPlayerManager_ReturnValue) == 0x0000B8, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_5) == 0x0000C0, "Member 'SkillInfoItemForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillIconEquippedMarkVisibility
// 0x0005 (0x0005 - 0x0000)
struct SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility) == 0x000001, "Wrong alignment on SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility");
static_assert(sizeof(SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility) == 0x000005, "Wrong size on SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility, InIsVisible) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility, Temp_bool_Variable) == 0x000001, "Member 'SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility, Temp_byte_Variable) == 0x000002, "Member 'SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility, K2Node_Select_Default) == 0x000004, "Member 'SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillName
// 0x0080 (0x0080 - 0x0000)
struct SkillInfoItemForBattleSet_C_SetSkillName final
{
public:
	class FString                                 InSkillName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8499[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetSkillLevelText_ReturnValue;            // 0x0018(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_849A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(SkillInfoItemForBattleSet_C_SetSkillName) == 0x000008, "Wrong alignment on SkillInfoItemForBattleSet_C_SetSkillName");
static_assert(sizeof(SkillInfoItemForBattleSet_C_SetSkillName) == 0x000080, "Wrong size on SkillInfoItemForBattleSet_C_SetSkillName");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, InSkillName) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::InSkillName' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, InSkillLevel) == 0x000010, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, CallFunc_GetSkillLevelText_ReturnValue) == 0x000018, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::CallFunc_GetSkillLevelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, CallFunc_Conv_TextToString_ReturnValue) == 0x000038, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetSkillName, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'SkillInfoItemForBattleSet_C_SetSkillName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.CreateTooltip
// 0x0030 (0x0030 - 0x0000)
struct SkillInfoItemForBattleSet_C_CreateTooltip final
{
public:
	bool                                          InNotUseTooltip;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_849B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_849C[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   K2Node_DynamicCast_AsWBP_Tool_Tip_Skill;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_849D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ToolTip_Skill_C*                   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoItemForBattleSet_C_CreateTooltip) == 0x000008, "Wrong alignment on SkillInfoItemForBattleSet_C_CreateTooltip");
static_assert(sizeof(SkillInfoItemForBattleSet_C_CreateTooltip) == 0x000030, "Wrong size on SkillInfoItemForBattleSet_C_CreateTooltip");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, InNotUseTooltip) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::InNotUseTooltip' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, InSkillId) == 0x000004, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, InSkillLevel) == 0x000008, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, K2Node_DynamicCast_AsWBP_Tool_Tip_Skill) == 0x000010, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::K2Node_DynamicCast_AsWBP_Tool_Tip_Skill' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, CallFunc_Create_ReturnValue) == 0x000020, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_CreateTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'SkillInfoItemForBattleSet_C_CreateTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetInfoItemSelected
// 0x05C8 (0x05C8 - 0x0000)
struct SkillInfoItemForBattleSet_C_SetInfoItemSelected final
{
public:
	bool                                          InIsSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_849E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_849F[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0088(0x0028)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x00B0(0x0278)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0328(0x0278)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x05A0(0x0028)()
};
static_assert(alignof(SkillInfoItemForBattleSet_C_SetInfoItemSelected) == 0x000008, "Wrong alignment on SkillInfoItemForBattleSet_C_SetInfoItemSelected");
static_assert(sizeof(SkillInfoItemForBattleSet_C_SetInfoItemSelected) == 0x0005C8, "Wrong size on SkillInfoItemForBattleSet_C_SetInfoItemSelected");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, InIsSelected) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::InIsSelected' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, K2Node_MakeStruct_SlateColor_3) == 0x000088, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, K2Node_MakeStruct_ButtonStyle) == 0x0000B0, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, K2Node_MakeStruct_ButtonStyle_1) == 0x000328, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");
static_assert(offsetof(SkillInfoItemForBattleSet_C_SetInfoItemSelected, K2Node_MakeStruct_SlateColor_4) == 0x0005A0, "Member 'SkillInfoItemForBattleSet_C_SetInfoItemSelected::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillID
// 0x0004 (0x0004 - 0x0000)
struct SkillInfoItemForBattleSet_C_GetSkillID final
{
public:
	int32                                         OutSkillId;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItemForBattleSet_C_GetSkillID) == 0x000004, "Wrong alignment on SkillInfoItemForBattleSet_C_GetSkillID");
static_assert(sizeof(SkillInfoItemForBattleSet_C_GetSkillID) == 0x000004, "Wrong size on SkillInfoItemForBattleSet_C_GetSkillID");
static_assert(offsetof(SkillInfoItemForBattleSet_C_GetSkillID, OutSkillId) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_GetSkillID::OutSkillId' has a wrong offset!");

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillClassType
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoItemForBattleSet_C_GetSkillClassType final
{
public:
	ESBClassType                                  OutSkillClassType;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoItemForBattleSet_C_GetSkillClassType) == 0x000001, "Wrong alignment on SkillInfoItemForBattleSet_C_GetSkillClassType");
static_assert(sizeof(SkillInfoItemForBattleSet_C_GetSkillClassType) == 0x000001, "Wrong size on SkillInfoItemForBattleSet_C_GetSkillClassType");
static_assert(offsetof(SkillInfoItemForBattleSet_C_GetSkillClassType, OutSkillClassType) == 0x000000, "Member 'SkillInfoItemForBattleSet_C_GetSkillClassType::OutSkillClassType' has a wrong offset!");

}

