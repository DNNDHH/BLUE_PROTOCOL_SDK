#pragma once

 

// Package: TicketSelectImagine

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TicketSelectImagine.TicketSelectImagine_C.OnDecide__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct TicketSelectImagine_C_OnDecide__DelegateSignature final
{
public:
	int32                                         Ticket;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectImagine_C_OnDecide__DelegateSignature) == 0x000004, "Wrong alignment on TicketSelectImagine_C_OnDecide__DelegateSignature");
static_assert(sizeof(TicketSelectImagine_C_OnDecide__DelegateSignature) == 0x000004, "Wrong size on TicketSelectImagine_C_OnDecide__DelegateSignature");
static_assert(offsetof(TicketSelectImagine_C_OnDecide__DelegateSignature, Ticket) == 0x000000, "Member 'TicketSelectImagine_C_OnDecide__DelegateSignature::Ticket' has a wrong offset!");

// Function TicketSelectImagine.TicketSelectImagine_C.ExecuteUbergraph_TicketSelectImagine
// 0x00D8 (0x00D8 - 0x0000)
struct TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6D73[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackTokenSelectorListView_C*          CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D74[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 TokenID)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6D75[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0070(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;       // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine) == 0x000008, "Wrong alignment on TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine");
static_assert(sizeof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine) == 0x0000D8, "Wrong size on TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, EntryPoint) == 0x000000, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::EntryPoint' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_Create_ReturnValue) == 0x000018, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_AddChildToCanvas_ReturnValue) == 0x000028, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, K2Node_CustomEvent_TokenId) == 0x000030, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, K2Node_MakeStruct_SlateColor_1) == 0x000070, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_PlayAnimationForward_ReturnValue) == 0x000098, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A8, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000B8, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000C0, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x0000C8, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x0000D0, "Member 'TicketSelectImagine_C_ExecuteUbergraph_TicketSelectImagine::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");

// Function TicketSelectImagine.TicketSelectImagine_C.OnTicketSelected
// 0x0004 (0x0004 - 0x0000)
struct TicketSelectImagine_C_OnTicketSelected final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectImagine_C_OnTicketSelected) == 0x000004, "Wrong alignment on TicketSelectImagine_C_OnTicketSelected");
static_assert(sizeof(TicketSelectImagine_C_OnTicketSelected) == 0x000004, "Wrong size on TicketSelectImagine_C_OnTicketSelected");
static_assert(offsetof(TicketSelectImagine_C_OnTicketSelected, TokenID) == 0x000000, "Member 'TicketSelectImagine_C_OnTicketSelected::TokenID' has a wrong offset!");

// Function TicketSelectImagine.TicketSelectImagine_C.Initialize
// 0x01D0 (0x01D0 - 0x0000)
struct TicketSelectImagine_C_Initialize final
{
public:
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D76[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0008(0x00B0)()
	struct FOwnItemInfo                           CallFunc_BuildAfterStackBImagineData_ReturnValue;  // 0x00B8(0x0118)()
};
static_assert(alignof(TicketSelectImagine_C_Initialize) == 0x000008, "Wrong alignment on TicketSelectImagine_C_Initialize");
static_assert(sizeof(TicketSelectImagine_C_Initialize) == 0x0001D0, "Wrong size on TicketSelectImagine_C_Initialize");
static_assert(offsetof(TicketSelectImagine_C_Initialize, CallFunc_FindImagineMaster_bIsValid) == 0x000000, "Member 'TicketSelectImagine_C_Initialize::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_Initialize, CallFunc_FindImagineMaster_ImagineMaster) == 0x000008, "Member 'TicketSelectImagine_C_Initialize::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_Initialize, CallFunc_BuildAfterStackBImagineData_ReturnValue) == 0x0000B8, "Member 'TicketSelectImagine_C_Initialize::CallFunc_BuildAfterStackBImagineData_ReturnValue' has a wrong offset!");

// Function TicketSelectImagine.TicketSelectImagine_C.UpdateRate
// 0x01C8 (0x01C8 - 0x0000)
struct TicketSelectImagine_C_UpdateRate final
{
public:
	float                                         LocalRewardRatio;                                  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalTicketRatio;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    LocalTicketData;                                   // 0x0008(0x001C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_6D77[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    LocalStackBMaster;                                 // 0x0028(0x0030)(Edit, BlueprintVisible)
	float                                         LocalSuccessRate;                                  // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D78[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0028)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable;                                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D79[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D7A[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D7B[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_1;                              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_2;                              // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D7C[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00C8(0x0018)()
	ESBRewardBoostStackBItemType                  K2Node_Select_Default;                             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D7D[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00E8(0x0028)()
	float                                         CallFunc_GetStackBSuccessRate_SuccessRateBonus;    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBSuccessRate_ReturnValue;         // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D7E[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0118(0x0028)()
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D7F[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D80[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x0158(0x0030)()
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    CallFunc_FindTicketData_ReturnValue;               // 0x0190(0x001C)(ConstParm, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D81[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D82[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectImagine_C_UpdateRate) == 0x000008, "Wrong alignment on TicketSelectImagine_C_UpdateRate");
static_assert(sizeof(TicketSelectImagine_C_UpdateRate) == 0x0001C8, "Wrong size on TicketSelectImagine_C_UpdateRate");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, LocalRewardRatio) == 0x000000, "Member 'TicketSelectImagine_C_UpdateRate::LocalRewardRatio' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, LocalTicketRatio) == 0x000004, "Member 'TicketSelectImagine_C_UpdateRate::LocalTicketRatio' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, LocalTicketData) == 0x000008, "Member 'TicketSelectImagine_C_UpdateRate::LocalTicketData' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, LocalStackBMaster) == 0x000028, "Member 'TicketSelectImagine_C_UpdateRate::LocalStackBMaster' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, LocalSuccessRate) == 0x000058, "Member 'TicketSelectImagine_C_UpdateRate::LocalSuccessRate' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'TicketSelectImagine_C_UpdateRate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000088, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00008C, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000090, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, Temp_byte_Variable) == 0x000094, "Member 'TicketSelectImagine_C_UpdateRate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Add_FloatFloat_ReturnValue) == 0x000098, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00009C, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000A0, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_FClamp_ReturnValue) == 0x0000A4, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0000A8, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, Temp_bool_Variable) == 0x0000A9, "Member 'TicketSelectImagine_C_UpdateRate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_BooleanOR_ReturnValue) == 0x0000AA, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_GetStackBNum_ReturnValue) == 0x0000AC, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_GetSBPlayerController_ReturnValue) == 0x0000B0, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0000B8, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C0, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, Temp_byte_Variable_1) == 0x0000C1, "Member 'TicketSelectImagine_C_UpdateRate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Not_PreBool_ReturnValue) == 0x0000C2, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, Temp_byte_Variable_2) == 0x0000C3, "Member 'TicketSelectImagine_C_UpdateRate::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000C8, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, K2Node_Select_Default) == 0x0000E0, "Member 'TicketSelectImagine_C_UpdateRate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, K2Node_MakeStruct_SlateColor_1) == 0x0000E8, "Member 'TicketSelectImagine_C_UpdateRate::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_GetStackBSuccessRate_SuccessRateBonus) == 0x000110, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_GetStackBSuccessRate_SuccessRateBonus' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_GetStackBSuccessRate_ReturnValue) == 0x000114, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_GetStackBSuccessRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, K2Node_Select_Default_1) == 0x000118, "Member 'TicketSelectImagine_C_UpdateRate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000140, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000148, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_FindStackBMasterData_ReturnValue) == 0x000158, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_GetStackBComponent_ReturnValue) == 0x000188, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_FindTicketData_ReturnValue) == 0x000190, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_FindTicketData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_IsValid_ReturnValue_1) == 0x0001AC, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0001B0, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0001B4, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0001B8, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x0001BC, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectImagine_C_UpdateRate, CallFunc_SelectFloat_ReturnValue) == 0x0001C0, "Member 'TicketSelectImagine_C_UpdateRate::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");

}

