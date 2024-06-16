#pragma once

 

// Package: Fang_expedition_DetailRelease

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.ExecuteUbergraph_Fang_expedition_DetailRelease
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease) == 0x000004, "Wrong alignment on Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease");
static_assert(sizeof(Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease) == 0x000004, "Wrong size on Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease");
static_assert(offsetof(Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailRelease_C_ExecuteUbergraph_Fang_expedition_DetailRelease::EntryPoint' has a wrong offset!");

// Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.SetData
// 0x0070 (0x0070 - 0x0000)
struct Fang_expedition_DetailRelease_C_SetData final
{
public:
	TArray<struct FSBFang_expeditionLimitData>    LimitData;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          NG;                                                // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF7[0x3];                                      // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RetValue;                                          // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DF8[0x3];                                      // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DF9[0x4];                                      // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailReleaseConditions_C* CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DFA[0x7];                                      // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailReleaseConditions_C* CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DFB[0x3];                                      // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailReleaseConditions_C* CallFunc_Array_Get_Item_2;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DFC[0x3];                                      // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailRelease_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_DetailRelease_C_SetData");
static_assert(sizeof(Fang_expedition_DetailRelease_C_SetData) == 0x000070, "Wrong size on Fang_expedition_DetailRelease_C_SetData");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, LimitData) == 0x000000, "Member 'Fang_expedition_DetailRelease_C_SetData::LimitData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, NG) == 0x000010, "Member 'Fang_expedition_DetailRelease_C_SetData::NG' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, LoopEnd) == 0x000014, "Member 'Fang_expedition_DetailRelease_C_SetData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, RetValue) == 0x000018, "Member 'Fang_expedition_DetailRelease_C_SetData::RetValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Array_LastIndex_ReturnValue) == 0x00001C, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, Temp_int_Variable) == 0x000020, "Member 'Fang_expedition_DetailRelease_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, Temp_int_Variable_1) == 0x000028, "Member 'Fang_expedition_DetailRelease_C_SetData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Add_IntInt_ReturnValue_2) == 0x000030, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Array_Get_Item) == 0x000038, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000050, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, Temp_int_Variable_2) == 0x000054, "Member 'Fang_expedition_DetailRelease_C_SetData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Array_Get_Item_2) == 0x000058, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000060, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Add_IntInt_ReturnValue_3) == 0x000064, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailRelease_C_SetData, CallFunc_BooleanOR_ReturnValue) == 0x000069, "Member 'Fang_expedition_DetailRelease_C_SetData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C.Init
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DetailRelease_C_Init final
{
public:
	TArray<class UFang_expedition_DetailReleaseConditions_C*> K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(Fang_expedition_DetailRelease_C_Init) == 0x000008, "Wrong alignment on Fang_expedition_DetailRelease_C_Init");
static_assert(sizeof(Fang_expedition_DetailRelease_C_Init) == 0x000010, "Wrong size on Fang_expedition_DetailRelease_C_Init");
static_assert(offsetof(Fang_expedition_DetailRelease_C_Init, K2Node_MakeArray_Array) == 0x000000, "Member 'Fang_expedition_DetailRelease_C_Init::K2Node_MakeArray_Array' has a wrong offset!");

}

