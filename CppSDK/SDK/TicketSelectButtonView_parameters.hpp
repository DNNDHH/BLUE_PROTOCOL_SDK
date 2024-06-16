#pragma once

 

// Package: TicketSelectButtonView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TicketSelectButtonView.TicketSelectButtonView_C.ExecuteUbergraph_TicketSelectButtonView
// 0x0004 (0x0004 - 0x0000)
struct TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView) == 0x000004, "Wrong alignment on TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView");
static_assert(sizeof(TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView) == 0x000004, "Wrong size on TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView");
static_assert(offsetof(TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView, EntryPoint) == 0x000000, "Member 'TicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView::EntryPoint' has a wrong offset!");

// Function TicketSelectButtonView.TicketSelectButtonView_C.SetData
// 0x0030 (0x0030 - 0x0000)
struct TicketSelectButtonView_C_SetData final
{
public:
	int32                                         TicketId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D54[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    CallFunc_FindStackBTicketData_ReturnValue;         // 0x0010(0x001C)(ConstParm, NoDestructor)
};
static_assert(alignof(TicketSelectButtonView_C_SetData) == 0x000008, "Wrong alignment on TicketSelectButtonView_C_SetData");
static_assert(sizeof(TicketSelectButtonView_C_SetData) == 0x000030, "Wrong size on TicketSelectButtonView_C_SetData");
static_assert(offsetof(TicketSelectButtonView_C_SetData, TicketId) == 0x000000, "Member 'TicketSelectButtonView_C_SetData::TicketId' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_SetData, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'TicketSelectButtonView_C_SetData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_SetData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'TicketSelectButtonView_C_SetData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_SetData, CallFunc_FindStackBTicketData_ReturnValue) == 0x000010, "Member 'TicketSelectButtonView_C_SetData::CallFunc_FindStackBTicketData_ReturnValue' has a wrong offset!");

// Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTextData
// 0x0160 (0x0160 - 0x0000)
struct TicketSelectButtonView_C_UpdateTextData final
{
public:
	float                                         LocalTicketAddRate;                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalAddRewardRate;                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBMasterData                    Master;                                            // 0x0008(0x0030)(Edit, BlueprintVisible)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D55[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0040(0x0028)()
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D56[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D57[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTicketSelectItem_C*                    CallFunc_Create_ReturnValue;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D58[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D59[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CheckRewardRate_ReturnValue;              // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default;                             // 0x00B8(0x0028)()
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D5A[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x00F0(0x0030)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D5B[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0138(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectButtonView_C_UpdateTextData) == 0x000008, "Wrong alignment on TicketSelectButtonView_C_UpdateTextData");
static_assert(sizeof(TicketSelectButtonView_C_UpdateTextData) == 0x000160, "Wrong size on TicketSelectButtonView_C_UpdateTextData");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, LocalTicketAddRate) == 0x000000, "Member 'TicketSelectButtonView_C_UpdateTextData::LocalTicketAddRate' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, LocalAddRewardRate) == 0x000004, "Member 'TicketSelectButtonView_C_UpdateTextData::LocalAddRewardRate' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, Master) == 0x000008, "Member 'TicketSelectButtonView_C_UpdateTextData::Master' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000038, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, K2Node_MakeStruct_SlateColor) == 0x000040, "Member 'TicketSelectButtonView_C_UpdateTextData::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000068, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Greater_IntInt_ReturnValue) == 0x000069, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'TicketSelectButtonView_C_UpdateTextData::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_BooleanOR_ReturnValue) == 0x000098, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Create_ReturnValue) == 0x0000A0, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_BooleanOR_ReturnValue_1) == 0x0000A8, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000AC, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, Temp_bool_Variable) == 0x0000B0, "Member 'TicketSelectButtonView_C_UpdateTextData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_CheckRewardRate_ReturnValue) == 0x0000B4, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_CheckRewardRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, K2Node_Select_Default) == 0x0000B8, "Member 'TicketSelectButtonView_C_UpdateTextData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_AddChild_ReturnValue) == 0x0000E0, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000E8, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_FindStackBMasterData_ReturnValue) == 0x0000F0, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000120, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Add_FloatFloat_ReturnValue) == 0x000124, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000128, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_FClamp_ReturnValue) == 0x00012C, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000130, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Conv_FloatToText_ReturnValue) == 0x000138, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000150, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000154, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000158, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTextData, CallFunc_SelectFloat_ReturnValue) == 0x00015C, "Member 'TicketSelectButtonView_C_UpdateTextData::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");

// Function TicketSelectButtonView.TicketSelectButtonView_C.CheckRewardRate
// 0x0178 (0x0178 - 0x0000)
struct TicketSelectButtonView_C_CheckRewardRate final
{
public:
	struct FOwnItemInfo                           InputPin;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBStackBMasterData                    SBStackBMasterData;                                // 0x0118(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                         ReturnValue;                                       // 0x0148(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  CallFunc_ConvertRewardBoostType_ReturnValue;       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D5C[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetStackBSuccessRate_SuccessRateBonus;    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBSuccessRate_ReturnValue;         // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D5D[0x2];                                     // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectButtonView_C_CheckRewardRate) == 0x000008, "Wrong alignment on TicketSelectButtonView_C_CheckRewardRate");
static_assert(sizeof(TicketSelectButtonView_C_CheckRewardRate) == 0x000178, "Wrong size on TicketSelectButtonView_C_CheckRewardRate");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, InputPin) == 0x000000, "Member 'TicketSelectButtonView_C_CheckRewardRate::InputPin' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, SBStackBMasterData) == 0x000118, "Member 'TicketSelectButtonView_C_CheckRewardRate::SBStackBMasterData' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, ReturnValue) == 0x000148, "Member 'TicketSelectButtonView_C_CheckRewardRate::ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_GetStackBNum_ReturnValue) == 0x00014C, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_GetSBPlayerController_ReturnValue) == 0x000150, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_ConvertRewardBoostType_ReturnValue) == 0x000158, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_ConvertRewardBoostType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_IsValid_ReturnValue) == 0x000159, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000160, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_GetStackBSuccessRate_SuccessRateBonus) == 0x000168, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_GetStackBSuccessRate_SuccessRateBonus' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_GetStackBSuccessRate_ReturnValue) == 0x00016C, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_GetStackBSuccessRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_IsValid_ReturnValue_1) == 0x00016D, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectButtonView_C_CheckRewardRate, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000170, "Member 'TicketSelectButtonView_C_CheckRewardRate::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");

// Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTarget
// 0x0118 (0x0118 - 0x0000)
struct TicketSelectButtonView_C_UpdateTarget final
{
public:
	struct FOwnItemInfo                           Param_Target;                                      // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TicketSelectButtonView_C_UpdateTarget) == 0x000008, "Wrong alignment on TicketSelectButtonView_C_UpdateTarget");
static_assert(sizeof(TicketSelectButtonView_C_UpdateTarget) == 0x000118, "Wrong size on TicketSelectButtonView_C_UpdateTarget");
static_assert(offsetof(TicketSelectButtonView_C_UpdateTarget, Param_Target) == 0x000000, "Member 'TicketSelectButtonView_C_UpdateTarget::Param_Target' has a wrong offset!");

}

