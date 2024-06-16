#pragma once

 

// Package: OptionMenu

#include "Basic.hpp"

#include "EOptionMenuItemType_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function OptionMenu.OptionMenu_C.ExecuteUbergraph_OptionMenu
// 0x0610 (0x0610 - 0x0000)
struct OptionMenu_C_ExecuteUbergraph_OptionMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B2E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ButtonId)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B2F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B30[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B31[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B32[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_2;      // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_2;   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B33[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_3;      // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_3;   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B34[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBKeyConfigAction                            K2Node_Event_QuickAccess;                          // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B35[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_KeyconfigActionToBookmark_ReturnValue1;   // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue;          // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChangedItem_bChanged;                   // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChangedItem_bChanged_1;                 // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B36[0x2];                                     // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ButtonId;                       // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B37[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsEditMode;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B38[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBBattleHUD*                           K2Node_DynamicCast_AsSBBattle_HUD;                 // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B39[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOptionHUDInterface> CallFunc_GetOptionLayoutableHUD_self_CastInput;    // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUserWidget*                            CallFunc_GetOptionLayoutableHUD_ReturnValue;       // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B3A[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULayoutableHUD_C*                       K2Node_DynamicCast_AsLayoutable_HUD;               // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B3B[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x018C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B3C[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x01A4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x01B4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Damage, struct FSBDamageEvent& DamageEvent, class AActor* DamageCauser, class AActor* Myself)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6B3D[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B3E[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon_1;       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B3F[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                           CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x022A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B40[0x5];                                     // 0x022B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B41[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_6;            // 0x0244(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6B42[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bForce)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0270(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_4;                     // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B43[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B44[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetCommandMenuTutorialHelpID_ReturnValue; // 0x02A8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B45[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B46[0x6];                                     // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue_1;        // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B47[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B48[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_3;           // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B49[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_3;       // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x0308(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x0318(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_4;           // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4A[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_4;       // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_5;           // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4B[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_5;       // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServerSaveDataLoaded_ReturnValue;       // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4C[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x0354(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6B4D[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bForce;                         // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4E[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B4F[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B50[0x6];                                     // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid_1;               // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B51[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue_1;           // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue_1;             // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B52[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x03CC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsClosable_CanClose;                      // 0x03DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B53[0x3];                                     // 0x03DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Damage;                         // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B54[0x4];                                     // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageEvent                         K2Node_CustomEvent_DamageEvent;                    // 0x03E8(0x01A0)(ConstParm, ContainsInstancedReference)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Myself;                         // 0x0590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x05A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x05A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B55[0x7];                                     // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue_2;        // 0x05B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B56[0x7];                                     // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface_1;   // 0x05C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x05D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B57[0x6];                                     // 0x05DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface_2;   // 0x05E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x05F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            CallFunc_BookmarkTypeToCommandMenuType_ReturnValue; // 0x05F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x05F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(bool bisEditMode)>             K2Node_CreateDelegate_OutputDelegate_13;           // 0x05F4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6B58[0x4];                                     // 0x0604(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_C_ExecuteUbergraph_OptionMenu) == 0x000008, "Wrong alignment on OptionMenu_C_ExecuteUbergraph_OptionMenu");
static_assert(sizeof(OptionMenu_C_ExecuteUbergraph_OptionMenu) == 0x000610, "Wrong size on OptionMenu_C_ExecuteUbergraph_OptionMenu");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, EntryPoint) == 0x000000, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_IsValid) == 0x000004, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_PlaySE_ReturnValue) == 0x000010, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_PlaySE_ReturnValue_1) == 0x000024, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_OutValue) == 0x000030, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000040, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000041, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000048, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000058, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_BooleanOR_ReturnValue) == 0x000059, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000070, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000080, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_OutValue_2) == 0x000088, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_OutValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_ReturnValue_2) == 0x000098, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000A0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_OutValue_3) == 0x0000B0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_OutValue_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameConfigValueString_ReturnValue_3) == 0x0000C0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameConfigValueString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000E0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000F0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_Result) == 0x000100, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000101, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_Event_QuickAccess) == 0x000102, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_Event_QuickAccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_KeyconfigActionToBookmark_ReturnValue1) == 0x000108, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_KeyconfigActionToBookmark_ReturnValue1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetBookMarkTypeNone_ReturnValue) == 0x000118, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetBookMarkTypeNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000128, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsChangedItem_bChanged) == 0x000129, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsChangedItem_bChanged' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_SwitchEnum_CmpSuccess_1) == 0x00012A, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_SwitchEnum_CmpSuccess_2) == 0x00012B, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsChangedItem_bChanged_1) == 0x00012C, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsChangedItem_bChanged_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_SwitchEnum_CmpSuccess_3) == 0x00012D, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_ButtonId) == 0x000130, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_SwitchInteger_CmpSuccess) == 0x000134, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000138, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetHUD_ReturnValue) == 0x000140, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_bIsEditMode) == 0x000148, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_bIsEditMode' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBBattle_HUD) == 0x000150, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBBattle_HUD' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetOptionLayoutableHUD_self_CastInput) == 0x000160, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetOptionLayoutableHUD_self_CastInput' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetOptionLayoutableHUD_ReturnValue) == 0x000170, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetOptionLayoutableHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_DoesImplementInterface_ReturnValue) == 0x000178, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsLayoutable_HUD) == 0x000180, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsLayoutable_HUD' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_1) == 0x000188, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00018C, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_PlaySE_ReturnValue_2) == 0x00019C, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsValid_ReturnValue) == 0x0001A0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001A4, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001B4, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001C4, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001D4, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameState_ReturnValue) == 0x0001E8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameState_ReturnValue_1) == 0x0001F0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x0001F8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_2) == 0x000200, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon_1) == 0x000208, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_3) == 0x000210, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_PlaySE_ReturnValue_3) == 0x000214, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetOwningLocalPlayer_ReturnValue) == 0x000218, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetOwningLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000220, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsValid_ReturnValue_1) == 0x000228, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsValid_ReturnValue_2) == 0x000229, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsValid_ReturnValue_3) == 0x00022A, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x000230, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_4) == 0x000240, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x000244, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000258, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x000260, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x000270, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000280, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_PlaySE_ReturnValue_4) == 0x000288, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_PlaySE_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_Create_ReturnValue) == 0x000290, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsValid_ReturnValue_4) == 0x000298, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetUIManager_IsValid) == 0x000299, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetUIManager_ReturnValue) == 0x0002A0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetCommandMenuTutorialHelpID_ReturnValue) == 0x0002A8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetCommandMenuTutorialHelpID_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetUIManager_IsValid_1) == 0x0002B0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetUIManager_ReturnValue_1) == 0x0002B8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_NotEqual_NameName_ReturnValue) == 0x0002C0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_BooleanAND_ReturnValue) == 0x0002C1, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetBookMarkTypeNone_ReturnValue_1) == 0x0002C8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetBookMarkTypeNone_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0002D8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0002E0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0002E8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0002F0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_IsValid_3) == 0x0002F8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_IsValid_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_ReturnValue_3) == 0x000300, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x000308, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_10) == 0x000318, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_IsValid_4) == 0x000328, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_IsValid_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_ReturnValue_4) == 0x000330, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000338, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_IsValid_5) == 0x000340, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_IsValid_5' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetConfigSaveManager_ReturnValue_5) == 0x000348, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetConfigSaveManager_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsServerSaveDataLoaded_ReturnValue) == 0x000350, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsServerSaveDataLoaded_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_11) == 0x000354, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000368, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_bForce) == 0x000370, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_bForce' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000378, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_5) == 0x000380, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000388, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000390, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_6) == 0x000398, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameSingleton_IsValid) == 0x000399, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameSingleton_ReturnValue) == 0x0003A0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetDemoManager_ReturnValue) == 0x0003A8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameSingleton_IsValid_1) == 0x0003B0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameSingleton_IsValid_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetGameSingleton_ReturnValue_1) == 0x0003B8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetGameSingleton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetDemoManager_ReturnValue_1) == 0x0003C0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetDemoManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, Temp_byte_Variable) == 0x0003C8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_12) == 0x0003CC, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsClosable_CanClose) == 0x0003DC, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsClosable_CanClose' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_Damage) == 0x0003E0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_DamageEvent) == 0x0003E8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_DamageEvent' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_DamageCauser) == 0x000588, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_Myself) == 0x000590, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_Myself' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_Sender) == 0x000598, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CustomEvent_Param) == 0x0005A0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_IsAnyAnimationPlaying_ReturnValue) == 0x0005A8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_IsAnyAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetBookMarkTypeNone_ReturnValue_2) == 0x0005B0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetBookMarkTypeNone_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, Temp_byte_Variable_1) == 0x0005C0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface_1) == 0x0005C8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_7) == 0x0005D8, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, Temp_bool_Variable) == 0x0005D9, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface_2) == 0x0005E0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_DynamicCast_bSuccess_8) == 0x0005F0, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_Select_Default) == 0x0005F1, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_BookmarkTypeToCommandMenuType_ReturnValue) == 0x0005F2, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_BookmarkTypeToCommandMenuType_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0005F3, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, K2Node_CreateDelegate_OutputDelegate_13) == 0x0005F4, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_ExecuteUbergraph_OptionMenu, CallFunc_GetPlayerController_ReturnValue_2) == 0x000608, "Member 'OptionMenu_C_ExecuteUbergraph_OptionMenu::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.OnCloseEvent
// 0x0010 (0x0010 - 0x0000)
struct OptionMenu_C_OnCloseEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_C_OnCloseEvent) == 0x000008, "Wrong alignment on OptionMenu_C_OnCloseEvent");
static_assert(sizeof(OptionMenu_C_OnCloseEvent) == 0x000010, "Wrong size on OptionMenu_C_OnCloseEvent");
static_assert(offsetof(OptionMenu_C_OnCloseEvent, Sender) == 0x000000, "Member 'OptionMenu_C_OnCloseEvent::Sender' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_OnCloseEvent, Param) == 0x000008, "Member 'OptionMenu_C_OnCloseEvent::Param' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.OnCheckDead
// 0x01B8 (0x01B8 - 0x0000)
struct OptionMenu_C_OnCheckDead final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B59[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageEvent                         DamageEvent;                                       // 0x0008(0x01A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                 DamageCauser;                                      // 0x01A8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Myself;                                            // 0x01B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_C_OnCheckDead) == 0x000008, "Wrong alignment on OptionMenu_C_OnCheckDead");
static_assert(sizeof(OptionMenu_C_OnCheckDead) == 0x0001B8, "Wrong size on OptionMenu_C_OnCheckDead");
static_assert(offsetof(OptionMenu_C_OnCheckDead, Damage) == 0x000000, "Member 'OptionMenu_C_OnCheckDead::Damage' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_OnCheckDead, DamageEvent) == 0x000008, "Member 'OptionMenu_C_OnCheckDead::DamageEvent' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_OnCheckDead, DamageCauser) == 0x0001A8, "Member 'OptionMenu_C_OnCheckDead::DamageCauser' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_OnCheckDead, Myself) == 0x0001B0, "Member 'OptionMenu_C_OnCheckDead::Myself' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.TermCommandMenuEvent
// 0x0001 (0x0001 - 0x0000)
struct OptionMenu_C_TermCommandMenuEvent final
{
public:
	bool                                          bForce;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_C_TermCommandMenuEvent) == 0x000001, "Wrong alignment on OptionMenu_C_TermCommandMenuEvent");
static_assert(sizeof(OptionMenu_C_TermCommandMenuEvent) == 0x000001, "Wrong size on OptionMenu_C_TermCommandMenuEvent");
static_assert(offsetof(OptionMenu_C_TermCommandMenuEvent, bForce) == 0x000000, "Member 'OptionMenu_C_TermCommandMenuEvent::bForce' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.OnChangeEditMode
// 0x0001 (0x0001 - 0x0000)
struct OptionMenu_C_OnChangeEditMode final
{
public:
	bool                                          bisEditMode;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_C_OnChangeEditMode) == 0x000001, "Wrong alignment on OptionMenu_C_OnChangeEditMode");
static_assert(sizeof(OptionMenu_C_OnChangeEditMode) == 0x000001, "Wrong size on OptionMenu_C_OnChangeEditMode");
static_assert(offsetof(OptionMenu_C_OnChangeEditMode, bisEditMode) == 0x000000, "Member 'OptionMenu_C_OnChangeEditMode::bisEditMode' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.OnClickedOptionCategory
// 0x0004 (0x0004 - 0x0000)
struct OptionMenu_C_OnClickedOptionCategory final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_C_OnClickedOptionCategory) == 0x000004, "Wrong alignment on OptionMenu_C_OnClickedOptionCategory");
static_assert(sizeof(OptionMenu_C_OnClickedOptionCategory) == 0x000004, "Wrong size on OptionMenu_C_OnClickedOptionCategory");
static_assert(offsetof(OptionMenu_C_OnClickedOptionCategory, ButtonId) == 0x000000, "Member 'OptionMenu_C_OnClickedOptionCategory::ButtonId' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.OnPress_QuickAccess_1
// 0x0001 (0x0001 - 0x0000)
struct OptionMenu_C_OnPress_QuickAccess_1 final
{
public:
	ESBKeyConfigAction                            QuickAccess;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_C_OnPress_QuickAccess_1) == 0x000001, "Wrong alignment on OptionMenu_C_OnPress_QuickAccess_1");
