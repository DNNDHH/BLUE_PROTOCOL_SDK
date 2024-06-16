#pragma once

 

// Package: NpcNamePlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function NpcNamePlate.NpcNamePlate_C.ExecuteUbergraph_NpcNamePlate
// 0x0618 (0x0618 - 0x0000)
struct NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EDF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EE0[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FUnlockedQuestInfo>             K2Node_CustomEvent_QuestList;                      // 0x0020(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsCursorMode_ReturnValue;                 // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EE1[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_3;                       // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       K2Node_CustomEvent_ErrorCode;                      // 0x004A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EE2[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x004C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_AcceptedQuestInfo;              // 0x0050(0x0060)(ConstParm)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_2;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EE3[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_QuestIndex_1;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EE4[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     K2Node_CustomEvent_PrevAcceptedQuestInfo;          // 0x00D0(0x0060)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_QuestIndex;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCompleteResult                          K2Node_CustomEvent_CompleteResult;                 // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EE5[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailRewardData                      K2Node_CustomEvent_MailRewardData;                 // 0x0140(0x0180)(ConstParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EE6[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EE7[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBQuestComponent*                      CallFunc_GetQuestComponent_ReturnValue_1;          // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EE8[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, int32 QuestIndex, EQuestCompleteResult CompleteResult, struct FSBMailRewardData& MailRewardData)> K2Node_CreateDelegate_OutputDelegate;              // 0x02F4(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EE9[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bVsiible)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0308(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EEA[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBMobCharacter*                        K2Node_CustomEvent_NPCCharacter;                   // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x0328(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EEB[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventurerComponent*           CallFunc_GetAdventurerComponent_PlayerAdventurerComponent; // 0x0330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventurerComponent*           CallFunc_GetAdventurerComponent_PlayerAdventurerComponent_1; // 0x0338(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0341(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EEC[0x2];                                     // 0x0342(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode, struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0344(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0354(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0364(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EED[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue;             // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InPrevLevel;                    // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InCurLevel;                     // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBExtraExpParse                       K2Node_CustomEvent_InExtraExpParse;                // 0x0388(0x0018)(ConstParm, NoDestructor)
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue_1;           // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InPrevLevel, int32 InCurLevel, struct FSBExtraExpParse& InExtraExpParse)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x03A8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x03B8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsExpiredStickerWeapons;     // 0x03BC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EEE[0x3];                                     // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds; // 0x03C0(0x0010)(ConstParm, ReferenceParm)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InDirtyExpiredEquipmentData;    // 0x03D0(0x0130)(ConstParm)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_6;            // 0x0500(0x0010)(ZeroConstructor, NoDestructor)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0519(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x051A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x051B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x051C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBFacilityType                               K2Node_CustomEvent_IconType;                       // 0x051D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x051E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EEF[0x1];                                     // 0x051F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_7;            // 0x0520(0x0010)(ZeroConstructor, NoDestructor)
	class ASBMobCharacter*                        K2Node_Event_InNpcCharacter;                       // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bVsiible;                       // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EF0[0x6];                                     // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BalloonComponent_C*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0540(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EF1[0x3];                                     // 0x0549(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_InDepth;                              // 0x054C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0551(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EF2[0x6];                                     // 0x0552(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue;            // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0561(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EF3[0x2];                                     // 0x0562(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0564(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, int32 QuestIndex)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0578(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_BalloonComponent_C*                 CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0588(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EF4[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0594(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bInVisibility;                        // 0x05A4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EF5[0x3];                                     // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_InScreenPositionOffset;               // 0x05A8(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x05B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EF6[0x3];                                     // 0x05B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, EAcceptedQuestErrorCode ErrorCode, int32 RetCode, struct FAcceptedQuestInfo& AcceptedQuestInfo)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x05BC(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x05CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EF7[0x3];                                     // 0x05CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0x05D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EF8[0x4];                                     // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFadeIn;                       // 0x05E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EF9[0x3];                                     // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsFadeIn)>                K2Node_CreateDelegate_OutputDelegate_11;           // 0x05E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9EFA[0x4];                                     // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<struct FUnlockedQuestInfo>& QuestList)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x0600(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate) == 0x000008, "Wrong alignment on NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate");
static_assert(sizeof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate) == 0x000618, "Wrong size on NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, EntryPoint) == 0x000000, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::EntryPoint' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_QuestList) == 0x000020, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_QuestList' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsCursorMode_ReturnValue) == 0x000030, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsCursorMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetPlayerController_ReturnValue_1) == 0x000038, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000040, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_Result_3) == 0x000049, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_ErrorCode) == 0x00004A, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_RetCode_2) == 0x00004C, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_AcceptedQuestInfo) == 0x000050, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x0000B0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetQuestComponent_ReturnValue) == 0x0000B8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_Result_2) == 0x0000C0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_QuestIndex_1) == 0x0000C4, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_QuestIndex_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_Result_1) == 0x0000C8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_RetCode_1) == 0x0000CC, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_PrevAcceptedQuestInfo) == 0x0000D0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_PrevAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_RetCode) == 0x000130, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_QuestIndex) == 0x000134, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_QuestIndex' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_CompleteResult) == 0x000138, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_CompleteResult' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_MailRewardData) == 0x000140, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_MailRewardData' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetPlayerController_ReturnValue_2) == 0x0002C0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsServer_ReturnValue) == 0x0002C8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0002D0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_DynamicCast_bSuccess_2) == 0x0002D8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x0002E0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetQuestComponent_ReturnValue_1) == 0x0002E8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsDedicatedServer_ReturnValue) == 0x0002F0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate) == 0x0002F4, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, Temp_byte_Variable) == 0x000304, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_1) == 0x000308, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, Temp_bool_Variable) == 0x000318, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_NPCCharacter) == 0x000320, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_NPCCharacter' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InRetCode_1) == 0x000328, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetAdventurerComponent_PlayerAdventurerComponent) == 0x000330, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetAdventurerComponent_PlayerAdventurerComponent' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetAdventurerComponent_PlayerAdventurerComponent_1) == 0x000338, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetAdventurerComponent_PlayerAdventurerComponent_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue) == 0x000340, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_1) == 0x000341, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_2) == 0x000344, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_3) == 0x000354, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_4) == 0x000364, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_Result) == 0x000374, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetCharacterData_ReturnValue) == 0x000378, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InPrevLevel) == 0x000380, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InPrevLevel' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InCurLevel) == 0x000384, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InCurLevel' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InExtraExpParse) == 0x000388, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InExtraExpParse' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetCharacterData_ReturnValue_1) == 0x0003A0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetCharacterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_5) == 0x0003A8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InRetCode) == 0x0003B8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_bInIsExpiredStickerWeapons) == 0x0003BC, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds) == 0x0003C0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InDirtyExpiredEquipmentData) == 0x0003D0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InDirtyExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_6) == 0x000500, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000510, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_InUIType) == 0x000518, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_bInVisibility) == 0x000519, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_bInInstantly) == 0x00051A, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x00051B, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00051C, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_IconType) == 0x00051D, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_IconType' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00051E, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_7) == 0x000520, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_Event_InNpcCharacter) == 0x000530, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_Event_InNpcCharacter' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_bVsiible) == 0x000538, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_bVsiible' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_2) == 0x000539, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetComponentByClass_ReturnValue) == 0x000540, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_3) == 0x000548, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_Event_InDepth) == 0x00054C, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_Event_InDepth' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_4) == 0x000550, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_5) == 0x000551, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetEffectMaterial_ReturnValue) == 0x000558, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetEffectMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_6) == 0x000560, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_7) == 0x000561, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000564, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_PlayAnimation_ReturnValue) == 0x000568, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000570, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_8) == 0x000578, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000588, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_8) == 0x000590, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_9) == 0x000594, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_Event_bInVisibility) == 0x0005A4, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_Event_bInVisibility' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_Event_InScreenPositionOffset) == 0x0005A8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_Event_InScreenPositionOffset' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetVisibility_ReturnValue) == 0x0005B8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_10) == 0x0005BC, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_Select_Default) == 0x0005CC, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_GetAnimationCurrentTime_ReturnValue_1) == 0x0005D0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_GetAnimationCurrentTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_PlayAnimation_ReturnValue_1) == 0x0005D8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CustomEvent_IsFadeIn) == 0x0005E0, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CustomEvent_IsFadeIn' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_11) == 0x0005E4, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_PlayAnimationForward_ReturnValue) == 0x0005F8, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, K2Node_CreateDelegate_OutputDelegate_12) == 0x000600, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate, CallFunc_IsValid_ReturnValue_9) == 0x000610, "Member 'NpcNamePlate_C_ExecuteUbergraph_NpcNamePlate::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.FadeOutFinishSelectCursor
// 0x0001 (0x0001 - 0x0000)
struct NpcNamePlate_C_FadeOutFinishSelectCursor final
{
public:
	bool                                          IsFadeIn;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_FadeOutFinishSelectCursor) == 0x000001, "Wrong alignment on NpcNamePlate_C_FadeOutFinishSelectCursor");
