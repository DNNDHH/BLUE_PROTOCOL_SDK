#pragma once

 

// Package: PassiveImagineInfoForBattleSetTop

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InInnerImagineSlotType;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B05[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InImagineId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature) == 0x000004, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature) == 0x000008, "Wrong size on PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature, InInnerImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature::InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature, InImagineId) == 0x000004, "Member 'PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature::InImagineId' has a wrong offset!");

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.ExecuteUbergraph_PassiveImagineInfoForBattleSetTop
// 0x0058 (0x0058 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerPassiveImagineSlotType               K2Node_CustomEvent_InPassiveImagineSlotType;       // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B06[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InPassiveImagineItemId;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B07[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B08[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPassiveImagineInfoUnitForBattleSet_C*  K2Node_DynamicCast_AsPassive_Imagine_Info_Unit_for_Battle_Set; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B09[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop) == 0x000008, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop) == 0x000058, "Wrong size on PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, EntryPoint) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::EntryPoint' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, K2Node_Event_IsDesignTime) == 0x000014, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, K2Node_CustomEvent_InPassiveImagineSlotType) == 0x000015, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::K2Node_CustomEvent_InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, K2Node_CustomEvent_InPassiveImagineItemId) == 0x000018, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::K2Node_CustomEvent_InPassiveImagineItemId' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, Temp_int_Variable) == 0x00001C, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, K2Node_DynamicCast_AsPassive_Imagine_Info_Unit_for_Battle_Set) == 0x000038, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::K2Node_DynamicCast_AsPassive_Imagine_Info_Unit_for_Battle_Set' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, CallFunc_GetChildrenCount_ReturnValue) == 0x000048, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000050, "Member 'PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnClicked
// 0x0008 (0x0008 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked final
{
public:
	ESBPlayerPassiveImagineSlotType               InPassiveImagineSlotType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B0A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InPassiveImagineItemId;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked) == 0x000004, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked) == 0x000008, "Wrong size on PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked, InPassiveImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked::InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked, InPassiveImagineItemId) == 0x000004, "Member 'PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked::InPassiveImagineItemId' has a wrong offset!");

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_PreConstruct) == 0x000001, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_PreConstruct");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_PreConstruct) == 0x000001, "Wrong size on PassiveImagineInfoForBattleSetTop_C_PreConstruct");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.CreatePassiveImagineIconBtnList
// 0x0080 (0x0080 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList final
{
public:
	int32                                         LocalSlotTypeCnt;                                  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B0B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B0C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPassiveImagineInfoUnitForBattleSet_C*  CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0E[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B0F[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B10[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList) == 0x000008, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList) == 0x000080, "Wrong size on PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, LocalSlotTypeCnt) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::LocalSlotTypeCnt' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, Temp_int_Variable) == 0x000004, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, Temp_int_Variable_1) == 0x000008, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, K2Node_SwitchEnum_CmpSuccess) == 0x000016, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000017, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, Temp_float_Variable) == 0x000028, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, Temp_float_Variable_1) == 0x00002C, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, Temp_bool_Variable) == 0x000040, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000048, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000050, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000054, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, K2Node_Select_Default) == 0x00005C, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, K2Node_MakeStruct_Margin) == 0x000060, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, CallFunc_MakeLiteralBool_ReturnValue) == 0x000074, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList, Temp_int_Variable_2) == 0x000078, "Member 'PassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList::Temp_int_Variable_2' has a wrong offset!");

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineIconBtn
// 0x0040 (0x0040 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn final
{
public:
	ESBPlayerPassiveImagineSlotType               InPassiveImagineSlotType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B11[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C* OutImagineIconBtn;                                 // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               LocalSlotType;                                     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B12[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B13[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C* K2Node_DynamicCast_AsMy_Chara_Menu_Passive_Imagine_Icon_Btn_for_Battle_Set; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B14[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               CallFunc_GetPassiveImagineSlotType_OutSlotType;    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn) == 0x000008, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn) == 0x000040, "Wrong size on PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, InPassiveImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, OutIsValid) == 0x000001, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::OutIsValid' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, OutImagineIconBtn) == 0x000008, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::OutImagineIconBtn' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, LocalSlotType) == 0x000010, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::LocalSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, Temp_int_Variable) == 0x000014, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, K2Node_DynamicCast_AsMy_Chara_Menu_Passive_Imagine_Icon_Btn_for_Battle_Set) == 0x000028, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::K2Node_DynamicCast_AsMy_Chara_Menu_Passive_Imagine_Icon_Btn_for_Battle_Set' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_GetChildrenCount_ReturnValue) == 0x000034, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_GetPassiveImagineSlotType_OutSlotType) == 0x00003C, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_GetPassiveImagineSlotType_OutSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003D, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003E, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.SetupPassiveImagineIconBtnList
// 0x01C8 (0x01C8 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList final
{
public:
	class UPassiveImagineInfoUnitForBattleSet_C*  LocalImagineInfoUnit;                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsIconEmpty;                                  // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B15[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C* LocalIconBtn;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               LocalSlotType;                                     // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B16[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     LocalSBPlayerCharacter;                            // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPassiveImagineInfoUnit_IsValid;        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B17[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPassiveImagineInfoUnitForBattleSet_C*  CallFunc_GetPassiveImagineInfoUnit_OutImagineInfoUnit; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B18[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B19[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B1A[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B1B[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B1C[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0088(0x0118)(ConstParm)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B1D[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPassiveImagineUniqueID_ReturnValue;    // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList) == 0x000008, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList) == 0x0001C8, "Wrong size on PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, LocalImagineInfoUnit) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::LocalImagineInfoUnit' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, LocalIsIconEmpty) == 0x000008, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::LocalIsIconEmpty' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, LocalImagineUniqueId) == 0x000010, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, LocalIconBtn) == 0x000020, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::LocalIconBtn' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, LocalSlotType) == 0x000028, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::LocalSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, LocalSBPlayerCharacter) == 0x000030, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::LocalSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetPassiveImagineInfoUnit_IsValid) == 0x000038, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetPassiveImagineInfoUnit_IsValid' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetPassiveImagineInfoUnit_OutImagineInfoUnit) == 0x000040, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetPassiveImagineInfoUnit_OutImagineInfoUnit' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000048, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, Temp_int_Variable) == 0x00004C, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, Temp_int_Variable_1) == 0x000050, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_Conv_IntToByte_ReturnValue) == 0x000054, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetValidValue_ReturnValue) == 0x00005C, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00005D, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00005E, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, K2Node_SwitchEnum_CmpSuccess) == 0x00005F, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000060, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetClassType_ReturnValue) == 0x000064, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_MakeLiteralInt_ReturnValue) == 0x000068, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetNetworkDataCache_IsValid) == 0x00006D, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000070, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetEquipmentBag_ReturnValue) == 0x000078, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000081, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000088, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_MakeLiteralBool_ReturnValue) == 0x0001A0, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetPassiveImagineUniqueID_ReturnValue) == 0x0001A8, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetPassiveImagineUniqueID_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x0001B8, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList, CallFunc_IsValid_ReturnValue_1) == 0x0001C0, "Member 'PassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineInfoUnit
// 0x0040 (0x0040 - 0x0000)
struct PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit final
{
public:
	ESBPlayerPassiveImagineSlotType               InPassiveImagineSlotType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B1E[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPassiveImagineInfoUnitForBattleSet_C*  OutImagineInfoUnit;                                // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               LocalSlotType;                                     // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B1F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B20[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPassiveImagineInfoUnitForBattleSet_C*  K2Node_DynamicCast_AsPassive_Imagine_Info_Unit_for_Battle_Set; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B21[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               CallFunc_GetImagineSlotType_OutImagineSlotType;    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit) == 0x000008, "Wrong alignment on PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit");
static_assert(sizeof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit) == 0x000040, "Wrong size on PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, InPassiveImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, IsValid) == 0x000001, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::IsValid' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, OutImagineInfoUnit) == 0x000008, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::OutImagineInfoUnit' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, LocalSlotType) == 0x000010, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::LocalSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, Temp_int_Variable) == 0x000014, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, K2Node_DynamicCast_AsPassive_Imagine_Info_Unit_for_Battle_Set) == 0x000028, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::K2Node_DynamicCast_AsPassive_Imagine_Info_Unit_for_Battle_Set' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_GetChildrenCount_ReturnValue) == 0x000034, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_GetImagineSlotType_OutImagineSlotType) == 0x00003C, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_GetImagineSlotType_OutImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003D, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003E, "Member 'PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

