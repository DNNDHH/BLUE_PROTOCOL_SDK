#pragma once

 

// Package: PlayerName

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerName.PlayerName_C.ExecuteUbergraph_PlayerName
// 0x0320 (0x0320 - 0x0000)
struct PlayerName_C_ExecuteUbergraph_PlayerName final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isClassLevelLimit_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61AA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InPrevLevel;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InCurLevel;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBExtraExpParse                       K2Node_CustomEvent_InExtraExpParse;                // 0x0010(0x0018)(ConstParm, NoDestructor)
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0038(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInIsExpiredStickerWeapons;     // 0x003C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61AB[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds; // 0x0040(0x0010)(ConstParm, ReferenceParm)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InDirtyExpiredEquipmentData;    // 0x0050(0x0130)(ConstParm)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61AC[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharacterData*                       CallFunc_GetCharacterData_ReturnValue_1;           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInitializeClientMyCharacterInfo_ReturnValue; // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61AD[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61AE[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTensionTagType                             K2Node_CustomEvent_TensionTag;                     // 0x01B8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61AF[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_CustomEvent_PlayerCharacter_1;              // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B0[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B1[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCommunicateSettingsComponent*  CallFunc_GetPlayerCommunicateComponent_ReturnValue; // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBTensionTagType                             CallFunc_GetTensionTag_ReturnValue;                // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B2[0x2];                                     // 0x01EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetNowLevelClassExpRatio_ReturnValue;     // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_CustomEvent_PlayerCharacter;                // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B3[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B4[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue_1;        // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B5[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCommunicateSettingsComponent*  CallFunc_GetPlayerCommunicateComponent_ReturnValue_1; // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBTensionTagType TensionTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0250(0x0010)(ZeroConstructor, NoDestructor)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0268(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61B6[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B7[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString>& InExpiredStickerWeaponUniqueIds, struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x02B4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InPrevLevel, int32 InCurLevel, struct FSBExtraExpParse& InExtraExpParse)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x02C4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_61B8[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isClassLevelLimit_ReturnValue_1;          // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61B9[0x6];                                     // 0x02E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_2;         // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x02F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClassLevelCounterStop_ReturnValue;      // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61BA[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetNowLevelClassExtraExpRatio_ReturnValue; // 0x02F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsClassLevelCounterStop_ReturnValue_1;    // 0x02FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61BB[0x3];                                     // 0x02FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x030C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0315(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0316(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x0317(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0319(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_2;              // 0x031A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x031B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClassLevelCounterStop_ReturnValue_2;    // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerName_C_ExecuteUbergraph_PlayerName) == 0x000008, "Wrong alignment on PlayerName_C_ExecuteUbergraph_PlayerName");
static_assert(sizeof(PlayerName_C_ExecuteUbergraph_PlayerName) == 0x000320, "Wrong size on PlayerName_C_ExecuteUbergraph_PlayerName");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, EntryPoint) == 0x000000, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_isClassLevelLimit_ReturnValue) == 0x000004, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_isClassLevelLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_InPrevLevel) == 0x000008, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_InPrevLevel' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_InCurLevel) == 0x00000C, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_InCurLevel' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_InExtraExpParse) == 0x000010, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_InExtraExpParse' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetCharacterData_ReturnValue) == 0x000028, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetCharacterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_InRetCode) == 0x000038, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_bInIsExpiredStickerWeapons) == 0x00003C, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds) == 0x000040, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_InDirtyExpiredEquipmentData) == 0x000050, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_InDirtyExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000180, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_bSuccess) == 0x000188, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetCharacterData_ReturnValue_1) == 0x000190, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetCharacterData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsInitializeClientMyCharacterInfo_ReturnValue) == 0x000198, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsInitializeClientMyCharacterInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetPlayerController_ReturnValue_1) == 0x0001A0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0001A8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetClassLevel_ReturnValue) == 0x0001B4, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_TensionTag) == 0x0001B8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_TensionTag' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_PlayerCharacter_1) == 0x0001C0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_PlayerCharacter_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue) == 0x0001C8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetValidPlayerState_ReturnValue) == 0x0001D0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue_1) == 0x0001D8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetPlayerCommunicateComponent_ReturnValue) == 0x0001E0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetPlayerCommunicateComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue_2) == 0x0001E8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetTensionTag_ReturnValue) == 0x0001E9, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetTensionTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetNowLevelClassExpRatio_ReturnValue) == 0x0001EC, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetNowLevelClassExpRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CustomEvent_PlayerCharacter) == 0x0001F0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CustomEvent_PlayerCharacter' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue_3) == 0x0001F8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_BreakVector2D_X) == 0x0001FC, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_BreakVector2D_Y) == 0x000200, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000204, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_MakeVector2D_ReturnValue) == 0x000208, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetSize_ReturnValue) == 0x000210, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000218, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000220, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_bSuccess_2) == 0x000228, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetValidPlayerState_ReturnValue_1) == 0x000230, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetValidPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue_4) == 0x000238, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetPlayerCommunicateComponent_ReturnValue_1) == 0x000240, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetPlayerCommunicateComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000248, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CreateDelegate_OutputDelegate) == 0x000250, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000260, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_Event_MyGeometry) == 0x000268, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_Event_InDeltaTime) == 0x0002A0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x0002A8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_bSuccess_3) == 0x0002B0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CreateDelegate_OutputDelegate_1) == 0x0002B4, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002C4, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x0002D8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_isClassLevelLimit_ReturnValue_1) == 0x0002E0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_isClassLevelLimit_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue_5) == 0x0002E1, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_AsSBPlayer_Character_2) == 0x0002E8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_AsSBPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, K2Node_DynamicCast_bSuccess_4) == 0x0002F0, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue_6) == 0x0002F1, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002F2, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsValid_ReturnValue_7) == 0x0002F3, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsClassLevelCounterStop_ReturnValue) == 0x0002F4, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsClassLevelCounterStop_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetNowLevelClassExtraExpRatio_ReturnValue) == 0x0002F8, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetNowLevelClassExtraExpRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsClassLevelCounterStop_ReturnValue_1) == 0x0002FC, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsClassLevelCounterStop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_BreakVector2D_X_1) == 0x000300, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_BreakVector2D_Y_1) == 0x000304, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000308, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_MakeVector2D_ReturnValue_1) == 0x00030C, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetVisibility_ReturnValue) == 0x000314, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000315, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_BooleanAND_ReturnValue) == 0x000316, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetVisibility_ReturnValue_1) == 0x000317, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000318, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_BooleanAND_ReturnValue_1) == 0x000319, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_GetVisibility_ReturnValue_2) == 0x00031A, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_GetVisibility_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00031B, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_IsClassLevelCounterStop_ReturnValue_2) == 0x00031C, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_IsClassLevelCounterStop_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ExecuteUbergraph_PlayerName, CallFunc_BooleanOR_ReturnValue) == 0x00031D, "Member 'PlayerName_C_ExecuteUbergraph_PlayerName::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function PlayerName.PlayerName_C.Tick
// 0x003C (0x003C - 0x0000)
struct PlayerName_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_Tick) == 0x000004, "Wrong alignment on PlayerName_C_Tick");
static_assert(sizeof(PlayerName_C_Tick) == 0x00003C, "Wrong size on PlayerName_C_Tick");
static_assert(offsetof(PlayerName_C_Tick, MyGeometry) == 0x000000, "Member 'PlayerName_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(PlayerName_C_Tick, InDeltaTime) == 0x000038, "Member 'PlayerName_C_Tick::InDeltaTime' has a wrong offset!");

// Function PlayerName.PlayerName_C.LoadCharacterInfo
// 0x0008 (0x0008 - 0x0000)
struct PlayerName_C_LoadCharacterInfo final
{
public:
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_LoadCharacterInfo) == 0x000008, "Wrong alignment on PlayerName_C_LoadCharacterInfo");
static_assert(sizeof(PlayerName_C_LoadCharacterInfo) == 0x000008, "Wrong size on PlayerName_C_LoadCharacterInfo");
static_assert(offsetof(PlayerName_C_LoadCharacterInfo, PlayerCharacter) == 0x000000, "Member 'PlayerName_C_LoadCharacterInfo::PlayerCharacter' has a wrong offset!");