static_assert(sizeof(NpcNamePlate_C_FadeOutFinishSelectCursor) == 0x000001, "Wrong size on NpcNamePlate_C_FadeOutFinishSelectCursor");
static_assert(offsetof(NpcNamePlate_C_FadeOutFinishSelectCursor, IsFadeIn) == 0x000000, "Member 'NpcNamePlate_C_FadeOutFinishSelectCursor::IsFadeIn' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.SetScreenPositionOffset
// 0x0010 (0x0010 - 0x0000)
struct NpcNamePlate_C_SetScreenPositionOffset final
{
public:
	struct FLinearColor                           InScreenPositionOffset;                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_SetScreenPositionOffset) == 0x000004, "Wrong alignment on NpcNamePlate_C_SetScreenPositionOffset");
static_assert(sizeof(NpcNamePlate_C_SetScreenPositionOffset) == 0x000010, "Wrong size on NpcNamePlate_C_SetScreenPositionOffset");
static_assert(offsetof(NpcNamePlate_C_SetScreenPositionOffset, InScreenPositionOffset) == 0x000000, "Member 'NpcNamePlate_C_SetScreenPositionOffset::InScreenPositionOffset' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.SetInteractionTargetVisibility
// 0x0001 (0x0001 - 0x0000)
struct NpcNamePlate_C_SetInteractionTargetVisibility final
{
public:
	bool                                          bInVisibility;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_SetInteractionTargetVisibility) == 0x000001, "Wrong alignment on NpcNamePlate_C_SetInteractionTargetVisibility");
