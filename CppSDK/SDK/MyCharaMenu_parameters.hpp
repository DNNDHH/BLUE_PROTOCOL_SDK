#pragma once

 

// Package: MyCharaMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EMyCharaMenu_ItemType_structs.hpp"
#include "PlayerSceneCapture2D_MapSpawnConfig_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu.MyCharaMenu_C.ExecuteUbergraph_MyCharaMenu
// 0x0C00 (0x0C00 - 0x0000)
struct MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6129[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_612A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_C*         K2Node_CustomEvent_InAchievementList;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_612B[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InResult_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InResult;                       // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_612C[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0088(0x0018)()
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_FindCurrMapPlayerAvatarTransform_OutTransform; // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Set_Player_Avater_Motion_Mode_IsIdleMotionPlaying; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_612D[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_Studio_C*      CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_ComponentBoundEvent_ButtonId;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x010E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x010F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsActive;                     // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0113(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InProcStart;                    // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_612E[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0118(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_4;                        // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index_3;                        // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_612F[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_OnPosingCommandName;            // 0x012C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InSwitchPosingToPrev;           // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0137(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6130[0x5];                                     // 0x0143(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1; // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6131[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStateNum_OutNum;                       // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0158(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_InPrevStateName_1;              // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InNextStateName_1;              // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0188(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6132[0x5];                                     // 0x019B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_2; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6133[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FindStateName_OutNo;                      // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6134[0x5];                                     // 0x01B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x01CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6135[0x4];                                     // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_3; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6136[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x01DC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6137[0x4];                                     // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InPrevStateName;                // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_InNextStateName;                // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6138[0x2];                                     // 0x0212(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0214(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0225(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x0226(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6139[0x1];                                     // 0x0227(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_23;                   // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_613A[0x2];                                     // 0x0232(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_7;            // 0x0234(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_8;            // 0x0244(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_24;                   // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_25;                   // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_613B[0x2];                                     // 0x0256(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0258(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x026A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x026B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_613C[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Machine_Name_OutName;           // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_State_Name_IsValid;                   // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_613D[0x6];                                     // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Name_OutStateName;              // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, int32 AvatarPoseId)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x0298(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsHidden;                       // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x02AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_613E[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuSubButtonInterface> K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface; // 0x02B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsCostumeOn_1;                // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_26;                   // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x02C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_613F[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x02D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_27;                   // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_28;                   // 0x02EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_29;                   // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6140[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_4; // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsVisible;                    // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6141[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x0300(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_30;                   // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6142[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateParameter                K2Node_CustomEvent_CharaCreateParameter_1;         // 0x0318(0x03C0)()
	bool                                          K2Node_CustomEvent_Start;                          // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_31;                   // 0x06D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6143[0x6];                                     // 0x06DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateParameter                K2Node_CustomEvent_CharaCreateParameter;           // 0x06E0(0x03C0)()
	bool                                          CallFunc_IsValid_ReturnValue_32;                   // 0x0AA0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_33;                   // 0x0AA1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6144[0x2];                                     // 0x0AA2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0AA4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InAvatarPoseId;                 // 0x0AA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0AAC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6145[0x3];                                     // 0x0AAD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0AB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0AB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x0AC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_34;                   // 0x0AC1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6146[0x2];                                     // 0x0AC2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode, int32 AvatarPoseId)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0AC4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_InIsCostumeOn;                  // 0x0AD4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6147[0x3];                                     // 0x0AD5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSubMenuId;                    // 0x0AD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0ADC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6148[0x3];                                     // 0x0ADD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0AE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_35;                   // 0x0AE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0AE9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6149[0x6];                                     // 0x0AEA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0AF0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_36;                   // 0x0AF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_614A[0x3];                                     // 0x0AF9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MainPage;                             // 0x0AFC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x0B00(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0B04(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_37;                   // 0x0B05(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_614B[0x2];                                     // 0x0B06(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher; // 0x0B08(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0B10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_38;                   // 0x0B11(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_39;                   // 0x0B12(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_40;                   // 0x0B13(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_614C[0x4];                                     // 0x0B14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_5; // 0x0B18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0B20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_State_Name_IsValid_1;                 // 0x0B21(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_614D[0x6];                                     // 0x0B22(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Name_OutStateName_1;            // 0x0B28(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Get_State_Machine_Name_OutName_1;         // 0x0B38(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0B48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0B49(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_614E[0x2];                                     // 0x0B4A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0B4C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_1; // 0x0B50(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0B58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_41;                   // 0x0B59(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_614F[0x6];                                     // 0x0B5A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_2; // 0x0B60(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0B68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6150[0x7];                                     // 0x0B69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_3; // 0x0B70(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0B78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_42;                   // 0x0B79(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_43;                   // 0x0B7A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6151[0x1];                                     // 0x0B7B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_2;                        // 0x0B7C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0B80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6152[0x3];                                     // 0x0B81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index_1;                        // 0x0B84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0B88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0B8C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0B8D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_44;                   // 0x0B8E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0B8F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_4; // 0x0B90(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0B98(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6153[0x7];                                     // 0x0B99(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetWidgetSwitcherActiveWidget_OutWidget;  // 0x0BA0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_45;                   // 0x0BA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6154[0x7];                                     // 0x0BA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_ArmamentChange_C*          K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change; // 0x0BB0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x0BB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_46;                   // 0x0BB9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6155[0x6];                                     // 0x0BBA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_6; // 0x0BC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x0BC8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_47;                   // 0x0BC9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_48;                   // 0x0BCA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0BCB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0BCC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0BCD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_49;                   // 0x0BCE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_50;                   // 0x0BCF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_51;                   // 0x0BD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6156[0x7];                                     // 0x0BD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_7; // 0x0BD8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x0BE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6157[0x3];                                     // 0x0BE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0BE4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_52;                   // 0x0BE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_53;                   // 0x0BE9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6158[0x6];                                     // 0x0BEA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharacterMenu_StatusSwitcher_C*      K2Node_DynamicCast_AsMy_Character_Menu_Status_Switcher; // 0x0BF0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x0BF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu) == 0x000010, "Wrong alignment on MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu");
static_assert(sizeof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu) == 0x000C00, "Wrong size on MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, EntryPoint) == 0x000000, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000004, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InAchievementList) == 0x000030, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InAchievementList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_AddChildToCanvas_ReturnValue) == 0x000040, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InResult_1) == 0x000048, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InResult_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InResult) == 0x000049, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InResult' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000050, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000078, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000088, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetCurrentLevelName_ReturnValue) == 0x0000A0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_FindCurrMapPlayerAvatarTransform_OutTransform) == 0x0000B0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_FindCurrMapPlayerAvatarTransform_OutTransform' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Set_Player_Avater_Motion_Mode_IsIdleMotionPlaying) == 0x0000E0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Set_Player_Avater_Motion_Mode_IsIdleMotionPlaying' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000F8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_ComponentBoundEvent_ButtonId) == 0x000108, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_ComponentBoundEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_2) == 0x00010C, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Conv_IntToByte_ReturnValue) == 0x00010D, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetValidValue_ReturnValue) == 0x00010E, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00010F, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_IsVisible) == 0x000110, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InIsActive) == 0x000111, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InIsActive' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_3) == 0x000112, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_4) == 0x000113, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InProcStart) == 0x000114, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InProcStart' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_Event_Animation) == 0x000118, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Index_4) == 0x000120, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Index_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Index_3) == 0x000124, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Index_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_SwitchInteger_CmpSuccess) == 0x000128, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_OnPosingCommandName) == 0x00012C, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_OnPosingCommandName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InSwitchPosingToPrev) == 0x000134, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InSwitchPosingToPrev' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_5) == 0x000135, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_6) == 0x000136, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_7) == 0x000137, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000138, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_8) == 0x000141, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_9) == 0x000142, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1) == 0x000148, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_1) == 0x000150, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_10) == 0x000151, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetStateNum_OutNum) == 0x000154, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetStateNum_OutNum' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000158, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InPrevStateName_1) == 0x000168, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InPrevStateName_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InNextStateName_1) == 0x000178, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InNextStateName_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000188, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_11) == 0x000198, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_12) == 0x000199, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_13) == 0x00019A, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_2) == 0x0001A0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_2) == 0x0001A8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_FindStateName_OutNo) == 0x0001AC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_FindStateName_OutNo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0001B0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_14) == 0x0001B1, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_15) == 0x0001B2, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_PlayAnimation_ReturnValue) == 0x0001B8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0001C0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_SwitchEnum_CmpSuccess_1) == 0x0001C8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_16) == 0x0001C9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_17) == 0x0001CA, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_18) == 0x0001CB, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_3) == 0x0001D0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_3) == 0x0001D8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001DC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InPrevStateName) == 0x0001F0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InPrevStateName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InNextStateName) == 0x000200, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InNextStateName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_19) == 0x000210, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000211, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x000214, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_20) == 0x000224, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Result_1) == 0x000225, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_21) == 0x000226, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetComponentByClass_ReturnValue) == 0x000228, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_22) == 0x000230, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_23) == 0x000231, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x000234, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x000244, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_24) == 0x000254, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_25) == 0x000255, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x000258, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000268, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000269, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x00026A, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x00026B, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_BooleanOR_ReturnValue) == 0x00026C, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Get_State_Machine_Name_OutName) == 0x000270, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Get_State_Machine_Name_OutName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000280, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Get_State_Name_IsValid) == 0x000281, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Get_State_Name_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Get_State_Name_OutStateName) == 0x000288, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Get_State_Name_OutStateName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_10) == 0x000298, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_BooleanAND_ReturnValue) == 0x0002A8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_IsHidden) == 0x0002A9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_IsHidden' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_SwitchEnum_CmpSuccess_2) == 0x0002AA, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, Temp_byte_Variable) == 0x0002AB, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface) == 0x0002B0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_4) == 0x0002C0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InIsCostumeOn_1) == 0x0002C1, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InIsCostumeOn_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_26) == 0x0002C2, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_26' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x0002C3, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x0002C4, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, Temp_byte_Variable_1) == 0x0002C8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Add_IntInt_ReturnValue) == 0x0002CC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002D0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Percent_IntInt_ReturnValue) == 0x0002D4, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_Event_InBookMarkType) == 0x0002D8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, Temp_bool_Variable) == 0x0002E8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_27) == 0x0002E9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_27' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_Select_Default) == 0x0002EA, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_28) == 0x0002EB, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_28' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_29) == 0x0002EC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_29' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_4) == 0x0002F0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_5) == 0x0002F8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InIsVisible) == 0x0002F9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x000300, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_6) == 0x000310, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_30) == 0x000311, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_30' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_CharaCreateParameter_1) == 0x000318, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_CharaCreateParameter_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Start) == 0x0006D8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Start' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_31) == 0x0006D9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_31' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_CharaCreateParameter) == 0x0006E0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_32) == 0x000AA0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_32' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_33) == 0x000AA1, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_33' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InRetCode) == 0x000AA4, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InAvatarPoseId) == 0x000AA8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InAvatarPoseId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Result) == 0x000AAC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_PlayAnimation_ReturnValue_2) == 0x000AB0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_PlayAnimation_ReturnValue_3) == 0x000AB8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_SwitchEnum_CmpSuccess_3) == 0x000AC0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_34) == 0x000AC1, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_34' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CreateDelegate_OutputDelegate_11) == 0x000AC4, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InIsCostumeOn) == 0x000AD4, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InIsCostumeOn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_InSubMenuId) == 0x000AD8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_InSubMenuId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000ADC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000AE0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_35) == 0x000AE8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_35' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x000AE9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000AF0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_36) == 0x000AF8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_36' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_Event_MainPage) == 0x000AFC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_Event_SubPage) == 0x000B00, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000B04, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_37) == 0x000B05, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_37' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher) == 0x000B08, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_7) == 0x000B10, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_38) == 0x000B11, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_38' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_39) == 0x000B12, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_39' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_40) == 0x000B13, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_40' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_5) == 0x000B18, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_8) == 0x000B20, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Get_State_Name_IsValid_1) == 0x000B21, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Get_State_Name_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Get_State_Name_OutStateName_1) == 0x000B28, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Get_State_Name_OutStateName_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Get_State_Machine_Name_OutName_1) == 0x000B38, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Get_State_Machine_Name_OutName_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000B48, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000B49, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, Temp_int_Variable) == 0x000B4C, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_1) == 0x000B50, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_9) == 0x000B58, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_41) == 0x000B59, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_41' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_2) == 0x000B60, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_10) == 0x000B68, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_3) == 0x000B70, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_11) == 0x000B78, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_42) == 0x000B79, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_42' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_43) == 0x000B7A, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_43' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Index_2) == 0x000B7C, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Index_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_SwitchInteger_CmpSuccess_1) == 0x000B80, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Index_1) == 0x000B84, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Index_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_CustomEvent_Index) == 0x000B88, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000B8C, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000B8D, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_44) == 0x000B8E, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_44' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000B8F, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_4) == 0x000B90, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_12) == 0x000B98, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_GetWidgetSwitcherActiveWidget_OutWidget) == 0x000BA0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_GetWidgetSwitcherActiveWidget_OutWidget' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_45) == 0x000BA8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_45' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change) == 0x000BB0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsMy_Chara_Menu_Armament_Change' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_13) == 0x000BB8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_46) == 0x000BB9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_46' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_6) == 0x000BC0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_14) == 0x000BC8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_47) == 0x000BC9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_47' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_48) == 0x000BCA, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_48' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000BCB, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_Not_PreBool_ReturnValue_4) == 0x000BCC, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000BCD, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_49) == 0x000BCE, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_49' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_50) == 0x000BCF, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_50' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_51) == 0x000BD0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_51' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_7) == 0x000BD8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_15) == 0x000BE0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, Temp_int_Variable_1) == 0x000BE4, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_52) == 0x000BE8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_52' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, CallFunc_IsValid_ReturnValue_53) == 0x000BE9, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::CallFunc_IsValid_ReturnValue_53' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_AsMy_Character_Menu_Status_Switcher) == 0x000BF0, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_AsMy_Character_Menu_Status_Switcher' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu, K2Node_DynamicCast_bSuccess_16) == 0x000BF8, "Member 'MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.AdventurerRankSubMenuChanged
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_AdventurerRankSubMenuChanged final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_AdventurerRankSubMenuChanged) == 0x000004, "Wrong alignment on MyCharaMenu_C_AdventurerRankSubMenuChanged");
static_assert(sizeof(MyCharaMenu_C_AdventurerRankSubMenuChanged) == 0x000004, "Wrong size on MyCharaMenu_C_AdventurerRankSubMenuChanged");
static_assert(offsetof(MyCharaMenu_C_AdventurerRankSubMenuChanged, Param_Index) == 0x000000, "Member 'MyCharaMenu_C_AdventurerRankSubMenuChanged::Param_Index' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.SkillBoardSetSubMenuChanged
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_SkillBoardSetSubMenuChanged final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_SkillBoardSetSubMenuChanged) == 0x000004, "Wrong alignment on MyCharaMenu_C_SkillBoardSetSubMenuChanged");
static_assert(sizeof(MyCharaMenu_C_SkillBoardSetSubMenuChanged) == 0x000004, "Wrong size on MyCharaMenu_C_SkillBoardSetSubMenuChanged");
static_assert(offsetof(MyCharaMenu_C_SkillBoardSetSubMenuChanged, Param_Index) == 0x000000, "Member 'MyCharaMenu_C_SkillBoardSetSubMenuChanged::Param_Index' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.CostumeAndMountsSubMenuChanged
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_CostumeAndMountsSubMenuChanged final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_CostumeAndMountsSubMenuChanged) == 0x000004, "Wrong alignment on MyCharaMenu_C_CostumeAndMountsSubMenuChanged");
static_assert(sizeof(MyCharaMenu_C_CostumeAndMountsSubMenuChanged) == 0x000004, "Wrong size on MyCharaMenu_C_CostumeAndMountsSubMenuChanged");
static_assert(offsetof(MyCharaMenu_C_CostumeAndMountsSubMenuChanged, Param_Index) == 0x000000, "Member 'MyCharaMenu_C_CostumeAndMountsSubMenuChanged::Param_Index' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnCostumeAndMountsSubMenuChanged
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged final
{
public:
	int32                                         InSubMenuId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged) == 0x000004, "Wrong alignment on MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged");
