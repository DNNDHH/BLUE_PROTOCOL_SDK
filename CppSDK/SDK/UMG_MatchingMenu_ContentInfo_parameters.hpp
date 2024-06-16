#pragma once

 

// Package: UMG_MatchingMenu_ContentInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickRewardIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_OnClickRewardIcon__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.ExecuteUbergraph_UMG_MatchingMenu_ContentInfo
// 0x0018 (0x0018 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDungeonSupply                       K2Node_ComponentBoundEvent_DungeonSupply;          // 0x0004(0x0008)(NoDestructor)
	uint8                                         Pad_88B5[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_ComponentBoundEvent_Sender;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo) == 0x000018, "Wrong size on UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo, K2Node_ComponentBoundEvent_DungeonSupply) == 0x000004, "Member 'UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo::K2Node_ComponentBoundEvent_DungeonSupply' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo, K2Node_ComponentBoundEvent_Sender) == 0x000010, "Member 'UMG_MatchingMenu_ContentInfo_C_ExecuteUbergraph_UMG_MatchingMenu_ContentInfo::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature, DungeonSupply) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature::DungeonSupply' has a wrong offset!");

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature, Sender) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetDungeonInfo
// 0x01E8 (0x01E8 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo final
{
public:
	struct FSBMapInfo                             DungeonMapInfo;                                    // 0x0000(0x01E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo) == 0x0001E8, "Wrong size on UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo, DungeonMapInfo) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo::DungeonMapInfo' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo, CallFunc_NotEqual_NameName_ReturnValue) == 0x0001E0, "Member 'UMG_MatchingMenu_ContentInfo_C_SetDungeonInfo::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetBestScore
// 0x0014 (0x0014 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_SetBestScore final
{
public:
	int32                                         Record;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClearCount;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88B6[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MapId;                                             // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_SetBestScore) == 0x000004, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_SetBestScore");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_SetBestScore) == 0x000014, "Wrong size on UMG_MatchingMenu_ContentInfo_C_SetBestScore");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetBestScore, Record) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_SetBestScore::Record' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetBestScore, ClearCount) == 0x000004, "Member 'UMG_MatchingMenu_ContentInfo_C_SetBestScore::ClearCount' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetBestScore, ClassType) == 0x000008, "Member 'UMG_MatchingMenu_ContentInfo_C_SetBestScore::ClassType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetBestScore, MapId) == 0x00000C, "Member 'UMG_MatchingMenu_ContentInfo_C_SetBestScore::MapId' has a wrong offset!");

// Function UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C.SetTerm
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_ContentInfo_C_SetTerm final
{
public:
	class FName                                   EventTerm;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88B7[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88B8[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventScheduler*                      CallFunc_GetEventScheduler_ReturnValue;            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_ContentInfo_C_SetTerm) == 0x000008, "Wrong alignment on UMG_MatchingMenu_ContentInfo_C_SetTerm");
static_assert(sizeof(UMG_MatchingMenu_ContentInfo_C_SetTerm) == 0x000048, "Wrong size on UMG_MatchingMenu_ContentInfo_C_SetTerm");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, EventTerm) == 0x000000, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::EventTerm' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, Temp_bool_Variable) == 0x000008, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, Temp_byte_Variable) == 0x000009, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, Temp_byte_Variable_1) == 0x00000A, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, K2Node_Select_Default) == 0x000021, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, CallFunc_GetSBGameInstance_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, CallFunc_GetEventScheduler_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::CallFunc_GetEventScheduler_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime) == 0x000038, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_ContentInfo_C_SetTerm, CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue) == 0x000040, "Member 'UMG_MatchingMenu_ContentInfo_C_SetTerm::CallFunc_GetEventTermNextOffLabelDataTimeToNowTime_ReturnValue' has a wrong offset!");

}