static_assert(sizeof(NpcNamePlate_C_SetInteractionTargetVisibility) == 0x000001, "Wrong size on NpcNamePlate_C_SetInteractionTargetVisibility");
static_assert(offsetof(NpcNamePlate_C_SetInteractionTargetVisibility, bInVisibility) == 0x000000, "Member 'NpcNamePlate_C_SetInteractionTargetVisibility::bInVisibility' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.SetDepth
// 0x0004 (0x0004 - 0x0000)
struct NpcNamePlate_C_SetDepth final
{
public:
	float                                         InDepth;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_SetDepth) == 0x000004, "Wrong alignment on NpcNamePlate_C_SetDepth");
static_assert(sizeof(NpcNamePlate_C_SetDepth) == 0x000004, "Wrong size on NpcNamePlate_C_SetDepth");
static_assert(offsetof(NpcNamePlate_C_SetDepth, InDepth) == 0x000000, "Member 'NpcNamePlate_C_SetDepth::InDepth' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnChangeBalloonVisible
// 0x0001 (0x0001 - 0x0000)
struct NpcNamePlate_C_OnChangeBalloonVisible final
{
public:
	bool                                          bVsiible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_OnChangeBalloonVisible) == 0x000001, "Wrong alignment on NpcNamePlate_C_OnChangeBalloonVisible");
