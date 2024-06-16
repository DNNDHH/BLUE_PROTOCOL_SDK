#pragma once

 

// Package: StepList_Gasha

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function StepList_Gasha.StepList_Gasha_C.OnChangeStep__DelegateSignature
// 0x01C8 (0x01C8 - 0x0000)
struct StepList_Gasha_C_OnChangeStep__DelegateSignature final
{
public:
	struct FSBGashaInfo                           GashaInfo;                                         // 0x0000(0x01C8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(StepList_Gasha_C_OnChangeStep__DelegateSignature) == 0x000008, "Wrong alignment on StepList_Gasha_C_OnChangeStep__DelegateSignature");
static_assert(sizeof(StepList_Gasha_C_OnChangeStep__DelegateSignature) == 0x0001C8, "Wrong size on StepList_Gasha_C_OnChangeStep__DelegateSignature");
static_assert(offsetof(StepList_Gasha_C_OnChangeStep__DelegateSignature, GashaInfo) == 0x000000, "Member 'StepList_Gasha_C_OnChangeStep__DelegateSignature::GashaInfo' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.ExecuteUbergraph_StepList_Gasha
// 0x03E8 (0x03E8 - 0x0000)
struct StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_BtnId;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_955E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_955F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9560[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9561[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaInfo                           CallFunc_GetGashaInfo_OutGashaInfo;                // 0x0038(0x01C8)()
	int32                                         K2Node_CustomEvent_BtnId;                          // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaInfo                           CallFunc_GetGashaInfo_OutGashaInfo_1;              // 0x0208(0x01C8)()
	int32                                         Temp_int_Variable_3;                               // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_BtnId_4;                // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9562[0x3];                                     // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_BtnId_3;                // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_BtnId_2;                // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_BtnId_1;                // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha) == 0x000008, "Wrong alignment on StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha");
static_assert(sizeof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha) == 0x0003E8, "Wrong size on StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, EntryPoint) == 0x000000, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::EntryPoint' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, K2Node_ComponentBoundEvent_BtnId) == 0x000004, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::K2Node_ComponentBoundEvent_BtnId' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, Temp_int_Variable) == 0x000008, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000018, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Less_IntInt_ReturnValue_1) == 0x000020, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000024, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, Temp_int_Variable_1) == 0x00002C, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_Add_IntInt_ReturnValue_2) == 0x000030, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_GetGashaInfo_OutGashaInfo) == 0x000038, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_GetGashaInfo_OutGashaInfo' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, K2Node_CustomEvent_BtnId) == 0x000200, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::K2Node_CustomEvent_BtnId' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, Temp_int_Variable_2) == 0x000204, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_GetGashaInfo_OutGashaInfo_1) == 0x000208, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_GetGashaInfo_OutGashaInfo_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, Temp_int_Variable_3) == 0x0003D0, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, K2Node_ComponentBoundEvent_BtnId_4) == 0x0003D4, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::K2Node_ComponentBoundEvent_BtnId_4' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0003D8, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, K2Node_ComponentBoundEvent_BtnId_3) == 0x0003DC, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::K2Node_ComponentBoundEvent_BtnId_3' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, K2Node_ComponentBoundEvent_BtnId_2) == 0x0003E0, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::K2Node_ComponentBoundEvent_BtnId_2' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha, K2Node_ComponentBoundEvent_BtnId_1) == 0x0003E4, "Member 'StepList_Gasha_C_ExecuteUbergraph_StepList_Gasha::K2Node_ComponentBoundEvent_BtnId_1' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature");
static_assert(sizeof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature");
static_assert(offsetof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature, BtnId) == 0x000000, "Member 'StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature::BtnId' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature");
static_assert(sizeof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature");
static_assert(offsetof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature, BtnId) == 0x000000, "Member 'StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature::BtnId' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature");
static_assert(sizeof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature");
static_assert(offsetof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature, BtnId) == 0x000000, "Member 'StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature::BtnId' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature");
static_assert(sizeof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature");
static_assert(offsetof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature, BtnId) == 0x000000, "Member 'StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature::BtnId' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature");
static_assert(sizeof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature");
static_assert(offsetof(StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature, BtnId) == 0x000000, "Member 'StepList_Gasha_C_BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature::BtnId' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.CommonBtnClicked
// 0x0004 (0x0004 - 0x0000)
struct StepList_Gasha_C_CommonBtnClicked final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_CommonBtnClicked) == 0x000004, "Wrong alignment on StepList_Gasha_C_CommonBtnClicked");
static_assert(sizeof(StepList_Gasha_C_CommonBtnClicked) == 0x000004, "Wrong size on StepList_Gasha_C_CommonBtnClicked");
static_assert(offsetof(StepList_Gasha_C_CommonBtnClicked, BtnId) == 0x000000, "Member 'StepList_Gasha_C_CommonBtnClicked::BtnId' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.InitSetStepInfo
// 0x0058 (0x0058 - 0x0000)
struct StepList_Gasha_C_InitSetStepInfo final
{
public:
	int32                                         SelectStep;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StepMax;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9563[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9564[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStepListItem_Gasha_C*>          K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9565[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStepListItem_Gasha_C*                  CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_InitSetStepInfo) == 0x000008, "Wrong alignment on StepList_Gasha_C_InitSetStepInfo");
static_assert(sizeof(StepList_Gasha_C_InitSetStepInfo) == 0x000058, "Wrong size on StepList_Gasha_C_InitSetStepInfo");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, SelectStep) == 0x000000, "Member 'StepList_Gasha_C_InitSetStepInfo::SelectStep' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, StepMax) == 0x000004, "Member 'StepList_Gasha_C_InitSetStepInfo::StepMax' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, Temp_byte_Variable) == 0x000008, "Member 'StepList_Gasha_C_InitSetStepInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'StepList_Gasha_C_InitSetStepInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, Temp_byte_Variable_1) == 0x000010, "Member 'StepList_Gasha_C_InitSetStepInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, Temp_bool_Variable) == 0x000011, "Member 'StepList_Gasha_C_InitSetStepInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, Temp_bool_Variable_1) == 0x000012, "Member 'StepList_Gasha_C_InitSetStepInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, K2Node_MakeArray_Array) == 0x000018, "Member 'StepList_Gasha_C_InitSetStepInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, K2Node_Select_Default) == 0x000028, "Member 'StepList_Gasha_C_InitSetStepInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000030, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'StepList_Gasha_C_InitSetStepInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000038, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000040, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Array_Get_Item) == 0x000048, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000055, "Member 'StepList_Gasha_C_InitSetStepInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_InitSetStepInfo, K2Node_Select_Default_1) == 0x000056, "Member 'StepList_Gasha_C_InitSetStepInfo::K2Node_Select_Default_1' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.CreateBtnList
// 0x0040 (0x0040 - 0x0000)
struct StepList_Gasha_C_CreateBtnList final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9566[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9567[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStepListItem_Gasha_C*                  CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9568[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9569[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepList_Gasha_C_CreateBtnList) == 0x000008, "Wrong alignment on StepList_Gasha_C_CreateBtnList");
static_assert(sizeof(StepList_Gasha_C_CreateBtnList) == 0x000040, "Wrong size on StepList_Gasha_C_CreateBtnList");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, Count) == 0x000000, "Member 'StepList_Gasha_C_CreateBtnList::Count' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, Temp_int_Variable) == 0x000004, "Member 'StepList_Gasha_C_CreateBtnList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, Temp_int_Variable_1) == 0x000008, "Member 'StepList_Gasha_C_CreateBtnList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, Temp_bool_Variable) == 0x000010, "Member 'StepList_Gasha_C_CreateBtnList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_Array_Get_Item) == 0x000020, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_Add_IntInt_ReturnValue_2) == 0x00002C, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, K2Node_Select_Default) == 0x000034, "Member 'StepList_Gasha_C_CreateBtnList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_CreateBtnList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'StepList_Gasha_C_CreateBtnList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.SetBtnVisivility
// 0x0001 (0x0001 - 0x0000)
struct StepList_Gasha_C_SetBtnVisivility final
{
public:
	ESlateVisibility                              IsVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_SetBtnVisivility) == 0x000001, "Wrong alignment on StepList_Gasha_C_SetBtnVisivility");
static_assert(sizeof(StepList_Gasha_C_SetBtnVisivility) == 0x000001, "Wrong size on StepList_Gasha_C_SetBtnVisivility");
static_assert(offsetof(StepList_Gasha_C_SetBtnVisivility, IsVisibility) == 0x000000, "Member 'StepList_Gasha_C_SetBtnVisivility::IsVisibility' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.SetBtnSelected
// 0x0028 (0x0028 - 0x0000)
struct StepList_Gasha_C_SetBtnSelected final
{
public:
	int32                                         SelectedBtnID;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStepListItem_Gasha_C*                  CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_956A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetBtnText_TextID;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepList_Gasha_C_SetBtnSelected) == 0x000008, "Wrong alignment on StepList_Gasha_C_SetBtnSelected");
static_assert(sizeof(StepList_Gasha_C_SetBtnSelected) == 0x000028, "Wrong size on StepList_Gasha_C_SetBtnSelected");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, SelectedBtnID) == 0x000000, "Member 'StepList_Gasha_C_SetBtnSelected::SelectedBtnID' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, Temp_int_Array_Index_Variable) == 0x000004, "Member 'StepList_Gasha_C_SetBtnSelected::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'StepList_Gasha_C_SetBtnSelected::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'StepList_Gasha_C_SetBtnSelected::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, CallFunc_Array_Get_Item) == 0x000010, "Member 'StepList_Gasha_C_SetBtnSelected::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'StepList_Gasha_C_SetBtnSelected::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'StepList_Gasha_C_SetBtnSelected::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, CallFunc_GetBtnText_TextID) == 0x000020, "Member 'StepList_Gasha_C_SetBtnSelected::CallFunc_GetBtnText_TextID' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_SetBtnSelected, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000024, "Member 'StepList_Gasha_C_SetBtnSelected::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.GetSelectStepNum
// 0x000C (0x000C - 0x0000)
struct StepList_Gasha_C_GetSelectStepNum final
{
public:
	int32                                         OutSelectStepNum;                                  // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_GetSelectStepNum) == 0x000004, "Wrong alignment on StepList_Gasha_C_GetSelectStepNum");
static_assert(sizeof(StepList_Gasha_C_GetSelectStepNum) == 0x00000C, "Wrong size on StepList_Gasha_C_GetSelectStepNum");
static_assert(offsetof(StepList_Gasha_C_GetSelectStepNum, OutSelectStepNum) == 0x000000, "Member 'StepList_Gasha_C_GetSelectStepNum::OutSelectStepNum' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetSelectStepNum, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'StepList_Gasha_C_GetSelectStepNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetSelectStepNum, CallFunc_Add_IntInt_ReturnValue_1) == 0x000008, "Member 'StepList_Gasha_C_GetSelectStepNum::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.GetSelectBtn
// 0x0004 (0x0004 - 0x0000)
struct StepList_Gasha_C_GetSelectBtn final
{
public:
	int32                                         OutSelectBtnId;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepList_Gasha_C_GetSelectBtn) == 0x000004, "Wrong alignment on StepList_Gasha_C_GetSelectBtn");
static_assert(sizeof(StepList_Gasha_C_GetSelectBtn) == 0x000004, "Wrong size on StepList_Gasha_C_GetSelectBtn");
static_assert(offsetof(StepList_Gasha_C_GetSelectBtn, OutSelectBtnId) == 0x000000, "Member 'StepList_Gasha_C_GetSelectBtn::OutSelectBtnId' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.UpdateBtnPage
// 0x0008 (0x0008 - 0x0000)
struct StepList_Gasha_C_UpdateBtnPage final
{
public:
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepList_Gasha_C_UpdateBtnPage) == 0x000004, "Wrong alignment on StepList_Gasha_C_UpdateBtnPage");
static_assert(sizeof(StepList_Gasha_C_UpdateBtnPage) == 0x000008, "Wrong size on StepList_Gasha_C_UpdateBtnPage");
static_assert(offsetof(StepList_Gasha_C_UpdateBtnPage, CallFunc_Subtract_IntInt_ReturnValue) == 0x000000, "Member 'StepList_Gasha_C_UpdateBtnPage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_UpdateBtnPage, CallFunc_Less_IntInt_ReturnValue) == 0x000004, "Member 'StepList_Gasha_C_UpdateBtnPage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_UpdateBtnPage, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'StepList_Gasha_C_UpdateBtnPage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function StepList_Gasha.StepList_Gasha_C.GetGashaInfo
// 0x03D0 (0x03D0 - 0x0000)
struct StepList_Gasha_C_GetGashaInfo final
{
public:
	int32                                         BtnId;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_956B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGashaInfo                           OutGashaInfo;                                      // 0x0008(0x01C8)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_956C[0x6];                                     // 0x01D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_956D[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_956E[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGashaComponent*                      CallFunc_GetGashaComponent_ReturnValue;            // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBGashaInfo                           CallFunc_GetGashaInfoStep_OutGashaInfo;            // 0x0200(0x01C8)()
	bool                                          CallFunc_GetGashaInfoStep_ReturnValue;             // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StepList_Gasha_C_GetGashaInfo) == 0x000008, "Wrong alignment on StepList_Gasha_C_GetGashaInfo");
static_assert(sizeof(StepList_Gasha_C_GetGashaInfo) == 0x0003D0, "Wrong size on StepList_Gasha_C_GetGashaInfo");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, BtnId) == 0x000000, "Member 'StepList_Gasha_C_GetGashaInfo::BtnId' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, OutGashaInfo) == 0x000008, "Member 'StepList_Gasha_C_GetGashaInfo::OutGashaInfo' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, Temp_bool_Variable) == 0x0001D0, "Member 'StepList_Gasha_C_GetGashaInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001D1, "Member 'StepList_Gasha_C_GetGashaInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, CallFunc_GetPlayerController_ReturnValue) == 0x0001D8, "Member 'StepList_Gasha_C_GetGashaInfo::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, K2Node_Select_Default) == 0x0001E0, "Member 'StepList_Gasha_C_GetGashaInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001E8, "Member 'StepList_Gasha_C_GetGashaInfo::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'StepList_Gasha_C_GetGashaInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0001F4, "Member 'StepList_Gasha_C_GetGashaInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, CallFunc_GetGashaComponent_ReturnValue) == 0x0001F8, "Member 'StepList_Gasha_C_GetGashaInfo::CallFunc_GetGashaComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, CallFunc_GetGashaInfoStep_OutGashaInfo) == 0x000200, "Member 'StepList_Gasha_C_GetGashaInfo::CallFunc_GetGashaInfoStep_OutGashaInfo' has a wrong offset!");
static_assert(offsetof(StepList_Gasha_C_GetGashaInfo, CallFunc_GetGashaInfoStep_ReturnValue) == 0x0003C8, "Member 'StepList_Gasha_C_GetGashaInfo::CallFunc_GetGashaInfoStep_ReturnValue' has a wrong offset!");

}