// Function PlayerName.PlayerName_C.SetTensionIcon
// 0x0008 (0x0008 - 0x0000)
struct PlayerName_C_SetTensionIcon final
{
public:
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_SetTensionIcon) == 0x000008, "Wrong alignment on PlayerName_C_SetTensionIcon");
static_assert(sizeof(PlayerName_C_SetTensionIcon) == 0x000008, "Wrong size on PlayerName_C_SetTensionIcon");
static_assert(offsetof(PlayerName_C_SetTensionIcon, PlayerCharacter) == 0x000000, "Member 'PlayerName_C_SetTensionIcon::PlayerCharacter' has a wrong offset!");

// Function PlayerName.PlayerName_C.OnChangeTensionTag
// 0x0001 (0x0001 - 0x0000)
struct PlayerName_C_OnChangeTensionTag final
{
public:
	ESBTensionTagType                             TensionTag;                                        // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_OnChangeTensionTag) == 0x000001, "Wrong alignment on PlayerName_C_OnChangeTensionTag");
static_assert(sizeof(PlayerName_C_OnChangeTensionTag) == 0x000001, "Wrong size on PlayerName_C_OnChangeTensionTag");
static_assert(offsetof(PlayerName_C_OnChangeTensionTag, TensionTag) == 0x000000, "Member 'PlayerName_C_OnChangeTensionTag::TensionTag' has a wrong offset!");

// Function PlayerName.PlayerName_C.ClassChangeLevelUpdate
// 0x0148 (0x0148 - 0x0000)
struct PlayerName_C_ClassChangeLevelUpdate final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInIsExpiredStickerWeapons;                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61BC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         InExpiredStickerWeaponUniqueIds;                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBExpiredEquipmentData                InDirtyExpiredEquipmentData;                       // 0x0018(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerName_C_ClassChangeLevelUpdate) == 0x000008, "Wrong alignment on PlayerName_C_ClassChangeLevelUpdate");
static_assert(sizeof(PlayerName_C_ClassChangeLevelUpdate) == 0x000148, "Wrong size on PlayerName_C_ClassChangeLevelUpdate");
static_assert(offsetof(PlayerName_C_ClassChangeLevelUpdate, InRetCode) == 0x000000, "Member 'PlayerName_C_ClassChangeLevelUpdate::InRetCode' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ClassChangeLevelUpdate, bInIsExpiredStickerWeapons) == 0x000004, "Member 'PlayerName_C_ClassChangeLevelUpdate::bInIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ClassChangeLevelUpdate, InExpiredStickerWeaponUniqueIds) == 0x000008, "Member 'PlayerName_C_ClassChangeLevelUpdate::InExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(PlayerName_C_ClassChangeLevelUpdate, InDirtyExpiredEquipmentData) == 0x000018, "Member 'PlayerName_C_ClassChangeLevelUpdate::InDirtyExpiredEquipmentData' has a wrong offset!");

// Function PlayerName.PlayerName_C.LevelUpLevelUpdate
// 0x0020 (0x0020 - 0x0000)
struct PlayerName_C_LevelUpLevelUpdate final
{
public:
	int32                                         InPrevLevel;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InCurLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBExtraExpParse                       InExtraExpParse;                                   // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PlayerName_C_LevelUpLevelUpdate) == 0x000004, "Wrong alignment on PlayerName_C_LevelUpLevelUpdate");
static_assert(sizeof(PlayerName_C_LevelUpLevelUpdate) == 0x000020, "Wrong size on PlayerName_C_LevelUpLevelUpdate");
static_assert(offsetof(PlayerName_C_LevelUpLevelUpdate, InPrevLevel) == 0x000000, "Member 'PlayerName_C_LevelUpLevelUpdate::InPrevLevel' has a wrong offset!");
static_assert(offsetof(PlayerName_C_LevelUpLevelUpdate, InCurLevel) == 0x000004, "Member 'PlayerName_C_LevelUpLevelUpdate::InCurLevel' has a wrong offset!");
static_assert(offsetof(PlayerName_C_LevelUpLevelUpdate, InExtraExpParse) == 0x000008, "Member 'PlayerName_C_LevelUpLevelUpdate::InExtraExpParse' has a wrong offset!");

// Function PlayerName.PlayerName_C.SetPlayerName
// 0x0018 (0x0018 - 0x0000)
struct PlayerName_C_SetPlayerName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PlayerName_C_SetPlayerName) == 0x000008, "Wrong alignment on PlayerName_C_SetPlayerName");
static_assert(sizeof(PlayerName_C_SetPlayerName) == 0x000018, "Wrong size on PlayerName_C_SetPlayerName");
static_assert(offsetof(PlayerName_C_SetPlayerName, InName) == 0x000000, "Member 'PlayerName_C_SetPlayerName::InName' has a wrong offset!");

