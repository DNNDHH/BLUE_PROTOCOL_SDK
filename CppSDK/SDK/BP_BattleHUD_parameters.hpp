#pragma once

 

// Package: BP_BattleHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ST_TutorialExtendData_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"
#include "EKeyGuideType_structs.hpp"


namespace SDK::Params
{

// Function BP_BattleHUD.BP_BattleHUD_C.ExecuteUbergraph_BP_BattleHUD
// 0x06B0 (0x06B0 - 0x0000)
struct BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5208[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5209[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsSBBattle_Contents_HUD;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_520A[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBBattleContentsHUD*                   CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_520B[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	ETimerHUDType                                 K2Node_Event_HUDType;                              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520C[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Actor_1;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_Level;                                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_520D[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_SkillType;                            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class USBChatMessage* Message, struct FSBChatUIMessage& Mess)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor)
	class URmShopMenu_C*                          K2Node_CustomEvent_InRmShop_1;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URmShopMenu_C*                          K2Node_CustomEvent_InRmShop;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_520E[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface;         // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_520F[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBDebugMenuType MenuType, class FName RowName)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5210[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_PlayerID;                             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_Name_1;                               // 0x00D8(0x0018)()
	class FString                                 K2Node_Event_CharacterId;                          // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              K2Node_Event_Privilege_Type;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bCheckUnlock;                         // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5211[0x1];                                     // 0x0103(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInteractionInfo                     K2Node_Event_InteractionInfo;                      // 0x0104(0x0018)(NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5212[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x012E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x012F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5213[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Actor;                                // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetHitIndicator_bValid;                   // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5214[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UHitIndicator_C*                        CallFunc_GetHitIndicator_HitIndicator;             // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5215[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TArray<struct FSBWarehouseAbilityNotifyUIInfo>& UIInfo)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x015C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5216[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerCharacter_C*                  K2Node_Event_InOtherPC;                            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Event_MemberName;                           // 0x0178(0x0018)()
	EKeyGuideType                                 K2Node_Event_InKeyGuideType_1;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5217[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKeyGuideType                                 K2Node_Event_InKeyGuideType;                       // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5218[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetWidget_CreatedUserWidget;              // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMountShortcutIcon_C*                   K2Node_DynamicCast_AsMount_Shortcut_Icon;          // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5219[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_Combo;                                // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521A[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521B[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521C[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_InRespawnTime;                        // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bEditMode;                            // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_23;                   // 0x01ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetRespawnHUD_bValid;                     // 0x01EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521D[0x1];                                     // 0x01EF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class URespawnHUD_C*                          CallFunc_GetRespawnHUD_RespawnHUD;                 // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_24;                   // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Event_InVisibility;                         // 0x01F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_25;                   // 0x01FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          K2Node_Event_InSkillActionPosition;                // 0x01FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InIsVisible;                          // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_26;                   // 0x01FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_27;                   // 0x01FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521E[0x1];                                     // 0x01FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_28;                   // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_29;                   // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_30;                   // 0x0206(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_31;                   // 0x0207(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_32;                   // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_33;                   // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521F[0x6];                                     // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_1;                             // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsRm_Shop_Menu;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_34;                   // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5220[0x6];                                     // 0x0222(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          CallFunc_Create_ReturnValue_2;                     // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_35;                   // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5221[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5222[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWarehouseAbilityComponent*           CallFunc_GetWarehouseAbilityComponent_ReturnValue; // 0x0250(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_36;                   // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5223[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBWarehouseAbilityNotifyUIInfo> K2Node_CustomEvent_UIInfo;                         // 0x0260(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5224[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USBWarehouseAbilityComponent*           CallFunc_GetWarehouseAbilityComponent_ReturnValue_1; // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_37;                   // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5225[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_PlayerController_C> K2Node_DynamicCast_AsBPI_Player_Controller;        // 0x02A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5226[0x6];                                     // 0x02BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSaveGameReturn                             CallFunc_LoadDebugSettings_ReturnValue;            // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5227[0x2];                                     // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5228[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5229[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x02E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_522A[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBDebugMenuType                              K2Node_CustomEvent_MenuType;                       // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_522B[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_RowName;                        // 0x02FC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InQuestIndex;                   // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InStepNo;                       // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DelaySeconds;                   // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetStepCompleteText_OutText;              // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStepCompleteText_ReturnValue;          // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_522C[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_InQuestId;                            // 0x0324(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_522D[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0330(0x0018)()
	int32                                         K2Node_Event_InAchievementId;                      // 0x0348(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InTutorialHelpId;                     // 0x034C(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_Event_Slot;                                 // 0x0354(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_522E[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGetMaterialEventParam*               K2Node_DynamicCast_AsSBGet_Material_Event_Param;   // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_522F[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0370(0x0018)()
	ESBSeasonPassQuestCycleType                   K2Node_Event_InCycle;                              // 0x0388(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5230[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_QuestName;                            // 0x0390(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBWarehouseAbilityNotifyUIInfo> K2Node_CustomEvent_InParam;                        // 0x03A0(0x0010)(ConstParm, ReferenceParm)
	ESBRecipeType                                 K2Node_Event_RecipeType;                           // 0x03B0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5231[0x3];                                     // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RecepiId;                             // 0x03B4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWarehouseAbilityNotifyUIInfo        CallFunc_Array_Get_Item;                           // 0x03B8(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5232[0x3];                                     // 0x03DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_NetworkCafeTotalTimePlayedToday;      // 0x03E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsLoginTimeOnly;                     // 0x03E4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5233[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InMessage_2;                          // 0x03E8(0x0018)(ConstParm)
	class USBNetworkCafeMessageManager*           CallFunc_GetNetworkCafeMessageManager_ReturnValue; // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBNetworkCafeReward>           CallFunc_GetRewards_OutRewards;                    // 0x0408(0x0010)(ReferenceParm)
	struct FSBNetworkCafeReward                   CallFunc_Array_Get_Item_1;                         // 0x0418(0x000C)(NoDestructor)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0424(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_MemberName;                     // 0x0438(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5234[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InMessage_1;                          // 0x0458(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InMessage;                            // 0x0470(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InMainMessage;                        // 0x0488(0x0018)(ConstParm)
	class FText                                   K2Node_Event_InSubMessage;                         // 0x04A0(0x0018)(ConstParm)
	int32                                         K2Node_Event_InItemID;                             // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SizeX;                                // 0x04BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SizeY;                                // 0x04C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5235[0x4];                                     // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBChatMessage*                   K2Node_CustomEvent_Message;                        // 0x04D0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       K2Node_CustomEvent_Mess;                           // 0x04D8(0x0070)(ConstParm)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0551(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5236[0x6];                                     // 0x0552(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0558(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBChatMemberState*                     CallFunc_GetSenderMemberState_ReturnValue;         // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSenderCharacterId_ReturnValue;         // 0x0570(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_38;                   // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5237[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBBalloonWindowComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0590(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_39;                   // 0x0598(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_40;                   // 0x0599(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_41;                   // 0x059A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x059B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5238[0x4];                                     // 0x059C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x05A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5239[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOtherMessageComponent*               CallFunc_GetComponentByClass_ReturnValue_1;        // 0x05C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance_1;            // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_42;                   // 0x05D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ShowRequest_ReturnValue;                  // 0x05D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523A[0x5];                                     // 0x05D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x05E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_GetCharacterId_self_CastInput;            // 0x05F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0600(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_43;                   // 0x0611(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523B[0x6];                                     // 0x0612(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUpdateQuestProgressEventParam*       K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param; // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523C[0x7];                                     // 0x0641(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_Event_Widget;                               // 0x0648(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_Name;                                 // 0x0650(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_44;                   // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523D[0x7];                                     // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBClassHudInterface>  CallFunc_RegistClassHud_self_CastInput;            // 0x0668(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   K2Node_Event_TextId;                               // 0x0678(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0680(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0681(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0682(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0683(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0684(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0685(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_523E[0x2];                                     // 0x0686(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0688(0x0010)(ZeroConstructor, NoDestructor)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_45;                   // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD");
static_assert(sizeof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD) == 0x0006B0, "Wrong size on BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, EntryPoint) == 0x000000, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_class_Variable) == 0x000008, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_ClassDynamicCast_AsSBBattle_Contents_HUD) == 0x000018, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_ClassDynamicCast_AsSBBattle_Contents_HUD' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_ClassDynamicCast_bSuccess) == 0x000020, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Create_ReturnValue) == 0x000028, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Loaded) == 0x000030, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_byte_Variable) == 0x000038, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_byte_Variable_1) == 0x000039, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_bool_Variable) == 0x00003A, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_HUDType) == 0x00004C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_HUDType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Actor_1) == 0x000050, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Actor_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Level) == 0x000058, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Level' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_SkillType) == 0x000060, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_SkillType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_InRmShop_1) == 0x000080, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_InRmShop_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_InRmShop) == 0x000088, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_InRmShop' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBSub_Menu_Interface) == 0x000098, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBSub_Menu_Interface' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_2) == 0x0000A9, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_3) == 0x0000AA, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_int_Array_Index_Variable) == 0x0000AC, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000B0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_4) == 0x0000C0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_PlayerID) == 0x0000C8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_PlayerID' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Name_1) == 0x0000D8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Name_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_CharacterId) == 0x0000F0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_CharacterId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Privilege_Type) == 0x000100, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Privilege_Type' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_5) == 0x000101, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_bCheckUnlock) == 0x000102, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_bCheckUnlock' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InteractionInfo) == 0x000104, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InteractionInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_6) == 0x00011C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Create_ReturnValue_1) == 0x000120, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_7) == 0x000128, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_8) == 0x000129, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_9) == 0x00012A, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_10) == 0x00012B, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_11) == 0x00012C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_12) == 0x00012D, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_13) == 0x00012E, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_14) == 0x00012F, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_15) == 0x000130, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Actor) == 0x000138, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Actor' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_HitLocation) == 0x000140, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetHitIndicator_bValid) == 0x00014C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetHitIndicator_bValid' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetHitIndicator_HitIndicator) == 0x000150, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetHitIndicator_HitIndicator' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_16) == 0x000158, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x00015C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_17) == 0x00016C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InOtherPC) == 0x000170, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InOtherPC' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_MemberName) == 0x000178, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_MemberName' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InKeyGuideType_1) == 0x000190, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InKeyGuideType_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_int_Loop_Counter_Variable) == 0x000194, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Add_IntInt_ReturnValue) == 0x000198, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InKeyGuideType) == 0x00019C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InKeyGuideType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetWidget_CreatedUserWidget) == 0x0001A0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetWidget_CreatedUserWidget' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsMount_Shortcut_Icon) == 0x0001A8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsMount_Shortcut_Icon' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Combo) == 0x0001B4, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Combo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_18) == 0x0001B8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_19) == 0x0001B9, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_20) == 0x0001BA, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_21) == 0x0001BB, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x0001C0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_2) == 0x0001D0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001D4, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_22) == 0x0001E4, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InRespawnTime) == 0x0001E8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InRespawnTime' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_bEditMode) == 0x0001EC, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_bEditMode' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_23) == 0x0001ED, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetRespawnHUD_bValid) == 0x0001EE, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetRespawnHUD_bValid' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetRespawnHUD_RespawnHUD) == 0x0001F0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetRespawnHUD_RespawnHUD' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_24) == 0x0001F8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InVisibility) == 0x0001F9, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InVisibility' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_25) == 0x0001FA, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InSkillActionPosition) == 0x0001FB, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InSkillActionPosition' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InIsVisible) == 0x0001FC, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InIsVisible' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_26) == 0x0001FD, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_27) == 0x0001FE, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_int_Array_Index_Variable_1) == 0x000200, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_28) == 0x000204, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_29) == 0x000205, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_30) == 0x000206, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_31) == 0x000207, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_32) == 0x000208, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_33) == 0x000209, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_class_Variable_1) == 0x000210, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_ClassDynamicCast_AsRm_Shop_Menu) == 0x000218, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_ClassDynamicCast_AsRm_Shop_Menu' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_ClassDynamicCast_bSuccess_1) == 0x000220, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_34) == 0x000221, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Create_ReturnValue_2) == 0x000228, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetPlayerController_ReturnValue) == 0x000230, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_35) == 0x000238, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000240, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_3) == 0x000248, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetWarehouseAbilityComponent_ReturnValue) == 0x000250, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetWarehouseAbilityComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_36) == 0x000258, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_UIInfo) == 0x000260, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_UIInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetPlayerController_ReturnValue_1) == 0x000270, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000278, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_4) == 0x000280, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Loaded_1) == 0x000288, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetWarehouseAbilityComponent_ReturnValue_1) == 0x000290, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetWarehouseAbilityComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_37) == 0x000298, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetPlayerController_ReturnValue_2) == 0x0002A0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsBPI_Player_Controller) == 0x0002A8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsBPI_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_5) == 0x0002B8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetDebugFunction_IsValid) == 0x0002B9, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetDebugFunction_ReturnValue) == 0x0002C0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_LoadDebugSettings_ReturnValue) == 0x0002C8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_LoadDebugSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_SwitchEnum_CmpSuccess) == 0x0002C9, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, Temp_int_Loop_Counter_Variable_1) == 0x0002CC, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetBool_ReturnValue) == 0x0002D0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002D4, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetDebugFunction_IsValid_1) == 0x0002D8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetDebugFunction_ReturnValue_1) == 0x0002E0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetDebugFunction_IsValid_2) == 0x0002E8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetDebugFunction_ReturnValue_2) == 0x0002F0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_MenuType) == 0x0002F8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_MenuType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_RowName) == 0x0002FC, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_RowName' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_InQuestIndex) == 0x000304, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_InQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_InStepNo) == 0x000308, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_InStepNo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_DelaySeconds) == 0x00030C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_DelaySeconds' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetStepCompleteText_OutText) == 0x000310, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetStepCompleteText_OutText' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetStepCompleteText_ReturnValue) == 0x000320, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetStepCompleteText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InQuestId) == 0x000324, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InQuestId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Conv_StringToText_ReturnValue) == 0x000330, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InAchievementId) == 0x000348, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InAchievementId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InTutorialHelpId) == 0x00034C, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InTutorialHelpId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Slot) == 0x000354, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Slot' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Param_2) == 0x000358, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBGet_Material_Event_Param) == 0x000360, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBGet_Material_Event_Param' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_6) == 0x000368, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000370, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InCycle) == 0x000388, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InCycle' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_QuestName) == 0x000390, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_QuestName' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_InParam) == 0x0003A0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_RecipeType) == 0x0003B0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_RecipeType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_RecepiId) == 0x0003B4, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_RecepiId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Array_Get_Item) == 0x0003B8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Array_Length_ReturnValue) == 0x0003D8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Less_IntInt_ReturnValue) == 0x0003DC, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_NetworkCafeTotalTimePlayedToday) == 0x0003E0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_NetworkCafeTotalTimePlayedToday' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_bIsLoginTimeOnly) == 0x0003E4, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_bIsLoginTimeOnly' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InMessage_2) == 0x0003E8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InMessage_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetNetworkCafeMessageManager_ReturnValue) == 0x000400, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetNetworkCafeMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetRewards_OutRewards) == 0x000408, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetRewards_OutRewards' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Array_Get_Item_1) == 0x000418, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CreateDelegate_OutputDelegate_5) == 0x000424, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Array_Length_ReturnValue_1) == 0x000434, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_MemberName) == 0x000438, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_MemberName' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Less_IntInt_ReturnValue_1) == 0x000450, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InMessage_1) == 0x000458, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InMessage_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InMessage) == 0x000470, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InMessage' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InMainMessage) == 0x000488, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InMainMessage' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InSubMessage) == 0x0004A0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InSubMessage' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_InItemID) == 0x0004B8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_InItemID' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_SizeX) == 0x0004BC, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_SizeX' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_SizeY) == 0x0004C0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_SizeY' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetGameInstance_ReturnValue) == 0x0004C8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Message) == 0x0004D0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Mess) == 0x0004D8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Mess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBGame_Instance) == 0x000548, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_7) == 0x000550, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000551, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Conv_TextToString_ReturnValue) == 0x000558, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetSenderMemberState_ReturnValue) == 0x000568, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetSenderMemberState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetSenderCharacterId_ReturnValue) == 0x000570, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetSenderCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_38) == 0x000580, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000588, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetComponentByClass_ReturnValue) == 0x000590, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_39) == 0x000598, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_40) == 0x000599, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_41) == 0x00059A, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_MakeLiteralByte_ReturnValue) == 0x00059B, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x0005A0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0005A8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_8) == 0x0005B0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetGameInstance_ReturnValue_1) == 0x0005B8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetComponentByClass_ReturnValue_1) == 0x0005C0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBGame_Instance_1) == 0x0005C8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBGame_Instance_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_9) == 0x0005D0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_42) == 0x0005D1, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_ShowRequest_ReturnValue) == 0x0005D2, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_ShowRequest_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetValidPlayerState_ReturnValue) == 0x0005D8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_Conv_BoolToString_ReturnValue) == 0x0005E0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetCharacterId_self_CastInput) == 0x0005F0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetCharacterId_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetCharacterId_ReturnValue) == 0x000600, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000610, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_43) == 0x000611, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Sender_1) == 0x000618, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Param_1) == 0x000620, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Sender) == 0x000628, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_Param) == 0x000630, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param) == 0x000638, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_AsSBUpdate_Quest_Progress_Event_Param' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_DynamicCast_bSuccess_10) == 0x000640, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Widget) == 0x000648, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Widget' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_Name) == 0x000650, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_Name' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_44) == 0x000660, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_RegistClassHud_self_CastInput) == 0x000668, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_RegistClassHud_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Event_TextId) == 0x000678, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Event_TextId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_InUIType) == 0x000680, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_bInVisibility) == 0x000681, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CustomEvent_bInInstantly) == 0x000682, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000683, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_Select_Default) == 0x000684, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000685, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, K2Node_CreateDelegate_OutputDelegate_6) == 0x000688, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000698, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0006A0, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD, CallFunc_IsValid_ReturnValue_45) == 0x0006A8, "Member 'BP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD::CallFunc_IsValid_ReturnValue_45' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct BP_BattleHUD_C_OnVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_OnVisibleSetting) == 0x000001, "Wrong alignment on BP_BattleHUD_C_OnVisibleSetting");
static_assert(sizeof(BP_BattleHUD_C_OnVisibleSetting) == 0x000003, "Wrong size on BP_BattleHUD_C_OnVisibleSetting");
static_assert(offsetof(BP_BattleHUD_C_OnVisibleSetting, InUIType) == 0x000000, "Member 'BP_BattleHUD_C_OnVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnVisibleSetting, bInVisibility) == 0x000001, "Member 'BP_BattleHUD_C_OnVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnVisibleSetting, bInInstantly) == 0x000002, "Member 'BP_BattleHUD_C_OnVisibleSetting::bInInstantly' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.ShowSimpleAlertByID
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_ShowSimpleAlertByID final
{
public:
	class FName                                   TextId;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_ShowSimpleAlertByID) == 0x000004, "Wrong alignment on BP_BattleHUD_C_ShowSimpleAlertByID");
static_assert(sizeof(BP_BattleHUD_C_ShowSimpleAlertByID) == 0x000008, "Wrong size on BP_BattleHUD_C_ShowSimpleAlertByID");
static_assert(offsetof(BP_BattleHUD_C_ShowSimpleAlertByID, TextId) == 0x000000, "Member 'BP_BattleHUD_C_ShowSimpleAlertByID::TextId' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.RegistClassHud
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_RegistClassHud final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_Name;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_RegistClassHud) == 0x000008, "Wrong alignment on BP_BattleHUD_C_RegistClassHud");
static_assert(sizeof(BP_BattleHUD_C_RegistClassHud) == 0x000018, "Wrong size on BP_BattleHUD_C_RegistClassHud");
static_assert(offsetof(BP_BattleHUD_C_RegistClassHud, Widget) == 0x000000, "Member 'BP_BattleHUD_C_RegistClassHud::Widget' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_RegistClassHud, Param_Name) == 0x000008, "Member 'BP_BattleHUD_C_RegistClassHud::Param_Name' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_OnGetMaterial final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnGetMaterial) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnGetMaterial");
static_assert(sizeof(BP_BattleHUD_C_OnGetMaterial) == 0x000010, "Wrong size on BP_BattleHUD_C_OnGetMaterial");
static_assert(offsetof(BP_BattleHUD_C_OnGetMaterial, Sender) == 0x000000, "Member 'BP_BattleHUD_C_OnGetMaterial::Sender' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnGetMaterial, Param) == 0x000008, "Member 'BP_BattleHUD_C_OnGetMaterial::Param' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnReceiveUpdateQuestProgressEvent2
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2");
static_assert(sizeof(BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2) == 0x000010, "Wrong size on BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2");
static_assert(offsetof(BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2, Sender) == 0x000000, "Member 'BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2::Sender' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2, Param) == 0x000008, "Member 'BP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2::Param' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnReceivedMessage
// 0x0078 (0x0078 - 0x0000)
struct BP_BattleHUD_C_OnReceivedMessage final
{
public:
	const class USBChatMessage*                   Message;                                           // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBChatUIMessage                       Mess;                                              // 0x0008(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_BattleHUD_C_OnReceivedMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnReceivedMessage");
static_assert(sizeof(BP_BattleHUD_C_OnReceivedMessage) == 0x000078, "Wrong size on BP_BattleHUD_C_OnReceivedMessage");
static_assert(offsetof(BP_BattleHUD_C_OnReceivedMessage, Message) == 0x000000, "Member 'BP_BattleHUD_C_OnReceivedMessage::Message' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnReceivedMessage, Mess) == 0x000008, "Member 'BP_BattleHUD_C_OnReceivedMessage::Mess' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDrawHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_ReceiveDrawHUD final
{
public:
	int32                                         SizeX;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SizeY;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_ReceiveDrawHUD) == 0x000004, "Wrong alignment on BP_BattleHUD_C_ReceiveDrawHUD");
static_assert(sizeof(BP_BattleHUD_C_ReceiveDrawHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_ReceiveDrawHUD");
static_assert(offsetof(BP_BattleHUD_C_ReceiveDrawHUD, SizeX) == 0x000000, "Member 'BP_BattleHUD_C_ReceiveDrawHUD::SizeX' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_ReceiveDrawHUD, SizeY) == 0x000004, "Member 'BP_BattleHUD_C_ReceiveDrawHUD::SizeY' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddItemExpiryNotifyMessage
// 0x0004 (0x0004 - 0x0000)
struct BP_BattleHUD_C_AddItemExpiryNotifyMessage final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddItemExpiryNotifyMessage) == 0x000004, "Wrong alignment on BP_BattleHUD_C_AddItemExpiryNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_AddItemExpiryNotifyMessage) == 0x000004, "Wrong size on BP_BattleHUD_C_AddItemExpiryNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_AddItemExpiryNotifyMessage, InItemID) == 0x000000, "Member 'BP_BattleHUD_C_AddItemExpiryNotifyMessage::InItemID' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddLine2NotifyMessage
// 0x0030 (0x0030 - 0x0000)
struct BP_BattleHUD_C_AddLine2NotifyMessage final
{
public:
	class FText                                   InMainMessage;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   InSubMessage;                                      // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_BattleHUD_C_AddLine2NotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddLine2NotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_AddLine2NotifyMessage) == 0x000030, "Wrong size on BP_BattleHUD_C_AddLine2NotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_AddLine2NotifyMessage, InMainMessage) == 0x000000, "Member 'BP_BattleHUD_C_AddLine2NotifyMessage::InMainMessage' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_AddLine2NotifyMessage, InSubMessage) == 0x000018, "Member 'BP_BattleHUD_C_AddLine2NotifyMessage::InSubMessage' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddLine1LNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_AddLine1LNotifyMessage final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_BattleHUD_C_AddLine1LNotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddLine1LNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_AddLine1LNotifyMessage) == 0x000018, "Wrong size on BP_BattleHUD_C_AddLine1LNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_AddLine1LNotifyMessage, InMessage) == 0x000000, "Member 'BP_BattleHUD_C_AddLine1LNotifyMessage::InMessage' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddLine1NotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_AddLine1NotifyMessage final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_BattleHUD_C_AddLine1NotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddLine1NotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_AddLine1NotifyMessage) == 0x000018, "Wrong size on BP_BattleHUD_C_AddLine1NotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_AddLine1NotifyMessage, InMessage) == 0x000000, "Member 'BP_BattleHUD_C_AddLine1NotifyMessage::InMessage' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddMemberDeadNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_AddMemberDeadNotifyMessage final
{
public:
	class FText                                   MemberName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_BattleHUD_C_AddMemberDeadNotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddMemberDeadNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_AddMemberDeadNotifyMessage) == 0x000018, "Wrong size on BP_BattleHUD_C_AddMemberDeadNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_AddMemberDeadNotifyMessage, MemberName) == 0x000000, "Member 'BP_BattleHUD_C_AddMemberDeadNotifyMessage::MemberName' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddLoginBonusNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_AddLoginBonusNotifyMessage final
{
public:
	class FText                                   InMessage;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_BattleHUD_C_AddLoginBonusNotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddLoginBonusNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_AddLoginBonusNotifyMessage) == 0x000018, "Wrong size on BP_BattleHUD_C_AddLoginBonusNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_AddLoginBonusNotifyMessage, InMessage) == 0x000000, "Member 'BP_BattleHUD_C_AddLoginBonusNotifyMessage::InMessage' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage final
{
public:
	int32                                         NetworkCafeTotalTimePlayedToday;                   // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLoginTimeOnly;                                  // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage) == 0x000004, "Wrong alignment on BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage");
static_assert(sizeof(BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage) == 0x000008, "Wrong size on BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage");
static_assert(offsetof(BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage, NetworkCafeTotalTimePlayedToday) == 0x000000, "Member 'BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage::NetworkCafeTotalTimePlayedToday' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage, bIsLoginTimeOnly) == 0x000004, "Member 'BP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage::bIsLoginTimeOnly' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddRecipeMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_AddRecipeMessage final
{
public:
	ESBRecipeType                                 RecipeType;                                        // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_523F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RecepiId;                                          // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddRecipeMessage) == 0x000004, "Wrong alignment on BP_BattleHUD_C_AddRecipeMessage");
static_assert(sizeof(BP_BattleHUD_C_AddRecipeMessage) == 0x000008, "Wrong size on BP_BattleHUD_C_AddRecipeMessage");
static_assert(offsetof(BP_BattleHUD_C_AddRecipeMessage, RecipeType) == 0x000000, "Member 'BP_BattleHUD_C_AddRecipeMessage::RecipeType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_AddRecipeMessage, RecepiId) == 0x000004, "Member 'BP_BattleHUD_C_AddRecipeMessage::RecepiId' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddWarehouseAbilityNotifyMessage
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage final
{
public:
	TArray<struct FSBWarehouseAbilityNotifyUIInfo> InParam;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage) == 0x000010, "Wrong size on BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage, InParam) == 0x000000, "Member 'BP_BattleHUD_C_AddWarehouseAbilityNotifyMessage::InParam' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddAutoDeliveryQuestCompleteMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage final
{
public:
	ESBSeasonPassQuestCycleType                   InCycle;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5240[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 QuestName;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage");
static_assert(sizeof(BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage) == 0x000018, "Wrong size on BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage");
static_assert(offsetof(BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage, InCycle) == 0x000000, "Member 'BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage::InCycle' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage, QuestName) == 0x000008, "Member 'BP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage::QuestName' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial_Core
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_OnGetMaterial_Core final
{
public:
	class UObject*                                Param;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnGetMaterial_Core) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnGetMaterial_Core");
static_assert(sizeof(BP_BattleHUD_C_OnGetMaterial_Core) == 0x000008, "Wrong size on BP_BattleHUD_C_OnGetMaterial_Core");
static_assert(offsetof(BP_BattleHUD_C_OnGetMaterial_Core, Param) == 0x000000, "Member 'BP_BattleHUD_C_OnGetMaterial_Core::Param' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankUpdateCompleteMessage
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage final
{
public:
	ESBPlayerPassiveImagineSlotType               Slot;                                              // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage) == 0x000001, "Wrong alignment on BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage");
static_assert(sizeof(BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage) == 0x000001, "Wrong size on BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage");
static_assert(offsetof(BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage, Slot) == 0x000000, "Member 'BP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage::Slot' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddTutorialHelpMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_AddTutorialHelpMessage final
{
public:
	class FName                                   InTutorialHelpId;                                  // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddTutorialHelpMessage) == 0x000004, "Wrong alignment on BP_BattleHUD_C_AddTutorialHelpMessage");
static_assert(sizeof(BP_BattleHUD_C_AddTutorialHelpMessage) == 0x000008, "Wrong size on BP_BattleHUD_C_AddTutorialHelpMessage");
static_assert(offsetof(BP_BattleHUD_C_AddTutorialHelpMessage, InTutorialHelpId) == 0x000000, "Member 'BP_BattleHUD_C_AddTutorialHelpMessage::InTutorialHelpId' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddAchievementGainedMessage
// 0x0004 (0x0004 - 0x0000)
struct BP_BattleHUD_C_AddAchievementGainedMessage final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddAchievementGainedMessage) == 0x000004, "Wrong alignment on BP_BattleHUD_C_AddAchievementGainedMessage");
static_assert(sizeof(BP_BattleHUD_C_AddAchievementGainedMessage) == 0x000004, "Wrong size on BP_BattleHUD_C_AddAchievementGainedMessage");
static_assert(offsetof(BP_BattleHUD_C_AddAchievementGainedMessage, InAchievementId) == 0x000000, "Member 'BP_BattleHUD_C_AddAchievementGainedMessage::InAchievementId' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddAwakeInterruptQuestMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_AddAwakeInterruptQuestMessage final
{
public:
	class FName                                   InQuestId;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddAwakeInterruptQuestMessage) == 0x000004, "Wrong alignment on BP_BattleHUD_C_AddAwakeInterruptQuestMessage");
static_assert(sizeof(BP_BattleHUD_C_AddAwakeInterruptQuestMessage) == 0x000008, "Wrong size on BP_BattleHUD_C_AddAwakeInterruptQuestMessage");
static_assert(offsetof(BP_BattleHUD_C_AddAwakeInterruptQuestMessage, InQuestId) == 0x000000, "Member 'BP_BattleHUD_C_AddAwakeInterruptQuestMessage::InQuestId' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.TryShowQuestCompleteMessage_Delay
// 0x000C (0x000C - 0x0000)
struct BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay final
{
public:
	int32                                         InQuestIndex;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStepNo;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelaySeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay) == 0x000004, "Wrong alignment on BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay");
static_assert(sizeof(BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay) == 0x00000C, "Wrong size on BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay");
static_assert(offsetof(BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay, InQuestIndex) == 0x000000, "Member 'BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay::InQuestIndex' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay, InStepNo) == 0x000004, "Member 'BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay::InStepNo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay, DelaySeconds) == 0x000008, "Member 'BP_BattleHUD_C_TryShowQuestCompleteMessage_Delay::DelaySeconds' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnChangedDebugValue
// 0x000C (0x000C - 0x0000)
struct BP_BattleHUD_C_OnChangedDebugValue final
{
public:
	ESBDebugMenuType                              MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5241[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RowName;                                           // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnChangedDebugValue) == 0x000004, "Wrong alignment on BP_BattleHUD_C_OnChangedDebugValue");
static_assert(sizeof(BP_BattleHUD_C_OnChangedDebugValue) == 0x00000C, "Wrong size on BP_BattleHUD_C_OnChangedDebugValue");
static_assert(offsetof(BP_BattleHUD_C_OnChangedDebugValue, MenuType) == 0x000000, "Member 'BP_BattleHUD_C_OnChangedDebugValue::MenuType' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnChangedDebugValue, RowName) == 0x000004, "Member 'BP_BattleHUD_C_OnChangedDebugValue::RowName' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnWarehouseAbilityUpdateDelegate_����_0
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0 final
{
public:
	TArray<struct FSBWarehouseAbilityNotifyUIInfo> UIInfo;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0");
static_assert(sizeof(BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0) == 0x000010, "Wrong size on BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0");
static_assert(offsetof(BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0, UIInfo) == 0x000000, "Member 'BP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate______0::UIInfo' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.SetKeyGuideTextVisible
// 0x0002 (0x0002 - 0x0000)
struct BP_BattleHUD_C_SetKeyGuideTextVisible final
{
public:
	ESkillActionPosition                          InSkillActionPosition;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsVisible;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_SetKeyGuideTextVisible) == 0x000001, "Wrong alignment on BP_BattleHUD_C_SetKeyGuideTextVisible");
static_assert(sizeof(BP_BattleHUD_C_SetKeyGuideTextVisible) == 0x000002, "Wrong size on BP_BattleHUD_C_SetKeyGuideTextVisible");
static_assert(offsetof(BP_BattleHUD_C_SetKeyGuideTextVisible, InSkillActionPosition) == 0x000000, "Member 'BP_BattleHUD_C_SetKeyGuideTextVisible::InSkillActionPosition' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_SetKeyGuideTextVisible, InIsVisible) == 0x000001, "Member 'BP_BattleHUD_C_SetKeyGuideTextVisible::InIsVisible' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.SetBattleInfoHUDVisible
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_SetBattleInfoHUDVisible final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_SetBattleInfoHUDVisible) == 0x000001, "Wrong alignment on BP_BattleHUD_C_SetBattleInfoHUDVisible");
static_assert(sizeof(BP_BattleHUD_C_SetBattleInfoHUDVisible) == 0x000001, "Wrong size on BP_BattleHUD_C_SetBattleInfoHUDVisible");
static_assert(offsetof(BP_BattleHUD_C_SetBattleInfoHUDVisible, InVisibility) == 0x000000, "Member 'BP_BattleHUD_C_SetBattleInfoHUDVisible::InVisibility' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_SetEditMode final
{
public:
	bool                                          bEditMode;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_SetEditMode) == 0x000001, "Wrong alignment on BP_BattleHUD_C_SetEditMode");
static_assert(sizeof(BP_BattleHUD_C_SetEditMode) == 0x000001, "Wrong size on BP_BattleHUD_C_SetEditMode");
static_assert(offsetof(BP_BattleHUD_C_SetEditMode, bEditMode) == 0x000000, "Member 'BP_BattleHUD_C_SetEditMode::bEditMode' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawn
// 0x0004 (0x0004 - 0x0000)
struct BP_BattleHUD_C_OnShowRespawn final
{
public:
	float                                         InRespawnTime;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnShowRespawn) == 0x000004, "Wrong alignment on BP_BattleHUD_C_OnShowRespawn");
static_assert(sizeof(BP_BattleHUD_C_OnShowRespawn) == 0x000004, "Wrong size on BP_BattleHUD_C_OnShowRespawn");
static_assert(offsetof(BP_BattleHUD_C_OnShowRespawn, InRespawnTime) == 0x000000, "Member 'BP_BattleHUD_C_OnShowRespawn::InRespawnTime' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnShowCombo
// 0x0004 (0x0004 - 0x0000)
struct BP_BattleHUD_C_OnShowCombo final
{
public:
	int32                                         Combo;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnShowCombo) == 0x000004, "Wrong alignment on BP_BattleHUD_C_OnShowCombo");
static_assert(sizeof(BP_BattleHUD_C_OnShowCombo) == 0x000004, "Wrong size on BP_BattleHUD_C_OnShowCombo");
static_assert(offsetof(BP_BattleHUD_C_OnShowCombo, Combo) == 0x000000, "Member 'BP_BattleHUD_C_OnShowCombo::Combo' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnSaveCharaConfigUpdate
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_OnSaveCharaConfigUpdate final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnSaveCharaConfigUpdate) == 0x000001, "Wrong alignment on BP_BattleHUD_C_OnSaveCharaConfigUpdate");
static_assert(sizeof(BP_BattleHUD_C_OnSaveCharaConfigUpdate) == 0x000001, "Wrong size on BP_BattleHUD_C_OnSaveCharaConfigUpdate");
static_assert(offsetof(BP_BattleHUD_C_OnSaveCharaConfigUpdate, InKeyGuideType) == 0x000000, "Member 'BP_BattleHUD_C_OnSaveCharaConfigUpdate::InKeyGuideType' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuideUpdate
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_ChangeKeyGuideUpdate final
{
public:
	EKeyGuideType                                 InKeyGuideType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_ChangeKeyGuideUpdate) == 0x000001, "Wrong alignment on BP_BattleHUD_C_ChangeKeyGuideUpdate");
static_assert(sizeof(BP_BattleHUD_C_ChangeKeyGuideUpdate) == 0x000001, "Wrong size on BP_BattleHUD_C_ChangeKeyGuideUpdate");
static_assert(offsetof(BP_BattleHUD_C_ChangeKeyGuideUpdate, InKeyGuideType) == 0x000000, "Member 'BP_BattleHUD_C_ChangeKeyGuideUpdate::InKeyGuideType' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CallAddMemberDeadNotifyMessage
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_CallAddMemberDeadNotifyMessage final
{
public:
	class FText                                   MemberName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_BattleHUD_C_CallAddMemberDeadNotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CallAddMemberDeadNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_CallAddMemberDeadNotifyMessage) == 0x000018, "Wrong size on BP_BattleHUD_C_CallAddMemberDeadNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_CallAddMemberDeadNotifyMessage, MemberName) == 0x000000, "Member 'BP_BattleHUD_C_CallAddMemberDeadNotifyMessage::MemberName' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OpenCursorModeToOtherPCMenu
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_OpenCursorModeToOtherPCMenu final
{
public:
	class ABP_PlayerCharacter_C*                  InOtherPC;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OpenCursorModeToOtherPCMenu) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OpenCursorModeToOtherPCMenu");
static_assert(sizeof(BP_BattleHUD_C_OpenCursorModeToOtherPCMenu) == 0x000008, "Wrong size on BP_BattleHUD_C_OpenCursorModeToOtherPCMenu");
static_assert(offsetof(BP_BattleHUD_C_OpenCursorModeToOtherPCMenu, InOtherPC) == 0x000000, "Member 'BP_BattleHUD_C_OpenCursorModeToOtherPCMenu::InOtherPC' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.HitIndicatorAddMarker
// 0x000C (0x000C - 0x0000)
struct BP_BattleHUD_C_HitIndicatorAddMarker final
{
public:
	struct FVector                                HitLocation;                                       // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_HitIndicatorAddMarker) == 0x000004, "Wrong alignment on BP_BattleHUD_C_HitIndicatorAddMarker");
static_assert(sizeof(BP_BattleHUD_C_HitIndicatorAddMarker) == 0x00000C, "Wrong size on BP_BattleHUD_C_HitIndicatorAddMarker");
static_assert(offsetof(BP_BattleHUD_C_HitIndicatorAddMarker, HitLocation) == 0x000000, "Member 'BP_BattleHUD_C_HitIndicatorAddMarker::HitLocation' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.SetFocusActor
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_SetFocusActor final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_SetFocusActor) == 0x000008, "Wrong alignment on BP_BattleHUD_C_SetFocusActor");
static_assert(sizeof(BP_BattleHUD_C_SetFocusActor) == 0x000008, "Wrong size on BP_BattleHUD_C_SetFocusActor");
static_assert(offsetof(BP_BattleHUD_C_SetFocusActor, Actor) == 0x000000, "Member 'BP_BattleHUD_C_SetFocusActor::Actor' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CallUpdateInteractionNotice
// 0x0018 (0x0018 - 0x0000)
struct BP_BattleHUD_C_CallUpdateInteractionNotice final
{
public:
	struct FSBInteractionInfo                     InteractionInfo;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_BattleHUD_C_CallUpdateInteractionNotice) == 0x000004, "Wrong alignment on BP_BattleHUD_C_CallUpdateInteractionNotice");
static_assert(sizeof(BP_BattleHUD_C_CallUpdateInteractionNotice) == 0x000018, "Wrong size on BP_BattleHUD_C_CallUpdateInteractionNotice");
static_assert(offsetof(BP_BattleHUD_C_CallUpdateInteractionNotice, InteractionInfo) == 0x000000, "Member 'BP_BattleHUD_C_CallUpdateInteractionNotice::InteractionInfo' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnRequestTutorialHelp
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_OnRequestTutorialHelp final
{
public:
	bool                                          bCheckUnlock;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_OnRequestTutorialHelp) == 0x000001, "Wrong alignment on BP_BattleHUD_C_OnRequestTutorialHelp");
static_assert(sizeof(BP_BattleHUD_C_OnRequestTutorialHelp) == 0x000001, "Wrong size on BP_BattleHUD_C_OnRequestTutorialHelp");
static_assert(offsetof(BP_BattleHUD_C_OnRequestTutorialHelp, bCheckUnlock) == 0x000000, "Member 'BP_BattleHUD_C_OnRequestTutorialHelp::bCheckUnlock' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.RequestDirectChat
// 0x0040 (0x0040 - 0x0000)
struct BP_BattleHUD_C_RequestDirectChat final
{
public:
	class FString                                 PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CharacterId;                                       // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBPrivilegeType                              Privilege_Type;                                    // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_RequestDirectChat) == 0x000008, "Wrong alignment on BP_BattleHUD_C_RequestDirectChat");
static_assert(sizeof(BP_BattleHUD_C_RequestDirectChat) == 0x000040, "Wrong size on BP_BattleHUD_C_RequestDirectChat");
static_assert(offsetof(BP_BattleHUD_C_RequestDirectChat, PlayerId) == 0x000000, "Member 'BP_BattleHUD_C_RequestDirectChat::PlayerId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_RequestDirectChat, Param_Name) == 0x000010, "Member 'BP_BattleHUD_C_RequestDirectChat::Param_Name' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_RequestDirectChat, CharacterId) == 0x000028, "Member 'BP_BattleHUD_C_RequestDirectChat::CharacterId' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_RequestDirectChat, Privilege_Type) == 0x000038, "Member 'BP_BattleHUD_C_RequestDirectChat::Privilege_Type' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.UnbindRmShop
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_UnbindRmShop final
{
public:
	class URmShopMenu_C*                          InRmShop;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_UnbindRmShop) == 0x000008, "Wrong alignment on BP_BattleHUD_C_UnbindRmShop");
static_assert(sizeof(BP_BattleHUD_C_UnbindRmShop) == 0x000008, "Wrong size on BP_BattleHUD_C_UnbindRmShop");
static_assert(offsetof(BP_BattleHUD_C_UnbindRmShop, InRmShop) == 0x000000, "Member 'BP_BattleHUD_C_UnbindRmShop::InRmShop' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.BindRmShop
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_BindRmShop final
{
public:
	class URmShopMenu_C*                          InRmShop;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_BindRmShop) == 0x000008, "Wrong alignment on BP_BattleHUD_C_BindRmShop");
static_assert(sizeof(BP_BattleHUD_C_BindRmShop) == 0x000008, "Wrong size on BP_BattleHUD_C_BindRmShop");
static_assert(offsetof(BP_BattleHUD_C_BindRmShop, InRmShop) == 0x000000, "Member 'BP_BattleHUD_C_BindRmShop::InRmShop' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpSkill
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_AddLevelUpSkill final
{
public:
	class FString                                 SkillType;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddLevelUpSkill) == 0x000008, "Wrong alignment on BP_BattleHUD_C_AddLevelUpSkill");
static_assert(sizeof(BP_BattleHUD_C_AddLevelUpSkill) == 0x000010, "Wrong size on BP_BattleHUD_C_AddLevelUpSkill");
static_assert(offsetof(BP_BattleHUD_C_AddLevelUpSkill, SkillType) == 0x000000, "Member 'BP_BattleHUD_C_AddLevelUpSkill::SkillType' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpClass
// 0x0004 (0x0004 - 0x0000)
struct BP_BattleHUD_C_AddLevelUpClass final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_AddLevelUpClass) == 0x000004, "Wrong alignment on BP_BattleHUD_C_AddLevelUpClass");
static_assert(sizeof(BP_BattleHUD_C_AddLevelUpClass) == 0x000004, "Wrong size on BP_BattleHUD_C_AddLevelUpClass");
static_assert(offsetof(BP_BattleHUD_C_AddLevelUpClass, Level) == 0x000000, "Member 'BP_BattleHUD_C_AddLevelUpClass::Level' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.InitDhcBattleHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_InitDhcBattleHUD final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_InitDhcBattleHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_InitDhcBattleHUD");
static_assert(sizeof(BP_BattleHUD_C_InitDhcBattleHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_InitDhcBattleHUD");
static_assert(offsetof(BP_BattleHUD_C_InitDhcBattleHUD, Actor) == 0x000000, "Member 'BP_BattleHUD_C_InitDhcBattleHUD::Actor' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.InitTimerRespawnHUD
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_InitTimerRespawnHUD final
{
public:
	ETimerHUDType                                 HUDType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_InitTimerRespawnHUD) == 0x000001, "Wrong alignment on BP_BattleHUD_C_InitTimerRespawnHUD");
static_assert(sizeof(BP_BattleHUD_C_InitTimerRespawnHUD) == 0x000001, "Wrong size on BP_BattleHUD_C_InitTimerRespawnHUD");
static_assert(offsetof(BP_BattleHUD_C_InitTimerRespawnHUD, HUDType) == 0x000000, "Member 'BP_BattleHUD_C_InitTimerRespawnHUD::HUDType' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8");
static_assert(sizeof(BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8) == 0x000008, "Wrong size on BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8");
static_assert(offsetof(BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8, Loaded) == 0x000000, "Member 'BP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8::Loaded' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB");
static_assert(sizeof(BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB) == 0x000008, "Wrong size on BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB");
static_assert(offsetof(BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB, Loaded) == 0x000000, "Member 'BP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB::Loaded' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DrawWireLocator
// 0x0048 (0x0048 - 0x0000)
struct BP_BattleHUD_C_DrawWireLocator final
{
public:
	int32                                         SizeX;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SizeY;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPawn_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5242[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_DrawWireLocator) == 0x000008, "Wrong alignment on BP_BattleHUD_C_DrawWireLocator");
static_assert(sizeof(BP_BattleHUD_C_DrawWireLocator) == 0x000048, "Wrong size on BP_BattleHUD_C_DrawWireLocator");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, SizeX) == 0x000000, "Member 'BP_BattleHUD_C_DrawWireLocator::SizeX' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, SizeY) == 0x000004, "Member 'BP_BattleHUD_C_DrawWireLocator::SizeY' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_MakeVector2D_ReturnValue) == 0x00000C, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_GetOwningPawn_ReturnValue) == 0x000018, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_GetOwningPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000020, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'BP_BattleHUD_C_DrawWireLocator::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_BattleHUD_C_DrawWireLocator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000034, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_DrawWireLocator, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'BP_BattleHUD_C_DrawWireLocator::CallFunc_BreakVector2D_Y' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.SetLayoutEditMode
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_SetLayoutEditMode final
{
public:
	bool                                          EditModeEnabled;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_SetLayoutEditMode) == 0x000001, "Wrong alignment on BP_BattleHUD_C_SetLayoutEditMode");
static_assert(sizeof(BP_BattleHUD_C_SetLayoutEditMode) == 0x000001, "Wrong size on BP_BattleHUD_C_SetLayoutEditMode");
static_assert(offsetof(BP_BattleHUD_C_SetLayoutEditMode, EditModeEnabled) == 0x000000, "Member 'BP_BattleHUD_C_SetLayoutEditMode::EditModeEnabled' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.IsLayoutEditMode
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_IsLayoutEditMode final
{
public:
	bool                                          Param_LayoutEditMode;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_IsLayoutEditMode) == 0x000001, "Wrong alignment on BP_BattleHUD_C_IsLayoutEditMode");
static_assert(sizeof(BP_BattleHUD_C_IsLayoutEditMode) == 0x000001, "Wrong size on BP_BattleHUD_C_IsLayoutEditMode");
static_assert(offsetof(BP_BattleHUD_C_IsLayoutEditMode, Param_LayoutEditMode) == 0x000000, "Member 'BP_BattleHUD_C_IsLayoutEditMode::Param_LayoutEditMode' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnQuestUpdateProgress
// 0x01B0 (0x01B0 - 0x0000)
struct BP_BattleHUD_C_OnQuestUpdateProgress final
{
public:
	struct FAcceptedQuestInfo                     PrevAcceptedQuestInfo;                             // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         LocalCurStepNo;                                    // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalPrevStepNo;                                   // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAcceptedQuestInfo                     LocalPrevAcceptedQuestInfo;                        // 0x0068(0x0060)(Edit, BlueprintVisible)
	int32                                         QuestIndex;                                        // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5243[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CurAcceptedQuestInfo;                              // 0x00D0(0x0060)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsExistQuestStepSynopsis_ReturnValue;     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExistQuestStepSynopsis_ReturnValue_1;   // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStepCompleteNotifyEnable_ReturnValue;   // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStepCompleteNotifyEnable_ReturnValue_1; // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5244[0x2];                                     // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindAcceptedQuestData_bExist;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5245[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_FindAcceptedQuestData_ReturnValue;        // 0x0148(0x0060)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_OnQuestUpdateProgress) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnQuestUpdateProgress");
static_assert(sizeof(BP_BattleHUD_C_OnQuestUpdateProgress) == 0x0001B0, "Wrong size on BP_BattleHUD_C_OnQuestUpdateProgress");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, PrevAcceptedQuestInfo) == 0x000000, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::PrevAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, LocalCurStepNo) == 0x000060, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::LocalCurStepNo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, LocalPrevStepNo) == 0x000064, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::LocalPrevStepNo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, LocalPrevAcceptedQuestInfo) == 0x000068, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::LocalPrevAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, QuestIndex) == 0x0000C8, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::QuestIndex' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CurAcceptedQuestInfo) == 0x0000D0, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CurAcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_IsExistQuestStepSynopsis_ReturnValue) == 0x000130, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_IsExistQuestStepSynopsis_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_IsExistQuestStepSynopsis_ReturnValue_1) == 0x000131, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_IsExistQuestStepSynopsis_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000132, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_IsStepCompleteNotifyEnable_ReturnValue) == 0x000133, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_IsStepCompleteNotifyEnable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_IsStepCompleteNotifyEnable_ReturnValue_1) == 0x000134, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_IsStepCompleteNotifyEnable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_GetNetworkDataCache_IsValid) == 0x000135, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000138, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_FindAcceptedQuestData_bExist) == 0x000140, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_FindAcceptedQuestData_bExist' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, CallFunc_FindAcceptedQuestData_ReturnValue) == 0x000148, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::CallFunc_FindAcceptedQuestData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnQuestUpdateProgress, K2Node_SwitchEnum_CmpSuccess) == 0x0001A8, "Member 'BP_BattleHUD_C_OnQuestUpdateProgress::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindow
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetTextWindow final
{
public:
	class USBTextWindow*                          ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetTextWindow) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetTextWindow");
static_assert(sizeof(BP_BattleHUD_C_GetTextWindow) == 0x000008, "Wrong size on BP_BattleHUD_C_GetTextWindow");
static_assert(offsetof(BP_BattleHUD_C_GetTextWindow, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetTextWindow::ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetHitFlash
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_GetHitFlash final
{
public:
	class UHitFlash_C*                            RefHitFlash;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitFlash_C*                            CallFunc_GetHitFlash_HitFlash;                     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetHitFlash) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetHitFlash");
static_assert(sizeof(BP_BattleHUD_C_GetHitFlash) == 0x000010, "Wrong size on BP_BattleHUD_C_GetHitFlash");
static_assert(offsetof(BP_BattleHUD_C_GetHitFlash, RefHitFlash) == 0x000000, "Member 'BP_BattleHUD_C_GetHitFlash::RefHitFlash' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetHitFlash, CallFunc_GetHitFlash_HitFlash) == 0x000008, "Member 'BP_BattleHUD_C_GetHitFlash::CallFunc_GetHitFlash_HitFlash' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetHitIndicator
// 0x0020 (0x0020 - 0x0000)
struct BP_BattleHUD_C_GetHitIndicator final
{
public:
	bool                                          bValid;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5246[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHitIndicator_C*                        HitIndicator;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHitIndicator_C*                        CallFunc_GetHitIndicator_HitIndicator;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_GetHitIndicator) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetHitIndicator");
static_assert(sizeof(BP_BattleHUD_C_GetHitIndicator) == 0x000020, "Wrong size on BP_BattleHUD_C_GetHitIndicator");
static_assert(offsetof(BP_BattleHUD_C_GetHitIndicator, bValid) == 0x000000, "Member 'BP_BattleHUD_C_GetHitIndicator::bValid' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetHitIndicator, HitIndicator) == 0x000008, "Member 'BP_BattleHUD_C_GetHitIndicator::HitIndicator' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetHitIndicator, CallFunc_GetHitIndicator_HitIndicator) == 0x000010, "Member 'BP_BattleHUD_C_GetHitIndicator::CallFunc_GetHitIndicator_HitIndicator' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetHitIndicator, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_BattleHUD_C_GetHitIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetOptionLayoutableHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetOptionLayoutableHUD final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetOptionLayoutableHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetOptionLayoutableHUD");
static_assert(sizeof(BP_BattleHUD_C_GetOptionLayoutableHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_GetOptionLayoutableHUD");
static_assert(offsetof(BP_BattleHUD_C_GetOptionLayoutableHUD, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetOptionLayoutableHUD::ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetRespawnHUD
// 0x0020 (0x0020 - 0x0000)
struct BP_BattleHUD_C_GetRespawnHUD final
{
public:
	bool                                          bValid;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5247[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URespawnHUD_C*                          RespawnHUD;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URespawnHUD_C*                          CallFunc_GetRespawnHUD_RespawnHUD;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_GetRespawnHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetRespawnHUD");
static_assert(sizeof(BP_BattleHUD_C_GetRespawnHUD) == 0x000020, "Wrong size on BP_BattleHUD_C_GetRespawnHUD");
static_assert(offsetof(BP_BattleHUD_C_GetRespawnHUD, bValid) == 0x000000, "Member 'BP_BattleHUD_C_GetRespawnHUD::bValid' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetRespawnHUD, RespawnHUD) == 0x000008, "Member 'BP_BattleHUD_C_GetRespawnHUD::RespawnHUD' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetRespawnHUD, CallFunc_GetRespawnHUD_RespawnHUD) == 0x000010, "Member 'BP_BattleHUD_C_GetRespawnHUD::CallFunc_GetRespawnHUD_RespawnHUD' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetRespawnHUD, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_BattleHUD_C_GetRespawnHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowSkit
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetTextWindowSkit final
{
public:
	class USBTextWindowBase*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetTextWindowSkit) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetTextWindowSkit");
static_assert(sizeof(BP_BattleHUD_C_GetTextWindowSkit) == 0x000008, "Wrong size on BP_BattleHUD_C_GetTextWindowSkit");
static_assert(offsetof(BP_BattleHUD_C_GetTextWindowSkit, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetTextWindowSkit::ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.UnregistClassHud
// 0x0030 (0x0030 - 0x0000)
struct BP_BattleHUD_C_UnregistClassHud final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5248[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBClassHudInterface>  CallFunc_UnregistClassHud_self_CastInput;          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_UnregistClassHud_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_UnregistClassHud) == 0x000008, "Wrong alignment on BP_BattleHUD_C_UnregistClassHud");
static_assert(sizeof(BP_BattleHUD_C_UnregistClassHud) == 0x000030, "Wrong size on BP_BattleHUD_C_UnregistClassHud");
static_assert(offsetof(BP_BattleHUD_C_UnregistClassHud, Param_Name) == 0x000000, "Member 'BP_BattleHUD_C_UnregistClassHud::Param_Name' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnregistClassHud, ReturnValue) == 0x000010, "Member 'BP_BattleHUD_C_UnregistClassHud::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnregistClassHud, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_BattleHUD_C_UnregistClassHud::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnregistClassHud, CallFunc_DoesImplementInterface_ReturnValue) == 0x000012, "Member 'BP_BattleHUD_C_UnregistClassHud::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnregistClassHud, CallFunc_UnregistClassHud_self_CastInput) == 0x000018, "Member 'BP_BattleHUD_C_UnregistClassHud::CallFunc_UnregistClassHud_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnregistClassHud, CallFunc_UnregistClassHud_ReturnValue) == 0x000028, "Member 'BP_BattleHUD_C_UnregistClassHud::CallFunc_UnregistClassHud_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowDemo
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetTextWindowDemo final
{
public:
	class USBTextWindowBase*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetTextWindowDemo) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetTextWindowDemo");
static_assert(sizeof(BP_BattleHUD_C_GetTextWindowDemo) == 0x000008, "Wrong size on BP_BattleHUD_C_GetTextWindowDemo");
static_assert(offsetof(BP_BattleHUD_C_GetTextWindowDemo, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetTextWindowDemo::ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateBattleInfoHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateBattleInfoHUD final
{
public:
	class UBattleInfoHUD_C*                       CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateBattleInfoHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateBattleInfoHUD");
static_assert(sizeof(BP_BattleHUD_C_CreateBattleInfoHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateBattleInfoHUD");
static_assert(offsetof(BP_BattleHUD_C_CreateBattleInfoHUD, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateBattleInfoHUD::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleInfoHUD
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteBattleInfoHUD final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteBattleInfoHUD) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteBattleInfoHUD");
static_assert(sizeof(BP_BattleHUD_C_DeleteBattleInfoHUD) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteBattleInfoHUD");
static_assert(offsetof(BP_BattleHUD_C_DeleteBattleInfoHUD, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteBattleInfoHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.UpdateBattleInfoHUD
// 0x001C (0x001C - 0x0000)
struct BP_BattleHUD_C_UpdateBattleInfoHUD final
{
public:
	struct FSBInteractionInfo                     InteractionInfo;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_UpdateBattleInfoHUD) == 0x000004, "Wrong alignment on BP_BattleHUD_C_UpdateBattleInfoHUD");
static_assert(sizeof(BP_BattleHUD_C_UpdateBattleInfoHUD) == 0x00001C, "Wrong size on BP_BattleHUD_C_UpdateBattleInfoHUD");
static_assert(offsetof(BP_BattleHUD_C_UpdateBattleInfoHUD, InteractionInfo) == 0x000000, "Member 'BP_BattleHUD_C_UpdateBattleInfoHUD::InteractionInfo' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UpdateBattleInfoHUD, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_BattleHUD_C_UpdateBattleInfoHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateLayoutHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateLayoutHUD final
{
public:
	class ULayoutableHUD_C*                       CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateLayoutHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateLayoutHUD");
static_assert(sizeof(BP_BattleHUD_C_CreateLayoutHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateLayoutHUD");
static_assert(offsetof(BP_BattleHUD_C_CreateLayoutHUD, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateLayoutHUD::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteLayoutHUD
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteLayoutHUD final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteLayoutHUD) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteLayoutHUD");
static_assert(sizeof(BP_BattleHUD_C_DeleteLayoutHUD) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteLayoutHUD");
static_assert(offsetof(BP_BattleHUD_C_DeleteLayoutHUD, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteLayoutHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateKeyGuideHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateKeyGuideHUD final
{
public:
	class UKeyGuideHUD_C*                         CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateKeyGuideHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateKeyGuideHUD");
static_assert(sizeof(BP_BattleHUD_C_CreateKeyGuideHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateKeyGuideHUD");
static_assert(offsetof(BP_BattleHUD_C_CreateKeyGuideHUD, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateKeyGuideHUD::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteKeyGuideHUD
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteKeyGuideHUD final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteKeyGuideHUD) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteKeyGuideHUD");
static_assert(sizeof(BP_BattleHUD_C_DeleteKeyGuideHUD) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteKeyGuideHUD");
static_assert(offsetof(BP_BattleHUD_C_DeleteKeyGuideHUD, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteKeyGuideHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateChatHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateChatHUD final
{
public:
	class UChatHUD_C*                             CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateChatHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateChatHUD");
static_assert(sizeof(BP_BattleHUD_C_CreateChatHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateChatHUD");
static_assert(offsetof(BP_BattleHUD_C_CreateChatHUD, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateChatHUD::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatHUD
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteChatHUD final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteChatHUD) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteChatHUD");
static_assert(sizeof(BP_BattleHUD_C_DeleteChatHUD) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteChatHUD");
static_assert(offsetof(BP_BattleHUD_C_DeleteChatHUD, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteChatHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateShortPinHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateShortPinHUD final
{
public:
	class UWBP_ShortPinView_C*                    CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateShortPinHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateShortPinHUD");
static_assert(sizeof(BP_BattleHUD_C_CreateShortPinHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateShortPinHUD");
static_assert(offsetof(BP_BattleHUD_C_CreateShortPinHUD, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateShortPinHUD::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteShortPinHUD
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteShortPinHUD final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteShortPinHUD) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteShortPinHUD");
static_assert(sizeof(BP_BattleHUD_C_DeleteShortPinHUD) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteShortPinHUD");
static_assert(offsetof(BP_BattleHUD_C_DeleteShortPinHUD, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteShortPinHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateClassHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateClassHUD final
{
public:
	class UDedicatedClassHUD_C*                   CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateClassHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateClassHUD");
static_assert(sizeof(BP_BattleHUD_C_CreateClassHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateClassHUD");
static_assert(offsetof(BP_BattleHUD_C_CreateClassHUD, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateClassHUD::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteClassHUD
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteClassHUD final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteClassHUD) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteClassHUD");
static_assert(sizeof(BP_BattleHUD_C_DeleteClassHUD) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteClassHUD");
static_assert(offsetof(BP_BattleHUD_C_DeleteClassHUD, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteClassHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifyMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateNotifyMessage final
{
public:
	class UNotifyMessage_C*                       CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateNotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_CreateNotifyMessage) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_CreateNotifyMessage, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateNotifyMessage::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifyMessage
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteNotifyMessage final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteNotifyMessage) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_DeleteNotifyMessage) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_DeleteNotifyMessage, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteNotifyMessage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifications
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateNotifications final
{
public:
	class UUMG_Notifications_C*                   CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateNotifications) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateNotifications");
static_assert(sizeof(BP_BattleHUD_C_CreateNotifications) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateNotifications");
static_assert(offsetof(BP_BattleHUD_C_CreateNotifications, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateNotifications::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifications
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteNotifications final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteNotifications) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteNotifications");
static_assert(sizeof(BP_BattleHUD_C_DeleteNotifications) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteNotifications");
static_assert(offsetof(BP_BattleHUD_C_DeleteNotifications, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteNotifications::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowDemo
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateTextWindowDemo final
{
public:
	class UTextWindowDemo_C*                      CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateTextWindowDemo) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateTextWindowDemo");
static_assert(sizeof(BP_BattleHUD_C_CreateTextWindowDemo) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateTextWindowDemo");
static_assert(offsetof(BP_BattleHUD_C_CreateTextWindowDemo, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateTextWindowDemo::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowDemo
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteTextWindowDemo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteTextWindowDemo) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteTextWindowDemo");
static_assert(sizeof(BP_BattleHUD_C_DeleteTextWindowDemo) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteTextWindowDemo");
static_assert(offsetof(BP_BattleHUD_C_DeleteTextWindowDemo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteTextWindowDemo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindow
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateTextWindow final
{
public:
	class UTextWindow_C*                          CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateTextWindow) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateTextWindow");
static_assert(sizeof(BP_BattleHUD_C_CreateTextWindow) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateTextWindow");
static_assert(offsetof(BP_BattleHUD_C_CreateTextWindow, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateTextWindow::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindow
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteTextWindow final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteTextWindow) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteTextWindow");
static_assert(sizeof(BP_BattleHUD_C_DeleteTextWindow) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteTextWindow");
static_assert(offsetof(BP_BattleHUD_C_DeleteTextWindow, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteTextWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowSkit
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateTextWindowSkit final
{
public:
	class UTextWindowSkit_C*                      CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateTextWindowSkit) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateTextWindowSkit");
static_assert(sizeof(BP_BattleHUD_C_CreateTextWindowSkit) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateTextWindowSkit");
static_assert(offsetof(BP_BattleHUD_C_CreateTextWindowSkit, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateTextWindowSkit::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowSkit
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteTextWindowSkit final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteTextWindowSkit) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteTextWindowSkit");
static_assert(sizeof(BP_BattleHUD_C_DeleteTextWindowSkit) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteTextWindowSkit");
static_assert(offsetof(BP_BattleHUD_C_DeleteTextWindowSkit, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteTextWindowSkit::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateMailLimitIndicator
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateMailLimitIndicator final
{
public:
	class UMailLimitIndicator_C*                  CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateMailLimitIndicator) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateMailLimitIndicator");
static_assert(sizeof(BP_BattleHUD_C_CreateMailLimitIndicator) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateMailLimitIndicator");
static_assert(offsetof(BP_BattleHUD_C_CreateMailLimitIndicator, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateMailLimitIndicator::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteMailLimitIndicator
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteMailLimitIndicator final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteMailLimitIndicator) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteMailLimitIndicator");
static_assert(sizeof(BP_BattleHUD_C_DeleteMailLimitIndicator) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteMailLimitIndicator");
static_assert(offsetof(BP_BattleHUD_C_DeleteMailLimitIndicator, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteMailLimitIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateOpenCommandMenu
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateOpenCommandMenu final
{
public:
	class UOpenCommandMenu_C*                     CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateOpenCommandMenu) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateOpenCommandMenu");
static_assert(sizeof(BP_BattleHUD_C_CreateOpenCommandMenu) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateOpenCommandMenu");
static_assert(offsetof(BP_BattleHUD_C_CreateOpenCommandMenu, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateOpenCommandMenu::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteOpenCommandMenu
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteOpenCommandMenu final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteOpenCommandMenu) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteOpenCommandMenu");
static_assert(sizeof(BP_BattleHUD_C_DeleteOpenCommandMenu) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteOpenCommandMenu");
static_assert(offsetof(BP_BattleHUD_C_DeleteOpenCommandMenu, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteOpenCommandMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateStatusAlimentNotifyWidgetOwner
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner final
{
public:
	class UWBP_StatusAlimentNotifyWidgetOwner_C*  CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner");
static_assert(sizeof(BP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner");
static_assert(offsetof(BP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteStatusAlimentNotifyWidgetOwner
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner");
static_assert(sizeof(BP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner");
static_assert(offsetof(BP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateChatUnreadNotify
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_CreateChatUnreadNotify final
{
public:
	class UChatUnreadNotify_C*                    CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_CreateChatUnreadNotify) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateChatUnreadNotify");
static_assert(sizeof(BP_BattleHUD_C_CreateChatUnreadNotify) == 0x000008, "Wrong size on BP_BattleHUD_C_CreateChatUnreadNotify");
static_assert(offsetof(BP_BattleHUD_C_CreateChatUnreadNotify, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateChatUnreadNotify::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatUnreadNotify
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteChatUnreadNotify final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteChatUnreadNotify) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteChatUnreadNotify");
static_assert(sizeof(BP_BattleHUD_C_DeleteChatUnreadNotify) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteChatUnreadNotify");
static_assert(offsetof(BP_BattleHUD_C_DeleteChatUnreadNotify, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteChatUnreadNotify::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.CreateTelopManager
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_CreateTelopManager final
{
public:
	class UTelopManager_C*                        CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_CreateTelopManager) == 0x000008, "Wrong alignment on BP_BattleHUD_C_CreateTelopManager");
static_assert(sizeof(BP_BattleHUD_C_CreateTelopManager) == 0x000010, "Wrong size on BP_BattleHUD_C_CreateTelopManager");
static_assert(offsetof(BP_BattleHUD_C_CreateTelopManager, CallFunc_Create_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_CreateTelopManager::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_CreateTelopManager, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_BattleHUD_C_CreateTelopManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.DeleteTelopManager
// 0x0001 (0x0001 - 0x0000)
struct BP_BattleHUD_C_DeleteTelopManager final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_DeleteTelopManager) == 0x000001, "Wrong alignment on BP_BattleHUD_C_DeleteTelopManager");
static_assert(sizeof(BP_BattleHUD_C_DeleteTelopManager) == 0x000001, "Wrong size on BP_BattleHUD_C_DeleteTelopManager");
static_assert(offsetof(BP_BattleHUD_C_DeleteTelopManager, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_DeleteTelopManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.Bind
// 0x0030 (0x0030 - 0x0000)
struct BP_BattleHUD_C_Bind final
{
public:
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_Bind) == 0x000008, "Wrong alignment on BP_BattleHUD_C_Bind");
static_assert(sizeof(BP_BattleHUD_C_Bind) == 0x000030, "Wrong size on BP_BattleHUD_C_Bind");
static_assert(offsetof(BP_BattleHUD_C_Bind, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BP_BattleHUD_C_Bind::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_Bind, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BP_BattleHUD_C_Bind::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_Bind, CallFunc_GetEventExecutor_ReturnValue) == 0x000020, "Member 'BP_BattleHUD_C_Bind::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_Bind, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000028, "Member 'BP_BattleHUD_C_Bind::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.Unbind
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_Unbind final
{
public:
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_Unbind) == 0x000008, "Wrong alignment on BP_BattleHUD_C_Unbind");
static_assert(sizeof(BP_BattleHUD_C_Unbind) == 0x000008, "Wrong size on BP_BattleHUD_C_Unbind");
static_assert(offsetof(BP_BattleHUD_C_Unbind, CallFunc_GetEventExecutor_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_Unbind::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.BindOnJoinInterruptQuest
// 0x00A8 (0x00A8 - 0x0000)
struct BP_BattleHUD_C_BindOnJoinInterruptQuest final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)> K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5249[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_524A[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_BindOnJoinInterruptQuest) == 0x000008, "Wrong alignment on BP_BattleHUD_C_BindOnJoinInterruptQuest");
static_assert(sizeof(BP_BattleHUD_C_BindOnJoinInterruptQuest) == 0x0000A8, "Wrong size on BP_BattleHUD_C_BindOnJoinInterruptQuest");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000008, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_GetObjectName_ReturnValue) == 0x000018, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000048, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_GetPlayerController_ReturnValue_1) == 0x000058, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000060, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000070, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000080, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, K2Node_DynamicCast_AsSBPlayer_State) == 0x000090, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_BindOnJoinInterruptQuest, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x0000A0, "Member 'BP_BattleHUD_C_BindOnJoinInterruptQuest::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.UnbindOnJoinInterruptQuest
// 0x0040 (0x0040 - 0x0000)
struct BP_BattleHUD_C_UnbindOnJoinInterruptQuest final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_524B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_524C[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInterruptQuestComponent*       CallFunc_GetInterruptQuestComponent_ReturnValue;   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest) == 0x000008, "Wrong alignment on BP_BattleHUD_C_UnbindOnJoinInterruptQuest");
static_assert(sizeof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest) == 0x000040, "Wrong size on BP_BattleHUD_C_UnbindOnJoinInterruptQuest");
static_assert(offsetof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_UnbindOnJoinInterruptQuest::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_BattleHUD_C_UnbindOnJoinInterruptQuest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000018, "Member 'BP_BattleHUD_C_UnbindOnJoinInterruptQuest::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_BattleHUD_C_UnbindOnJoinInterruptQuest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest, K2Node_DynamicCast_AsSBPlayer_State) == 0x000028, "Member 'BP_BattleHUD_C_UnbindOnJoinInterruptQuest::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_BattleHUD_C_UnbindOnJoinInterruptQuest::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_UnbindOnJoinInterruptQuest, CallFunc_GetInterruptQuestComponent_ReturnValue) == 0x000038, "Member 'BP_BattleHUD_C_UnbindOnJoinInterruptQuest::CallFunc_GetInterruptQuestComponent_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.OnJoinInterreputQuestDelegete
// 0x00E8 (0x00E8 - 0x0000)
struct BP_BattleHUD_C_OnJoinInterreputQuestDelegete final
{
public:
	class USBPlayerInterruptQuestComponent*       InComponent;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInFirst;                                          // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_524D[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_524E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable;                            // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_524F[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5250[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0080(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5251[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5252[0x1];                                     // 0x00AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5253[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5254[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5255[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete) == 0x000008, "Wrong alignment on BP_BattleHUD_C_OnJoinInterreputQuestDelegete");
static_assert(sizeof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete) == 0x0000E8, "Wrong size on BP_BattleHUD_C_OnJoinInterreputQuestDelegete");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, InComponent) == 0x000000, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::InComponent' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, bInFirst) == 0x000008, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::bInFirst' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, Temp_bool_True_if_break_was_hit_Variable) == 0x000009, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, Temp_wildcard_Variable) == 0x000014, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_GetClassType_ReturnValue) == 0x00001C, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000080, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000090, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, Temp_int_Loop_Counter_Variable) == 0x000094, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_Array_Get_Item) == 0x000098, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_Add_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000A9, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_BooleanOR_ReturnValue) == 0x0000AA, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_Array_Length_ReturnValue) == 0x0000AC, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_Less_IntInt_ReturnValue) == 0x0000B0, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_GetPlayerController_ReturnValue) == 0x0000B8, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_BooleanAND_ReturnValue) == 0x0000C0, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000C8, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x0000D8, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_OnJoinInterreputQuestDelegete, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x0000E0, "Member 'BP_BattleHUD_C_OnJoinInterreputQuestDelegete::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetPlaceGuideWidget
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_GetPlaceGuideWidget final
{
public:
	class UPlaceGuide_C*                          PlaceGuideWidget;                                  // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_GetPlaceGuideWidget) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetPlaceGuideWidget");
static_assert(sizeof(BP_BattleHUD_C_GetPlaceGuideWidget) == 0x000010, "Wrong size on BP_BattleHUD_C_GetPlaceGuideWidget");
static_assert(offsetof(BP_BattleHUD_C_GetPlaceGuideWidget, PlaceGuideWidget) == 0x000000, "Member 'BP_BattleHUD_C_GetPlaceGuideWidget::PlaceGuideWidget' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetPlaceGuideWidget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_BattleHUD_C_GetPlaceGuideWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.IsChatWindowActive
// 0x0002 (0x0002 - 0x0000)
struct BP_BattleHUD_C_IsChatWindowActive final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_IsChatWindowActive) == 0x000001, "Wrong alignment on BP_BattleHUD_C_IsChatWindowActive");
static_assert(sizeof(BP_BattleHUD_C_IsChatWindowActive) == 0x000002, "Wrong size on BP_BattleHUD_C_IsChatWindowActive");
static_assert(offsetof(BP_BattleHUD_C_IsChatWindowActive, Active) == 0x000000, "Member 'BP_BattleHUD_C_IsChatWindowActive::Active' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_IsChatWindowActive, CallFunc_IsActive_ReturnValue) == 0x000001, "Member 'BP_BattleHUD_C_IsChatWindowActive::CallFunc_IsActive_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.IsOtherPCListMenuVisible
// 0x0002 (0x0002 - 0x0000)
struct BP_BattleHUD_C_IsOtherPCListMenuVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_IsOtherPCListMenuVisible) == 0x000001, "Wrong alignment on BP_BattleHUD_C_IsOtherPCListMenuVisible");
static_assert(sizeof(BP_BattleHUD_C_IsOtherPCListMenuVisible) == 0x000002, "Wrong size on BP_BattleHUD_C_IsOtherPCListMenuVisible");
static_assert(offsetof(BP_BattleHUD_C_IsOtherPCListMenuVisible, Visible) == 0x000000, "Member 'BP_BattleHUD_C_IsOtherPCListMenuVisible::Visible' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_IsOtherPCListMenuVisible, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_BattleHUD_C_IsOtherPCListMenuVisible::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.IsEditMap
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_IsEditMap final
{
public:
	float                                         PressTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EditMap_Result;                           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_IsEditMap) == 0x000004, "Wrong alignment on BP_BattleHUD_C_IsEditMap");
static_assert(sizeof(BP_BattleHUD_C_IsEditMap) == 0x000008, "Wrong size on BP_BattleHUD_C_IsEditMap");
static_assert(offsetof(BP_BattleHUD_C_IsEditMap, PressTime) == 0x000000, "Member 'BP_BattleHUD_C_IsEditMap::PressTime' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_IsEditMap, Result) == 0x000004, "Member 'BP_BattleHUD_C_IsEditMap::Result' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_IsEditMap, CallFunc_EditMap_Result) == 0x000005, "Member 'BP_BattleHUD_C_IsEditMap::CallFunc_EditMap_Result' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_IsEditMap, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'BP_BattleHUD_C_IsEditMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetLayoutableHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetLayoutableHUD final
{
public:
	class USBLayoutableHUD*                       ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetLayoutableHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetLayoutableHUD");
static_assert(sizeof(BP_BattleHUD_C_GetLayoutableHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_GetLayoutableHUD");
static_assert(offsetof(BP_BattleHUD_C_GetLayoutableHUD, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetLayoutableHUD::ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetChatHUD
// 0x0010 (0x0010 - 0x0000)
struct BP_BattleHUD_C_GetChatHUD final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BattleHUD_C_GetChatHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetChatHUD");
static_assert(sizeof(BP_BattleHUD_C_GetChatHUD) == 0x000010, "Wrong size on BP_BattleHUD_C_GetChatHUD");
static_assert(offsetof(BP_BattleHUD_C_GetChatHUD, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetChatHUD::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BattleHUD_C_GetChatHUD, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_BattleHUD_C_GetChatHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetNotifyMessage
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetNotifyMessage final
{
public:
	class UUserWidget*                            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetNotifyMessage) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetNotifyMessage");
static_assert(sizeof(BP_BattleHUD_C_GetNotifyMessage) == 0x000008, "Wrong size on BP_BattleHUD_C_GetNotifyMessage");
static_assert(offsetof(BP_BattleHUD_C_GetNotifyMessage, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetNotifyMessage::ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetBattleContentsHUD
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetBattleContentsHUD final
{
public:
	class USBBattleContentsHUD*                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetBattleContentsHUD) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetBattleContentsHUD");
static_assert(sizeof(BP_BattleHUD_C_GetBattleContentsHUD) == 0x000008, "Wrong size on BP_BattleHUD_C_GetBattleContentsHUD");
static_assert(offsetof(BP_BattleHUD_C_GetBattleContentsHUD, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetBattleContentsHUD::ReturnValue' has a wrong offset!");

// Function BP_BattleHUD.BP_BattleHUD_C.GetTelopManager
// 0x0008 (0x0008 - 0x0000)
struct BP_BattleHUD_C_GetTelopManager final
{
public:
	class USBTelopManager*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BattleHUD_C_GetTelopManager) == 0x000008, "Wrong alignment on BP_BattleHUD_C_GetTelopManager");
static_assert(sizeof(BP_BattleHUD_C_GetTelopManager) == 0x000008, "Wrong size on BP_BattleHUD_C_GetTelopManager");
static_assert(offsetof(BP_BattleHUD_C_GetTelopManager, ReturnValue) == 0x000000, "Member 'BP_BattleHUD_C_GetTelopManager::ReturnValue' has a wrong offset!");

}