static_assert(sizeof(OptionMenu_C_OnPress_QuickAccess_1) == 0x000001, "Wrong size on OptionMenu_C_OnPress_QuickAccess_1");
static_assert(offsetof(OptionMenu_C_OnPress_QuickAccess_1, QuickAccess) == 0x000000, "Member 'OptionMenu_C_OnPress_QuickAccess_1::QuickAccess' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.DialogClose
// 0x0001 (0x0001 - 0x0000)
struct OptionMenu_C_DialogClose final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_C_DialogClose) == 0x000001, "Wrong alignment on OptionMenu_C_DialogClose");
static_assert(sizeof(OptionMenu_C_DialogClose) == 0x000001, "Wrong size on OptionMenu_C_DialogClose");
static_assert(offsetof(OptionMenu_C_DialogClose, Result) == 0x000000, "Member 'OptionMenu_C_DialogClose::Result' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.SetSelectedItem
// 0x00B8 (0x00B8 - 0x0000)
struct OptionMenu_C_SetSelectedItem final
{
public:
	EOptionMenuItemType                           InSelectedItemType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B5A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                SelectedBtnItem;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOptionMenuItemType                           Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5B[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5C[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B5D[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetGameConfigValueString_OutValue;        // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue;     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5E[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetGameConfigValueString_OutValue_1;      // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameConfigValueString_ReturnValue_1;   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B5F[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B60[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OptionMenu_C_SetSelectedItem) == 0x000008, "Wrong alignment on OptionMenu_C_SetSelectedItem");
static_assert(sizeof(OptionMenu_C_SetSelectedItem) == 0x0000B8, "Wrong size on OptionMenu_C_SetSelectedItem");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, InSelectedItemType) == 0x000000, "Member 'OptionMenu_C_SetSelectedItem::InSelectedItemType' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, SelectedBtnItem) == 0x000008, "Member 'OptionMenu_C_SetSelectedItem::SelectedBtnItem' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_byte_Variable) == 0x000010, "Member 'OptionMenu_C_SetSelectedItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000011, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000012, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000013, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'OptionMenu_C_SetSelectedItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_BooleanAND_ReturnValue) == 0x000015, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable) == 0x000018, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_BooleanAND_ReturnValue_1) == 0x00001C, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable_1) == 0x000020, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable_2) == 0x000024, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable_3) == 0x000028, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable_4) == 0x00002C, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable_5) == 0x000030, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable_6) == 0x000034, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, Temp_int_Variable_7) == 0x000038, "Member 'OptionMenu_C_SetSelectedItem::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_GetGameConfigValueString_OutValue) == 0x000040, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_GetGameConfigValueString_OutValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_GetGameConfigValueString_ReturnValue) == 0x000050, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_GetGameConfigValueString_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, K2Node_Select_Default) == 0x000054, "Member 'OptionMenu_C_SetSelectedItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_GetGameConfigValueString_OutValue_1) == 0x000068, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_GetGameConfigValueString_OutValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_GetGameConfigValueString_ReturnValue_1) == 0x000078, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_GetGameConfigValueString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000080, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'OptionMenu_C_SetSelectedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, K2Node_MakeStruct_LinearColor) == 0x000094, "Member 'OptionMenu_C_SetSelectedItem::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetSelectedItem, K2Node_MakeStruct_LinearColor_1) == 0x0000A4, "Member 'OptionMenu_C_SetSelectedItem::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.IsChangedItem
// 0x0003 (0x0003 - 0x0000)
struct OptionMenu_C_IsChangedItem final
{
public:
	bool                                          bChanged;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChangeable_IsChanged;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_C_IsChangedItem) == 0x000001, "Wrong alignment on OptionMenu_C_IsChangedItem");
