#pragma once

 

// Package: TicketSelectWeapon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function TicketSelectWeapon.TicketSelectWeapon_C.Select__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct TicketSelectWeapon_C_Select__DelegateSignature final
{
public:
	int32                                         Param_UseTokenId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectWeapon_C_Select__DelegateSignature) == 0x000004, "Wrong alignment on TicketSelectWeapon_C_Select__DelegateSignature");
static_assert(sizeof(TicketSelectWeapon_C_Select__DelegateSignature) == 0x000004, "Wrong size on TicketSelectWeapon_C_Select__DelegateSignature");
static_assert(offsetof(TicketSelectWeapon_C_Select__DelegateSignature, Param_UseTokenId) == 0x000000, "Member 'TicketSelectWeapon_C_Select__DelegateSignature::Param_UseTokenId' has a wrong offset!");

// Function TicketSelectWeapon.TicketSelectWeapon_C.ExecuteUbergraph_TicketSelectWeapon
// 0x00B8 (0x00B8 - 0x0000)
struct TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 TokenID)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0050(0x0028)()
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69AC[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackTokenSelectorListView_C*          CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon) == 0x000008, "Wrong alignment on TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon");
static_assert(sizeof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon) == 0x0000B8, "Wrong size on TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, EntryPoint) == 0x000000, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::EntryPoint' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, K2Node_CustomEvent_TokenId) == 0x000024, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, K2Node_MakeStruct_SlateColor_1) == 0x000050, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, CallFunc_PlaySE_ReturnValue) == 0x000078, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, CallFunc_Create_ReturnValue) == 0x000080, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, CallFunc_AddChildToCanvas_ReturnValue) == 0x000088, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, K2Node_CreateDelegate_OutputDelegate_2) == 0x000090, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000A0, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000A8, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000B0, "Member 'TicketSelectWeapon_C_ExecuteUbergraph_TicketSelectWeapon::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

// Function TicketSelectWeapon.TicketSelectWeapon_C.OnSelectToken
// 0x0004 (0x0004 - 0x0000)
struct TicketSelectWeapon_C_OnSelectToken final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectWeapon_C_OnSelectToken) == 0x000004, "Wrong alignment on TicketSelectWeapon_C_OnSelectToken");
static_assert(sizeof(TicketSelectWeapon_C_OnSelectToken) == 0x000004, "Wrong size on TicketSelectWeapon_C_OnSelectToken");
static_assert(offsetof(TicketSelectWeapon_C_OnSelectToken, TokenID) == 0x000000, "Member 'TicketSelectWeapon_C_OnSelectToken::TokenID' has a wrong offset!");

// Function TicketSelectWeapon.TicketSelectWeapon_C.Initialize
// 0x0280 (0x0280 - 0x0000)
struct TicketSelectWeapon_C_Initialize final
{
public:
	struct FOwnItemInfo                           AfterTarget;                                       // 0x0000(0x0118)(Edit, BlueprintVisible)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69AD[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x0130(0x0030)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69AE[0x5];                                     // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BuildAfterStackBWeaponData_ReturnValue;   // 0x0168(0x0118)()
};
static_assert(alignof(TicketSelectWeapon_C_Initialize) == 0x000008, "Wrong alignment on TicketSelectWeapon_C_Initialize");
static_assert(sizeof(TicketSelectWeapon_C_Initialize) == 0x000280, "Wrong size on TicketSelectWeapon_C_Initialize");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, AfterTarget) == 0x000000, "Member 'TicketSelectWeapon_C_Initialize::AfterTarget' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_PlayAnimation_ReturnValue) == 0x000118, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_PlayAnimationForward_ReturnValue) == 0x000120, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000128, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_Not_PreBool_ReturnValue) == 0x000129, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_FindStackBMasterData_ReturnValue) == 0x000130, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000160, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000161, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_BooleanOR_ReturnValue) == 0x000162, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_Initialize, CallFunc_BuildAfterStackBWeaponData_ReturnValue) == 0x000168, "Member 'TicketSelectWeapon_C_Initialize::CallFunc_BuildAfterStackBWeaponData_ReturnValue' has a wrong offset!");

// Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateTokenData
// 0x0078 (0x0078 - 0x0000)
struct TicketSelectWeapon_C_UpdateTokenData final
{
public:
	struct FSBStackBTicketData                    Token;                                             // 0x0000(0x001C)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69AF[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWithinLevel_ReturnValue;                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B0[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B1[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B2[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBStackBComponent*                     CallFunc_GetStackBComponent_ReturnValue;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B3[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBTicketData                    CallFunc_FindTicketData_ReturnValue;               // 0x005C(0x001C)(ConstParm, NoDestructor)
};
static_assert(alignof(TicketSelectWeapon_C_UpdateTokenData) == 0x000008, "Wrong alignment on TicketSelectWeapon_C_UpdateTokenData");
static_assert(sizeof(TicketSelectWeapon_C_UpdateTokenData) == 0x000078, "Wrong size on TicketSelectWeapon_C_UpdateTokenData");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, Token) == 0x000000, "Member 'TicketSelectWeapon_C_UpdateTokenData::Token' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_GetItemLevel_ReturnValue) == 0x000020, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000024, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000028, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_IsWithinLevel_ReturnValue) == 0x00002C, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_IsWithinLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000030, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_SelectFloat_ReturnValue) == 0x000034, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_GetTokenAmount_ReturnValue) == 0x000038, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00003D, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00003E, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000040, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_IsValid_ReturnValue) == 0x000049, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_GetStackBComponent_ReturnValue) == 0x000050, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_GetStackBComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateTokenData, CallFunc_FindTicketData_ReturnValue) == 0x00005C, "Member 'TicketSelectWeapon_C_UpdateTokenData::CallFunc_FindTicketData_ReturnValue' has a wrong offset!");

// Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateSuccessRatio
// 0x00C0 (0x00C0 - 0x0000)
struct TicketSelectWeapon_C_UpdateSuccessRatio final
{
public:
	float                                         LocalAddRatio;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B5[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_UpdateRewardRatio_AddRatio;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69B6[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0068(0x0028)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69B7[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00A8(0x0018)()
};
static_assert(alignof(TicketSelectWeapon_C_UpdateSuccessRatio) == 0x000008, "Wrong alignment on TicketSelectWeapon_C_UpdateSuccessRatio");
static_assert(sizeof(TicketSelectWeapon_C_UpdateSuccessRatio) == 0x0000C0, "Wrong size on TicketSelectWeapon_C_UpdateSuccessRatio");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, LocalAddRatio) == 0x000000, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::LocalAddRatio' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, Temp_bool_Variable) == 0x000004, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000030, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000031, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_BooleanOR_ReturnValue) == 0x000032, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000034, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_UpdateRewardRatio_AddRatio) == 0x000038, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_UpdateRewardRatio_AddRatio' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, K2Node_Select_Default) == 0x000068, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000090, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000094, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Add_FloatFloat_ReturnValue) == 0x000098, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00009C, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_FClamp_ReturnValue) == 0x0000A0, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateSuccessRatio, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000A8, "Member 'TicketSelectWeapon_C_UpdateSuccessRatio::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function TicketSelectWeapon.TicketSelectWeapon_C.UpdateRewardRatio
// 0x0030 (0x0030 - 0x0000)
struct TicketSelectWeapon_C_UpdateRewardRatio final
{
public:
	float                                         AddRatio;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  CallFunc_ConvertRewardBoostType_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B8[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69B9[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetStackBSuccessRate_SuccessRateBonus;    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStackBSuccessRate_ReturnValue;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69BA[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TicketSelectWeapon_C_UpdateRewardRatio) == 0x000008, "Wrong alignment on TicketSelectWeapon_C_UpdateRewardRatio");
static_assert(sizeof(TicketSelectWeapon_C_UpdateRewardRatio) == 0x000030, "Wrong size on TicketSelectWeapon_C_UpdateRewardRatio");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, AddRatio) == 0x000000, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::AddRatio' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_GetStackBNum_ReturnValue) == 0x000004, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_ConvertRewardBoostType_ReturnValue) == 0x000010, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_ConvertRewardBoostType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000018, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_GetStackBSuccessRate_SuccessRateBonus) == 0x000024, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_GetStackBSuccessRate_SuccessRateBonus' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_GetStackBSuccessRate_ReturnValue) == 0x000028, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_GetStackBSuccessRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSelectWeapon_C_UpdateRewardRatio, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00002C, "Member 'TicketSelectWeapon_C_UpdateRewardRatio::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");

}

