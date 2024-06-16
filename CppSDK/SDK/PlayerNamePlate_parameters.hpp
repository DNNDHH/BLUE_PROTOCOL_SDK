#pragma once

 

// Package: PlayerNamePlate

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeDrawSize__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature final
{
public:
	struct FVector2D                              DrawSize;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature) == 0x000004, "Wrong alignment on PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature");
static_assert(sizeof(PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature) == 0x000008, "Wrong size on PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature");
static_assert(offsetof(PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature, DrawSize) == 0x000000, "Member 'PlayerNamePlate_C_OnChangeDrawSize__DelegateSignature::DrawSize' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeScale__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PlayerNamePlate_C_OnChangeScale__DelegateSignature final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_OnChangeScale__DelegateSignature) == 0x000004, "Wrong alignment on PlayerNamePlate_C_OnChangeScale__DelegateSignature");
static_assert(sizeof(PlayerNamePlate_C_OnChangeScale__DelegateSignature) == 0x000004, "Wrong size on PlayerNamePlate_C_OnChangeScale__DelegateSignature");
static_assert(offsetof(PlayerNamePlate_C_OnChangeScale__DelegateSignature, Scale) == 0x000000, "Member 'PlayerNamePlate_C_OnChangeScale__DelegateSignature::Scale' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.ExecuteUbergraph_PlayerNamePlate
// 0x06C8 (0x06C8 - 0x0000)
struct PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4510[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBTensionTagType TensionTag)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<struct FPlayerProfileSummaryData>& PlayerProfileSummaryData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBTensionTagType                             Temp_byte_Variable;                                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate_4;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsFadeIn)>                K2Node_CreateDelegate_OutputDelegate_5;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShow_1;                      // 0x006D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4511[0x1];                                     // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowPartyNamePlate_ReturnValue;         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowOtherNamePlate_ReturnValue;         // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShow;                        // 0x008A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4512[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4513[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4514[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4515[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4516[0x1];                                     // 0x00D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate_6;            // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4517[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTeamTagVisible_ReturnValue;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4518[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4519[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsCheckParty_ReturnValue;                 // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451A[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InAchievementSelected;                // 0x0124(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451B[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451C[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x0140(0x0078)()
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01C8(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_451D[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01E8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0210(0x0028)()
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451E[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451F[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InQuestId_2;                    // 0x0264(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4520[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4521[0x7];                                     // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       K2Node_CustomEvent_InComponent_1;                  // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInFirst;                       // 0x0288(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4522[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InQuestId_1;                    // 0x0298(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4523[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInterruptQuestPlayInfo              K2Node_CustomEvent_InPlayInfo;                     // 0x02A8(0x0018)(ConstParm, NoDestructor)
	class FName                                   K2Node_CustomEvent_InQuestId;                      // 0x02C0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InSuccess;                      // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4524[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       K2Node_CustomEvent_InComponent;                    // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4525[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4526[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State_1;             // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4527[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue_1; // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bParty;                               // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4528[0x6];                                     // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x0328(0x0028)()
	class FString                                 K2Node_Event_Name;                                 // 0x0350(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_Event_HpRate_1;                             // 0x0360(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4529[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0368(0x0018)()
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsHealChainColor;               // 0x0381(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_452A[0x2];                                     // 0x0382(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_TeamNumber;                           // 0x0384(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetTeamColor_Color;                       // 0x0388(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_452B[0x3];                                     // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakColor_R;                             // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x03A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x03AC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_452C[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_Event_InCharacter;                          // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHostility                                  K2Node_Event_Hostility;                            // 0x03C8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_452D[0x2];                                     // 0x03CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetHostilityColor_Color;                  // 0x03CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R_1;                           // 0x03DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x03E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_HpRate;                               // 0x03EC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_1;                  // 0x03F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0401(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_452E[0x6];                                     // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0411(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0412(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0413(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInVisibility_2;                      // 0x0414(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInVisibility_1;                      // 0x0415(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0416(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0417(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_452F[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0420(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x043C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_1;                    // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InWidthRate;                          // 0x0450(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4530[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0458(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x0460(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x0468(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0474(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4531[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_5;           // 0x0480(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_6;           // 0x0488(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue_2;                    // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_InDepth;                              // 0x0498(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x049C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x049D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4532[0x2];                                     // 0x049E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetEffectMaterial_ReturnValue;            // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x04A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x04AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x04AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x04AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsFadeIn;                       // 0x04AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4533[0x2];                                     // 0x04AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x04B8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bInVisibility;                        // 0x04C8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInteractionUIVisibility_IsVisibilty;    // 0x04C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4534[0x2];                                     // 0x04CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_InScreenPositionOffset;               // 0x04CC(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName& InQuestId, bool InSuccess)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x04DC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x04EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4535[0x3];                                     // 0x04ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x04F0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FSBInterruptQuestPlayInfo& InPlayInfo)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0500(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4536[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0518(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue_1;        // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4537[0x3];                                     // 0x0529(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x052C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4538[0x4];                                     // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue_2;        // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue_1;          // 0x0548(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4539[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildRepData                          CallFunc_GetRepData_ReturnValue;                   // 0x0558(0x0080)()
	bool                                          CallFunc_IsGuildMember_ReturnValue_1;              // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453A[0x7];                                     // 0x05D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCommunicateSettingsComponent*  CallFunc_GetPlayerCommunicateComponent_ReturnValue; // 0x05E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTensionTagType                             CallFunc_GetTensionTag_ReturnValue;                // 0x05E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x05E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453B[0x2];                                     // 0x05EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName& InQuestId)>       K2Node_CreateDelegate_OutputDelegate_13;           // 0x05EC(0x0010)(ZeroConstructor, NoDestructor)
	ESBTensionTagType                             K2Node_CustomEvent_TensionTag;                     // 0x05FC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453C[0x3];                                     // 0x05FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0608(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerProfileSummaryData>      K2Node_CustomEvent_PlayerProfileSummaryData;       // 0x0610(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FPlayerProfileSummaryData>      CallFunc_GetFriendList_ReturnValue;                // 0x0620(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0631(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453D[0x2];                                     // 0x0632(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0634(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0638(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x063C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x0640(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0644(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0648(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x064C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x0654(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x065C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_453E[0x3];                                     // 0x065D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x0660(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x0668(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_2;                // 0x0678(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTeamTagVisible_ReturnValue_1;           // 0x0688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0689(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_5;                           // 0x068A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_453F[0x1];                                     // 0x068B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName& InQuestId)>       K2Node_CreateDelegate_OutputDelegate_15;           // 0x068C(0x0010)(ZeroConstructor, NoDestructor)
	ESBTensionTagType                             K2Node_CustomEvent_InTensionTagId;                 // 0x069C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidSimplycityPartyImprovement_ReturnValue; // 0x069D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4540[0x2];                                     // 0x069E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue_3;        // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCommunicateSettingsComponent*  CallFunc_GetPlayerCommunicateComponent_ReturnValue_1; // 0x06A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTensionTagType                             CallFunc_GetTensionTag_ReturnValue_1;              // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4541[0x7];                                     // 0x06B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue_4;        // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSimplycityPartyOn_ReturnValue;         // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBTensionTagType                             K2Node_Select_Default_6;                           // 0x06C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTensionTagType                             K2Node_Select_Default_7;                           // 0x06C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate) == 0x000008, "Wrong alignment on PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate");
static_assert(sizeof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate) == 0x0006C8, "Wrong size on PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, EntryPoint) == 0x000000, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable) == 0x000004, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable_1) == 0x000048, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable_2) == 0x000049, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_byte_Variable) == 0x00004A, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable_3) == 0x00004B, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_4) == 0x00004C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_5) == 0x00005C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable_4) == 0x00006C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_bIsShow_1) == 0x00006D, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_bIsShow_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_IsValid) == 0x00006E, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000070, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetPlayerId_ReturnValue) == 0x000078, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsShowPartyNamePlate_ReturnValue) == 0x000088, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsShowPartyNamePlate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsShowOtherNamePlate_ReturnValue) == 0x000089, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsShowOtherNamePlate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_bIsShow) == 0x00008A, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_bIsShow' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetPlayerId_ReturnValue_1) == 0x000090, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0000A8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetValidPlayerState_ReturnValue) == 0x0000B8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_byte_Variable_1) == 0x0000C0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_1) == 0x0000C1, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetGuildComponent_ReturnValue) == 0x0000C8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_byte_Variable_2) == 0x0000D0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_2) == 0x0000D1, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsGuildMember_ReturnValue) == 0x0000D2, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000D4, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0000E4, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0000E8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsTeamTagVisible_ReturnValue) == 0x0000F0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsTeamTagVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0000F1, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0000F8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable_5) == 0x000100, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_IsValid_3) == 0x000101, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x000108, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_7) == 0x000110, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsCheckParty_ReturnValue) == 0x000120, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsCheckParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default) == 0x000121, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_InAchievementSelected) == 0x000124, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_InAchievementSelected' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000128, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetMasterDataManager_IsValid) == 0x000129, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetMasterDataManager_ReturnValue) == 0x000130, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetAchievementMasterData_IsExists) == 0x000138, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetAchievementMasterData_ReturnValue) == 0x000140, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetAchievementName_ReturnValue) == 0x0001B8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_Conv_StringToText_ReturnValue) == 0x0001C8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001E0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_MakeStruct_SlateColor) == 0x0001E8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_MakeStruct_SlateColor_1) == 0x000210, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetOwningPlayer_ReturnValue) == 0x000238, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetGameInstance_ReturnValue) == 0x000240, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000248, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_bSuccess_1) == 0x000250, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x000258, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_bSuccess_2) == 0x000260, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InQuestId_2) == 0x000264, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InQuestId_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_AsSBPlayer_State) == 0x000270, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_bSuccess_3) == 0x000278, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InComponent_1) == 0x000280, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InComponent_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_bInFirst) == 0x000288, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_bInFirst' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x000290, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InQuestId_1) == 0x000298, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InQuestId_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_3) == 0x0002A0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InPlayInfo) == 0x0002A8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InPlayInfo' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InQuestId) == 0x0002C0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InQuestId' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InSuccess) == 0x0002C8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InSuccess' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InComponent) == 0x0002D0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InComponent' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetGameInstance_ReturnValue_1) == 0x0002D8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0002E0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x0002E8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_bSuccess_4) == 0x0002F0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0002F8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_bSuccess_5) == 0x000300, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_byte_Variable_3) == 0x000301, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_AsSBPlayer_State_1) == 0x000308, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_AsSBPlayer_State_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_DynamicCast_bSuccess_6) == 0x000310, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetInterruptQuestComponent_ReturnValue_1) == 0x000318, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetInterruptQuestComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_4) == 0x000320, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_bParty) == 0x000321, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_bParty' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default_1) == 0x000328, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_Name) == 0x000350, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_Name' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_HpRate_1) == 0x000360, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_HpRate_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000368, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_IsVisible) == 0x000380, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_IsHealChainColor) == 0x000381, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_IsHealChainColor' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_TeamNumber) == 0x000384, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_TeamNumber' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetTeamColor_Color) == 0x000388, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetTeamColor_Color' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000398, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_R) == 0x00039C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_G) == 0x0003A0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_B) == 0x0003A4, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_A) == 0x0003A8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeColor_ReturnValue) == 0x0003AC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_InCharacter) == 0x0003C0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_InCharacter' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_Hostility) == 0x0003C8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_Hostility' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0003C9, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetHostilityColor_Color) == 0x0003CC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetHostilityColor_Color' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_R_1) == 0x0003DC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_G_1) == 0x0003E0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_B_1) == 0x0003E4, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakColor_A_1) == 0x0003E8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_HpRate) == 0x0003EC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_HpRate' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeColor_ReturnValue_1) == 0x0003F0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_byte_Variable_4) == 0x000400, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000401, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000408, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InUIType) == 0x000410, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_bInVisibility) == 0x000411, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_bInInstantly) == 0x000412, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000413, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_bInVisibility_2) == 0x000414, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_bInVisibility_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_bInVisibility_1) == 0x000415, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_bInVisibility_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default_2) == 0x000416, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable_6) == 0x000417, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default_3) == 0x000418, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000420, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetSize_ReturnValue) == 0x000428, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000430, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_X) == 0x000438, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_Y) == 0x00043C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetSize_ReturnValue_1) == 0x000440, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_X_1) == 0x000448, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_Y_1) == 0x00044C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_InWidthRate) == 0x000450, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_InWidthRate' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000458, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x000460, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x000468, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000470, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeVector2D_ReturnValue) == 0x000474, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue_5) == 0x000480, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_SlotAsCanvasSlot_ReturnValue_6) == 0x000488, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_SlotAsCanvasSlot_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetSize_ReturnValue_2) == 0x000490, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetSize_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_InDepth) == 0x000498, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_InDepth' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_5) == 0x00049C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_6) == 0x00049D, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetEffectMaterial_ReturnValue) == 0x0004A0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetEffectMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_7) == 0x0004A8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_8) == 0x0004A9, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0004AA, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0004AB, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default_4) == 0x0004AC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_IsFadeIn) == 0x0004AD, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_IsFadeIn' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0004B0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_8) == 0x0004B8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_bInVisibility) == 0x0004C8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_bInVisibility' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsInteractionUIVisibility_IsVisibilty) == 0x0004C9, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsInteractionUIVisibility_IsVisibilty' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Event_InScreenPositionOffset) == 0x0004CC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Event_InScreenPositionOffset' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_9) == 0x0004DC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0004EC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_10) == 0x0004F0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_11) == 0x000500, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, Temp_bool_Variable_7) == 0x000510, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_PlayAnimationForward_ReturnValue) == 0x000518, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetValidPlayerState_ReturnValue_1) == 0x000520, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetValidPlayerState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_9) == 0x000528, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_12) == 0x00052C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetValidPlayerState_ReturnValue_2) == 0x000540, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetValidPlayerState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetGuildComponent_ReturnValue_1) == 0x000548, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetGuildComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_10) == 0x000550, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetRepData_ReturnValue) == 0x000558, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetRepData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsGuildMember_ReturnValue_1) == 0x0005D8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsGuildMember_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetPlayerCommunicateComponent_ReturnValue) == 0x0005E0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetPlayerCommunicateComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetTensionTag_ReturnValue) == 0x0005E8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetTensionTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsValid_ReturnValue_11) == 0x0005E9, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_13) == 0x0005EC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_TensionTag) == 0x0005FC, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_TensionTag' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetSBPlayerController_ReturnValue) == 0x000600, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConcernedList_ReturnValue) == 0x000608, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_PlayerProfileSummaryData) == 0x000610, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_PlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetFriendList_ReturnValue) == 0x000620, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetFriendList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000630, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_Less_FloatFloat_ReturnValue) == 0x000631, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_X_2) == 0x000634, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_Y_2) == 0x000638, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_X_3) == 0x00063C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BreakVector2D_Y_3) == 0x000640, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000644, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000648, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeVector2D_ReturnValue_1) == 0x00064C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_MakeVector2D_ReturnValue_2) == 0x000654, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_IsValid_4) == 0x00065C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x000660, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_14) == 0x000668, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetPlayerId_ReturnValue_2) == 0x000678, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetPlayerId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_IsTeamTagVisible_ReturnValue_1) == 0x000688, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_IsTeamTagVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_BooleanAND_ReturnValue) == 0x000689, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default_5) == 0x00068A, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CreateDelegate_OutputDelegate_15) == 0x00068C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_CustomEvent_InTensionTagId) == 0x00069C, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_CustomEvent_InTensionTagId' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_ValidSimplycityPartyImprovement_ReturnValue) == 0x00069D, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_ValidSimplycityPartyImprovement_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetValidPlayerState_ReturnValue_3) == 0x0006A0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetValidPlayerState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetPlayerCommunicateComponent_ReturnValue_1) == 0x0006A8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetPlayerCommunicateComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetTensionTag_ReturnValue_1) == 0x0006B0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetTensionTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetValidPlayerState_ReturnValue_4) == 0x0006B8, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetValidPlayerState_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, CallFunc_GetSimplycityPartyOn_ReturnValue) == 0x0006C0, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::CallFunc_GetSimplycityPartyOn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default_6) == 0x0006C1, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate, K2Node_Select_Default_7) == 0x0006C2, "Member 'PlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate::K2Node_Select_Default_7' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.UpdateTension
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_UpdateTension final
{
public:
	ESBTensionTagType                             InTensionTagId;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_UpdateTension) == 0x000001, "Wrong alignment on PlayerNamePlate_C_UpdateTension");
static_assert(sizeof(PlayerNamePlate_C_UpdateTension) == 0x000001, "Wrong size on PlayerNamePlate_C_UpdateTension");
static_assert(offsetof(PlayerNamePlate_C_UpdateTension, InTensionTagId) == 0x000000, "Member 'PlayerNamePlate_C_UpdateTension::InTensionTagId' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_2
// 0x0010 (0x0010 - 0x0000)
struct PlayerNamePlate_C_CustomEvent_2 final
{
public:
	TArray<struct FPlayerProfileSummaryData>      PlayerProfileSummaryData;                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerNamePlate_C_CustomEvent_2) == 0x000008, "Wrong alignment on PlayerNamePlate_C_CustomEvent_2");
static_assert(sizeof(PlayerNamePlate_C_CustomEvent_2) == 0x000010, "Wrong size on PlayerNamePlate_C_CustomEvent_2");
static_assert(offsetof(PlayerNamePlate_C_CustomEvent_2, PlayerProfileSummaryData) == 0x000000, "Member 'PlayerNamePlate_C_CustomEvent_2::PlayerProfileSummaryData' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_CustomEvent_1 final
{
public:
	ESBTensionTagType                             TensionTag;                                        // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_CustomEvent_1) == 0x000001, "Wrong alignment on PlayerNamePlate_C_CustomEvent_1");
static_assert(sizeof(PlayerNamePlate_C_CustomEvent_1) == 0x000001, "Wrong size on PlayerNamePlate_C_CustomEvent_1");
static_assert(offsetof(PlayerNamePlate_C_CustomEvent_1, TensionTag) == 0x000000, "Member 'PlayerNamePlate_C_CustomEvent_1::TensionTag' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetScreenPositionOffset
// 0x0010 (0x0010 - 0x0000)
struct PlayerNamePlate_C_SetScreenPositionOffset final
{
public:
	struct FLinearColor                           InScreenPositionOffset;                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetScreenPositionOffset) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetScreenPositionOffset");
static_assert(sizeof(PlayerNamePlate_C_SetScreenPositionOffset) == 0x000010, "Wrong size on PlayerNamePlate_C_SetScreenPositionOffset");
static_assert(offsetof(PlayerNamePlate_C_SetScreenPositionOffset, InScreenPositionOffset) == 0x000000, "Member 'PlayerNamePlate_C_SetScreenPositionOffset::InScreenPositionOffset' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetInteractionTargetVisibility
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_SetInteractionTargetVisibility final
{
public:
	bool                                          bInVisibility;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_SetInteractionTargetVisibility) == 0x000001, "Wrong alignment on PlayerNamePlate_C_SetInteractionTargetVisibility");
static_assert(sizeof(PlayerNamePlate_C_SetInteractionTargetVisibility) == 0x000001, "Wrong size on PlayerNamePlate_C_SetInteractionTargetVisibility");
static_assert(offsetof(PlayerNamePlate_C_SetInteractionTargetVisibility, bInVisibility) == 0x000000, "Member 'PlayerNamePlate_C_SetInteractionTargetVisibility::bInVisibility' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.OnFinishedFadeAnime
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_OnFinishedFadeAnime final
{
public:
	bool                                          IsFadeIn;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_OnFinishedFadeAnime) == 0x000001, "Wrong alignment on PlayerNamePlate_C_OnFinishedFadeAnime");
static_assert(sizeof(PlayerNamePlate_C_OnFinishedFadeAnime) == 0x000001, "Wrong size on PlayerNamePlate_C_OnFinishedFadeAnime");
static_assert(offsetof(PlayerNamePlate_C_OnFinishedFadeAnime, IsFadeIn) == 0x000000, "Member 'PlayerNamePlate_C_OnFinishedFadeAnime::IsFadeIn' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetDepth
// 0x0004 (0x0004 - 0x0000)
struct PlayerNamePlate_C_SetDepth final
{
public:
	float                                         InDepth;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetDepth) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetDepth");
static_assert(sizeof(PlayerNamePlate_C_SetDepth) == 0x000004, "Wrong size on PlayerNamePlate_C_SetDepth");
static_assert(offsetof(PlayerNamePlate_C_SetDepth, InDepth) == 0x000000, "Member 'PlayerNamePlate_C_SetDepth::InDepth' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeWidthRate
// 0x0004 (0x0004 - 0x0000)
struct PlayerNamePlate_C_SetHpGaugeWidthRate final
{
public:
	float                                         InWidthRate;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetHpGaugeWidthRate) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetHpGaugeWidthRate");
static_assert(sizeof(PlayerNamePlate_C_SetHpGaugeWidthRate) == 0x000004, "Wrong size on PlayerNamePlate_C_SetHpGaugeWidthRate");
static_assert(offsetof(PlayerNamePlate_C_SetHpGaugeWidthRate, InWidthRate) == 0x000000, "Member 'PlayerNamePlate_C_SetHpGaugeWidthRate::InWidthRate' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeVisibility
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_SetHpGaugeVisibility final
{
public:
	bool                                          bInVisibility;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_SetHpGaugeVisibility) == 0x000001, "Wrong alignment on PlayerNamePlate_C_SetHpGaugeVisibility");
static_assert(sizeof(PlayerNamePlate_C_SetHpGaugeVisibility) == 0x000001, "Wrong size on PlayerNamePlate_C_SetHpGaugeVisibility");
static_assert(offsetof(PlayerNamePlate_C_SetHpGaugeVisibility, bInVisibility) == 0x000000, "Member 'PlayerNamePlate_C_SetHpGaugeVisibility::bInVisibility' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetNameVisibility
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_SetNameVisibility final
{
public:
	bool                                          bInVisibility;                                     // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_SetNameVisibility) == 0x000001, "Wrong alignment on PlayerNamePlate_C_SetNameVisibility");
static_assert(sizeof(PlayerNamePlate_C_SetNameVisibility) == 0x000001, "Wrong size on PlayerNamePlate_C_SetNameVisibility");
static_assert(offsetof(PlayerNamePlate_C_SetNameVisibility, bInVisibility) == 0x000000, "Member 'PlayerNamePlate_C_SetNameVisibility::bInVisibility' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'PlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetInitialHpRate
// 0x0004 (0x0004 - 0x0000)
struct PlayerNamePlate_C_SetInitialHpRate final
{
public:
	float                                         HPRate;                                            // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetInitialHpRate) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetInitialHpRate");
static_assert(sizeof(PlayerNamePlate_C_SetInitialHpRate) == 0x000004, "Wrong size on PlayerNamePlate_C_SetInitialHpRate");
static_assert(offsetof(PlayerNamePlate_C_SetInitialHpRate, HPRate) == 0x000000, "Member 'PlayerNamePlate_C_SetInitialHpRate::HPRate' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetHostility
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_SetHostility final
{
public:
	ESBHostility                                  Hostility;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetHostility) == 0x000001, "Wrong alignment on PlayerNamePlate_C_SetHostility");
static_assert(sizeof(PlayerNamePlate_C_SetHostility) == 0x000001, "Wrong size on PlayerNamePlate_C_SetHostility");
static_assert(offsetof(PlayerNamePlate_C_SetHostility, Hostility) == 0x000000, "Member 'PlayerNamePlate_C_SetHostility::Hostility' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetCharacter_Internal
// 0x0008 (0x0008 - 0x0000)
struct PlayerNamePlate_C_SetCharacter_Internal final
{
public:
	class ASBCharacter*                           InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetCharacter_Internal) == 0x000008, "Wrong alignment on PlayerNamePlate_C_SetCharacter_Internal");
static_assert(sizeof(PlayerNamePlate_C_SetCharacter_Internal) == 0x000008, "Wrong size on PlayerNamePlate_C_SetCharacter_Internal");
static_assert(offsetof(PlayerNamePlate_C_SetCharacter_Internal, InCharacter) == 0x000000, "Member 'PlayerNamePlate_C_SetCharacter_Internal::InCharacter' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetTeamNumber
// 0x0004 (0x0004 - 0x0000)
struct PlayerNamePlate_C_SetTeamNumber final
{
public:
	int32                                         TeamNumber;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetTeamNumber) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetTeamNumber");
static_assert(sizeof(PlayerNamePlate_C_SetTeamNumber) == 0x000004, "Wrong size on PlayerNamePlate_C_SetTeamNumber");
static_assert(offsetof(PlayerNamePlate_C_SetTeamNumber, TeamNumber) == 0x000000, "Member 'PlayerNamePlate_C_SetTeamNumber::TeamNumber' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeLifeGaugeColor
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_OnChangeLifeGaugeColor final
{
public:
	bool                                          IsHealChainColor;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_OnChangeLifeGaugeColor) == 0x000001, "Wrong alignment on PlayerNamePlate_C_OnChangeLifeGaugeColor");
static_assert(sizeof(PlayerNamePlate_C_OnChangeLifeGaugeColor) == 0x000001, "Wrong size on PlayerNamePlate_C_OnChangeLifeGaugeColor");
static_assert(offsetof(PlayerNamePlate_C_OnChangeLifeGaugeColor, IsHealChainColor) == 0x000000, "Member 'PlayerNamePlate_C_OnChangeLifeGaugeColor::IsHealChainColor' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.OnSetHealChainUIVisibility
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_OnSetHealChainUIVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_OnSetHealChainUIVisibility) == 0x000001, "Wrong alignment on PlayerNamePlate_C_OnSetHealChainUIVisibility");
static_assert(sizeof(PlayerNamePlate_C_OnSetHealChainUIVisibility) == 0x000001, "Wrong size on PlayerNamePlate_C_OnSetHealChainUIVisibility");
static_assert(offsetof(PlayerNamePlate_C_OnSetHealChainUIVisibility, Param_IsVisible) == 0x000000, "Member 'PlayerNamePlate_C_OnSetHealChainUIVisibility::Param_IsVisible' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetHpRate
// 0x0004 (0x0004 - 0x0000)
struct PlayerNamePlate_C_SetHpRate final
{
public:
	float                                         HPRate;                                            // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetHpRate) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetHpRate");
static_assert(sizeof(PlayerNamePlate_C_SetHpRate) == 0x000004, "Wrong size on PlayerNamePlate_C_SetHpRate");
static_assert(offsetof(PlayerNamePlate_C_SetHpRate, HPRate) == 0x000000, "Member 'PlayerNamePlate_C_SetHpRate::HPRate' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetName
// 0x0010 (0x0010 - 0x0000)
struct PlayerNamePlate_C_SetName final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetName) == 0x000008, "Wrong alignment on PlayerNamePlate_C_SetName");
static_assert(sizeof(PlayerNamePlate_C_SetName) == 0x000010, "Wrong size on PlayerNamePlate_C_SetName");
static_assert(offsetof(PlayerNamePlate_C_SetName, Param_Name) == 0x000000, "Member 'PlayerNamePlate_C_SetName::Param_Name' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.OnUpdateNameColor
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_OnUpdateNameColor final
{
public:
	bool                                          bParty;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_OnUpdateNameColor) == 0x000001, "Wrong alignment on PlayerNamePlate_C_OnUpdateNameColor");
static_assert(sizeof(PlayerNamePlate_C_OnUpdateNameColor) == 0x000001, "Wrong size on PlayerNamePlate_C_OnUpdateNameColor");
static_assert(offsetof(PlayerNamePlate_C_OnUpdateNameColor, bParty) == 0x000000, "Member 'PlayerNamePlate_C_OnUpdateNameColor::bParty' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.Update Prog
// 0x0008 (0x0008 - 0x0000)
struct PlayerNamePlate_C_Update_Prog final
{
public:
	class USBPlayerInterruptQuestComponent*       InComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_Update_Prog) == 0x000008, "Wrong alignment on PlayerNamePlate_C_Update_Prog");
static_assert(sizeof(PlayerNamePlate_C_Update_Prog) == 0x000008, "Wrong size on PlayerNamePlate_C_Update_Prog");
static_assert(offsetof(PlayerNamePlate_C_Update_Prog, InComponent) == 0x000000, "Member 'PlayerNamePlate_C_Update_Prog::InComponent' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SucInterruptQuest
// 0x000C (0x000C - 0x0000)
struct PlayerNamePlate_C_SucInterruptQuest final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSuccess;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_SucInterruptQuest) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SucInterruptQuest");
static_assert(sizeof(PlayerNamePlate_C_SucInterruptQuest) == 0x00000C, "Wrong size on PlayerNamePlate_C_SucInterruptQuest");
static_assert(offsetof(PlayerNamePlate_C_SucInterruptQuest, InQuestId) == 0x000000, "Member 'PlayerNamePlate_C_SucInterruptQuest::InQuestId' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_SucInterruptQuest, InSuccess) == 0x000008, "Member 'PlayerNamePlate_C_SucInterruptQuest::InSuccess' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.Repinterrupt
// 0x0018 (0x0018 - 0x0000)
struct PlayerNamePlate_C_Repinterrupt final
{
public:
	struct FSBInterruptQuestPlayInfo              InPlayInfo;                                        // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_Repinterrupt) == 0x000008, "Wrong alignment on PlayerNamePlate_C_Repinterrupt");
static_assert(sizeof(PlayerNamePlate_C_Repinterrupt) == 0x000018, "Wrong size on PlayerNamePlate_C_Repinterrupt");
static_assert(offsetof(PlayerNamePlate_C_Repinterrupt, InPlayInfo) == 0x000000, "Member 'PlayerNamePlate_C_Repinterrupt::InPlayInfo' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.Leaveout
// 0x0008 (0x0008 - 0x0000)
struct PlayerNamePlate_C_Leaveout final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_Leaveout) == 0x000004, "Wrong alignment on PlayerNamePlate_C_Leaveout");
static_assert(sizeof(PlayerNamePlate_C_Leaveout) == 0x000008, "Wrong size on PlayerNamePlate_C_Leaveout");
static_assert(offsetof(PlayerNamePlate_C_Leaveout, InQuestId) == 0x000000, "Member 'PlayerNamePlate_C_Leaveout::InQuestId' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.JoinIninterrupt
// 0x0010 (0x0010 - 0x0000)
struct PlayerNamePlate_C_JoinIninterrupt final
{
public:
	class USBPlayerInterruptQuestComponent*       InComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInFirst;                                          // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_JoinIninterrupt) == 0x000008, "Wrong alignment on PlayerNamePlate_C_JoinIninterrupt");
static_assert(sizeof(PlayerNamePlate_C_JoinIninterrupt) == 0x000010, "Wrong size on PlayerNamePlate_C_JoinIninterrupt");
static_assert(offsetof(PlayerNamePlate_C_JoinIninterrupt, InComponent) == 0x000000, "Member 'PlayerNamePlate_C_JoinIninterrupt::InComponent' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_JoinIninterrupt, bInFirst) == 0x000008, "Member 'PlayerNamePlate_C_JoinIninterrupt::bInFirst' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.InAwake
// 0x0008 (0x0008 - 0x0000)
struct PlayerNamePlate_C_InAwake final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_InAwake) == 0x000004, "Wrong alignment on PlayerNamePlate_C_InAwake");
static_assert(sizeof(PlayerNamePlate_C_InAwake) == 0x000008, "Wrong size on PlayerNamePlate_C_InAwake");
static_assert(offsetof(PlayerNamePlate_C_InAwake, InQuestId) == 0x000000, "Member 'PlayerNamePlate_C_InAwake::InQuestId' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetAchievementSelected
// 0x0004 (0x0004 - 0x0000)
struct PlayerNamePlate_C_SetAchievementSelected final
{
public:
	int32                                         InAchievementSelected;                             // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetAchievementSelected) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetAchievementSelected");
static_assert(sizeof(PlayerNamePlate_C_SetAchievementSelected) == 0x000004, "Wrong size on PlayerNamePlate_C_SetAchievementSelected");
static_assert(offsetof(PlayerNamePlate_C_SetAchievementSelected, InAchievementSelected) == 0x000000, "Member 'PlayerNamePlate_C_SetAchievementSelected::InAchievementSelected' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.Bind TeamTag
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_Bind_TeamTag final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_Bind_TeamTag) == 0x000001, "Wrong alignment on PlayerNamePlate_C_Bind_TeamTag");
static_assert(sizeof(PlayerNamePlate_C_Bind_TeamTag) == 0x000001, "Wrong size on PlayerNamePlate_C_Bind_TeamTag");
static_assert(offsetof(PlayerNamePlate_C_Bind_TeamTag, bIsShow) == 0x000000, "Member 'PlayerNamePlate_C_Bind_TeamTag::bIsShow' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.OnChangeNamePlateOption
// 0x0001 (0x0001 - 0x0000)
struct PlayerNamePlate_C_OnChangeNamePlateOption final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_OnChangeNamePlateOption) == 0x000001, "Wrong alignment on PlayerNamePlate_C_OnChangeNamePlateOption");
static_assert(sizeof(PlayerNamePlate_C_OnChangeNamePlateOption) == 0x000001, "Wrong size on PlayerNamePlate_C_OnChangeNamePlateOption");
static_assert(offsetof(PlayerNamePlate_C_OnChangeNamePlateOption, bIsShow) == 0x000000, "Member 'PlayerNamePlate_C_OnChangeNamePlateOption::bIsShow' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.Update Prev Life Gauge BP
// 0x0008 (0x0008 - 0x0000)
struct PlayerNamePlate_C_Update_Prev_Life_Gauge_BP final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_ItplSpeed;                                   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_Update_Prev_Life_Gauge_BP) == 0x000004, "Wrong alignment on PlayerNamePlate_C_Update_Prev_Life_Gauge_BP");
static_assert(sizeof(PlayerNamePlate_C_Update_Prev_Life_Gauge_BP) == 0x000008, "Wrong size on PlayerNamePlate_C_Update_Prev_Life_Gauge_BP");
static_assert(offsetof(PlayerNamePlate_C_Update_Prev_Life_Gauge_BP, DeltaTime) == 0x000000, "Member 'PlayerNamePlate_C_Update_Prev_Life_Gauge_BP::DeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Update_Prev_Life_Gauge_BP, Param_ItplSpeed) == 0x000004, "Member 'PlayerNamePlate_C_Update_Prev_Life_Gauge_BP::Param_ItplSpeed' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetLifeGaugeCurTintColor
// 0x0010 (0x0010 - 0x0000)
struct PlayerNamePlate_C_SetLifeGaugeCurTintColor final
{
public:
	struct FLinearColor                           TintColor;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetLifeGaugeCurTintColor) == 0x000004, "Wrong alignment on PlayerNamePlate_C_SetLifeGaugeCurTintColor");
static_assert(sizeof(PlayerNamePlate_C_SetLifeGaugeCurTintColor) == 0x000010, "Wrong size on PlayerNamePlate_C_SetLifeGaugeCurTintColor");
static_assert(offsetof(PlayerNamePlate_C_SetLifeGaugeCurTintColor, TintColor) == 0x000000, "Member 'PlayerNamePlate_C_SetLifeGaugeCurTintColor::TintColor' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.CursorInOutAnim
// 0x0018 (0x0018 - 0x0000)
struct PlayerNamePlate_C_CursorInOutAnim final
{
public:
	bool                                          bin;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4542[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_CursorInOutAnim) == 0x000008, "Wrong alignment on PlayerNamePlate_C_CursorInOutAnim");
static_assert(sizeof(PlayerNamePlate_C_CursorInOutAnim) == 0x000018, "Wrong size on PlayerNamePlate_C_CursorInOutAnim");
static_assert(offsetof(PlayerNamePlate_C_CursorInOutAnim, bin) == 0x000000, "Member 'PlayerNamePlate_C_CursorInOutAnim::bin' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_CursorInOutAnim, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'PlayerNamePlate_C_CursorInOutAnim::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_CursorInOutAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'PlayerNamePlate_C_CursorInOutAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.IsInteractionUIVisibility
// 0x0020 (0x0020 - 0x0000)
struct PlayerNamePlate_C_IsInteractionUIVisibility final
{
public:
	bool                                          IsVisibilty;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4543[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCursorMode_ReturnValue;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerNamePlate_C_IsInteractionUIVisibility) == 0x000008, "Wrong alignment on PlayerNamePlate_C_IsInteractionUIVisibility");
static_assert(sizeof(PlayerNamePlate_C_IsInteractionUIVisibility) == 0x000020, "Wrong size on PlayerNamePlate_C_IsInteractionUIVisibility");
static_assert(offsetof(PlayerNamePlate_C_IsInteractionUIVisibility, IsVisibilty) == 0x000000, "Member 'PlayerNamePlate_C_IsInteractionUIVisibility::IsVisibilty' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_IsInteractionUIVisibility, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'PlayerNamePlate_C_IsInteractionUIVisibility::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_IsInteractionUIVisibility, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000010, "Member 'PlayerNamePlate_C_IsInteractionUIVisibility::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_IsInteractionUIVisibility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerNamePlate_C_IsInteractionUIVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_IsInteractionUIVisibility, CallFunc_IsCursorMode_ReturnValue) == 0x000019, "Member 'PlayerNamePlate_C_IsInteractionUIVisibility::CallFunc_IsCursorMode_ReturnValue' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.UpdateFriendIcon
// 0x0010 (0x0010 - 0x0000)
struct PlayerNamePlate_C_UpdateFriendIcon final
{
public:
	TArray<struct FPlayerProfileSummaryData>      InPlayerProfileSummaryData;                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerNamePlate_C_UpdateFriendIcon) == 0x000008, "Wrong alignment on PlayerNamePlate_C_UpdateFriendIcon");
static_assert(sizeof(PlayerNamePlate_C_UpdateFriendIcon) == 0x000010, "Wrong size on PlayerNamePlate_C_UpdateFriendIcon");
static_assert(offsetof(PlayerNamePlate_C_UpdateFriendIcon, InPlayerProfileSummaryData) == 0x000000, "Member 'PlayerNamePlate_C_UpdateFriendIcon::InPlayerProfileSummaryData' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.SetupBuffIcon
// 0x0028 (0x0028 - 0x0000)
struct PlayerNamePlate_C_SetupBuffIcon final
{
public:
	class ASBCharacter*                           InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4544[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleStatusInterface> CallFunc_GetBattleStatusComponent_self_CastInput;  // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBBattleStatusComponent*               CallFunc_GetBattleStatusComponent_ReturnValue;     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_SetupBuffIcon) == 0x000008, "Wrong alignment on PlayerNamePlate_C_SetupBuffIcon");
static_assert(sizeof(PlayerNamePlate_C_SetupBuffIcon) == 0x000028, "Wrong size on PlayerNamePlate_C_SetupBuffIcon");
static_assert(offsetof(PlayerNamePlate_C_SetupBuffIcon, InCharacter) == 0x000000, "Member 'PlayerNamePlate_C_SetupBuffIcon::InCharacter' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_SetupBuffIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'PlayerNamePlate_C_SetupBuffIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_SetupBuffIcon, CallFunc_GetBattleStatusComponent_self_CastInput) == 0x000010, "Member 'PlayerNamePlate_C_SetupBuffIcon::CallFunc_GetBattleStatusComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_SetupBuffIcon, CallFunc_GetBattleStatusComponent_ReturnValue) == 0x000020, "Member 'PlayerNamePlate_C_SetupBuffIcon::CallFunc_GetBattleStatusComponent_ReturnValue' has a wrong offset!");

// Function PlayerNamePlate.PlayerNamePlate_C.Get Resurrection Remain Time Rate
// 0x0048 (0x0048 - 0x0000)
struct PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate final
{
public:
	float                                         Rate;                                              // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4545[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4546[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetResurrectionTime_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4547[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4548[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerResurrectionComponent*         CallFunc_GetPlayerResurrectionComponent_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4549[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate) == 0x000008, "Wrong alignment on PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate");
static_assert(sizeof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate) == 0x000048, "Wrong size on PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, Rate) == 0x000000, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::Rate' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_GetPlayerManager_ReturnValue) == 0x000008, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000010, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_GetResurrectionTime_ReturnValue) == 0x000018, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_GetResurrectionTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00001C, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_GetPlayerResurrectionComponent_ReturnValue) == 0x000030, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_GetPlayerResurrectionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00003C, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000044, "Member 'PlayerNamePlate_C_Get_Resurrection_Remain_Time_Rate::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");

}

