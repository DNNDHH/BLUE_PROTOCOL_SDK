#pragma once

 

// Package: BurstBonusGauge

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BurstBonusGauge.BurstBonusGauge_C.UpdateGaugeSwitcher
// 0x0018 (0x0018 - 0x0000)
struct BurstBonusGauge_C_UpdateGaugeSwitcher final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A86[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLV_ReturnValue;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A87[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BurstBonusGauge_C_UpdateGaugeSwitcher) == 0x000004, "Wrong alignment on BurstBonusGauge_C_UpdateGaugeSwitcher");
static_assert(sizeof(BurstBonusGauge_C_UpdateGaugeSwitcher) == 0x000018, "Wrong size on BurstBonusGauge_C_UpdateGaugeSwitcher");
static_assert(offsetof(BurstBonusGauge_C_UpdateGaugeSwitcher, Temp_bool_Variable) == 0x000000, "Member 'BurstBonusGauge_C_UpdateGaugeSwitcher::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_UpdateGaugeSwitcher, Temp_int_Variable) == 0x000004, "Member 'BurstBonusGauge_C_UpdateGaugeSwitcher::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_UpdateGaugeSwitcher, Temp_int_Variable_1) == 0x000008, "Member 'BurstBonusGauge_C_UpdateGaugeSwitcher::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_UpdateGaugeSwitcher, CallFunc_GetLV_ReturnValue) == 0x00000C, "Member 'BurstBonusGauge_C_UpdateGaugeSwitcher::CallFunc_GetLV_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_UpdateGaugeSwitcher, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'BurstBonusGauge_C_UpdateGaugeSwitcher::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_UpdateGaugeSwitcher, K2Node_Select_Default) == 0x000014, "Member 'BurstBonusGauge_C_UpdateGaugeSwitcher::K2Node_Select_Default' has a wrong offset!");

// Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateLV
// 0x0060 (0x0060 - 0x0000)
struct BurstBonusGauge_C_OnUpdateLV final
{
public:
	TArray<class UWidgetSwitcher*>                Switcher;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A88[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLV_ReturnValue;                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLV_ReturnValue_1;                      // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A89[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A8A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetSwitcher*>                K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BurstBonusGauge_C_OnUpdateLV) == 0x000008, "Wrong alignment on BurstBonusGauge_C_OnUpdateLV");
static_assert(sizeof(BurstBonusGauge_C_OnUpdateLV) == 0x000060, "Wrong size on BurstBonusGauge_C_OnUpdateLV");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, Switcher) == 0x000000, "Member 'BurstBonusGauge_C_OnUpdateLV::Switcher' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, Temp_bool_Variable) == 0x000010, "Member 'BurstBonusGauge_C_OnUpdateLV::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, Temp_int_Variable) == 0x000014, "Member 'BurstBonusGauge_C_OnUpdateLV::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, Temp_int_Variable_1) == 0x000018, "Member 'BurstBonusGauge_C_OnUpdateLV::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BurstBonusGauge_C_OnUpdateLV::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BurstBonusGauge_C_OnUpdateLV::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_GetLV_ReturnValue) == 0x000028, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_GetLV_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_GetLV_ReturnValue_1) == 0x00002C, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_GetLV_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_Subtract_IntInt_ReturnValue) == 0x000030, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000035, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_BooleanAND_ReturnValue) == 0x000036, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_Array_Get_Item) == 0x000038, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, K2Node_Select_Default) == 0x000044, "Member 'BurstBonusGauge_C_OnUpdateLV::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, CallFunc_Less_IntInt_ReturnValue_1) == 0x000048, "Member 'BurstBonusGauge_C_OnUpdateLV::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateLV, K2Node_MakeArray_Array) == 0x000050, "Member 'BurstBonusGauge_C_OnUpdateLV::K2Node_MakeArray_Array' has a wrong offset!");

// Function BurstBonusGauge.BurstBonusGauge_C.OnUpdateTime
// 0x0010 (0x0010 - 0x0000)
struct BurstBonusGauge_C_OnUpdateTime final
{
public:
	float                                         CallFunc_GetTime_ReturnValue;                      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A8B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTime_ReturnValue_1;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BurstBonusGauge_C_OnUpdateTime) == 0x000004, "Wrong alignment on BurstBonusGauge_C_OnUpdateTime");
