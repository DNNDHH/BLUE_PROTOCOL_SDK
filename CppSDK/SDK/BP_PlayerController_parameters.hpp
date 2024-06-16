#pragma once

 

// Package: BP_PlayerController

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
// 0x0540 (0x0540 - 0x0000)
struct BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82E1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E2[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_82E3[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_1;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E4[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BattleHUD_C*                        K2Node_DynamicCast_AsBP_Battle_HUD;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E5[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBBattleContentsHUD*                   CallFunc_GetBattleContentsHUD_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E6[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           K2Node_Event_DebugMenu;                            // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E7[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E8[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_2;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface;   // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82E9[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82EA[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x00B4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_CustomEvent_Slot;                           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidSimplycityPartyImprovement_ReturnValue; // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimplycityPartyKeyPress_ReturnValue;    // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82EB[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue; // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82EC[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82ED[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_3;                     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBNotifyMessageInterface> K2Node_DynamicCast_AsSBNotify_Message_Interface_1; // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82EE[0x5];                                     // 0x0103(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_GainedAchievementIdList;        // 0x0108(0x0010)(ConstParm, ReferenceParm)
	class UUMG_MatchingMenu_C*                    K2Node_CustomEvent_Sender_1;                       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82EF[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_C*                    CallFunc_Create_ReturnValue;                       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InitDungeonId;                        // 0x0130(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInteract;                            // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F0[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InitDungeonId;                  // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInteract;                      // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x0145(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0146(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F1[0x1];                                     // 0x0147(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu;                   // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F2[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_4;                     // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F3[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_1;             // 0x0168(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F4[0x5];                                     // 0x017B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_Event_NewOwnerPlayer;                       // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F5[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F6[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x01B0(0x0018)()
	int32                                         CallFunc_Array_Get_Item;                           // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisKeyEvent_AxisValue_1;              // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_InputAxisKeyEvent_AxisValue;                // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x01D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F7[0x1];                                     // 0x01D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBInteractionSwBase*                   K2Node_CustomEvent_InteractionTarget;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Other_Actor;                    // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               K2Node_CustomEvent_View_Rotation;                  // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F8[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_5;                     // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSimpleMode_Result;                      // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82F9[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_2;             // 0x0210(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsChatWindowActive_Active;                // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82FA[0x6];                                     // 0x0222(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_3;             // 0x0228(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimpleMode_Result_1;                    // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82FB[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_CustomEvent_PlayerCharacter;                // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameMode*                            K2Node_DynamicCast_AsSBGame_Mode;                  // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82FC[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerFreeBuffPointComponent*        CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue; // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDebug_ReturnValue;                      // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82FD[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;          // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0282(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82FE[0x5];                                     // 0x0283(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_6;                     // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_7;                     // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_4;             // 0x0298(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_82FF[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_5;             // 0x02B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8300[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_8;                     // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_6;             // 0x02D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8301[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x02E4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8302[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_9;                     // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_7;             // 0x0300(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8303[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_10;                    // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0320(0x0010)(ZeroConstructor, NoDestructor)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_8;             // 0x0330(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8304[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0348(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8305[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_11;                    // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_9;             // 0x0360(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8306[0x6];                                     // 0x0372(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_12;                    // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0380(0x0010)(ZeroConstructor, NoDestructor)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_10;            // 0x0390(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_19;                    // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8307[0x6];                                     // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USystemMessage_C*                       CallFunc_Create_ReturnValue_1;                     // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_13;                    // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_11;            // 0x03B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_20;                    // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x03C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8308[0x6];                                     // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_14;                    // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_MatchingMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x03D8(0x0010)(ZeroConstructor, NoDestructor)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_12;            // 0x03E8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_21;                    // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditMap_Result;                         // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x03FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8309[0x5];                                     // 0x03FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_15;                    // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_13;            // 0x0408(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_22;                    // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_830A[0x6];                                     // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_16;                    // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_14;            // 0x0428(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_23;                    // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_830B[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_17;                    // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_15;            // 0x0448(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_24;                    // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_830C[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<int32>& GainedAchievementIdList)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x045C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_830D[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_18;                    // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_19;                    // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_16;            // 0x0480(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_25;                    // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_830E[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_17;            // 0x0498(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_26;                    // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_830F[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_20;                    // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_21;                    // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_18;            // 0x04C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_27;                    // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8310[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_19;            // 0x04D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_28;                    // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8311[0x7];                                     // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_22;                    // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, ESBPlayerPassiveImagineSlotType Slot)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x04F8(0x0010)(ZeroConstructor, NoDestructor)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_20;            // 0x0508(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_29;                    // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8312[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue_23;                    // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD_21;            // 0x0528(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_30;                    // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController) == 0x000008, "Wrong alignment on BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController");
static_assert(sizeof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController) == 0x000540, "Wrong size on BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, EntryPoint) == 0x000000, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue) == 0x000008, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000010, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_1) == 0x000030, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBP_Battle_HUD) == 0x000040, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBP_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetBattleContentsHUD_ReturnValue) == 0x000050, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetBattleContentsHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_Event_DebugMenu) == 0x000060, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_Event_DebugMenu' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsDedicatedServer_ReturnValue) == 0x000068, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetPlayerController_ReturnValue) == 0x000070, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000078, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_2) == 0x000088, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsSBNotify_Message_Interface) == 0x000090, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsSBNotify_Message_Interface' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_3) == 0x0000A0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsSBPlayer_State) == 0x0000A8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_4) == 0x0000B0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_2) == 0x0000B1, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_InRetCode) == 0x0000B4, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_Slot) == 0x0000B8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_Slot' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_ValidSimplycityPartyImprovement_ReturnValue) == 0x0000B9, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_ValidSimplycityPartyImprovement_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsSimplycityPartyKeyPress_ReturnValue) == 0x0000BA, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsSimplycityPartyKeyPress_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue) == 0x0000BC, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetSimplycityPartyKeyPressTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, Temp_bool_Has_Been_Initd_Variable) == 0x0000C0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0000C1, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000C8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000D0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_5) == 0x0000D8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_3) == 0x0000E0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x0000E8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsSBNotify_Message_Interface_1) == 0x0000F0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsSBNotify_Message_Interface_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_6) == 0x000100, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_3) == 0x000101, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_4) == 0x000102, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_GainedAchievementIdList) == 0x000108, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_GainedAchievementIdList' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_Sender_1) == 0x000118, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Array_Length_ReturnValue) == 0x000120, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Less_IntInt_ReturnValue) == 0x000124, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Create_ReturnValue) == 0x000128, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_Event_InitDungeonId) == 0x000130, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_Event_InitDungeonId' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_Event_bInteract) == 0x000138, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_Event_bInteract' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_InitDungeonId) == 0x00013C, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_InitDungeonId' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_bInteract) == 0x000144, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_bInteract' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x000145, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_5) == 0x000146, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsDebug_Menu) == 0x000148, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsDebug_Menu' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_7) == 0x000150, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_4) == 0x000158, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsVisible_ReturnValue) == 0x000160, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_1) == 0x000168, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_8) == 0x000178, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, Temp_bool_IsClosed_Variable) == 0x000179, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetDebugFunction_IsValid) == 0x00017A, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetDebugFunction_ReturnValue) == 0x000180, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_Event_NewOwnerPlayer) == 0x000188, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_Event_NewOwnerPlayer' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetBool_ReturnValue) == 0x000190, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000198, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0001A0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_9) == 0x0001A8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, Temp_int_Array_Index_Variable) == 0x0001AC, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_MakeLiteralText_ReturnValue) == 0x0001B0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Array_Get_Item) == 0x0001C8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_InputAxisKeyEvent_AxisValue_1) == 0x0001CC, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_InputAxisKeyEvent_AxisValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_InputAxisKeyEvent_AxisValue) == 0x0001D0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_InputAxisKeyEvent_AxisValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x0001D4, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_NotEqual_FloatFloat_ReturnValue_1) == 0x0001D5, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_NotEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_HasAuthority_ReturnValue) == 0x0001D6, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetPlayerController_ReturnValue_2) == 0x0001D8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_InteractionTarget) == 0x0001E0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_InteractionTarget' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_Other_Actor) == 0x0001E8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_View_Rotation) == 0x0001F0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_View_Rotation' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_5) == 0x000200, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsSimpleMode_Result) == 0x000208, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsSimpleMode_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_2) == 0x000210, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_10) == 0x000220, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsChatWindowActive_Active) == 0x000221, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsChatWindowActive_Active' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_3) == 0x000228, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_11) == 0x000238, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsSimpleMode_Result_1) == 0x000239, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsSimpleMode_Result_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_PlayerCharacter) == 0x000240, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_PlayerCharacter' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetGameMode_ReturnValue) == 0x000248, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsSBGame_Mode) == 0x000250, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsSBGame_Mode' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_12) == 0x000258, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue) == 0x000260, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetPlayerFreeBuffPointComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Add_FloatFloat_ReturnValue) == 0x000268, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsDebug_ReturnValue) == 0x00026C, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsDebug_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_Sender) == 0x000270, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CustomEvent_Param) == 0x000278, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x000280, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Not_PreBool_ReturnValue) == 0x000281, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Not_PreBool_ReturnValue_1) == 0x000282, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_6) == 0x000288, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_7) == 0x000290, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_4) == 0x000298, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_13) == 0x0002A8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_5) == 0x0002B0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_14) == 0x0002C0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_8) == 0x0002C8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_6) == 0x0002D0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_15) == 0x0002E0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CreateDelegate_OutputDelegate) == 0x0002E4, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_6) == 0x0002F4, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_9) == 0x0002F8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_7) == 0x000300, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_16) == 0x000310, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_7) == 0x000311, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_10) == 0x000318, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CreateDelegate_OutputDelegate_1) == 0x000320, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_8) == 0x000330, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_17) == 0x000340, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000348, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_8) == 0x000350, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_11) == 0x000358, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_9) == 0x000360, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_18) == 0x000370, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_9) == 0x000371, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_12) == 0x000378, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CreateDelegate_OutputDelegate_2) == 0x000380, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_10) == 0x000390, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_19) == 0x0003A0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_19' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_10) == 0x0003A1, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_Create_ReturnValue_1) == 0x0003A8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_13) == 0x0003B0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_11) == 0x0003B8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_20) == 0x0003C8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_20' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_11) == 0x0003C9, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_14) == 0x0003D0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CreateDelegate_OutputDelegate_3) == 0x0003D8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_12) == 0x0003E8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_21) == 0x0003F8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_21' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsEditMap_Result) == 0x0003F9, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsEditMap_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_12) == 0x0003FA, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_15) == 0x000400, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_13) == 0x000408, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_22) == 0x000418, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_22' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_IsValid_ReturnValue_13) == 0x000419, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_16) == 0x000420, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_14) == 0x000428, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_14' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_23) == 0x000438, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_23' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_17) == 0x000440, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_15) == 0x000448, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_15' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_24) == 0x000458, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_24' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CreateDelegate_OutputDelegate_4) == 0x00045C, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_18) == 0x000470, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_19) == 0x000478, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_16) == 0x000480, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_16' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_25) == 0x000490, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_25' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_17) == 0x000498, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_17' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_26) == 0x0004A8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_26' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_20) == 0x0004B0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_21) == 0x0004B8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_18) == 0x0004C0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_18' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_27) == 0x0004D0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_27' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_19) == 0x0004D8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_19' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_28) == 0x0004E8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_28' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_22) == 0x0004F0, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_CreateDelegate_OutputDelegate_5) == 0x0004F8, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_20) == 0x000508, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_20' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_29) == 0x000518, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_29' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, CallFunc_GetHUD_ReturnValue_23) == 0x000520, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::CallFunc_GetHUD_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_AsBPI_Battle_HUD_21) == 0x000528, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_AsBPI_Battle_HUD_21' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController, K2Node_DynamicCast_bSuccess_30) == 0x000538, "Member 'BP_PlayerController_C_ExecuteUbergraph_BP_PlayerController::K2Node_DynamicCast_bSuccess_30' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.DebugCmd_OpenCmdMenu
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerController_C_DebugCmd_OpenCmdMenu final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_DebugCmd_OpenCmdMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_DebugCmd_OpenCmdMenu");
static_assert(sizeof(BP_PlayerController_C_DebugCmd_OpenCmdMenu) == 0x000010, "Wrong size on BP_PlayerController_C_DebugCmd_OpenCmdMenu");
static_assert(offsetof(BP_PlayerController_C_DebugCmd_OpenCmdMenu, Sender) == 0x000000, "Member 'BP_PlayerController_C_DebugCmd_OpenCmdMenu::Sender' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_DebugCmd_OpenCmdMenu, Param) == 0x000008, "Member 'BP_PlayerController_C_DebugCmd_OpenCmdMenu::Param' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.PlayerTeleportWithDelay
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerController_C_PlayerTeleportWithDelay final
{
public:
	class ASBPlayerCharacter*                     PlayerCharacter;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_PlayerTeleportWithDelay) == 0x000008, "Wrong alignment on BP_PlayerController_C_PlayerTeleportWithDelay");
static_assert(sizeof(BP_PlayerController_C_PlayerTeleportWithDelay) == 0x000008, "Wrong size on BP_PlayerController_C_PlayerTeleportWithDelay");
static_assert(offsetof(BP_PlayerController_C_PlayerTeleportWithDelay, PlayerCharacter) == 0x000000, "Member 'BP_PlayerController_C_PlayerTeleportWithDelay::PlayerCharacter' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.Replicate Interaction SW Event
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerController_C_Replicate_Interaction_SW_Event final
{
public:
	class ASBInteractionSwBase*                   InteractionTarget;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other_Actor;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               View_Rotation;                                     // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_Replicate_Interaction_SW_Event) == 0x000008, "Wrong alignment on BP_PlayerController_C_Replicate_Interaction_SW_Event");
static_assert(sizeof(BP_PlayerController_C_Replicate_Interaction_SW_Event) == 0x000020, "Wrong size on BP_PlayerController_C_Replicate_Interaction_SW_Event");
static_assert(offsetof(BP_PlayerController_C_Replicate_Interaction_SW_Event, InteractionTarget) == 0x000000, "Member 'BP_PlayerController_C_Replicate_Interaction_SW_Event::InteractionTarget' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_Replicate_Interaction_SW_Event, Other_Actor) == 0x000008, "Member 'BP_PlayerController_C_Replicate_Interaction_SW_Event::Other_Actor' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_Replicate_Interaction_SW_Event, View_Rotation) == 0x000010, "Member 'BP_PlayerController_C_Replicate_Interaction_SW_Event::View_Rotation' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerController_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2) == 0x000004, "Wrong alignment on BP_PlayerController_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2");
static_assert(sizeof(BP_PlayerController_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2) == 0x000004, "Wrong size on BP_PlayerController_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2");
static_assert(offsetof(BP_PlayerController_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2, AxisValue) == 0x000000, "Member 'BP_PlayerController_C_InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2::AxisValue' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerController_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0 final
{
public:
	float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0) == 0x000004, "Wrong alignment on BP_PlayerController_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0");
static_assert(sizeof(BP_PlayerController_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0) == 0x000004, "Wrong size on BP_PlayerController_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0");
static_assert(offsetof(BP_PlayerController_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0, AxisValue) == 0x000000, "Member 'BP_PlayerController_C_InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0::AxisValue' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OnChangedSessionOwner
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerController_C_OnChangedSessionOwner final
{
public:
	class ASBPlayerState*                         NewOwnerPlayer;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OnChangedSessionOwner) == 0x000008, "Wrong alignment on BP_PlayerController_C_OnChangedSessionOwner");
static_assert(sizeof(BP_PlayerController_C_OnChangedSessionOwner) == 0x000008, "Wrong size on BP_PlayerController_C_OnChangedSessionOwner");
static_assert(offsetof(BP_PlayerController_C_OnChangedSessionOwner, NewOwnerPlayer) == 0x000000, "Member 'BP_PlayerController_C_OnChangedSessionOwner::NewOwnerPlayer' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.ShowMatchingMenuForBP
// 0x000C (0x000C - 0x0000)
struct BP_PlayerController_C_ShowMatchingMenuForBP final
{
public:
	class FName                                   InitDungeonId;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteract;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_ShowMatchingMenuForBP) == 0x000004, "Wrong alignment on BP_PlayerController_C_ShowMatchingMenuForBP");
static_assert(sizeof(BP_PlayerController_C_ShowMatchingMenuForBP) == 0x00000C, "Wrong size on BP_PlayerController_C_ShowMatchingMenuForBP");
static_assert(offsetof(BP_PlayerController_C_ShowMatchingMenuForBP, InitDungeonId) == 0x000000, "Member 'BP_PlayerController_C_ShowMatchingMenuForBP::InitDungeonId' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ShowMatchingMenuForBP, bInteract) == 0x000008, "Member 'BP_PlayerController_C_ShowMatchingMenuForBP::bInteract' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.ShowMatchingMenu
// 0x000C (0x000C - 0x0000)
struct BP_PlayerController_C_ShowMatchingMenu final
{
public:
	class FName                                   InitDungeonId;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInteract;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_ShowMatchingMenu) == 0x000004, "Wrong alignment on BP_PlayerController_C_ShowMatchingMenu");
static_assert(sizeof(BP_PlayerController_C_ShowMatchingMenu) == 0x00000C, "Wrong size on BP_PlayerController_C_ShowMatchingMenu");
static_assert(offsetof(BP_PlayerController_C_ShowMatchingMenu, InitDungeonId) == 0x000000, "Member 'BP_PlayerController_C_ShowMatchingMenu::InitDungeonId' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ShowMatchingMenu, bInteract) == 0x000008, "Member 'BP_PlayerController_C_ShowMatchingMenu::bInteract' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerController_C_CustomEvent final
{
public:
	class UUMG_MatchingMenu_C*                    Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_CustomEvent) == 0x000008, "Wrong alignment on BP_PlayerController_C_CustomEvent");
static_assert(sizeof(BP_PlayerController_C_CustomEvent) == 0x000008, "Wrong size on BP_PlayerController_C_CustomEvent");
static_assert(offsetof(BP_PlayerController_C_CustomEvent, Sender) == 0x000000, "Member 'BP_PlayerController_C_CustomEvent::Sender' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OnAchievementGainedDelegate_����
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerController_C_OnAchievementGainedDelegate_____ final
{
public:
	TArray<int32>                                 GainedAchievementIdList;                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_PlayerController_C_OnAchievementGainedDelegate_____) == 0x000008, "Wrong alignment on BP_PlayerController_C_OnAchievementGainedDelegate_____");
static_assert(sizeof(BP_PlayerController_C_OnAchievementGainedDelegate_____) == 0x000010, "Wrong size on BP_PlayerController_C_OnAchievementGainedDelegate_____");
static_assert(offsetof(BP_PlayerController_C_OnAchievementGainedDelegate_____, GainedAchievementIdList) == 0x000000, "Member 'BP_PlayerController_C_OnAchievementGainedDelegate_____::GainedAchievementIdList' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OnAdventurerRankUpdate
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerController_C_OnAdventurerRankUpdate final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               Slot;                                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OnAdventurerRankUpdate) == 0x000004, "Wrong alignment on BP_PlayerController_C_OnAdventurerRankUpdate");
static_assert(sizeof(BP_PlayerController_C_OnAdventurerRankUpdate) == 0x000008, "Wrong size on BP_PlayerController_C_OnAdventurerRankUpdate");
static_assert(offsetof(BP_PlayerController_C_OnAdventurerRankUpdate, InRetCode) == 0x000000, "Member 'BP_PlayerController_C_OnAdventurerRankUpdate::InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OnAdventurerRankUpdate, Slot) == 0x000004, "Member 'BP_PlayerController_C_OnAdventurerRankUpdate::Slot' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.SetDebugMenu
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerController_C_SetDebugMenu final
{
public:
	class UDebugMenu_C*                           DebugMenu;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_SetDebugMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_SetDebugMenu");
static_assert(sizeof(BP_PlayerController_C_SetDebugMenu) == 0x000008, "Wrong size on BP_PlayerController_C_SetDebugMenu");
static_assert(offsetof(BP_PlayerController_C_SetDebugMenu, DebugMenu) == 0x000000, "Member 'BP_PlayerController_C_SetDebugMenu::DebugMenu' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.IsStartCursorMode
// 0x0005 (0x0005 - 0x0000)
struct BP_PlayerController_C_IsStartCursorMode final
{
public:
	bool                                          Start;                                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsStart;                                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBMapUIType                                  CallFunc_GetMapUIType_ReturnValue;                 // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_IsStartCursorMode) == 0x000001, "Wrong alignment on BP_PlayerController_C_IsStartCursorMode");
static_assert(sizeof(BP_PlayerController_C_IsStartCursorMode) == 0x000005, "Wrong size on BP_PlayerController_C_IsStartCursorMode");
static_assert(offsetof(BP_PlayerController_C_IsStartCursorMode, Start) == 0x000000, "Member 'BP_PlayerController_C_IsStartCursorMode::Start' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsStartCursorMode, IsStart) == 0x000001, "Member 'BP_PlayerController_C_IsStartCursorMode::IsStart' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsStartCursorMode, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000002, "Member 'BP_PlayerController_C_IsStartCursorMode::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsStartCursorMode, CallFunc_GetMapUIType_ReturnValue) == 0x000003, "Member 'BP_PlayerController_C_IsStartCursorMode::CallFunc_GetMapUIType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsStartCursorMode, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'BP_PlayerController_C_IsStartCursorMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.InteractionStateCheck
// 0x0050 (0x0050 - 0x0000)
struct BP_PlayerController_C_InteractionStateCheck final
{
public:
	bool                                          IsInteraction;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8313[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBInteractionState                           CallFunc_GetCurrentInteractionState_ReturnValue;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8314[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInteractionInfo                     CallFunc_GetCurrentInteractionInfo_ReturnValue;    // 0x001C(0x0018)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8315[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SitTarget_C*                        K2Node_DynamicCast_AsBP_Sit_Target;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_InteractionStateCheck) == 0x000008, "Wrong alignment on BP_PlayerController_C_InteractionStateCheck");
static_assert(sizeof(BP_PlayerController_C_InteractionStateCheck) == 0x000050, "Wrong size on BP_PlayerController_C_InteractionStateCheck");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, IsInteraction) == 0x000000, "Member 'BP_PlayerController_C_InteractionStateCheck::IsInteraction' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000010, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_GetCurrentInteractionState_ReturnValue) == 0x000018, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_GetCurrentInteractionState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_GetCurrentInteractionInfo_ReturnValue) == 0x00001C, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_GetCurrentInteractionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000034, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_IsValid_ReturnValue) == 0x000035, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_GetOwner_ReturnValue) == 0x000038, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, K2Node_DynamicCast_AsBP_Sit_Target) == 0x000040, "Member 'BP_PlayerController_C_InteractionStateCheck::K2Node_DynamicCast_AsBP_Sit_Target' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_PlayerController_C_InteractionStateCheck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000049, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00004A, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_InteractionStateCheck, CallFunc_BooleanOR_ReturnValue) == 0x00004B, "Member 'BP_PlayerController_C_InteractionStateCheck::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.AddMainMenu
// 0x0088 (0x0088 - 0x0000)
struct BP_PlayerController_C_AddMainMenu final
{
public:
	ESBCommandMenuType                            TopMenu;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8316[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BookmarkType;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8317[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InteractionStateCheck_IsInteraction;      // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8318[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenu_C*                         CallFunc_Create_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMainMenuOpen_ReturnValue;               // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8319[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsClimbing_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_831A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDhcBattleComponent*                  CallFunc_GetDhcBattleComponent_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_831B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetCurrentDhcMesurer_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_AddMainMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_AddMainMenu");
static_assert(sizeof(BP_PlayerController_C_AddMainMenu) == 0x000088, "Wrong size on BP_PlayerController_C_AddMainMenu");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, TopMenu) == 0x000000, "Member 'BP_PlayerController_C_AddMainMenu::TopMenu' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, BookmarkType) == 0x000008, "Member 'BP_PlayerController_C_AddMainMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, ParamName) == 0x000018, "Member 'BP_PlayerController_C_AddMainMenu::ParamName' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000020, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000028, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000030, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000040, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000042, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_InteractionStateCheck_IsInteraction) == 0x000043, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_InteractionStateCheck_IsInteraction' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_Create_ReturnValue) == 0x000048, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000050, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_IsMainMenuOpen_ReturnValue) == 0x000051, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_IsMainMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000052, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000053, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000054, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000055, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000056, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000058, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_IsClimbing_ReturnValue) == 0x000060, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_IsClimbing_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_GetDhcBattleComponent_ReturnValue) == 0x000068, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_GetDhcBattleComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x000070, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_GetCurrentDhcMesurer_ReturnValue) == 0x000078, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_GetCurrentDhcMesurer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_AddMainMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x000081, "Member 'BP_PlayerController_C_AddMainMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.QuickAccessMenu
// 0x0090 (0x0090 - 0x0000)
struct BP_PlayerController_C_QuickAccessMenu final
{
public:
	ESBCommandMenuType                            InCommandMenuType;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_831C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BookmarkType;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBContentLockType                            CallFunc_ToContentLockType_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetContentLock_ReturnValue;               // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue_1;         // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_831D[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_831E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput_1;          // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue_1;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpenMapUI_ReturnValue;                  // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_831F[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x0081(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_1;              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_2;              // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseSkyStore_Result;                     // 0x0087(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_QuickAccessMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_QuickAccessMenu");
static_assert(sizeof(BP_PlayerController_C_QuickAccessMenu) == 0x000090, "Wrong size on BP_PlayerController_C_QuickAccessMenu");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, InCommandMenuType) == 0x000000, "Member 'BP_PlayerController_C_QuickAccessMenu::InCommandMenuType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, BookmarkType) == 0x000008, "Member 'BP_PlayerController_C_QuickAccessMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, ParamName) == 0x000018, "Member 'BP_PlayerController_C_QuickAccessMenu::ParamName' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000020, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000028, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000038, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_ToContentLockType_ReturnValue) == 0x000039, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_ToContentLockType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_GetContentLock_ReturnValue) == 0x00003B, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_GetContentLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, K2Node_SwitchEnum_CmpSuccess) == 0x00003C, "Member 'BP_PlayerController_C_QuickAccessMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x00003D, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x00003E, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x00003F, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000040, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000041, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_InDungeonGame_ReturnValue) == 0x000042, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000043, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000044, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsPlayerIsInBattle_ReturnValue_1) == 0x000045, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsPlayerIsInBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000048, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_BooleanAND_ReturnValue_2) == 0x000050, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsDeadHitPoint_self_CastInput_1) == 0x000058, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsDeadHitPoint_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsDeadHitPoint_ReturnValue_1) == 0x000068, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsDeadHitPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_BooleanAND_ReturnValue_3) == 0x000069, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsOpenMapUI_ReturnValue) == 0x00006A, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsOpenMapUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_GetMasterDataManager_IsValid) == 0x00006B, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_MakeLiteralName_ReturnValue) == 0x000078, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000080, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x000081, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_BooleanAND_ReturnValue_4) == 0x000082, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000083, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_InDungeonGame_ReturnValue_1) == 0x000084, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_InDungeonGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_InDungeonGame_ReturnValue_2) == 0x000085, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_InDungeonGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000086, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_IsUseSkyStore_Result) == 0x000087, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_IsUseSkyStore_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_QuickAccessMenu, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x000088, "Member 'BP_PlayerController_C_QuickAccessMenu::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenMyCharacterMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenMyCharacterMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenMyCharacterMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenMyCharacterMenu");
static_assert(sizeof(BP_PlayerController_C_OpenMyCharacterMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenMyCharacterMenu");
static_assert(offsetof(BP_PlayerController_C_OpenMyCharacterMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenMyCharacterMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenMyCharacterMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenMyCharacterMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenOptionMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenOptionMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenOptionMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenOptionMenu");
static_assert(sizeof(BP_PlayerController_C_OpenOptionMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenOptionMenu");
static_assert(offsetof(BP_PlayerController_C_OpenOptionMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenOptionMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenOptionMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenOptionMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenRmShopMenu
// 0x00A0 (0x00A0 - 0x0000)
struct BP_PlayerController_C_OpenRmShopMenu final
{
public:
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8320[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue_1;         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8321[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8322[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput_1;          // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue_1;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBContentLockType                            CallFunc_ToContentLockType_ReturnValue;            // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetContentLock_ReturnValue;               // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOpenMapUI_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8323[0x1];                                     // 0x0057(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x0069(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_1;              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_2;              // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseSkyStore_Result;                     // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8324[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8325[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BattleHUD_C*                        K2Node_DynamicCast_AsBP_Battle_HUD;                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_OpenRmShopMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenRmShopMenu");
static_assert(sizeof(BP_PlayerController_C_OpenRmShopMenu) == 0x0000A0, "Wrong size on BP_PlayerController_C_OpenRmShopMenu");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000000, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000008, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000010, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000020, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000022, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000023, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000024, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000025, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000026, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_InDungeonGame_ReturnValue) == 0x000027, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsPlayerIsInBattle_ReturnValue_1) == 0x000028, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsPlayerIsInBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_BooleanAND_ReturnValue_2) == 0x00002A, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000030, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000038, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsDeadHitPoint_self_CastInput_1) == 0x000040, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsDeadHitPoint_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsDeadHitPoint_ReturnValue_1) == 0x000050, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsDeadHitPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_BooleanAND_ReturnValue_3) == 0x000051, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_ToContentLockType_ReturnValue) == 0x000052, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_ToContentLockType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_GetContentLock_ReturnValue) == 0x000053, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_GetContentLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000054, "Member 'BP_PlayerController_C_OpenRmShopMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsOpenMapUI_ReturnValue) == 0x000055, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsOpenMapUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_GetMasterDataManager_IsValid) == 0x000056, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_MakeLiteralName_ReturnValue) == 0x000060, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000068, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x000069, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_BooleanAND_ReturnValue_4) == 0x00006A, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x00006B, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_InDungeonGame_ReturnValue_1) == 0x00006C, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_InDungeonGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_InDungeonGame_ReturnValue_2) == 0x00006D, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_InDungeonGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00006E, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_IsUseSkyStore_Result) == 0x00006F, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_IsUseSkyStore_Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x000070, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'BP_PlayerController_C_OpenRmShopMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, CallFunc_GetHUD_ReturnValue) == 0x000088, "Member 'BP_PlayerController_C_OpenRmShopMenu::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, K2Node_DynamicCast_AsBP_Battle_HUD) == 0x000090, "Member 'BP_PlayerController_C_OpenRmShopMenu::K2Node_DynamicCast_AsBP_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenRmShopMenu, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'BP_PlayerController_C_OpenRmShopMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenEventMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenEventMenu final
{
public:
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BattleHUD_C*                        K2Node_DynamicCast_AsBP_Battle_HUD;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_OpenEventMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenEventMenu");
static_assert(sizeof(BP_PlayerController_C_OpenEventMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenEventMenu");
static_assert(offsetof(BP_PlayerController_C_OpenEventMenu, CallFunc_GetHUD_ReturnValue) == 0x000000, "Member 'BP_PlayerController_C_OpenEventMenu::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenEventMenu, K2Node_DynamicCast_AsBP_Battle_HUD) == 0x000008, "Member 'BP_PlayerController_C_OpenEventMenu::K2Node_DynamicCast_AsBP_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenEventMenu, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerController_C_OpenEventMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenInventoryMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenInventoryMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenInventoryMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenInventoryMenu");
static_assert(sizeof(BP_PlayerController_C_OpenInventoryMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenInventoryMenu");
static_assert(offsetof(BP_PlayerController_C_OpenInventoryMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenInventoryMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenInventoryMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenInventoryMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenLibraryMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenLibraryMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenLibraryMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenLibraryMenu");
static_assert(sizeof(BP_PlayerController_C_OpenLibraryMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenLibraryMenu");
static_assert(offsetof(BP_PlayerController_C_OpenLibraryMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenLibraryMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenLibraryMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenLibraryMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenPartyMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenPartyMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenPartyMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenPartyMenu");
static_assert(sizeof(BP_PlayerController_C_OpenPartyMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenPartyMenu");
static_assert(offsetof(BP_PlayerController_C_OpenPartyMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenPartyMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenPartyMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenPartyMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenQuestMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenQuestMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenQuestMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenQuestMenu");
static_assert(sizeof(BP_PlayerController_C_OpenQuestMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenQuestMenu");
static_assert(offsetof(BP_PlayerController_C_OpenQuestMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenQuestMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenQuestMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenQuestMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenMapMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenMapMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenMapMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenMapMenu");
static_assert(sizeof(BP_PlayerController_C_OpenMapMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenMapMenu");
static_assert(offsetof(BP_PlayerController_C_OpenMapMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenMapMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenMapMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenMapMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenSeasonPassMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenSeasonPassMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenSeasonPassMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenSeasonPassMenu");
static_assert(sizeof(BP_PlayerController_C_OpenSeasonPassMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenSeasonPassMenu");
static_assert(offsetof(BP_PlayerController_C_OpenSeasonPassMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenSeasonPassMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenSeasonPassMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenSeasonPassMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenCommunicate
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenCommunicate final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenCommunicate) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenCommunicate");
static_assert(sizeof(BP_PlayerController_C_OpenCommunicate) == 0x000018, "Wrong size on BP_PlayerController_C_OpenCommunicate");
static_assert(offsetof(BP_PlayerController_C_OpenCommunicate, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenCommunicate::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenCommunicate, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenCommunicate::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenGuildMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenGuildMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenGuildMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenGuildMenu");
static_assert(sizeof(BP_PlayerController_C_OpenGuildMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenGuildMenu");
static_assert(offsetof(BP_PlayerController_C_OpenGuildMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenGuildMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenGuildMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenGuildMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenLetterMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OpenLetterMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenLetterMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenLetterMenu");
static_assert(sizeof(BP_PlayerController_C_OpenLetterMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OpenLetterMenu");
static_assert(offsetof(BP_PlayerController_C_OpenLetterMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenLetterMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenLetterMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenLetterMenu::ParamName' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenContentsMenu
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerController_C_OpenContentsMenu final
{
public:
	class FString                                 BookmarkType;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenContentsMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenContentsMenu");
static_assert(sizeof(BP_PlayerController_C_OpenContentsMenu) == 0x000020, "Wrong size on BP_PlayerController_C_OpenContentsMenu");
static_assert(offsetof(BP_PlayerController_C_OpenContentsMenu, BookmarkType) == 0x000000, "Member 'BP_PlayerController_C_OpenContentsMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenContentsMenu, ParamName) == 0x000010, "Member 'BP_PlayerController_C_OpenContentsMenu::ParamName' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenContentsMenu, Temp_bool_Variable) == 0x000018, "Member 'BP_PlayerController_C_OpenContentsMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenContentsMenu, Temp_byte_Variable) == 0x000019, "Member 'BP_PlayerController_C_OpenContentsMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenContentsMenu, Temp_byte_Variable_1) == 0x00001A, "Member 'BP_PlayerController_C_OpenContentsMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenContentsMenu, CallFunc_InDungeonGame_ReturnValue) == 0x00001B, "Member 'BP_PlayerController_C_OpenContentsMenu::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenContentsMenu, K2Node_Select_Default) == 0x00001C, "Member 'BP_PlayerController_C_OpenContentsMenu::K2Node_Select_Default' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OnPressMainMenu
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_OnPressMainMenu final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentMatchmakingState_bExists;       // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8326[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetCurrentMatchmakingState_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OnPressMainMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_OnPressMainMenu");
static_assert(sizeof(BP_PlayerController_C_OnPressMainMenu) == 0x000018, "Wrong size on BP_PlayerController_C_OnPressMainMenu");
static_assert(offsetof(BP_PlayerController_C_OnPressMainMenu, Temp_bool_Variable) == 0x000000, "Member 'BP_PlayerController_C_OnPressMainMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OnPressMainMenu, Temp_byte_Variable) == 0x000001, "Member 'BP_PlayerController_C_OnPressMainMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OnPressMainMenu, Temp_byte_Variable_1) == 0x000002, "Member 'BP_PlayerController_C_OnPressMainMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OnPressMainMenu, CallFunc_GetCurrentMatchmakingState_bExists) == 0x000003, "Member 'BP_PlayerController_C_OnPressMainMenu::CallFunc_GetCurrentMatchmakingState_bExists' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OnPressMainMenu, CallFunc_GetCurrentMatchmakingState_ReturnValue) == 0x000008, "Member 'BP_PlayerController_C_OnPressMainMenu::CallFunc_GetCurrentMatchmakingState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OnPressMainMenu, K2Node_Select_Default) == 0x000010, "Member 'BP_PlayerController_C_OnPressMainMenu::K2Node_Select_Default' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.ShowCommandMenu
// 0x0028 (0x0028 - 0x0000)
struct BP_PlayerController_C_ShowCommandMenu final
{
public:
	ESBCommandMenuType                            InType;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8327[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BookmarkType;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   ParamName;                                         // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_ShowCommandMenu) == 0x000008, "Wrong alignment on BP_PlayerController_C_ShowCommandMenu");
static_assert(sizeof(BP_PlayerController_C_ShowCommandMenu) == 0x000028, "Wrong size on BP_PlayerController_C_ShowCommandMenu");
static_assert(offsetof(BP_PlayerController_C_ShowCommandMenu, InType) == 0x000000, "Member 'BP_PlayerController_C_ShowCommandMenu::InType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ShowCommandMenu, BookmarkType) == 0x000008, "Member 'BP_PlayerController_C_ShowCommandMenu::BookmarkType' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ShowCommandMenu, ParamName) == 0x000018, "Member 'BP_PlayerController_C_ShowCommandMenu::ParamName' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_ShowCommandMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'BP_PlayerController_C_ShowCommandMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OpenBookmarkSelector
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerController_C_OpenBookmarkSelector final
{
public:
	ESBBookMarkerSlot                             Slot;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8328[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMark_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBCommandMenuType                            CallFunc_BookmarkTypeToCommandMenuType_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerController_C_OpenBookmarkSelector) == 0x000008, "Wrong alignment on BP_PlayerController_C_OpenBookmarkSelector");
static_assert(sizeof(BP_PlayerController_C_OpenBookmarkSelector) == 0x000020, "Wrong size on BP_PlayerController_C_OpenBookmarkSelector");
static_assert(offsetof(BP_PlayerController_C_OpenBookmarkSelector, Slot) == 0x000000, "Member 'BP_PlayerController_C_OpenBookmarkSelector::Slot' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenBookmarkSelector, CallFunc_GetBookMark_ReturnValue) == 0x000008, "Member 'BP_PlayerController_C_OpenBookmarkSelector::CallFunc_GetBookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_OpenBookmarkSelector, CallFunc_BookmarkTypeToCommandMenuType_ReturnValue) == 0x000018, "Member 'BP_PlayerController_C_OpenBookmarkSelector::CallFunc_BookmarkTypeToCommandMenuType_ReturnValue' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.OnPressed_QuickAccess_Event
// 0x0001 (0x0001 - 0x0000)
struct BP_PlayerController_C_OnPressed_QuickAccess_Event final
{
public:
	bool                                          CallFunc_IsNaEventValid_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_OnPressed_QuickAccess_Event) == 0x000001, "Wrong alignment on BP_PlayerController_C_OnPressed_QuickAccess_Event");
static_assert(sizeof(BP_PlayerController_C_OnPressed_QuickAccess_Event) == 0x000001, "Wrong size on BP_PlayerController_C_OnPressed_QuickAccess_Event");
static_assert(offsetof(BP_PlayerController_C_OnPressed_QuickAccess_Event, CallFunc_IsNaEventValid_ReturnValue) == 0x000000, "Member 'BP_PlayerController_C_OnPressed_QuickAccess_Event::CallFunc_IsNaEventValid_ReturnValue' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.IsOpenDebugMenu
// 0x0003 (0x0003 - 0x0000)
struct BP_PlayerController_C_IsOpenDebugMenu final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_IsOpenDebugMenu) == 0x000001, "Wrong alignment on BP_PlayerController_C_IsOpenDebugMenu");
static_assert(sizeof(BP_PlayerController_C_IsOpenDebugMenu) == 0x000003, "Wrong size on BP_PlayerController_C_IsOpenDebugMenu");
static_assert(offsetof(BP_PlayerController_C_IsOpenDebugMenu, ReturnValue) == 0x000000, "Member 'BP_PlayerController_C_IsOpenDebugMenu::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsOpenDebugMenu, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PlayerController_C_IsOpenDebugMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsOpenDebugMenu, CallFunc_IsVisible_ReturnValue) == 0x000002, "Member 'BP_PlayerController_C_IsOpenDebugMenu::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function BP_PlayerController.BP_PlayerController_C.IsSimpleMode
// 0x0018 (0x0018 - 0x0000)
struct BP_PlayerController_C_IsSimpleMode final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBShortcutRingMode                           Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8329[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBShortcutRingMode                           CallFunc_GetShortcutRingMode_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerController_C_IsSimpleMode) == 0x000008, "Wrong alignment on BP_PlayerController_C_IsSimpleMode");
static_assert(sizeof(BP_PlayerController_C_IsSimpleMode) == 0x000018, "Wrong size on BP_PlayerController_C_IsSimpleMode");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, Result) == 0x000000, "Member 'BP_PlayerController_C_IsSimpleMode::Result' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, Temp_byte_Variable) == 0x000001, "Member 'BP_PlayerController_C_IsSimpleMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, Temp_bool_Variable) == 0x000002, "Member 'BP_PlayerController_C_IsSimpleMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, Temp_bool_Variable_1) == 0x000003, "Member 'BP_PlayerController_C_IsSimpleMode::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, CallFunc_GetConfigSaveManager_IsValid) == 0x000004, "Member 'BP_PlayerController_C_IsSimpleMode::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000008, "Member 'BP_PlayerController_C_IsSimpleMode::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, CallFunc_GetShortcutRingMode_ReturnValue) == 0x000010, "Member 'BP_PlayerController_C_IsSimpleMode::CallFunc_GetShortcutRingMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerController_C_IsSimpleMode, K2Node_Select_Default) == 0x000011, "Member 'BP_PlayerController_C_IsSimpleMode::K2Node_Select_Default' has a wrong offset!");

}