static_assert(sizeof(NpcNamePlate_C_OnChangeBalloonVisible) == 0x000001, "Wrong size on NpcNamePlate_C_OnChangeBalloonVisible");
static_assert(offsetof(NpcNamePlate_C_OnChangeBalloonVisible, bVsiible) == 0x000000, "Member 'NpcNamePlate_C_OnChangeBalloonVisible::bVsiible' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.SetNpcCharacter_Internal
// 0x0008 (0x0008 - 0x0000)
struct NpcNamePlate_C_SetNpcCharacter_Internal final
{
public:
	class ASBMobCharacter*                        InNpcCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_SetNpcCharacter_Internal) == 0x000008, "Wrong alignment on NpcNamePlate_C_SetNpcCharacter_Internal");
static_assert(sizeof(NpcNamePlate_C_SetNpcCharacter_Internal) == 0x000008, "Wrong size on NpcNamePlate_C_SetNpcCharacter_Internal");
static_assert(offsetof(NpcNamePlate_C_SetNpcCharacter_Internal, InNpcCharacter) == 0x000000, "Member 'NpcNamePlate_C_SetNpcCharacter_Internal::InNpcCharacter' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.SetNPCFacility
// 0x0001 (0x0001 - 0x0000)
struct NpcNamePlate_C_SetNPCFacility final
{
public:
	ESBFacilityType                               IconType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_SetNPCFacility) == 0x000001, "Wrong alignment on NpcNamePlate_C_SetNPCFacility");
static_assert(sizeof(NpcNamePlate_C_SetNPCFacility) == 0x000001, "Wrong size on NpcNamePlate_C_SetNPCFacility");
static_assert(offsetof(NpcNamePlate_C_SetNPCFacility, IconType) == 0x000000, "Member 'NpcNamePlate_C_SetNPCFacility::IconType' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'NpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.ClassChangeNotify_Event
// 0x0148 (0x0148 - 0x0000)
struct NpcNamePlate_C_ClassChangeNotify_Event final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsExpiredStickerWeapons;                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EFB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBExpiredEquipmentData                InDirtyExpiredEquipmentData;                       // 0x0018(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NpcNamePlate_C_ClassChangeNotify_Event) == 0x000008, "Wrong alignment on NpcNamePlate_C_ClassChangeNotify_Event");
static_assert(sizeof(NpcNamePlate_C_ClassChangeNotify_Event) == 0x000148, "Wrong size on NpcNamePlate_C_ClassChangeNotify_Event");
static_assert(offsetof(NpcNamePlate_C_ClassChangeNotify_Event, InRetCode) == 0x000000, "Member 'NpcNamePlate_C_ClassChangeNotify_Event::InRetCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ClassChangeNotify_Event, bInIsExpiredStickerWeapons) == 0x000004, "Member 'NpcNamePlate_C_ClassChangeNotify_Event::bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ClassChangeNotify_Event, InExpiredStickerWeaponUniqueIds) == 0x000008, "Member 'NpcNamePlate_C_ClassChangeNotify_Event::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_ClassChangeNotify_Event, InDirtyExpiredEquipmentData) == 0x000018, "Member 'NpcNamePlate_C_ClassChangeNotify_Event::InDirtyExpiredEquipmentData' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnLevelUp_Event
// 0x0020 (0x0020 - 0x0000)
struct NpcNamePlate_C_OnLevelUp_Event final
{
public:
	int32                                         InPrevLevel;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InCurLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBExtraExpParse                       InExtraExpParse;                                   // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_OnLevelUp_Event) == 0x000004, "Wrong alignment on NpcNamePlate_C_OnLevelUp_Event");
static_assert(sizeof(NpcNamePlate_C_OnLevelUp_Event) == 0x000020, "Wrong size on NpcNamePlate_C_OnLevelUp_Event");
static_assert(offsetof(NpcNamePlate_C_OnLevelUp_Event, InPrevLevel) == 0x000000, "Member 'NpcNamePlate_C_OnLevelUp_Event::InPrevLevel' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnLevelUp_Event, InCurLevel) == 0x000004, "Member 'NpcNamePlate_C_OnLevelUp_Event::InCurLevel' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnLevelUp_Event, InExtraExpParse) == 0x000008, "Member 'NpcNamePlate_C_OnLevelUp_Event::InExtraExpParse' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnSetKeyValue_Event
// 0x0001 (0x0001 - 0x0000)
struct NpcNamePlate_C_OnSetKeyValue_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_OnSetKeyValue_Event) == 0x000001, "Wrong alignment on NpcNamePlate_C_OnSetKeyValue_Event");
static_assert(sizeof(NpcNamePlate_C_OnSetKeyValue_Event) == 0x000001, "Wrong size on NpcNamePlate_C_OnSetKeyValue_Event");
static_assert(offsetof(NpcNamePlate_C_OnSetKeyValue_Event, Result) == 0x000000, "Member 'NpcNamePlate_C_OnSetKeyValue_Event::Result' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnAdventurerRankDelegate_Event_0
// 0x0004 (0x0004 - 0x0000)
struct NpcNamePlate_C_OnAdventurerRankDelegate_Event_0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_OnAdventurerRankDelegate_Event_0) == 0x000004, "Wrong alignment on NpcNamePlate_C_OnAdventurerRankDelegate_Event_0");
static_assert(sizeof(NpcNamePlate_C_OnAdventurerRankDelegate_Event_0) == 0x000004, "Wrong size on NpcNamePlate_C_OnAdventurerRankDelegate_Event_0");
static_assert(offsetof(NpcNamePlate_C_OnAdventurerRankDelegate_Event_0, InRetCode) == 0x000000, "Member 'NpcNamePlate_C_OnAdventurerRankDelegate_Event_0::InRetCode' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnBeginPlay
// 0x0008 (0x0008 - 0x0000)
struct NpcNamePlate_C_OnBeginPlay final
{
public:
	class ASBMobCharacter*                        Param_NpcCharacter;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_OnBeginPlay) == 0x000008, "Wrong alignment on NpcNamePlate_C_OnBeginPlay");