static_assert(sizeof(OptionMenu_C_IsChangedItem) == 0x000003, "Wrong size on OptionMenu_C_IsChangedItem");
static_assert(offsetof(OptionMenu_C_IsChangedItem, bChanged) == 0x000000, "Member 'OptionMenu_C_IsChangedItem::bChanged' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_IsChangedItem, CallFunc_IsChangeable_IsChanged) == 0x000001, "Member 'OptionMenu_C_IsChangedItem::CallFunc_IsChangeable_IsChanged' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_IsChangedItem, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'OptionMenu_C_IsChangedItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.IsClosable
// 0x0003 (0x0003 - 0x0000)
struct OptionMenu_C_IsClosable final
{
public:
	bool                                          CanClose;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsClosable_IsClose;                       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_C_IsClosable) == 0x000001, "Wrong alignment on OptionMenu_C_IsClosable");
static_assert(sizeof(OptionMenu_C_IsClosable) == 0x000003, "Wrong size on OptionMenu_C_IsClosable");
static_assert(offsetof(OptionMenu_C_IsClosable, CanClose) == 0x000000, "Member 'OptionMenu_C_IsClosable::CanClose' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_IsClosable, CallFunc_IsClosable_IsClose) == 0x000001, "Member 'OptionMenu_C_IsClosable::CallFunc_IsClosable_IsClose' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_IsClosable, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'OptionMenu_C_IsClosable::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function OptionMenu.OptionMenu_C.SetCloseState
// 0x0002 (0x0002 - 0x0000)
struct OptionMenu_C_SetCloseState final
{
public:
	bool                                          Close;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OptionMenu_C_SetCloseState) == 0x000001, "Wrong alignment on OptionMenu_C_SetCloseState");
static_assert(sizeof(OptionMenu_C_SetCloseState) == 0x000002, "Wrong size on OptionMenu_C_SetCloseState");
static_assert(offsetof(OptionMenu_C_SetCloseState, Close) == 0x000000, "Member 'OptionMenu_C_SetCloseState::Close' has a wrong offset!");
static_assert(offsetof(OptionMenu_C_SetCloseState, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'OptionMenu_C_SetCloseState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