// Function PlayerName.PlayerName_C.SetBgVisibility
// 0x0001 (0x0001 - 0x0000)
struct PlayerName_C_SetBgVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerName_C_SetBgVisibility) == 0x000001, "Wrong alignment on PlayerName_C_SetBgVisibility");
static_assert(sizeof(PlayerName_C_SetBgVisibility) == 0x000001, "Wrong size on PlayerName_C_SetBgVisibility");
static_assert(offsetof(PlayerName_C_SetBgVisibility, Param_IsVisible) == 0x000000, "Member 'PlayerName_C_SetBgVisibility::Param_IsVisible' has a wrong offset!");

// Function PlayerName.PlayerName_C.SetPlayerNameVisibility
// 0x0005 (0x0005 - 0x0000)
struct PlayerName_C_SetPlayerNameVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_SetPlayerNameVisibility) == 0x000001, "Wrong alignment on PlayerName_C_SetPlayerNameVisibility");
static_assert(sizeof(PlayerName_C_SetPlayerNameVisibility) == 0x000005, "Wrong size on PlayerName_C_SetPlayerNameVisibility");
static_assert(offsetof(PlayerName_C_SetPlayerNameVisibility, Param_IsVisible) == 0x000000, "Member 'PlayerName_C_SetPlayerNameVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetPlayerNameVisibility, Temp_bool_Variable) == 0x000001, "Member 'PlayerName_C_SetPlayerNameVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetPlayerNameVisibility, Temp_byte_Variable) == 0x000002, "Member 'PlayerName_C_SetPlayerNameVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetPlayerNameVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'PlayerName_C_SetPlayerNameVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetPlayerNameVisibility, K2Node_Select_Default) == 0x000004, "Member 'PlayerName_C_SetPlayerNameVisibility::K2Node_Select_Default' has a wrong offset!");

// Function PlayerName.PlayerName_C.SetAchievementName
// 0x0018 (0x0018 - 0x0000)
struct PlayerName_C_SetAchievementName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PlayerName_C_SetAchievementName) == 0x000008, "Wrong alignment on PlayerName_C_SetAchievementName");
static_assert(sizeof(PlayerName_C_SetAchievementName) == 0x000018, "Wrong size on PlayerName_C_SetAchievementName");
static_assert(offsetof(PlayerName_C_SetAchievementName, InName) == 0x000000, "Member 'PlayerName_C_SetAchievementName::InName' has a wrong offset!");

