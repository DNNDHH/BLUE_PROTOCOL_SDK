#pragma once

 

// Package: Fang_expedition_DetailAreaName

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.ExecuteUbergraph_Fang_expedition_DetailAreaName
// 0x0038 (0x0038 - 0x0000)
struct Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName) == 0x000008, "Wrong alignment on Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName");
static_assert(sizeof(Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName) == 0x000038, "Wrong size on Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailAreaName_C_ExecuteUbergraph_Fang_expedition_DetailAreaName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.SetData
// 0x0180 (0x0180 - 0x0000)
struct Fang_expedition_DetailAreaName_C_SetData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBFang_expeditionStatus                      Status;                                            // 0x00A8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA5[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpStringNext;                                     // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpStringNow;                                      // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpNext;                                           // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExpNow;                                            // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkInt;                                           // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EA6[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0140(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EA7[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0160(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailAreaName_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_DetailAreaName_C_SetData");
static_assert(sizeof(Fang_expedition_DetailAreaName_C_SetData) == 0x000180, "Wrong size on Fang_expedition_DetailAreaName_C_SetData");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, AreaData) == 0x000000, "Member 'Fang_expedition_DetailAreaName_C_SetData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, Status) == 0x0000A8, "Member 'Fang_expedition_DetailAreaName_C_SetData::Status' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, TmpStringNext) == 0x0000B0, "Member 'Fang_expedition_DetailAreaName_C_SetData::TmpStringNext' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, TmpStringNow) == 0x0000C0, "Member 'Fang_expedition_DetailAreaName_C_SetData::TmpStringNow' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, Rate) == 0x0000D0, "Member 'Fang_expedition_DetailAreaName_C_SetData::Rate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, ExpNext) == 0x0000D4, "Member 'Fang_expedition_DetailAreaName_C_SetData::ExpNext' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, ExpNow) == 0x0000D8, "Member 'Fang_expedition_DetailAreaName_C_SetData::ExpNow' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, WorkInt) == 0x0000DC, "Member 'Fang_expedition_DetailAreaName_C_SetData::WorkInt' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_IntToString_ReturnValue) == 0x000110, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000120, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000130, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000134, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000138, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Greater_IntInt_ReturnValue) == 0x00013C, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_IntToText_ReturnValue) == 0x000140, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000158, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000160, "Member 'Fang_expedition_DetailAreaName_C_SetData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetData, K2Node_SwitchEnum_CmpSuccess) == 0x000178, "Member 'Fang_expedition_DetailAreaName_C_SetData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Fang_expedition_DetailAreaName.Fang_expedition_DetailAreaName_C.SetMasteryVisible
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_DetailAreaName_C_SetMasteryVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailAreaName_C_SetMasteryVisible) == 0x000001, "Wrong alignment on Fang_expedition_DetailAreaName_C_SetMasteryVisible");
static_assert(sizeof(Fang_expedition_DetailAreaName_C_SetMasteryVisible) == 0x000001, "Wrong size on Fang_expedition_DetailAreaName_C_SetMasteryVisible");
static_assert(offsetof(Fang_expedition_DetailAreaName_C_SetMasteryVisible, Visible) == 0x000000, "Member 'Fang_expedition_DetailAreaName_C_SetMasteryVisible::Visible' has a wrong offset!");

}