static_assert(sizeof(MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged) == 0x000004, "Wrong size on MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged");
static_assert(offsetof(MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged, InSubMenuId) == 0x000000, "Member 'MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged::InSubMenuId' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnIsCostumeOn
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_OnIsCostumeOn final
{
public:
	bool                                          InIsCostumeOn;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnIsCostumeOn) == 0x000001, "Wrong alignment on MyCharaMenu_C_OnIsCostumeOn");
static_assert(sizeof(MyCharaMenu_C_OnIsCostumeOn) == 0x000001, "Wrong size on MyCharaMenu_C_OnIsCostumeOn");
static_assert(offsetof(MyCharaMenu_C_OnIsCostumeOn, InIsCostumeOn) == 0x000000, "Member 'MyCharaMenu_C_OnIsCostumeOn::InIsCostumeOn' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoaded_CostumePreviewRefresh
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh) == 0x000001, "Wrong alignment on MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh");
static_assert(sizeof(MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh) == 0x000001, "Wrong size on MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh");
static_assert(offsetof(MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh, Result) == 0x000000, "Member 'MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh::Result' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.RefreshPreviewCostume
// 0x03C0 (0x03C0 - 0x0000)
struct MyCharaMenu_C_RefreshPreviewCostume final
{
public:
	struct FSBCharaCreateParameter                CharaCreateParameter;                              // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_C_RefreshPreviewCostume) == 0x000008, "Wrong alignment on MyCharaMenu_C_RefreshPreviewCostume");
static_assert(sizeof(MyCharaMenu_C_RefreshPreviewCostume) == 0x0003C0, "Wrong size on MyCharaMenu_C_RefreshPreviewCostume");
static_assert(offsetof(MyCharaMenu_C_RefreshPreviewCostume, CharaCreateParameter) == 0x000000, "Member 'MyCharaMenu_C_RefreshPreviewCostume::CharaCreateParameter' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.SetCostumePreviewParameter
// 0x03C8 (0x03C8 - 0x0000)
struct MyCharaMenu_C_SetCostumePreviewParameter final
{
public:
	struct FSBCharaCreateParameter                CharaCreateParameter;                              // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Start;                                             // 0x03C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_SetCostumePreviewParameter) == 0x000008, "Wrong alignment on MyCharaMenu_C_SetCostumePreviewParameter");
static_assert(sizeof(MyCharaMenu_C_SetCostumePreviewParameter) == 0x0003C8, "Wrong size on MyCharaMenu_C_SetCostumePreviewParameter");
static_assert(offsetof(MyCharaMenu_C_SetCostumePreviewParameter, CharaCreateParameter) == 0x000000, "Member 'MyCharaMenu_C_SetCostumePreviewParameter::CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_SetCostumePreviewParameter, Start) == 0x0003C0, "Member 'MyCharaMenu_C_SetCostumePreviewParameter::Start' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnIsCmnBackBtnVisibleEvent
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent) == 0x000001, "Wrong alignment on MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent");
static_assert(sizeof(MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent) == 0x000001, "Wrong size on MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent");
static_assert(offsetof(MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent, InIsVisible) == 0x000000, "Member 'MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent::InIsVisible' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on MyCharaMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(MyCharaMenu_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on MyCharaMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(MyCharaMenu_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'MyCharaMenu_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnCostumeSwitchOnOffEvent
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_OnCostumeSwitchOnOffEvent final
{
public:
	bool                                          InIsCostumeOn;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnCostumeSwitchOnOffEvent) == 0x000001, "Wrong alignment on MyCharaMenu_C_OnCostumeSwitchOnOffEvent");
static_assert(sizeof(MyCharaMenu_C_OnCostumeSwitchOnOffEvent) == 0x000001, "Wrong size on MyCharaMenu_C_OnCostumeSwitchOnOffEvent");
static_assert(offsetof(MyCharaMenu_C_OnCostumeSwitchOnOffEvent, InIsCostumeOn) == 0x000000, "Member 'MyCharaMenu_C_OnCostumeSwitchOnOffEvent::InIsCostumeOn' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnSetPlayerCaptureStudioHidden_����
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____ final
{
public:
	bool                                          IsHidden;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____) == 0x000001, "Wrong alignment on MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____");
static_assert(sizeof(MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____) == 0x000001, "Wrong size on MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____");
static_assert(offsetof(MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____, IsHidden) == 0x000000, "Member 'MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____::IsHidden' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoadedDelegate_ByChangeCostume_����
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____ final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____) == 0x000001, "Wrong alignment on MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____");
static_assert(sizeof(MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____) == 0x000001, "Wrong size on MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____");
static_assert(offsetof(MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____, Result) == 0x000000, "Member 'MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____::Result' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnChangeStateByCostumeChange_����
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_C_OnChangeStateByCostumeChange_____ final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_OnChangeStateByCostumeChange_____) == 0x000008, "Wrong alignment on MyCharaMenu_C_OnChangeStateByCostumeChange_____");
static_assert(sizeof(MyCharaMenu_C_OnChangeStateByCostumeChange_____) == 0x000020, "Wrong size on MyCharaMenu_C_OnChangeStateByCostumeChange_____");
static_assert(offsetof(MyCharaMenu_C_OnChangeStateByCostumeChange_____, InPrevStateName) == 0x000000, "Member 'MyCharaMenu_C_OnChangeStateByCostumeChange_____::InPrevStateName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_OnChangeStateByCostumeChange_____, InNextStateName) == 0x000010, "Member 'MyCharaMenu_C_OnChangeStateByCostumeChange_____::InNextStateName' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnAvatarPoseChangeState_����
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_C_OnAvatarPoseChangeState_____ final
{
public:
	class FString                                 InPrevStateName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 InNextStateName;                                   // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_OnAvatarPoseChangeState_____) == 0x000008, "Wrong alignment on MyCharaMenu_C_OnAvatarPoseChangeState_____");
static_assert(sizeof(MyCharaMenu_C_OnAvatarPoseChangeState_____) == 0x000020, "Wrong size on MyCharaMenu_C_OnAvatarPoseChangeState_____");
static_assert(offsetof(MyCharaMenu_C_OnAvatarPoseChangeState_____, InPrevStateName) == 0x000000, "Member 'MyCharaMenu_C_OnAvatarPoseChangeState_____::InPrevStateName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_OnAvatarPoseChangeState_____, InNextStateName) == 0x000010, "Member 'MyCharaMenu_C_OnAvatarPoseChangeState_____::InNextStateName' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarSwitchPosing_����
// 0x000C (0x000C - 0x0000)
struct MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____ final
{
public:
	class FName                                   OnPosingCommandName;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSwitchPosingToPrev;                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____) == 0x000004, "Wrong alignment on MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____");
static_assert(sizeof(MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____) == 0x00000C, "Wrong size on MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____");
static_assert(offsetof(MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____, OnPosingCommandName) == 0x000000, "Member 'MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____::OnPosingCommandName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____, InSwitchPosingToPrev) == 0x000008, "Member 'MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____::InSwitchPosingToPrev' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.EffectListSubMenuChanged
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_EffectListSubMenuChanged final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_EffectListSubMenuChanged) == 0x000004, "Wrong alignment on MyCharaMenu_C_EffectListSubMenuChanged");
static_assert(sizeof(MyCharaMenu_C_EffectListSubMenuChanged) == 0x000004, "Wrong size on MyCharaMenu_C_EffectListSubMenuChanged");
static_assert(offsetof(MyCharaMenu_C_EffectListSubMenuChanged, Param_Index) == 0x000000, "Member 'MyCharaMenu_C_EffectListSubMenuChanged::Param_Index' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.BattleSetSubMenuChanged
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_BattleSetSubMenuChanged final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_BattleSetSubMenuChanged) == 0x000004, "Wrong alignment on MyCharaMenu_C_BattleSetSubMenuChanged");
static_assert(sizeof(MyCharaMenu_C_BattleSetSubMenuChanged) == 0x000004, "Wrong size on MyCharaMenu_C_BattleSetSubMenuChanged");
static_assert(offsetof(MyCharaMenu_C_BattleSetSubMenuChanged, Param_Index) == 0x000000, "Member 'MyCharaMenu_C_BattleSetSubMenuChanged::Param_Index' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on MyCharaMenu_C_OnAnimationFinished");
static_assert(sizeof(MyCharaMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on MyCharaMenu_C_OnAnimationFinished");
static_assert(offsetof(MyCharaMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'MyCharaMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.ChangeCostumeProc
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_ChangeCostumeProc final
{
public:
	bool                                          InProcStart;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_ChangeCostumeProc) == 0x000001, "Wrong alignment on MyCharaMenu_C_ChangeCostumeProc");
static_assert(sizeof(MyCharaMenu_C_ChangeCostumeProc) == 0x000001, "Wrong size on MyCharaMenu_C_ChangeCostumeProc");
static_assert(offsetof(MyCharaMenu_C_ChangeCostumeProc, InProcStart) == 0x000000, "Member 'MyCharaMenu_C_ChangeCostumeProc::InProcStart' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarRotateActive_����
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_OnPlayerAvatarRotateActive_____ final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_OnPlayerAvatarRotateActive_____) == 0x000001, "Wrong alignment on MyCharaMenu_C_OnPlayerAvatarRotateActive_____");
static_assert(sizeof(MyCharaMenu_C_OnPlayerAvatarRotateActive_____) == 0x000001, "Wrong size on MyCharaMenu_C_OnPlayerAvatarRotateActive_____");
static_assert(offsetof(MyCharaMenu_C_OnPlayerAvatarRotateActive_____, InIsActive) == 0x000000, "Member 'MyCharaMenu_C_OnPlayerAvatarRotateActive_____::InIsActive' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.SetUIBlockerVisibility
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_SetUIBlockerVisibility final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_SetUIBlockerVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_C_SetUIBlockerVisibility");
static_assert(sizeof(MyCharaMenu_C_SetUIBlockerVisibility) == 0x000001, "Wrong size on MyCharaMenu_C_SetUIBlockerVisibility");
static_assert(offsetof(MyCharaMenu_C_SetUIBlockerVisibility, Param_IsVisible) == 0x000000, "Member 'MyCharaMenu_C_SetUIBlockerVisibility::Param_IsVisible' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature");
static_assert(sizeof(MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature) == 0x000004, "Wrong size on MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature");
static_assert(offsetof(MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.SelectAchievementSaved
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_SelectAchievementSaved final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_SelectAchievementSaved) == 0x000001, "Wrong alignment on MyCharaMenu_C_SelectAchievementSaved");
static_assert(sizeof(MyCharaMenu_C_SelectAchievementSaved) == 0x000001, "Wrong size on MyCharaMenu_C_SelectAchievementSaved");
static_assert(offsetof(MyCharaMenu_C_SelectAchievementSaved, InResult) == 0x000000, "Member 'MyCharaMenu_C_SelectAchievementSaved::InResult' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.AcquiredAchievementLoaded
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_AcquiredAchievementLoaded final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_AcquiredAchievementLoaded) == 0x000001, "Wrong alignment on MyCharaMenu_C_AcquiredAchievementLoaded");
static_assert(sizeof(MyCharaMenu_C_AcquiredAchievementLoaded) == 0x000001, "Wrong size on MyCharaMenu_C_AcquiredAchievementLoaded");
static_assert(offsetof(MyCharaMenu_C_AcquiredAchievementLoaded, InResult) == 0x000000, "Member 'MyCharaMenu_C_AcquiredAchievementLoaded::InResult' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.AchievementChangeButtonClicked
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_C_AchievementChangeButtonClicked final
{
public:
	class UMyCharaMenu_AchievementList_C*         InAchievementList;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_AchievementChangeButtonClicked) == 0x000008, "Wrong alignment on MyCharaMenu_C_AchievementChangeButtonClicked");
static_assert(sizeof(MyCharaMenu_C_AchievementChangeButtonClicked) == 0x000008, "Wrong size on MyCharaMenu_C_AchievementChangeButtonClicked");
static_assert(offsetof(MyCharaMenu_C_AchievementChangeButtonClicked, InAchievementList) == 0x000000, "Member 'MyCharaMenu_C_AchievementChangeButtonClicked::InAchievementList' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnSaveCommandMenuPlayerAvatarPoseId_����
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____ final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAvatarPoseId;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____) == 0x000004, "Wrong alignment on MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____");
static_assert(sizeof(MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____) == 0x000008, "Wrong size on MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____");
static_assert(offsetof(MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____, InRetCode) == 0x000000, "Member 'MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____::InRetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____, InAvatarPoseId) == 0x000004, "Member 'MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____::InAvatarPoseId' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on MyCharaMenu_C_OnSubMenuUpdate");
static_assert(sizeof(MyCharaMenu_C_OnSubMenuUpdate) == 0x000008, "Wrong size on MyCharaMenu_C_OnSubMenuUpdate");
static_assert(offsetof(MyCharaMenu_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'MyCharaMenu_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'MyCharaMenu_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.Setup Selected Menu
// 0x0280 (0x0280 - 0x0000)
struct MyCharaMenu_C_Setup_Selected_Menu final
{
public:
	EMyCharaMenu_ItemType                         InSelectedItemType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsPlayerAvatarVisible;                          // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6159[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBButton_C*                            SelectedBtnItem;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_615A[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool InIsCostumeOn)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBCharaCreateParameter& Parameter)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsCostumeOn)>           K2Node_CreateDelegate_OutputDelegate_4;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName OnPosingCommandName, bool IsSwitchPosingToPrev)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsActive)>              K2Node_CreateDelegate_OutputDelegate_6;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool ProcStart)>               K2Node_CreateDelegate_OutputDelegate_7;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;            // 0x00A4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsVisible)>             K2Node_CreateDelegate_OutputDelegate_10;           // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;           // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsActive)>              K2Node_CreateDelegate_OutputDelegate_12;           // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsHidden)>                K2Node_CreateDelegate_OutputDelegate_13;           // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_14;           // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsCostumeOn)>           K2Node_CreateDelegate_OutputDelegate_15;           // 0x0104(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_615B[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_EffectList_C*              CallFunc_Create_ReturnValue;                       // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_16;           // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_17;           // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher; // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_615C[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool InIsVisible)>             K2Node_CreateDelegate_OutputDelegate_18;           // 0x014C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_615D[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_1; // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPreviewMode_Preview;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_615E[0x1];                                     // 0x016B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_19;           // 0x016C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsActive)>              K2Node_CreateDelegate_OutputDelegate_20;           // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_615F[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue;          // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_21;           // 0x01A0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6160[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsHidden)>                K2Node_CreateDelegate_OutputDelegate_22;           // 0x01B4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6161[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool InResult)>                K2Node_CreateDelegate_OutputDelegate_23;           // 0x01C8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InResult)>                K2Node_CreateDelegate_OutputDelegate_24;           // 0x01D8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_25;           // 0x01E8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_26;           // 0x01F8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool InIsVisible)>             K2Node_CreateDelegate_OutputDelegate_27;           // 0x0208(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UMyCharaMenu_AchievementList_C* InAchievementList)> K2Node_CreateDelegate_OutputDelegate_28;           // 0x0218(0x0010)(ZeroConstructor, NoDestructor)
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_2; // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6162[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharacterMenu_StatusSwitcher_C*      CallFunc_Create_ReturnValue_1;                     // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SkillListBoard_C*                  CallFunc_Create_ReturnValue_2;                     // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_29;           // 0x0248(0x0010)(ZeroConstructor, NoDestructor)
	class UUMG_AdventurerRank_C*                  CallFunc_Create_ReturnValue_3;                     // 0x0258(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* CallFunc_Create_ReturnValue_4;                     // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6163[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_Setup_Selected_Menu) == 0x000008, "Wrong alignment on MyCharaMenu_C_Setup_Selected_Menu");
static_assert(sizeof(MyCharaMenu_C_Setup_Selected_Menu) == 0x000280, "Wrong size on MyCharaMenu_C_Setup_Selected_Menu");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, InSelectedItemType) == 0x000000, "Member 'MyCharaMenu_C_Setup_Selected_Menu::InSelectedItemType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, TmpIsPlayerAvatarVisible) == 0x000001, "Member 'MyCharaMenu_C_Setup_Selected_Menu::TmpIsPlayerAvatarVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, SelectedBtnItem) == 0x000008, "Member 'MyCharaMenu_C_Setup_Selected_Menu::SelectedBtnItem' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000054, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000064, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_6) == 0x000074, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_7) == 0x000084, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_8) == 0x000094, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_9) == 0x0000A4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_10) == 0x0000B4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000C4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_12) == 0x0000D4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_13) == 0x0000E4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_14) == 0x0000F4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_15) == 0x000104, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000114, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue) == 0x000118, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_16) == 0x000120, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_17) == 0x000130, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher) == 0x000140, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_18) == 0x00014C, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_1) == 0x000160, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_DynamicCast_bSuccess_1) == 0x000168, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_IsPreviewMode_Preview) == 0x000169, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_IsPreviewMode_Preview' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_IsValid_ReturnValue) == 0x00016A, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_19) == 0x00016C, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_20) == 0x00017C, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_GetBookMarkTypeNone_ReturnValue) == 0x000190, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_GetBookMarkTypeNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_21) == 0x0001A0, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_Not_PreBool_ReturnValue) == 0x0001B0, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_22) == 0x0001B4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_Not_PreBool_ReturnValue_1) == 0x0001C4, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_23) == 0x0001C8, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_24) == 0x0001D8, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_25) == 0x0001E8, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_26) == 0x0001F8, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_27) == 0x000208, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_28) == 0x000218, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_28' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_2) == 0x000228, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_DynamicCast_bSuccess_2) == 0x000230, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_1) == 0x000238, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_2) == 0x000240, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_29) == 0x000248, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_29' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_3) == 0x000258, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_4) == 0x000260, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, K2Node_SwitchEnum_CmpSuccess_1) == 0x000268, "Member 'MyCharaMenu_C_Setup_Selected_Menu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_AddChildToCanvas_ReturnValue) == 0x000270, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_IsValid_ReturnValue_1) == 0x000278, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Setup_Selected_Menu, CallFunc_IsValid_ReturnValue_2) == 0x000279, "Member 'MyCharaMenu_C_Setup_Selected_Menu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.FindCurrMapPlayerAvatarTransform
// 0x0100 (0x0100 - 0x0000)
struct MyCharaMenu_C_FindCurrMapPlayerAvatarTransform final
{
public:
	class FString                                 InCurrMapName;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             OutTransform;                                      // 0x0010(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             AvatarTransform;                                   // 0x0040(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6164[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6165[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerSceneCapture2D_MapSpawnConfig   CallFunc_GetDataTableRowFromName_OutRow;           // 0x00A0(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6166[0xE];                                     // 0x00C2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00D0(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform) == 0x000010, "Wrong alignment on MyCharaMenu_C_FindCurrMapPlayerAvatarTransform");
static_assert(sizeof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform) == 0x000100, "Wrong size on MyCharaMenu_C_FindCurrMapPlayerAvatarTransform");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, InCurrMapName) == 0x000000, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::InCurrMapName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, OutTransform) == 0x000010, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::OutTransform' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, AvatarTransform) == 0x000040, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::AvatarTransform' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, Temp_int_Array_Index_Variable) == 0x000070, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, Temp_int_Loop_Counter_Variable) == 0x000074, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000080, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_Array_Get_Item) == 0x000094, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000A0, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000C1, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_FindCurrMapPlayerAvatarTransform, CallFunc_MakeTransform_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_C_FindCurrMapPlayerAvatarTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.SetPlayerAvatarStudioHidden
// 0x0003 (0x0003 - 0x0000)
struct MyCharaMenu_C_SetPlayerAvatarStudioHidden final
{
public:
	bool                                          InIsHidden;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_SetPlayerAvatarStudioHidden) == 0x000001, "Wrong alignment on MyCharaMenu_C_SetPlayerAvatarStudioHidden");