// Function PlayerName.PlayerName_C.SetAchievementNameVisibility
// 0x0005 (0x0005 - 0x0000)
struct PlayerName_C_SetAchievementNameVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_SetAchievementNameVisibility) == 0x000001, "Wrong alignment on PlayerName_C_SetAchievementNameVisibility");
static_assert(sizeof(PlayerName_C_SetAchievementNameVisibility) == 0x000005, "Wrong size on PlayerName_C_SetAchievementNameVisibility");
static_assert(offsetof(PlayerName_C_SetAchievementNameVisibility, Param_IsVisible) == 0x000000, "Member 'PlayerName_C_SetAchievementNameVisibility::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetAchievementNameVisibility, Temp_bool_Variable) == 0x000001, "Member 'PlayerName_C_SetAchievementNameVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetAchievementNameVisibility, Temp_byte_Variable) == 0x000002, "Member 'PlayerName_C_SetAchievementNameVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetAchievementNameVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'PlayerName_C_SetAchievementNameVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetAchievementNameVisibility, K2Node_Select_Default) == 0x000004, "Member 'PlayerName_C_SetAchievementNameVisibility::K2Node_Select_Default' has a wrong offset!");

// Function PlayerName.PlayerName_C.SetClassData
// 0x0038 (0x0038 - 0x0000)
struct PlayerName_C_SetClassData final
{
public:
	ESBClassType                                  ClassType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61BD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_SetClassData) == 0x000008, "Wrong alignment on PlayerName_C_SetClassData");
static_assert(sizeof(PlayerName_C_SetClassData) == 0x000038, "Wrong size on PlayerName_C_SetClassData");
static_assert(offsetof(PlayerName_C_SetClassData, ClassType) == 0x000000, "Member 'PlayerName_C_SetClassData::ClassType' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetClassData, CallFunc_GetClassNameText_ReturnValue) == 0x000008, "Member 'PlayerName_C_SetClassData::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetClassData, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'PlayerName_C_SetClassData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_SetClassData, CallFunc_GetClassLevel_ReturnValue) == 0x000030, "Member 'PlayerName_C_SetClassData::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");