static_assert(sizeof(BurstBonusGauge_C_OnUpdateTime) == 0x000010, "Wrong size on BurstBonusGauge_C_OnUpdateTime");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateTime, CallFunc_GetTime_ReturnValue) == 0x000000, "Member 'BurstBonusGauge_C_OnUpdateTime::CallFunc_GetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateTime, CallFunc_Less_FloatFloat_ReturnValue) == 0x000004, "Member 'BurstBonusGauge_C_OnUpdateTime::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateTime, CallFunc_GetTime_ReturnValue_1) == 0x000008, "Member 'BurstBonusGauge_C_OnUpdateTime::CallFunc_GetTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_OnUpdateTime, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x00000C, "Member 'BurstBonusGauge_C_OnUpdateTime::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function BurstBonusGauge.BurstBonusGauge_C.SetDefaultGaugeSize
// 0x0010 (0x0010 - 0x0000)
struct BurstBonusGauge_C_SetDefaultGaugeSize final
{
public:
	struct FVector2D                              InDefaultGaugeSize;                                // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BurstBonusGauge_C_SetDefaultGaugeSize) == 0x000008, "Wrong alignment on BurstBonusGauge_C_SetDefaultGaugeSize");
static_assert(sizeof(BurstBonusGauge_C_SetDefaultGaugeSize) == 0x000010, "Wrong size on BurstBonusGauge_C_SetDefaultGaugeSize");
static_assert(offsetof(BurstBonusGauge_C_SetDefaultGaugeSize, InDefaultGaugeSize) == 0x000000, "Member 'BurstBonusGauge_C_SetDefaultGaugeSize::InDefaultGaugeSize' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_SetDefaultGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'BurstBonusGauge_C_SetDefaultGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function BurstBonusGauge.BurstBonusGauge_C.SetGaugeSize
// 0x0010 (0x0010 - 0x0000)
struct BurstBonusGauge_C_SetGaugeSize final
{
public:
	struct FVector2D                              InSize;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BurstBonusGauge_C_SetGaugeSize) == 0x000008, "Wrong alignment on BurstBonusGauge_C_SetGaugeSize");
static_assert(sizeof(BurstBonusGauge_C_SetGaugeSize) == 0x000010, "Wrong size on BurstBonusGauge_C_SetGaugeSize");
static_assert(offsetof(BurstBonusGauge_C_SetGaugeSize, InSize) == 0x000000, "Member 'BurstBonusGauge_C_SetGaugeSize::InSize' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_SetGaugeSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'BurstBonusGauge_C_SetGaugeSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

// Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimNormal
// 0x0018 (0x0018 - 0x0000)
struct BurstBonusGauge_C_PlayAnimNormal final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A8C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BurstBonusGauge_C_PlayAnimNormal) == 0x000008, "Wrong alignment on BurstBonusGauge_C_PlayAnimNormal");
static_assert(sizeof(BurstBonusGauge_C_PlayAnimNormal) == 0x000018, "Wrong size on BurstBonusGauge_C_PlayAnimNormal");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimNormal, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'BurstBonusGauge_C_PlayAnimNormal::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimNormal, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BurstBonusGauge_C_PlayAnimNormal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimNormal, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BurstBonusGauge_C_PlayAnimNormal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink1
// 0x0018 (0x0018 - 0x0000)
struct BurstBonusGauge_C_PlayAnimBlink1 final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A8D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BurstBonusGauge_C_PlayAnimBlink1) == 0x000008, "Wrong alignment on BurstBonusGauge_C_PlayAnimBlink1");
static_assert(sizeof(BurstBonusGauge_C_PlayAnimBlink1) == 0x000018, "Wrong size on BurstBonusGauge_C_PlayAnimBlink1");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimBlink1, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'BurstBonusGauge_C_PlayAnimBlink1::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimBlink1, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BurstBonusGauge_C_PlayAnimBlink1::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimBlink1, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BurstBonusGauge_C_PlayAnimBlink1::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BurstBonusGauge.BurstBonusGauge_C.PlayAnimBlink2
// 0x0018 (0x0018 - 0x0000)
struct BurstBonusGauge_C_PlayAnimBlink2 final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A8E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BurstBonusGauge_C_PlayAnimBlink2) == 0x000008, "Wrong alignment on BurstBonusGauge_C_PlayAnimBlink2");
static_assert(sizeof(BurstBonusGauge_C_PlayAnimBlink2) == 0x000018, "Wrong size on BurstBonusGauge_C_PlayAnimBlink2");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimBlink2, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'BurstBonusGauge_C_PlayAnimBlink2::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimBlink2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'BurstBonusGauge_C_PlayAnimBlink2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BurstBonusGauge_C_PlayAnimBlink2, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BurstBonusGauge_C_PlayAnimBlink2::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