static_assert(sizeof(NpcNamePlate_C_OnBeginPlay) == 0x000008, "Wrong size on NpcNamePlate_C_OnBeginPlay");
static_assert(offsetof(NpcNamePlate_C_OnBeginPlay, Param_NpcCharacter) == 0x000000, "Member 'NpcNamePlate_C_OnBeginPlay::Param_NpcCharacter' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnCompleteQuestDelegate_����_2
// 0x0190 (0x0190 - 0x0000)
struct NpcNamePlate_C_OnCompleteQuestDelegate______2 final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestCompleteResult                          CompleteResult;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EFC[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMailRewardData                      MailRewardData;                                    // 0x0010(0x0180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NpcNamePlate_C_OnCompleteQuestDelegate______2) == 0x000008, "Wrong alignment on NpcNamePlate_C_OnCompleteQuestDelegate______2");
static_assert(sizeof(NpcNamePlate_C_OnCompleteQuestDelegate______2) == 0x000190, "Wrong size on NpcNamePlate_C_OnCompleteQuestDelegate______2");
static_assert(offsetof(NpcNamePlate_C_OnCompleteQuestDelegate______2, RetCode) == 0x000000, "Member 'NpcNamePlate_C_OnCompleteQuestDelegate______2::RetCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnCompleteQuestDelegate______2, QuestIndex) == 0x000004, "Member 'NpcNamePlate_C_OnCompleteQuestDelegate______2::QuestIndex' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnCompleteQuestDelegate______2, CompleteResult) == 0x000008, "Member 'NpcNamePlate_C_OnCompleteQuestDelegate______2::CompleteResult' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnCompleteQuestDelegate______2, MailRewardData) == 0x000010, "Member 'NpcNamePlate_C_OnCompleteQuestDelegate______2::MailRewardData' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnUpdateQuestProgressDelegate_����_0
// 0x0068 (0x0068 - 0x0000)
struct NpcNamePlate_C_OnUpdateQuestProgressDelegate______0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EFD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     PrevAcceptedQuestInfo;                             // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NpcNamePlate_C_OnUpdateQuestProgressDelegate______0) == 0x000008, "Wrong alignment on NpcNamePlate_C_OnUpdateQuestProgressDelegate______0");
static_assert(sizeof(NpcNamePlate_C_OnUpdateQuestProgressDelegate______0) == 0x000068, "Wrong size on NpcNamePlate_C_OnUpdateQuestProgressDelegate______0");
static_assert(offsetof(NpcNamePlate_C_OnUpdateQuestProgressDelegate______0, Result) == 0x000000, "Member 'NpcNamePlate_C_OnUpdateQuestProgressDelegate______0::Result' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnUpdateQuestProgressDelegate______0, RetCode) == 0x000004, "Member 'NpcNamePlate_C_OnUpdateQuestProgressDelegate______0::RetCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnUpdateQuestProgressDelegate______0, PrevAcceptedQuestInfo) == 0x000008, "Member 'NpcNamePlate_C_OnUpdateQuestProgressDelegate______0::PrevAcceptedQuestInfo' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnCancelQuestDelegate_����_0
// 0x0008 (0x0008 - 0x0000)
struct NpcNamePlate_C_OnCancelQuestDelegate______0 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EFE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         QuestIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_OnCancelQuestDelegate______0) == 0x000004, "Wrong alignment on NpcNamePlate_C_OnCancelQuestDelegate______0");
static_assert(sizeof(NpcNamePlate_C_OnCancelQuestDelegate______0) == 0x000008, "Wrong size on NpcNamePlate_C_OnCancelQuestDelegate______0");
static_assert(offsetof(NpcNamePlate_C_OnCancelQuestDelegate______0, Result) == 0x000000, "Member 'NpcNamePlate_C_OnCancelQuestDelegate______0::Result' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnCancelQuestDelegate______0, QuestIndex) == 0x000004, "Member 'NpcNamePlate_C_OnCancelQuestDelegate______0::QuestIndex' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnAcceptQuestDelegate_Reset
// 0x0068 (0x0068 - 0x0000)
struct NpcNamePlate_C_OnAcceptQuestDelegate_Reset final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EAcceptedQuestErrorCode                       ErrorCode;                                         // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EFF[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     AcceptedQuestInfo;                                 // 0x0008(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NpcNamePlate_C_OnAcceptQuestDelegate_Reset) == 0x000008, "Wrong alignment on NpcNamePlate_C_OnAcceptQuestDelegate_Reset");
static_assert(sizeof(NpcNamePlate_C_OnAcceptQuestDelegate_Reset) == 0x000068, "Wrong size on NpcNamePlate_C_OnAcceptQuestDelegate_Reset");
static_assert(offsetof(NpcNamePlate_C_OnAcceptQuestDelegate_Reset, Result) == 0x000000, "Member 'NpcNamePlate_C_OnAcceptQuestDelegate_Reset::Result' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnAcceptQuestDelegate_Reset, ErrorCode) == 0x000001, "Member 'NpcNamePlate_C_OnAcceptQuestDelegate_Reset::ErrorCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnAcceptQuestDelegate_Reset, RetCode) == 0x000004, "Member 'NpcNamePlate_C_OnAcceptQuestDelegate_Reset::RetCode' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_OnAcceptQuestDelegate_Reset, AcceptedQuestInfo) == 0x000008, "Member 'NpcNamePlate_C_OnAcceptQuestDelegate_Reset::AcceptedQuestInfo' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.OnQuestListDelegete_Reset
// 0x0010 (0x0010 - 0x0000)
struct NpcNamePlate_C_OnQuestListDelegete_Reset final
{
public:
	TArray<struct FUnlockedQuestInfo>             QuestList;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(NpcNamePlate_C_OnQuestListDelegete_Reset) == 0x000008, "Wrong alignment on NpcNamePlate_C_OnQuestListDelegete_Reset");
static_assert(sizeof(NpcNamePlate_C_OnQuestListDelegete_Reset) == 0x000010, "Wrong size on NpcNamePlate_C_OnQuestListDelegete_Reset");
static_assert(offsetof(NpcNamePlate_C_OnQuestListDelegete_Reset, QuestList) == 0x000000, "Member 'NpcNamePlate_C_OnQuestListDelegete_Reset::QuestList' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct NpcNamePlate_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NpcNamePlate_C_SetText) == 0x000008, "Wrong alignment on NpcNamePlate_C_SetText");
static_assert(sizeof(NpcNamePlate_C_SetText) == 0x000018, "Wrong size on NpcNamePlate_C_SetText");
static_assert(offsetof(NpcNamePlate_C_SetText, InText) == 0x000000, "Member 'NpcNamePlate_C_SetText::InText' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.UpdateQuest
// 0x0048 (0x0048 - 0x0000)
struct NpcNamePlate_C_UpdateQuest final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestIconType                                NewIconType;                                       // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F00[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterProfileData                CallFunc_GetProfileData_ReturnValue;               // 0x0008(0x0028)()
	class FName                                   CallFunc_GetProfileDataId_ReturnValue;             // 0x0030(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F01[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNpcQuestIconType_QuestId;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestIconType                                CallFunc_GetNpcQuestIconType_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcNamePlate_C_UpdateQuest) == 0x000008, "Wrong alignment on NpcNamePlate_C_UpdateQuest");
static_assert(sizeof(NpcNamePlate_C_UpdateQuest) == 0x000048, "Wrong size on NpcNamePlate_C_UpdateQuest");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, QuestIndex) == 0x000000, "Member 'NpcNamePlate_C_UpdateQuest::QuestIndex' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, NewIconType) == 0x000004, "Member 'NpcNamePlate_C_UpdateQuest::NewIconType' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_GetProfileData_ReturnValue) == 0x000008, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_GetProfileData_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_GetProfileDataId_ReturnValue) == 0x000030, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_GetProfileDataId_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000038, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_NotEqual_NameName_ReturnValue) == 0x000039, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_GetNpcQuestIconType_QuestId) == 0x00003C, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_GetNpcQuestIconType_QuestId' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_GetNpcQuestIconType_ReturnValue) == 0x000040, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_GetNpcQuestIconType_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_Array_Contains_ReturnValue) == 0x000042, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000043, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_IsDedicatedServer_ReturnValue) == 0x000044, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_UpdateQuest, CallFunc_BooleanOR_ReturnValue) == 0x000045, "Member 'NpcNamePlate_C_UpdateQuest::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.CheckVisibility
// 0x0006 (0x0006 - 0x0000)
struct NpcNamePlate_C_CheckVisibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_CheckVisibility) == 0x000001, "Wrong alignment on NpcNamePlate_C_CheckVisibility");
static_assert(sizeof(NpcNamePlate_C_CheckVisibility) == 0x000006, "Wrong size on NpcNamePlate_C_CheckVisibility");
static_assert(offsetof(NpcNamePlate_C_CheckVisibility, Temp_bool_Variable) == 0x000000, "Member 'NpcNamePlate_C_CheckVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CheckVisibility, Temp_byte_Variable) == 0x000001, "Member 'NpcNamePlate_C_CheckVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CheckVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'NpcNamePlate_C_CheckVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CheckVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'NpcNamePlate_C_CheckVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CheckVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'NpcNamePlate_C_CheckVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CheckVisibility, K2Node_Select_Default) == 0x000005, "Member 'NpcNamePlate_C_CheckVisibility::K2Node_Select_Default' has a wrong offset!");

// Function NpcNamePlate.NpcNamePlate_C.CursorInOutAnim
// 0x0028 (0x0028 - 0x0000)
struct NpcNamePlate_C_CursorInOutAnim final
{
public:
	bool                                          bin;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F02[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcNamePlate_C_CursorInOutAnim) == 0x000008, "Wrong alignment on NpcNamePlate_C_CursorInOutAnim");
static_assert(sizeof(NpcNamePlate_C_CursorInOutAnim) == 0x000028, "Wrong size on NpcNamePlate_C_CursorInOutAnim");
static_assert(offsetof(NpcNamePlate_C_CursorInOutAnim, bin) == 0x000000, "Member 'NpcNamePlate_C_CursorInOutAnim::bin' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CursorInOutAnim, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000004, "Member 'NpcNamePlate_C_CursorInOutAnim::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CursorInOutAnim, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'NpcNamePlate_C_CursorInOutAnim::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CursorInOutAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'NpcNamePlate_C_CursorInOutAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CursorInOutAnim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'NpcNamePlate_C_CursorInOutAnim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcNamePlate_C_CursorInOutAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000020, "Member 'NpcNamePlate_C_CursorInOutAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