static_assert(sizeof(MyCharaMenu_C_SetPlayerAvatarStudioHidden) == 0x000003, "Wrong size on MyCharaMenu_C_SetPlayerAvatarStudioHidden");
static_assert(offsetof(MyCharaMenu_C_SetPlayerAvatarStudioHidden, InIsHidden) == 0x000000, "Member 'MyCharaMenu_C_SetPlayerAvatarStudioHidden::InIsHidden' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_SetPlayerAvatarStudioHidden, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'MyCharaMenu_C_SetPlayerAvatarStudioHidden::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_SetPlayerAvatarStudioHidden, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'MyCharaMenu_C_SetPlayerAvatarStudioHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.Initialize Open Menu Type
// 0x000C (0x000C - 0x0000)
struct MyCharaMenu_C_Initialize_Open_Menu_Type final
{
public:
	EMyCharaMenu_ItemType                         Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Adventure_Rank_Board_Enable_Enable;    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMyCharaMenu_ItemType                         CallFunc_Map_Find_Value;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMyCharaMenu_ItemType                         K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_C_Initialize_Open_Menu_Type) == 0x000004, "Wrong alignment on MyCharaMenu_C_Initialize_Open_Menu_Type");
static_assert(sizeof(MyCharaMenu_C_Initialize_Open_Menu_Type) == 0x00000C, "Wrong size on MyCharaMenu_C_Initialize_Open_Menu_Type");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, Temp_byte_Variable) == 0x000000, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, CallFunc_Is_Adventure_Rank_Board_Enable_Enable) == 0x000002, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::CallFunc_Is_Adventure_Rank_Board_Enable_Enable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, Temp_bool_Variable) == 0x000003, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, CallFunc_Map_Find_Value) == 0x000008, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, CallFunc_Map_Find_ReturnValue) == 0x000009, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Initialize_Open_Menu_Type, K2Node_Select_Default) == 0x00000A, "Member 'MyCharaMenu_C_Initialize_Open_Menu_Type::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.UpdateArmamentChangeButtonEnable
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_C_UpdateArmamentChangeButtonEnable final
{
public:
	bool                                          TmpIsArmamentChangeButtonEnable;                   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6167[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Is_Adventure_Rank_Board_Enable_Enable;    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMatchedState_bExists;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6168[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMatchingGameState*                   CallFunc_GetMatchedState_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTraveling_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsConfirmed_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable) == 0x000008, "Wrong alignment on MyCharaMenu_C_UpdateArmamentChangeButtonEnable");
static_assert(sizeof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable) == 0x000020, "Wrong size on MyCharaMenu_C_UpdateArmamentChangeButtonEnable");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, TmpIsArmamentChangeButtonEnable) == 0x000000, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::TmpIsArmamentChangeButtonEnable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, CallFunc_Is_Adventure_Rank_Board_Enable_Enable) == 0x000008, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::CallFunc_Is_Adventure_Rank_Board_Enable_Enable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, CallFunc_GetMatchedState_bExists) == 0x000009, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::CallFunc_GetMatchedState_bExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, CallFunc_GetMatchedState_ReturnValue) == 0x000010, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::CallFunc_GetMatchedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, CallFunc_IsTraveling_ReturnValue) == 0x000018, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::CallFunc_IsTraveling_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_UpdateArmamentChangeButtonEnable, CallFunc_IsConfirmed_ReturnValue) == 0x000019, "Member 'MyCharaMenu_C_UpdateArmamentChangeButtonEnable::CallFunc_IsConfirmed_ReturnValue' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Motion Mode
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_C_Set_Player_Avater_Motion_Mode final
{
public:
	EMyCharaMenu_ItemType                         InMyCharaMenuItemType;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsIdleMotionPlaying;                               // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_Set_Player_Avater_Motion_Mode) == 0x000001, "Wrong alignment on MyCharaMenu_C_Set_Player_Avater_Motion_Mode");
static_assert(sizeof(MyCharaMenu_C_Set_Player_Avater_Motion_Mode) == 0x000004, "Wrong size on MyCharaMenu_C_Set_Player_Avater_Motion_Mode");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Motion_Mode, InMyCharaMenuItemType) == 0x000000, "Member 'MyCharaMenu_C_Set_Player_Avater_Motion_Mode::InMyCharaMenuItemType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Motion_Mode, IsIdleMotionPlaying) == 0x000001, "Member 'MyCharaMenu_C_Set_Player_Avater_Motion_Mode::IsIdleMotionPlaying' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Motion_Mode, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'MyCharaMenu_C_Set_Player_Avater_Motion_Mode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Motion_Mode, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000003, "Member 'MyCharaMenu_C_Set_Player_Avater_Motion_Mode::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Current Mode Motion
// 0x00C0 (0x00C0 - 0x0000)
struct MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion final
{
public:
	EMyCharaMenu_ItemType                         InMyCharaMenuItemType;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceEnable;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6169[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NewLocalVar_1;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 NewLocalVar_0;                                     // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Player_Avater_Motion_Mode_IsIdleMotionPlaying; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_616A[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_616B[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_C*             K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D;   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_616C[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Machine_Name_OutName;           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_Fidget_State_Name_IsValid;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_616D[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Fidget_State_Name_OutStateName;       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Get_State_Machine_Name_OutName_1;         // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& InPrevStateName, const class FString& InNextStateName)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_616E[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCommandMenuPlayerAvatarPoseId_ReturnValue; // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Get_State_Name_IsValid;                   // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_616F[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_State_Name_OutStateName;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion) == 0x000008, "Wrong alignment on MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion");
static_assert(sizeof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion) == 0x0000C0, "Wrong size on MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, InMyCharaMenuItemType) == 0x000000, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::InMyCharaMenuItemType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, ForceEnable) == 0x000001, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::ForceEnable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, NewLocalVar_1) == 0x000008, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, NewLocalVar_0) == 0x000018, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Set_Player_Avater_Motion_Mode_IsIdleMotionPlaying) == 0x000028, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Set_Player_Avater_Motion_Mode_IsIdleMotionPlaying' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_IsValid_ReturnValue_1) == 0x00003C, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_IsValid_ReturnValue_2) == 0x00003D, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D) == 0x000040, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Get_State_Machine_Name_OutName) == 0x000050, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Get_State_Machine_Name_OutName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000060, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Get_Fidget_State_Name_IsValid) == 0x000061, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Get_Fidget_State_Name_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Get_Fidget_State_Name_OutStateName) == 0x000068, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Get_Fidget_State_Name_OutStateName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Get_State_Machine_Name_OutName_1) == 0x000078, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Get_State_Machine_Name_OutName_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, K2Node_CreateDelegate_OutputDelegate_1) == 0x000088, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000098, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_GetCommandMenuPlayerAvatarPoseId_ReturnValue) == 0x00009C, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_GetCommandMenuPlayerAvatarPoseId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_BooleanOR_ReturnValue) == 0x0000A0, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Get_State_Name_IsValid) == 0x0000A1, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Get_State_Name_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Get_State_Name_OutStateName) == 0x0000A8, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Get_State_Name_OutStateName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_Not_PreBool_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_BooleanAND_ReturnValue) == 0x0000B9, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_BooleanOR_ReturnValue_1) == 0x0000BA, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_BooleanOR_ReturnValue_2) == 0x0000BB, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000BC, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion, CallFunc_BooleanOR_ReturnValue_3) == 0x0000BD, "Member 'MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.UpdatePlayerAvatarWeapon
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_C_UpdatePlayerAvatarWeapon final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_UpdatePlayerAvatarWeapon) == 0x000001, "Wrong alignment on MyCharaMenu_C_UpdatePlayerAvatarWeapon");
static_assert(sizeof(MyCharaMenu_C_UpdatePlayerAvatarWeapon) == 0x000001, "Wrong size on MyCharaMenu_C_UpdatePlayerAvatarWeapon");
static_assert(offsetof(MyCharaMenu_C_UpdatePlayerAvatarWeapon, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MyCharaMenu_C_UpdatePlayerAvatarWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu.MyCharaMenu_C.TermRequest
// 0x0030 (0x0030 - 0x0000)
struct MyCharaMenu_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6170[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharacterMenu_CostumeAndMountSwitcher_C* K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPreviewMode_Preview;                    // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      K2Node_Select_Default;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6171[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_C_TermRequest) == 0x000008, "Wrong alignment on MyCharaMenu_C_TermRequest");
static_assert(sizeof(MyCharaMenu_C_TermRequest) == 0x000030, "Wrong size on MyCharaMenu_C_TermRequest");
static_assert(offsetof(MyCharaMenu_C_TermRequest, InReason) == 0x000000, "Member 'MyCharaMenu_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, ReturnValue) == 0x000001, "Member 'MyCharaMenu_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_C_TermRequest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_C_TermRequest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, Temp_bool_Variable) == 0x000004, "Member 'MyCharaMenu_C_TermRequest::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher) == 0x000008, "Member 'MyCharaMenu_C_TermRequest::K2Node_DynamicCast_AsMy_Character_Menu_Costume_and_Mount_Switcher' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'MyCharaMenu_C_TermRequest::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000011, "Member 'MyCharaMenu_C_TermRequest::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, CallFunc_IsValid_ReturnValue) == 0x000012, "Member 'MyCharaMenu_C_TermRequest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, CallFunc_IsPreviewMode_Preview) == 0x000013, "Member 'MyCharaMenu_C_TermRequest::CallFunc_IsPreviewMode_Preview' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, K2Node_Select_Default) == 0x000014, "Member 'MyCharaMenu_C_TermRequest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, K2Node_SwitchEnum_CmpSuccess) == 0x000015, "Member 'MyCharaMenu_C_TermRequest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'MyCharaMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'MyCharaMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_C_TermRequest, K2Node_SwitchEnum_CmpSuccess_1) == 0x000028, "Member 'MyCharaMenu_C_TermRequest::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

}

