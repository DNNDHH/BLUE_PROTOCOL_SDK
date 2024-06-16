#pragma once

 

// Package: UMG_ShopAdventurerRank_Rankup

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_ShopAdventurerRank_Rankup.UMG_ShopAdventurerRank_Rankup_C.OnClose__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ShopAdventurerRank_Rankup_C_OnClose__DelegateSignature final
{
public:
	bool                                          IsSuccess;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ShopAdventurerRank_Rankup_C_OnClose__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ShopAdventurerRank_Rankup_C_OnClose__DelegateSignature");
static_assert(sizeof(UMG_ShopAdventurerRank_Rankup_C_OnClose__DelegateSignature) == 0x000001, "Wrong size on UMG_ShopAdventurerRank_Rankup_C_OnClose__DelegateSignature");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_OnClose__DelegateSignature, IsSuccess) == 0x000000, "Member 'UMG_ShopAdventurerRank_Rankup_C_OnClose__DelegateSignature::IsSuccess' has a wrong offset!");

// Function UMG_ShopAdventurerRank_Rankup.UMG_ShopAdventurerRank_Rankup_C.ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup
// 0x0160 (0x0160 - 0x0000)
struct UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141F[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0040(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_2;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1420[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1421[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1422[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1423[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00D0(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1424[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00F8(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0110(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0138(0x0028)()
};
static_assert(alignof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup) == 0x000008, "Wrong alignment on UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup");
static_assert(sizeof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup) == 0x000160, "Wrong size on UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, EntryPoint) == 0x000000, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000010, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_DynamicCast_AsSBPlayer_State) == 0x000018, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000028, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_CustomEvent_InRetCode) == 0x000034, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x000038, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_GetSBRetMessage_ReturnValue) == 0x000040, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_DynamicCast_AsSBPlayer_State_2) == 0x000068, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_DynamicCast_AsSBPlayer_State_2' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_DynamicCast_bSuccess_2) == 0x000070, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000071, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_BooleanOR_ReturnValue) == 0x0000B8, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_Not_PreBool_ReturnValue) == 0x0000B9, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C0, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_GetAdventurerRank_ReturnValue) == 0x0000C8, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_Conv_IntToText_ReturnValue) == 0x0000D0, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000E8, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000F0, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F8, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_MakeStruct_SlateColor) == 0x000110, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup, K2Node_MakeStruct_SlateColor_1) == 0x000138, "Member 'UMG_ShopAdventurerRank_Rankup_C_ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function UMG_ShopAdventurerRank_Rankup.UMG_ShopAdventurerRank_Rankup_C.OnAdventurerRankDelegate
// 0x0004 (0x0004 - 0x0000)
struct UMG_ShopAdventurerRank_Rankup_C_OnAdventurerRankDelegate final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ShopAdventurerRank_Rankup_C_OnAdventurerRankDelegate) == 0x000004, "Wrong alignment on UMG_ShopAdventurerRank_Rankup_C_OnAdventurerRankDelegate");
static_assert(sizeof(UMG_ShopAdventurerRank_Rankup_C_OnAdventurerRankDelegate) == 0x000004, "Wrong size on UMG_ShopAdventurerRank_Rankup_C_OnAdventurerRankDelegate");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_OnAdventurerRankDelegate, InRetCode) == 0x000000, "Member 'UMG_ShopAdventurerRank_Rankup_C_OnAdventurerRankDelegate::InRetCode' has a wrong offset!");

// Function UMG_ShopAdventurerRank_Rankup.UMG_ShopAdventurerRank_Rankup_C.UpdateInfo
// 0x0020 (0x0020 - 0x0000)
struct UMG_ShopAdventurerRank_Rankup_C_UpdateInfo final
{
public:
	int32                                         CraftRecepiNum;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ImagineRecepiNum;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TmpText;                                           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ShopAdventurerRank_Rankup_C_UpdateInfo) == 0x000008, "Wrong alignment on UMG_ShopAdventurerRank_Rankup_C_UpdateInfo");
static_assert(sizeof(UMG_ShopAdventurerRank_Rankup_C_UpdateInfo) == 0x000020, "Wrong size on UMG_ShopAdventurerRank_Rankup_C_UpdateInfo");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_UpdateInfo, CraftRecepiNum) == 0x000000, "Member 'UMG_ShopAdventurerRank_Rankup_C_UpdateInfo::CraftRecepiNum' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_UpdateInfo, ImagineRecepiNum) == 0x000004, "Member 'UMG_ShopAdventurerRank_Rankup_C_UpdateInfo::ImagineRecepiNum' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_UpdateInfo, TmpText) == 0x000008, "Member 'UMG_ShopAdventurerRank_Rankup_C_UpdateInfo::TmpText' has a wrong offset!");
static_assert(offsetof(UMG_ShopAdventurerRank_Rankup_C_UpdateInfo, CallFunc_GetAdventurerRank_ReturnValue) == 0x000018, "Member 'UMG_ShopAdventurerRank_Rankup_C_UpdateInfo::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");

}

