#pragma once

 

// Package: UMG_MatchingMenu_Main

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnStartMatchmaking__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature final
{
public:
	TArray<struct FSBMapInfo>                     DungeonMapInfoArray;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bUnlimit;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature) == 0x000018, "Wrong size on UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature, DungeonMapInfoArray) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature::DungeonMapInfoArray' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature, bUnlimit) == 0x000010, "Member 'UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature::bUnlimit' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ExecuteUbergraph_UMG_MatchingMenu_Main
// 0x0138 (0x0138 - 0x0000)
struct UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonSupply                       K2Node_ComponentBoundEvent_DungeonSupply;          // 0x0004(0x0008)(NoDestructor)
	uint8                                         Pad_74D7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D8[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	bool                                          CallFunc_IsRecruitParty_IsEnable;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74D9[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMapInfo>                     K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	EYesNoDialogResult                            K2Node_CustomEvent_Result;                         // 0x0060(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74DA[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74DB[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74DC[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74DD[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBPartyRecruitComponent*               CallFunc_GetPartyRecruitComponent_ReturnValue;     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x00B0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74DE[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_iRetCode;                       // 0x00B4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x00B8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74DF[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	TDelegate<void(bool bWasSuccessful, int32 IRetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_1;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0118(0x0018)()
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main");
static_assert(sizeof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main) == 0x000138, "Wrong size on UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_ComponentBoundEvent_DungeonSupply) == 0x000004, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_ComponentBoundEvent_DungeonSupply' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_Event_Animation) == 0x000010, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_IsRecruitParty_IsEnable) == 0x000048, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_IsRecruitParty_IsEnable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_MakeArray_Array) == 0x000050, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_CustomEvent_Result) == 0x000060, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_GetOwningPlayer_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000070, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_DynamicCast_AsSBPlayer_State) == 0x000078, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000088, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_GetCharacterId_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_GetPartyRecruitComponent_ReturnValue) == 0x0000A8, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_GetPartyRecruitComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_CustomEvent_bWasSuccessful) == 0x0000B0, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_CustomEvent_iRetCode) == 0x0000B4, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_CustomEvent_iRetCode' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_GetSBRetMessage_ReturnValue) == 0x0000B8, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000108, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000118, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000130, "Member 'UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnCancelRecruit
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_Main_C_OnCancelRecruit final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IRetCode;                                          // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_OnCancelRecruit) == 0x000004, "Wrong alignment on UMG_MatchingMenu_Main_C_OnCancelRecruit");
static_assert(sizeof(UMG_MatchingMenu_Main_C_OnCancelRecruit) == 0x000008, "Wrong size on UMG_MatchingMenu_Main_C_OnCancelRecruit");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OnCancelRecruit, bWasSuccessful) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_OnCancelRecruit::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OnCancelRecruit, IRetCode) == 0x000004, "Member 'UMG_MatchingMenu_Main_C_OnCancelRecruit::IRetCode' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel_YesNoDialog
// 0x0001 (0x0001 - 0x0000)
struct UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog) == 0x000001, "Wrong alignment on UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog");
static_assert(sizeof(UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog) == 0x000001, "Wrong size on UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog");
static_assert(offsetof(UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog, Result) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog::Result' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_Main_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Main_C_OnAnimationFinished");
static_assert(sizeof(UMG_MatchingMenu_Main_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_MatchingMenu_Main_C_OnAnimationFinished");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Init
// 0x0248 (0x0248 - 0x0000)
struct UMG_MatchingMenu_Main_C_Init final
{
public:
	class FName                                   InitDungeonId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E1[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDungeonRecordList*                   CallFunc_GetDungeonRecordList_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonRecord                       CallFunc_GetDungeonRecord_OutRecord;               // 0x0020(0x0030)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMapInfo_IsExists;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E3[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetMapInfo_ReturnValue;                   // 0x0068(0x01E0)()
};
static_assert(alignof(UMG_MatchingMenu_Main_C_Init) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Main_C_Init");
static_assert(sizeof(UMG_MatchingMenu_Main_C_Init) == 0x000248, "Wrong size on UMG_MatchingMenu_Main_C_Init");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, InitDungeonId) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_Init::InitDungeonId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetNetworkDataCache_IsValid) == 0x000008, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetDungeonRecordList_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetDungeonRecordList_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetDungeonRecord_OutRecord) == 0x000020, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetDungeonRecord_OutRecord' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetMasterDataManager_IsValid) == 0x000050, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetMapInfo_IsExists) == 0x000060, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetMapInfo_IsExists' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_Init, CallFunc_GetMapInfo_ReturnValue) == 0x000068, "Member 'UMG_MatchingMenu_Main_C_Init::CallFunc_GetMapInfo_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.InAnimation
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_Main_C_InAnimation final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_InAnimation) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Main_C_InAnimation");
static_assert(sizeof(UMG_MatchingMenu_Main_C_InAnimation) == 0x000010, "Wrong size on UMG_MatchingMenu_Main_C_InAnimation");
static_assert(offsetof(UMG_MatchingMenu_Main_C_InAnimation, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_InAnimation::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_InAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Main_C_InAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OutAnimation
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_Main_C_OutAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_OutAnimation) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Main_C_OutAnimation");
static_assert(sizeof(UMG_MatchingMenu_Main_C_OutAnimation) == 0x000010, "Wrong size on UMG_MatchingMenu_Main_C_OutAnimation");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OutAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_OutAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_OutAnimation, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_Main_C_OutAnimation::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.RequestPreLoad
// 0x0028 (0x0028 - 0x0000)
struct UMG_MatchingMenu_Main_C_RequestPreLoad final
{
public:
	TArray<struct FSBMapInfo>                     InDungeonMapInfos;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_74E5[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PreloadMapByLevelName_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_Main_C_RequestPreLoad) == 0x000008, "Wrong alignment on UMG_MatchingMenu_Main_C_RequestPreLoad");
static_assert(sizeof(UMG_MatchingMenu_Main_C_RequestPreLoad) == 0x000028, "Wrong size on UMG_MatchingMenu_Main_C_RequestPreLoad");
static_assert(offsetof(UMG_MatchingMenu_Main_C_RequestPreLoad, InDungeonMapInfos) == 0x000000, "Member 'UMG_MatchingMenu_Main_C_RequestPreLoad::InDungeonMapInfos' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_RequestPreLoad, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_Main_C_RequestPreLoad::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_RequestPreLoad, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000014, "Member 'UMG_MatchingMenu_Main_C_RequestPreLoad::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_RequestPreLoad, CallFunc_Conv_StringToName_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_Main_C_RequestPreLoad::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_Main_C_RequestPreLoad, CallFunc_PreloadMapByLevelName_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_Main_C_RequestPreLoad::CallFunc_PreloadMapByLevelName_ReturnValue' has a wrong offset!");

}