// Function PlayerName.PlayerName_C.UpdateLevelText
// 0x0020 (0x0020 - 0x0000)
struct PlayerName_C_UpdateLevelText final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61BE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(PlayerName_C_UpdateLevelText) == 0x000008, "Wrong alignment on PlayerName_C_UpdateLevelText");
static_assert(sizeof(PlayerName_C_UpdateLevelText) == 0x000020, "Wrong size on PlayerName_C_UpdateLevelText");
static_assert(offsetof(PlayerName_C_UpdateLevelText, Level) == 0x000000, "Member 'PlayerName_C_UpdateLevelText::Level' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdateLevelText, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'PlayerName_C_UpdateLevelText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function PlayerName.PlayerName_C.UpdateAutoDeliveryQuest
// 0x0020 (0x0020 - 0x0000)
struct PlayerName_C_UpdateAutoDeliveryQuest final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61BF[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAutoDeliveryQuestComponent*    CallFunc_GetPlayerAutoDeliveryQuestComponent_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_UpdateAutoDeliveryQuest) == 0x000008, "Wrong alignment on PlayerName_C_UpdateAutoDeliveryQuest");
static_assert(sizeof(PlayerName_C_UpdateAutoDeliveryQuest) == 0x000020, "Wrong size on PlayerName_C_UpdateAutoDeliveryQuest");
static_assert(offsetof(PlayerName_C_UpdateAutoDeliveryQuest, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'PlayerName_C_UpdateAutoDeliveryQuest::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdateAutoDeliveryQuest, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000008, "Member 'PlayerName_C_UpdateAutoDeliveryQuest::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdateAutoDeliveryQuest, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PlayerName_C_UpdateAutoDeliveryQuest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdateAutoDeliveryQuest, CallFunc_GetPlayerAutoDeliveryQuestComponent_ReturnValue) == 0x000018, "Member 'PlayerName_C_UpdateAutoDeliveryQuest::CallFunc_GetPlayerAutoDeliveryQuestComponent_ReturnValue' has a wrong offset!");

// Function PlayerName.PlayerName_C.UpdatePartyLeaderIcon
// 0x0040 (0x0040 - 0x0000)
struct PlayerName_C_UpdatePartyLeaderIcon final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C0[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C1[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61C2[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyMemberState*                    CallFunc_GetCurrentPartyMemberState_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartyLeader_ReturnValue;                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerName_C_UpdatePartyLeaderIcon) == 0x000008, "Wrong alignment on PlayerName_C_UpdatePartyLeaderIcon");
static_assert(sizeof(PlayerName_C_UpdatePartyLeaderIcon) == 0x000040, "Wrong size on PlayerName_C_UpdatePartyLeaderIcon");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, Temp_byte_Variable) == 0x000000, "Member 'PlayerName_C_UpdatePartyLeaderIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, Temp_byte_Variable_1) == 0x000001, "Member 'PlayerName_C_UpdatePartyLeaderIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, Temp_bool_Variable) == 0x000002, "Member 'PlayerName_C_UpdatePartyLeaderIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'PlayerName_C_UpdatePartyLeaderIcon::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'PlayerName_C_UpdatePartyLeaderIcon::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerName_C_UpdatePartyLeaderIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, K2Node_DynamicCast_AsSBPlayer_State) == 0x000020, "Member 'PlayerName_C_UpdatePartyLeaderIcon::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'PlayerName_C_UpdatePartyLeaderIcon::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, CallFunc_GetCurrentPartyMemberState_ReturnValue) == 0x000030, "Member 'PlayerName_C_UpdatePartyLeaderIcon::CallFunc_GetCurrentPartyMemberState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'PlayerName_C_UpdatePartyLeaderIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, CallFunc_IsPartyLeader_ReturnValue) == 0x000039, "Member 'PlayerName_C_UpdatePartyLeaderIcon::CallFunc_IsPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, CallFunc_IsLocalPlayer_ReturnValue) == 0x00003A, "Member 'PlayerName_C_UpdatePartyLeaderIcon::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, CallFunc_BooleanAND_ReturnValue) == 0x00003B, "Member 'PlayerName_C_UpdatePartyLeaderIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, CallFunc_BooleanAND_ReturnValue_1) == 0x00003C, "Member 'PlayerName_C_UpdatePartyLeaderIcon::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerName_C_UpdatePartyLeaderIcon, K2Node_Select_Default) == 0x00003D, "Member 'PlayerName_C_UpdatePartyLeaderIcon::K2Node_Select_Default' has a wrong offset!");

}

