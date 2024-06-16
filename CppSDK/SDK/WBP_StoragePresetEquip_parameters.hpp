#pragma once

 

// Package: WBP_StoragePresetEquip

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "PlayerSceneCapture2D_MapSpawnConfig_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.ExecuteUbergraph_WBP_StoragePresetEquip
// 0x02E0 (0x02E0 - 0x0000)
struct WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79A4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopCmnBtn1_C*                         K2Node_ComponentBoundEvent_ClickBtn_1;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_TabID_1;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79A5[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopCmnBtn1_C*                         K2Node_ComponentBoundEvent_ClickBtn;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_TabID;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79A6[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_InIsVisible;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_InIsChildWidgetOpened;  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_InIsRotateActive;       // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79A7[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	bool                                          K2Node_ComponentBoundEvent_InIsHidden;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79A8[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0098(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;                // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79A9[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_79AA[0x8];                                     // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_FindCurrMapPlayerAvatarTransform_OutTransform; // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_Studio_C*      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79AB[0x1];                                     // 0x012B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_79AC[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0148(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79AD[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x015C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x016E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79AE[0x1];                                     // 0x016F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79AF[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InPrevStateName_1;              // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InNextStateName_1;              // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x01A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x01A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B0[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1; // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B1[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindStateName_OutNo;                      // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01B8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsVisible;                    // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x01CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x01CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B2[0x1];                                     // 0x01CF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B3[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_5;            // 0x01DC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x01ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x01EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x01EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_2; // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B4[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x01FC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B5[0x3];                                     // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Machine_Name_OutName;           // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B6[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InPrevStateName;                // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InNextStateName;                // 0x0248(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_State_Name_IsValid;                   // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B7[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Name_OutStateName;              // 0x0260(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0271(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_23;                   // 0x0272(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0273(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79B8[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0278(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_24;                   // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_25;                   // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79B9[0x2];                                     // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x028C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x029C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x02AC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x02BC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_26;                   // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_27;                   // 0x02CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_28;                   // 0x02CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_29;                   // 0x02CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_30;                   // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_31;                   // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip) == 0x000010, "Wrong alignment on WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip");
static_assert(sizeof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip) == 0x0002E0, "Wrong size on WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, EntryPoint) == 0x000000, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_ClickBtn_1) == 0x000008, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_ClickBtn_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_TabID_1) == 0x000010, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_TabID_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_ClickBtn) == 0x000018, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_TabID) == 0x000020, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_TabID' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Not_PreBool_ReturnValue) == 0x000024, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_PlaySE_ReturnValue) == 0x000030, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_InIsVisible) == 0x000034, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_InIsChildWidgetOpened) == 0x000035, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_InIsChildWidgetOpened' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Not_PreBool_ReturnValue_1) == 0x000036, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_InIsRotateActive) == 0x000037, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_InIsRotateActive' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000068, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_ComponentBoundEvent_InIsHidden) == 0x000090, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_ComponentBoundEvent_InIsHidden' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Not_PreBool_ReturnValue_2) == 0x000091, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_2) == 0x000092, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_K2_SetTimer_ReturnValue) == 0x000098, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_K2_SetTimer_ReturnValue_1) == 0x0000A0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000A8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_PlaySE_ReturnValue_1) == 0x0000B0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_GetCurrentLevelName_ReturnValue) == 0x0000B8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_FindCurrMapPlayerAvatarTransform_OutTransform) == 0x0000E0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_FindCurrMapPlayerAvatarTransform_OutTransform' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000110, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000118, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_FinishSpawningActor_ReturnValue) == 0x000120, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_3) == 0x000128, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_4) == 0x000129, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_5) == 0x00012A, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_1) == 0x00012C, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000140, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_2) == 0x000148, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_6) == 0x000158, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_3) == 0x00015C, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_7) == 0x00016C, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_8) == 0x00016D, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_9) == 0x00016E, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000170, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_DynamicCast_bSuccess) == 0x000178, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CustomEvent_InPrevStateName_1) == 0x000180, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CustomEvent_InPrevStateName_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CustomEvent_InNextStateName_1) == 0x000190, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CustomEvent_InNextStateName_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, Temp_byte_Variable) == 0x0001A0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_10) == 0x0001A1, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_11) == 0x0001A2, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_12) == 0x0001A3, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1) == 0x0001A8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_DynamicCast_bSuccess_1) == 0x0001B0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_FindStateName_OutNo) == 0x0001B4, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_FindStateName_OutNo' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001B8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001C8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CustomEvent_InIsVisible) == 0x0001C9, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CustomEvent_InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_13) == 0x0001CA, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_14) == 0x0001CB, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, Temp_byte_Variable_1) == 0x0001CC, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_15) == 0x0001CD, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_16) == 0x0001CE, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_GetComponentByClass_ReturnValue) == 0x0001D0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_17) == 0x0001D8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001DC, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CustomEvent_Result) == 0x0001EC, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_18) == 0x0001ED, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_19) == 0x0001EE, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_20) == 0x0001EF, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_2) == 0x0001F0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_2' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_DynamicCast_bSuccess_2) == 0x0001F8, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001FC, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_7) == 0x00020C, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_21) == 0x00021C, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Get_State_Machine_Name_OutName) == 0x000220, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Get_State_Machine_Name_OutName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000230, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CustomEvent_InPrevStateName) == 0x000238, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CustomEvent_InPrevStateName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CustomEvent_InNextStateName) == 0x000248, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CustomEvent_InNextStateName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Get_State_Name_IsValid) == 0x000258, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Get_State_Name_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_Get_State_Name_OutStateName) == 0x000260, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_Get_State_Name_OutStateName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_22) == 0x000270, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_BooleanAND_ReturnValue) == 0x000271, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_23) == 0x000272, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, Temp_bool_Variable) == 0x000273, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_Select_Default) == 0x000274, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_8) == 0x000278, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_24) == 0x000288, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_25) == 0x000289, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_9) == 0x00028C, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_10) == 0x00029C, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_11) == 0x0002AC, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_CreateDelegate_OutputDelegate_12) == 0x0002BC, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_26) == 0x0002CC, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_27) == 0x0002CD, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_28) == 0x0002CE, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_29) == 0x0002CF, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, K2Node_Event_IsDesignTime) == 0x0002D0, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_30) == 0x0002D1, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip, CallFunc_IsValid_ReturnValue_31) == 0x0002D2, "Member 'WBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_StoragePresetEquip_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_PreConstruct");
static_assert(sizeof(WBP_StoragePresetEquip_C_PreConstruct) == 0x000001, "Wrong size on WBP_StoragePresetEquip_C_PreConstruct");
static_assert(offsetof(WBP_StoragePresetEquip_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_StoragePresetEquip_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeStateByCostumeChange
// 0x0020 (0x0020 - 0x0000)
struct WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange) == 0x000008, "Wrong alignment on WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange");
static_assert(sizeof(WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange) == 0x000020, "Wrong size on WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange");
static_assert(offsetof(WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange, InPrevStateName) == 0x000000, "Member 'WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange::InPrevStateName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange, InNextStateName) == 0x000010, "Member 'WBP_StoragePresetEquip_C_OnChangeStateByCostumeChange::InNextStateName' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCharaPartsLoadedDelegate_ByChangeCostume_����
// 0x0001 (0x0001 - 0x0000)
struct WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____");
static_assert(sizeof(WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____) == 0x000001, "Wrong size on WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____");
static_assert(offsetof(WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____, Result) == 0x000000, "Member 'WBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____::Result' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerFrontRowVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility) == 0x000001, "Wrong size on WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility, InIsVisible) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility::InIsVisible' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeState
// 0x0020 (0x0020 - 0x0000)
struct WBP_StoragePresetEquip_C_OnChangeState final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoragePresetEquip_C_OnChangeState) == 0x000008, "Wrong alignment on WBP_StoragePresetEquip_C_OnChangeState");
static_assert(sizeof(WBP_StoragePresetEquip_C_OnChangeState) == 0x000020, "Wrong size on WBP_StoragePresetEquip_C_OnChangeState");
static_assert(offsetof(WBP_StoragePresetEquip_C_OnChangeState, InPrevStateName) == 0x000000, "Member 'WBP_StoragePresetEquip_C_OnChangeState::InPrevStateName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_OnChangeState, InNextStateName) == 0x000010, "Member 'WBP_StoragePresetEquip_C_OnChangeState::InNextStateName' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature final
{
public:
	bool                                          InIsHidden;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(sizeof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature) == 0x000001, "Wrong size on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature, InIsHidden) == 0x000000, "Member 'WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature::InIsHidden' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature final
{
public:
	bool                                          InIsRotateActive;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(sizeof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong size on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature, InIsRotateActive) == 0x000000, "Member 'WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature::InIsRotateActive' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature final
{
public:
	bool                                          InIsChildWidgetOpened;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature");
static_assert(sizeof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature) == 0x000001, "Wrong size on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature, InIsChildWidgetOpened) == 0x000000, "Member 'WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature::InIsChildWidgetOpened' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(sizeof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature) == 0x000001, "Wrong size on WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature, InIsVisible) == 0x000000, "Member 'WBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature::InIsVisible' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature final
{
public:
	class UShopCmnBtn1_C*                         ClickBtn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
static_assert(sizeof(WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature) == 0x000010, "Wrong size on WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature, ClickBtn) == 0x000000, "Member 'WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature::ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature, TabId) == 0x000008, "Member 'WBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature::TabId' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature final
{
public:
	class UShopCmnBtn1_C*                         ClickBtn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabId;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");
static_assert(sizeof(WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature) == 0x000010, "Wrong size on WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature, ClickBtn) == 0x000000, "Member 'WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature::ClickBtn' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature, TabId) == 0x000008, "Member 'WBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature::TabId' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation
// 0x0018 (0x0018 - 0x0000)
struct WBP_StoragePresetEquip_C_RandomPlayAnimation final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79BA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_RandomPlayAnimation) == 0x000008, "Wrong alignment on WBP_StoragePresetEquip_C_RandomPlayAnimation");
static_assert(sizeof(WBP_StoragePresetEquip_C_RandomPlayAnimation) == 0x000018, "Wrong size on WBP_StoragePresetEquip_C_RandomPlayAnimation");
static_assert(offsetof(WBP_StoragePresetEquip_C_RandomPlayAnimation, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'WBP_StoragePresetEquip_C_RandomPlayAnimation::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_RandomPlayAnimation, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_StoragePresetEquip_C_RandomPlayAnimation::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_RandomPlayAnimation, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WBP_StoragePresetEquip_C_RandomPlayAnimation::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation2
// 0x0018 (0x0018 - 0x0000)
struct WBP_StoragePresetEquip_C_RandomPlayAnimation2 final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79BB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_RandomPlayAnimation2) == 0x000008, "Wrong alignment on WBP_StoragePresetEquip_C_RandomPlayAnimation2");
static_assert(sizeof(WBP_StoragePresetEquip_C_RandomPlayAnimation2) == 0x000018, "Wrong size on WBP_StoragePresetEquip_C_RandomPlayAnimation2");
static_assert(offsetof(WBP_StoragePresetEquip_C_RandomPlayAnimation2, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'WBP_StoragePresetEquip_C_RandomPlayAnimation2::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_RandomPlayAnimation2, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_StoragePresetEquip_C_RandomPlayAnimation2::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_RandomPlayAnimation2, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WBP_StoragePresetEquip_C_RandomPlayAnimation2::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPresetType
// 0x0002 (0x0002 - 0x0000)
struct WBP_StoragePresetEquip_C_SetPresetType final
{
public:
	ESBPlayerPresetType                           InPresetType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetPresetType) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_SetPresetType");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetPresetType) == 0x000002, "Wrong size on WBP_StoragePresetEquip_C_SetPresetType");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPresetType, InPresetType) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetPresetType::InPresetType' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPresetType, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_StoragePresetEquip_C_SetPresetType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetCmnBackBtnVIsibility
// 0x0006 (0x0006 - 0x0000)
struct WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility) == 0x000006, "Wrong size on WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility, InIsVisible) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility, Temp_bool_Variable) == 0x000003, "Member 'WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility, K2Node_Select_Default) == 0x000005, "Member 'WBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FindCurrMapPlayerAvatarTransform
// 0x0110 (0x0110 - 0x0000)
struct WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform final
{
public:
	class FString                                 InCurrMapName;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             OutTransform;                                      // 0x0010(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             LocalAvatarTransform;                              // 0x0040(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79BC[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0080(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerSceneCapture2D_MapSpawnConfig   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0098(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79BD[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79BE[0xF];                                     // 0x00C1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform) == 0x000010, "Wrong alignment on WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform");
static_assert(sizeof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform) == 0x000110, "Wrong size on WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, InCurrMapName) == 0x000000, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::InCurrMapName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, OutTransform) == 0x000010, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::OutTransform' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, LocalAvatarTransform) == 0x000040, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::LocalAvatarTransform' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, Temp_int_Array_Index_Variable) == 0x000070, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000080, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_Array_Get_Item) == 0x000090, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_GetDataTableRowFromName_OutRow) == 0x000098, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B8, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_Array_Length_ReturnValue) == 0x0000BC, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000100, "Member 'WBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarCurrentModeMotion
// 0x0050 (0x0050 - 0x0000)
struct WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion final
{
public:
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79BF[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_Fidget_State_Name_IsValid;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79C0[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Fidget_State_Name_OutStateName;       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Get_State_Machine_Name_OutName;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion) == 0x000008, "Wrong alignment on WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion) == 0x000050, "Wrong size on WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, CallFunc_IsValid_ReturnValue_2) == 0x000012, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000018, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, CallFunc_Get_Fidget_State_Name_IsValid) == 0x000021, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::CallFunc_Get_Fidget_State_Name_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, CallFunc_Get_Fidget_State_Name_OutStateName) == 0x000028, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::CallFunc_Get_Fidget_State_Name_OutStateName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, CallFunc_Get_State_Machine_Name_OutName) == 0x000038, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::CallFunc_Get_State_Machine_Name_OutName' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000048, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarRotateActive
// 0x0002 (0x0002 - 0x0000)
struct WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive final
{
public:
	bool                                          InIsRotateActive;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive) == 0x000002, "Wrong size on WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive, InIsRotateActive) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive::InIsRotateActive' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarStudioHidden
// 0x0003 (0x0003 - 0x0000)
struct WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden final
{
public:
	bool                                          InIsHidden;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden) == 0x000003, "Wrong size on WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden, InIsHidden) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden::InIsHidden' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'WBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerForBattleSetVisibility
// 0x0006 (0x0006 - 0x0000)
struct WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility) == 0x000006, "Wrong size on WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility, InIsVisible) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility, Temp_bool_Variable) == 0x000003, "Member 'WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility, K2Node_Select_Default) == 0x000005, "Member 'WBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetBattleSetPlayerAvatarVisibility
// 0x0002 (0x0002 - 0x0000)
struct WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility final
{
public:
	bool                                          bInIsVisible;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility) == 0x000001, "Wrong alignment on WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility");
static_assert(sizeof(WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility) == 0x000002, "Wrong size on WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility, bInIsVisible) == 0x000000, "Member 'WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility::bInIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

