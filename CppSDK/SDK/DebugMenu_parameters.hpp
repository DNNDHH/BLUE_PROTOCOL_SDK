#pragma once

 

// Package: DebugMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DebugMenu.DebugMenu_C.ExecuteUbergraph_DebugMenu
// 0x07C0 (0x07C0 - 0x0000)
struct DebugMenu_C_ExecuteUbergraph_DebugMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_519C[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UDebugButton_C* DebugButton)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_519D[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_1;  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_519E[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_4;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_2;  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_519F[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable_1;        // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A0[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_1;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_1;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A1[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_1;                     // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A2[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_5;                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A3[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_OutText;                          // 0x00B0(0x0018)()
	class FText                                   CallFunc_GetText_OutText_1;                        // 0x00C8(0x0018)()
	class UObject*                                K2Node_CustomEvent_InSender_9;                     // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_9;                      // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_3;  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A4[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_InSender_8;                     // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_8;                      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_6;                       // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_2;           // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_2;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A5[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_2;                     // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InSender_7;                     // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_7;                      // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InSender_6;                     // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_6;                      // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_4;  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A6[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_3;                             // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_3;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_3;                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A7[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_InSender_5;                     // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_5;                      // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue_3;                     // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_7;                       // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InSender_4;                     // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_4;                      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x01A0(0x0010)(ConstParm, ReferenceParm)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_5;  // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A8[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  K2Node_DynamicCast_AsSBOnline_Player_State;        // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51A9[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01F8(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_6;  // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51AA[0x3];                                     // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x021C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51AB[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51AC[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x023C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51AD[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBPartyMemberState*>            CallFunc_GetAllPartyMembers_PartyMembers;          // 0x0250(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_7;  // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPackagedForDistribution_ReturnValue_8;  // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51AE[0x2];                                     // 0x0266(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0268(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerState*                         CallFunc_Array_Get_Item;                           // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51AF[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_SendInvitation_RecipientPlayer_CastInput; // 0x0288(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51B0[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_4;                             // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B1[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_4;           // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_4;                // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B2[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_4;                     // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         CallFunc_Array_Get_Item_1;                         // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51B3[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBOnlinePlayerState>  CallFunc_SendInvitation_RecipientPlayer_CastInput_1; // 0x02D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B4[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_InSender_3;                     // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_3;                      // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0308(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_1;                               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51B5[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_InSender_2;                     // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_2;                      // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InSender_1;                     // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam_1;                      // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0340(0x0010)(ZeroConstructor, NoDestructor)
	class USBStringParam*                         K2Node_DynamicCast_AsSBString_Param;               // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B6[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_InSender;                       // 0x0360(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_InParam;                        // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0378(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0388(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B7[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_UpdateNotificationData_IsValid;           // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x03B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B8[0x5];                                     // 0x03B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_5;                             // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_5;           // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_5;                // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51B9[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_5;                     // 0x03D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51BA[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x03E8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0400(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51BB[0x4];                                     // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDebugMenu                           CallFunc_GetDataTableRowFromName_OutRow;           // 0x0408(0x0020)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0429(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x042A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51BC[0x5];                                     // 0x042B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0x0430(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0440(0x0018)()
	class FName                                   CallFunc_Array_Get_Item_3;                         // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0464(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51BD[0x3];                                     // 0x0465(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0471(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x0472(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51BE[0x5];                                     // 0x0473(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_6;                             // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDebugParameter                      CallFunc_FindRow_OutData;                          // 0x0488(0x00A0)()
	bool                                          CallFunc_FindRow_ReturnValue;                      // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51BF[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_6;           // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_6;                // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C0[0x7];                                     // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_6;                     // 0x0540(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0548(0x0010)(ZeroConstructor, NoDestructor)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_2;                       // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0564(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C1[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu;                   // 0x0570(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0579(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C2[0x6];                                     // 0x057A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugButton_C*                         CallFunc_CreateButton_OutDebugButton;              // 0x0580(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C3[0x7];                                     // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugButton_C*                         K2Node_CustomEvent_DebugButton;                    // 0x0590(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetFocusWidget_ReturnValue;               // 0x0598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x05A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C4[0x6];                                     // 0x05A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x05B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C5[0x2];                                     // 0x05B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InFocusId;                      // 0x05B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x05B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x05BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x05C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_Event_InUIType;                             // 0x05C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInVisibility;                        // 0x05C5(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInInstantly;                         // 0x05C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x05C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x05C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x05CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C6[0x3];                                     // 0x05CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x05D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x05E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C7[0x7];                                     // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_3;               // 0x05F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C8[0x6];                                     // 0x05FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_3;           // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0608(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51C9[0x7];                                     // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0620(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51CA[0x3];                                     // 0x0631(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0634(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0638(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0639(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x063A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51CB[0x5];                                     // 0x063B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugChildButton_C*                    CallFunc_CreateChildButton_OutDebugButton;         // 0x0640(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0648(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0649(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x064A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x064B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51CC[0x4];                                     // 0x064C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_7;                             // 0x0650(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget_7;           // 0x0658(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_7;                // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51CD[0x7];                                     // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue_7;                     // 0x0670(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x0678(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0688(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51CE[0x7];                                     // 0x0689(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_3;                       // 0x0690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x06A0(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x06B8(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_3;           // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_13;           // 0x06D0(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_4;           // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_14;           // 0x06E8(0x0010)(ZeroConstructor, NoDestructor)
	class UDebugButton_C*                         CallFunc_CreateButton_OutDebugButton_1;            // 0x06F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_5;           // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_15;           // 0x0708(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_6;           // 0x0718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_16;           // 0x0720(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_7;           // 0x0730(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_17;           // 0x0738(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_8;           // 0x0748(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_18;           // 0x0750(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_9;           // 0x0760(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_19;           // 0x0768(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0778(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51CF[0x4];                                     // 0x077C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_4;                         // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0788(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D0[0x7];                                     // 0x0791(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetValidPlayerState_ReturnValue;          // 0x0798(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x07A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D1[0x3];                                     // 0x07A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x07A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x07A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x07B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_ExecuteUbergraph_DebugMenu) == 0x000008, "Wrong alignment on DebugMenu_C_ExecuteUbergraph_DebugMenu");
static_assert(sizeof(DebugMenu_C_ExecuteUbergraph_DebugMenu) == 0x0007C0, "Wrong size on DebugMenu_C_ExecuteUbergraph_DebugMenu");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, EntryPoint) == 0x000000, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000006, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000018, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue) == 0x000019, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable) == 0x000020, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000028, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess) == 0x000030, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_1) == 0x000031, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue) == 0x000038, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded_4) == 0x000040, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_2) == 0x000048, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_bool_True_if_break_was_hit_Variable_1) == 0x000054, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_bool_True_if_break_was_hit_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable_1) == 0x000058, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget_1) == 0x000060, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess_1) == 0x000068, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000069, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue_1) == 0x000070, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Array_Index_Variable) == 0x000078, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Variable) == 0x00007C, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000080, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x000084, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded_5) == 0x000088, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Loop_Counter_Variable_1) == 0x000090, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Loop_Counter_Variable_2) == 0x000094, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Add_IntInt_ReturnValue_2) == 0x000098, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Add_IntInt_ReturnValue_3) == 0x00009C, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Array_Index_Variable_1) == 0x0000A0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000A4, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Conv_StringToName_ReturnValue) == 0x0000A8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetText_OutText) == 0x0000B0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetText_OutText' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetText_OutText_1) == 0x0000C8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetText_OutText_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_9) == 0x0000E0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_9' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_9) == 0x0000E8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_9' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_3) == 0x0000F0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_8) == 0x0000F8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_8' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_8) == 0x000100, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_8' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable_2) == 0x000108, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded_6) == 0x000110, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget_2) == 0x000118, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess_2) == 0x000120, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue_2) == 0x000128, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_7) == 0x000130, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_7) == 0x000138, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_6) == 0x000140, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_6) == 0x000148, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_4) == 0x000150, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable_3) == 0x000158, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget_3) == 0x000160, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess_3) == 0x000168, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_5) == 0x000170, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_5) == 0x000178, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue_3) == 0x000180, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded_7) == 0x000188, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_4) == 0x000190, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_4) == 0x000198, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_MakeArray_Array) == 0x0001A0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetPlayerController_ReturnValue) == 0x0001B0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001B8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_bSuccess) == 0x0001C0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_5) == 0x0001C1, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_AsSBOnline_Player_State) == 0x0001C8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_AsSBOnline_Player_State' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_bSuccess_1) == 0x0001D8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetCharacterId_ReturnValue) == 0x0001E0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x0001F0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001F8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000208, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_6) == 0x000214, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Add_IntInt_ReturnValue_4) == 0x000218, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00021C, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Greater_IntInt_ReturnValue) == 0x00022C, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetCurrentParty_OutPartyState) == 0x000230, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetCurrentParty_ReturnValue) == 0x000238, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x00023C, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x00024C, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetAllPartyMembers_PartyMembers) == 0x000250, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetAllPartyMembers_PartyMembers' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Length_ReturnValue) == 0x000260, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_7) == 0x000264, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsPackagedForDistribution_ReturnValue_8) == 0x000265, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsPackagedForDistribution_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000268, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Get_Item) == 0x000278, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Length_ReturnValue_1) == 0x000280, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_SendInvitation_RecipientPlayer_CastInput) == 0x000288, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_SendInvitation_RecipientPlayer_CastInput' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Subtract_IntInt_ReturnValue) == 0x000298, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable_4) == 0x0002A0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002A8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget_4) == 0x0002B0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess_4) == 0x0002B8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue_4) == 0x0002C0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Get_Item_1) == 0x0002C8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Length_ReturnValue_2) == 0x0002D0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_SendInvitation_RecipientPlayer_CastInput_1) == 0x0002D8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_SendInvitation_RecipientPlayer_CastInput_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0002E8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_3) == 0x0002F0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_3) == 0x0002F8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded) == 0x000300, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000308, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Variable_1) == 0x000318, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_2) == 0x000320, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_2) == 0x000328, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender_1) == 0x000330, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam_1) == 0x000338, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x000340, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_AsSBString_Param) == 0x000350, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_AsSBString_Param' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_bSuccess_2) == 0x000358, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InSender) == 0x000360, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InParam) == 0x000368, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InParam' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000370, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x000378, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x000388, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000398, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsValid_ReturnValue) == 0x0003A0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x0003A8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_UpdateNotificationData_IsValid) == 0x0003B0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_UpdateNotificationData_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsValid_ReturnValue_1) == 0x0003B1, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Result) == 0x0003B2, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable_5) == 0x0003B8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget_5) == 0x0003C0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess_5) == 0x0003C8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue_5) == 0x0003D0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_IsValid) == 0x0003D8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_ReturnValue) == 0x0003E0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0003E8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Get_Item_2) == 0x0003F8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Length_ReturnValue_3) == 0x000400, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDataTableRowFromName_OutRow) == 0x000408, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000428, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Less_IntInt_ReturnValue) == 0x000429, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_BooleanAND_ReturnValue) == 0x00042A, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDataTableRowNames_OutRowNames_1) == 0x000430, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDataTableRowNames_OutRowNames_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Conv_NameToText_ReturnValue) == 0x000440, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Get_Item_3) == 0x000458, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Length_ReturnValue_4) == 0x000460, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Less_IntInt_ReturnValue_1) == 0x000464, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded_1) == 0x000468, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000470, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000471, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_IsValid_1) == 0x000472, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_ReturnValue_1) == 0x000478, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable_6) == 0x000480, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_FindRow_OutData) == 0x000488, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_FindRow_OutData' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_FindRow_ReturnValue) == 0x000528, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_FindRow_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget_6) == 0x000530, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess_6) == 0x000538, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue_6) == 0x000540, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x000548, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded_2) == 0x000558, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Variable_2) == 0x000560, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Length_ReturnValue_5) == 0x000564, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Less_IntInt_ReturnValue_2) == 0x000568, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_AsDebug_Menu) == 0x000570, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_AsDebug_Menu' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_bSuccess_3) == 0x000578, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000579, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_CreateButton_OutDebugButton) == 0x000580, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_CreateButton_OutDebugButton' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsValid_ReturnValue_2) == 0x000588, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_DebugButton) == 0x000590, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_DebugButton' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetFocusWidget_ReturnValue) == 0x000598, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetFocusWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x0005A0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_IsValid_2) == 0x0005A1, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_ReturnValue_2) == 0x0005A8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsVisible_ReturnValue) == 0x0005B0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0005B1, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_InFocusId) == 0x0005B4, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_InFocusId' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetChildrenCount_ReturnValue) == 0x0005B8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0005BC, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Clamp_ReturnValue) == 0x0005C0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_Event_InUIType) == 0x0005C4, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_Event_InUIType' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_Event_bInVisibility) == 0x0005C5, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_Event_bInVisibility' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_Event_bInInstantly) == 0x0005C6, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_Event_bInInstantly' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0005C7, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0005C8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0005CC, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_string_Variable) == 0x0005D0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x0005E0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0005E8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0005F0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_bSuccess_4) == 0x0005F8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_IsValid_3) == 0x0005F9, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_IsValid_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetDebugFunction_ReturnValue_3) == 0x000600, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetDebugFunction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_object_Variable) == 0x000608, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetBool_ReturnValue) == 0x000618, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_SphereOverlapActors_OutActors) == 0x000620, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_SphereOverlapActors_ReturnValue) == 0x000630, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Length_ReturnValue_6) == 0x000634, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000638, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Less_IntInt_ReturnValue_3) == 0x000639, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x00063A, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_CreateChildButton_OutDebugButton) == 0x000640, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_CreateChildButton_OutDebugButton' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000648, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsEditor_ReturnValue) == 0x000649, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_BooleanOR_ReturnValue) == 0x00064A, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00064B, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_class_Variable_7) == 0x000650, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_class_Variable_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_AsUser_Widget_7) == 0x000658, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_AsUser_Widget_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_ClassDynamicCast_bSuccess_7) == 0x000660, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_ClassDynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue) == 0x000668, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Create_ReturnValue_7) == 0x000670, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_10) == 0x000678, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000688, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CustomEvent_Loaded_3) == 0x000690, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CustomEvent_Loaded_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000698, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_11) == 0x0006A0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_2) == 0x0006B0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_12) == 0x0006B8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_3) == 0x0006C8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_13) == 0x0006D0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_4) == 0x0006E0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_14) == 0x0006E8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_CreateButton_OutDebugButton_1) == 0x0006F8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_CreateButton_OutDebugButton_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_5) == 0x000700, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_15) == 0x000708, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_6) == 0x000718, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_16) == 0x000720, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_7) == 0x000730, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_17) == 0x000738, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_8) == 0x000748, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_18) == 0x000750, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetEventExecutor_ReturnValue_9) == 0x000760, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetEventExecutor_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_CreateDelegate_OutputDelegate_19) == 0x000768, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, Temp_int_Array_Index_Variable_2) == 0x000778, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Get_Item_4) == 0x000780, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000788, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, K2Node_DynamicCast_bSuccess_5) == 0x000790, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetValidPlayerState_ReturnValue) == 0x000798, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetValidPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_IsValid_ReturnValue_3) == 0x0007A0, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_Array_Add_ReturnValue) == 0x0007A4, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_GetCharacterId_ReturnValue_1) == 0x0007A8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ExecuteUbergraph_DebugMenu, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x0007B8, "Member 'DebugMenu_C_ExecuteUbergraph_DebugMenu::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.ProcVisibleSettingChange
// 0x0003 (0x0003 - 0x0000)
struct DebugMenu_C_ProcVisibleSettingChange final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_ProcVisibleSettingChange) == 0x000001, "Wrong alignment on DebugMenu_C_ProcVisibleSettingChange");
static_assert(sizeof(DebugMenu_C_ProcVisibleSettingChange) == 0x000003, "Wrong size on DebugMenu_C_ProcVisibleSettingChange");
static_assert(offsetof(DebugMenu_C_ProcVisibleSettingChange, InUIType) == 0x000000, "Member 'DebugMenu_C_ProcVisibleSettingChange::InUIType' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcVisibleSettingChange, bInVisibility) == 0x000001, "Member 'DebugMenu_C_ProcVisibleSettingChange::bInVisibility' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcVisibleSettingChange, bInInstantly) == 0x000002, "Member 'DebugMenu_C_ProcVisibleSettingChange::bInInstantly' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnSetFocusItem
// 0x0004 (0x0004 - 0x0000)
struct DebugMenu_C_OnSetFocusItem final
{
public:
	int32                                         InFocusId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnSetFocusItem) == 0x000004, "Wrong alignment on DebugMenu_C_OnSetFocusItem");
static_assert(sizeof(DebugMenu_C_OnSetFocusItem) == 0x000004, "Wrong size on DebugMenu_C_OnSetFocusItem");
static_assert(offsetof(DebugMenu_C_OnSetFocusItem, InFocusId) == 0x000000, "Member 'DebugMenu_C_OnSetFocusItem::InFocusId' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.DebugButton_OnClicked_����
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_DebugButton_OnClicked_____ final
{
public:
	class UDebugButton_C*                         DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_DebugButton_OnClicked_____) == 0x000008, "Wrong alignment on DebugMenu_C_DebugButton_OnClicked_____");
static_assert(sizeof(DebugMenu_C_DebugButton_OnClicked_____) == 0x000008, "Wrong size on DebugMenu_C_DebugButton_OnClicked_____");
static_assert(offsetof(DebugMenu_C_DebugButton_OnClicked_____, DebugButton) == 0x000000, "Member 'DebugMenu_C_DebugButton_OnClicked_____::DebugButton' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.NotificationLoaded
// 0x0001 (0x0001 - 0x0000)
struct DebugMenu_C_NotificationLoaded final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_NotificationLoaded) == 0x000001, "Wrong alignment on DebugMenu_C_NotificationLoaded");
static_assert(sizeof(DebugMenu_C_NotificationLoaded) == 0x000001, "Wrong size on DebugMenu_C_NotificationLoaded");
static_assert(offsetof(DebugMenu_C_NotificationLoaded, Result) == 0x000000, "Member 'DebugMenu_C_NotificationLoaded::Result' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_NotificationMenu
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_NotificationMenu final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_NotificationMenu) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_NotificationMenu");
static_assert(sizeof(DebugMenu_C_CheatCommand_NotificationMenu) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_NotificationMenu");
static_assert(offsetof(DebugMenu_C_CheatCommand_NotificationMenu, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_NotificationMenu::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_NotificationMenu, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_NotificationMenu::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_BulkGetItemSet
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_BulkGetItemSet final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_BulkGetItemSet) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_BulkGetItemSet");
static_assert(sizeof(DebugMenu_C_CheatCommand_BulkGetItemSet) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_BulkGetItemSet");
static_assert(offsetof(DebugMenu_C_CheatCommand_BulkGetItemSet, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_BulkGetItemSet::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_BulkGetItemSet, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_BulkGetItemSet::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.ChectCommand_AddMasterItemsMenu
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_ChectCommand_AddMasterItemsMenu final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_ChectCommand_AddMasterItemsMenu) == 0x000008, "Wrong alignment on DebugMenu_C_ChectCommand_AddMasterItemsMenu");
static_assert(sizeof(DebugMenu_C_ChectCommand_AddMasterItemsMenu) == 0x000010, "Wrong size on DebugMenu_C_ChectCommand_AddMasterItemsMenu");
static_assert(offsetof(DebugMenu_C_ChectCommand_AddMasterItemsMenu, InSender) == 0x000000, "Member 'DebugMenu_C_ChectCommand_AddMasterItemsMenu::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ChectCommand_AddMasterItemsMenu, InParam) == 0x000008, "Member 'DebugMenu_C_ChectCommand_AddMasterItemsMenu::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_ResponseChecker
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_ResponseChecker final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_ResponseChecker) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_ResponseChecker");
static_assert(sizeof(DebugMenu_C_CheatCommand_ResponseChecker) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_ResponseChecker");
static_assert(offsetof(DebugMenu_C_CheatCommand_ResponseChecker, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_ResponseChecker::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_ResponseChecker, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_ResponseChecker::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_Party_Create_Invite_Send
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_Party_Create_Invite_Send final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_Party_Create_Invite_Send) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_Party_Create_Invite_Send");
static_assert(sizeof(DebugMenu_C_CheatCommand_Party_Create_Invite_Send) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_Party_Create_Invite_Send");
static_assert(offsetof(DebugMenu_C_CheatCommand_Party_Create_Invite_Send, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_Party_Create_Invite_Send::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_Party_Create_Invite_Send, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_Party_Create_Invite_Send::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_ItemSupplyer
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_ItemSupplyer final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_ItemSupplyer) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_ItemSupplyer");
static_assert(sizeof(DebugMenu_C_CheatCommand_ItemSupplyer) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_ItemSupplyer");
static_assert(offsetof(DebugMenu_C_CheatCommand_ItemSupplyer, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_ItemSupplyer::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_ItemSupplyer, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_ItemSupplyer::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_LevelScriptList
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_LevelScriptList final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_LevelScriptList) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_LevelScriptList");
static_assert(sizeof(DebugMenu_C_CheatCommand_LevelScriptList) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_LevelScriptList");
static_assert(offsetof(DebugMenu_C_CheatCommand_LevelScriptList, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_LevelScriptList::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_LevelScriptList, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_LevelScriptList::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_ScriptExecutor
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_ScriptExecutor final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_ScriptExecutor) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_ScriptExecutor");
static_assert(sizeof(DebugMenu_C_CheatCommand_ScriptExecutor) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_ScriptExecutor");
static_assert(offsetof(DebugMenu_C_CheatCommand_ScriptExecutor, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_ScriptExecutor::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_ScriptExecutor, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_ScriptExecutor::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CheatCommand_RecepiBroker
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_CheatCommand_RecepiBroker final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_CheatCommand_RecepiBroker) == 0x000008, "Wrong alignment on DebugMenu_C_CheatCommand_RecepiBroker");
static_assert(sizeof(DebugMenu_C_CheatCommand_RecepiBroker) == 0x000010, "Wrong size on DebugMenu_C_CheatCommand_RecepiBroker");
static_assert(offsetof(DebugMenu_C_CheatCommand_RecepiBroker, InSender) == 0x000000, "Member 'DebugMenu_C_CheatCommand_RecepiBroker::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CheatCommand_RecepiBroker, InParam) == 0x000008, "Member 'DebugMenu_C_CheatCommand_RecepiBroker::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.ChectCommand_BulkGetItemMenu
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_ChectCommand_BulkGetItemMenu final
{
public:
	class UObject*                                InSender;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InParam;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_ChectCommand_BulkGetItemMenu) == 0x000008, "Wrong alignment on DebugMenu_C_ChectCommand_BulkGetItemMenu");
static_assert(sizeof(DebugMenu_C_ChectCommand_BulkGetItemMenu) == 0x000010, "Wrong size on DebugMenu_C_ChectCommand_BulkGetItemMenu");
static_assert(offsetof(DebugMenu_C_ChectCommand_BulkGetItemMenu, InSender) == 0x000000, "Member 'DebugMenu_C_ChectCommand_BulkGetItemMenu::InSender' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ChectCommand_BulkGetItemMenu, InParam) == 0x000008, "Member 'DebugMenu_C_ChectCommand_BulkGetItemMenu::InParam' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E");
static_assert(sizeof(DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E");
static_assert(offsetof(DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_FCD78A754BFACBE57BE3FB962EBE3E7E::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_8950531E42034202AFA24B8A7E7E2D11
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11");
static_assert(sizeof(DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11");
static_assert(offsetof(DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_8950531E42034202AFA24B8A7E7E2D11::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_B6543B2E423821130C7933B54E69A6C5
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5");
static_assert(sizeof(DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5");
static_assert(offsetof(DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_B6543B2E423821130C7933B54E69A6C5::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_27772D90466B1887FF9CA8BA68DDE282
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282");
static_assert(sizeof(DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282");
static_assert(offsetof(DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_27772D90466B1887FF9CA8BA68DDE282::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_4F44425143BDF3C769780FB39763FAA8
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8");
static_assert(sizeof(DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8");
static_assert(offsetof(DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_4F44425143BDF3C769780FB39763FAA8::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77");
static_assert(sizeof(DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77");
static_assert(offsetof(DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_49823CC541B3ACCAE0FC52AA1A214F77::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_BCFFDC8A4AF2D3E733074AB599485936
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936");
static_assert(sizeof(DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936");
static_assert(offsetof(DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_BCFFDC8A4AF2D3E733074AB599485936::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.OnLoaded_102A04CB4074E1F46BB26DB6C4891B24
// 0x0008 (0x0008 - 0x0000)
struct DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24) == 0x000008, "Wrong alignment on DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24");
static_assert(sizeof(DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24) == 0x000008, "Wrong size on DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24");
static_assert(offsetof(DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24, Loaded) == 0x000000, "Member 'DebugMenu_C_OnLoaded_102A04CB4074E1F46BB26DB6C4891B24::Loaded' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateCheckBox
// 0x0058 (0x0058 - 0x0000)
struct DebugMenu_C_CreateCheckBox final
{
public:
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UDebugCheckBox_C*                       CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D2[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBool_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_CreateCheckBox) == 0x000008, "Wrong alignment on DebugMenu_C_CreateCheckBox");
static_assert(sizeof(DebugMenu_C_CreateCheckBox) == 0x000058, "Wrong size on DebugMenu_C_CreateCheckBox");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_Conv_TextToString_ReturnValue) == 0x000000, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_Create_ReturnValue) == 0x000038, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_AddFocusableWidget_ReturnValue) == 0x000040, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_GetDebugFunction_IsValid) == 0x000041, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_GetDebugFunction_ReturnValue) == 0x000048, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCheckBox, CallFunc_GetBool_ReturnValue) == 0x000050, "Member 'DebugMenu_C_CreateCheckBox::CallFunc_GetBool_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateInt32
// 0x0080 (0x0080 - 0x0000)
struct DebugMenu_C_CreateInt32 final
{
public:
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UDebugInt32_C*                          CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D3[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetInt32_ReturnValue;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51D4[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
};
static_assert(alignof(DebugMenu_C_CreateInt32) == 0x000008, "Wrong alignment on DebugMenu_C_CreateInt32");
static_assert(sizeof(DebugMenu_C_CreateInt32) == 0x000080, "Wrong size on DebugMenu_C_CreateInt32");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_Conv_TextToString_ReturnValue) == 0x000000, "Member 'DebugMenu_C_CreateInt32::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'DebugMenu_C_CreateInt32::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_Create_ReturnValue) == 0x000020, "Member 'DebugMenu_C_CreateInt32::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'DebugMenu_C_CreateInt32::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_AddFocusableWidget_ReturnValue) == 0x000040, "Member 'DebugMenu_C_CreateInt32::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_GetDebugFunction_IsValid) == 0x000041, "Member 'DebugMenu_C_CreateInt32::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_GetDebugFunction_ReturnValue) == 0x000048, "Member 'DebugMenu_C_CreateInt32::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_GetInt32_ReturnValue) == 0x000050, "Member 'DebugMenu_C_CreateInt32::CallFunc_GetInt32_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_Conv_IntToString_ReturnValue) == 0x000058, "Member 'DebugMenu_C_CreateInt32::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateInt32, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'DebugMenu_C_CreateInt32::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateFloat
// 0x0080 (0x0080 - 0x0000)
struct DebugMenu_C_CreateFloat final
{
public:
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class UDebugFloat_C*                          CallFunc_Create_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D5[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloat_ReturnValue;                     // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51D6[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0068(0x0018)()
};
static_assert(alignof(DebugMenu_C_CreateFloat) == 0x000008, "Wrong alignment on DebugMenu_C_CreateFloat");
static_assert(sizeof(DebugMenu_C_CreateFloat) == 0x000080, "Wrong size on DebugMenu_C_CreateFloat");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_Conv_TextToString_ReturnValue) == 0x000000, "Member 'DebugMenu_C_CreateFloat::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'DebugMenu_C_CreateFloat::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'DebugMenu_C_CreateFloat::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_Create_ReturnValue) == 0x000038, "Member 'DebugMenu_C_CreateFloat::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_AddFocusableWidget_ReturnValue) == 0x000040, "Member 'DebugMenu_C_CreateFloat::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_GetDebugFunction_IsValid) == 0x000041, "Member 'DebugMenu_C_CreateFloat::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_GetDebugFunction_ReturnValue) == 0x000048, "Member 'DebugMenu_C_CreateFloat::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_GetFloat_ReturnValue) == 0x000050, "Member 'DebugMenu_C_CreateFloat::CallFunc_GetFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_Conv_FloatToString_ReturnValue) == 0x000058, "Member 'DebugMenu_C_CreateFloat::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateFloat, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000068, "Member 'DebugMenu_C_CreateFloat::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateString
// 0x0090 (0x0090 - 0x0000)
struct DebugMenu_C_CreateString final
{
public:
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UDebugString_C*                         CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D7[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetString_ReturnValue;                    // 0x0050(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D8[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
};
static_assert(alignof(DebugMenu_C_CreateString) == 0x000008, "Wrong alignment on DebugMenu_C_CreateString");
static_assert(sizeof(DebugMenu_C_CreateString) == 0x000090, "Wrong size on DebugMenu_C_CreateString");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_Conv_TextToString_ReturnValue) == 0x000000, "Member 'DebugMenu_C_CreateString::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'DebugMenu_C_CreateString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_Create_ReturnValue) == 0x000020, "Member 'DebugMenu_C_CreateString::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'DebugMenu_C_CreateString::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_AddFocusableWidget_ReturnValue) == 0x000040, "Member 'DebugMenu_C_CreateString::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_GetDebugFunction_IsValid) == 0x000041, "Member 'DebugMenu_C_CreateString::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_GetDebugFunction_ReturnValue) == 0x000048, "Member 'DebugMenu_C_CreateString::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_GetString_ReturnValue) == 0x000050, "Member 'DebugMenu_C_CreateString::CallFunc_GetString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000060, "Member 'DebugMenu_C_CreateString::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_Array_Get_Item) == 0x000068, "Member 'DebugMenu_C_CreateString::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateString, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'DebugMenu_C_CreateString::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateComboBox
// 0x00B8 (0x00B8 - 0x0000)
struct DebugMenu_C_CreateComboBox final
{
public:
	int32                                         LastOptionLength;                                  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51D9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51DA[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugComboBox_C*                       CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51DB[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSelectedOption_ReturnValue;            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_GetString_ReturnValue;                    // 0x0078(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51DC[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_CreateComboBox) == 0x000008, "Wrong alignment on DebugMenu_C_CreateComboBox");
static_assert(sizeof(DebugMenu_C_CreateComboBox) == 0x0000B8, "Wrong size on DebugMenu_C_CreateComboBox");
static_assert(offsetof(DebugMenu_C_CreateComboBox, LastOptionLength) == 0x000000, "Member 'DebugMenu_C_CreateComboBox::LastOptionLength' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'DebugMenu_C_CreateComboBox::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, Temp_int_Array_Index_Variable) == 0x000048, "Member 'DebugMenu_C_CreateComboBox::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Create_ReturnValue) == 0x000050, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_AddFocusableWidget_ReturnValue) == 0x000058, "Member 'DebugMenu_C_CreateComboBox::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_GetDebugFunction_IsValid) == 0x000059, "Member 'DebugMenu_C_CreateComboBox::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_GetDebugFunction_ReturnValue) == 0x000060, "Member 'DebugMenu_C_CreateComboBox::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_GetSelectedOption_ReturnValue) == 0x000068, "Member 'DebugMenu_C_CreateComboBox::CallFunc_GetSelectedOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_GetString_ReturnValue) == 0x000078, "Member 'DebugMenu_C_CreateComboBox::CallFunc_GetString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000088, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Array_Get_Item) == 0x000098, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Len_ReturnValue) == 0x0000A8, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Greater_IntInt_ReturnValue) == 0x0000AC, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateComboBox, CallFunc_Less_IntInt_ReturnValue) == 0x0000B4, "Member 'DebugMenu_C_CreateComboBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateCommand
// 0x00D0 (0x00D0 - 0x0000)
struct DebugMenu_C_CreateCommand final
{
public:
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_GetCurrentValue_CurrentValue;             // 0x0038(0x0018)()
	bool                                          CallFunc_GetCurrentValue_ValueExists;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51DD[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugCommand_C*                        CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51DE[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B8(0x0018)()
};
static_assert(alignof(DebugMenu_C_CreateCommand) == 0x000008, "Wrong alignment on DebugMenu_C_CreateCommand");
static_assert(sizeof(DebugMenu_C_CreateCommand) == 0x0000D0, "Wrong size on DebugMenu_C_CreateCommand");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Conv_TextToString_ReturnValue) == 0x000000, "Member 'DebugMenu_C_CreateCommand::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'DebugMenu_C_CreateCommand::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'DebugMenu_C_CreateCommand::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_GetCurrentValue_CurrentValue) == 0x000038, "Member 'DebugMenu_C_CreateCommand::CallFunc_GetCurrentValue_CurrentValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_GetCurrentValue_ValueExists) == 0x000050, "Member 'DebugMenu_C_CreateCommand::CallFunc_GetCurrentValue_ValueExists' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Create_ReturnValue) == 0x000058, "Member 'DebugMenu_C_CreateCommand::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_AddFocusableWidget_ReturnValue) == 0x000060, "Member 'DebugMenu_C_CreateCommand::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000068, "Member 'DebugMenu_C_CreateCommand::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Array_Get_Item) == 0x000078, "Member 'DebugMenu_C_CreateCommand::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000088, "Member 'DebugMenu_C_CreateCommand::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000098, "Member 'DebugMenu_C_CreateCommand::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000A8, "Member 'DebugMenu_C_CreateCommand::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateCommand, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B8, "Member 'DebugMenu_C_CreateCommand::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateButton
// 0x0050 (0x0050 - 0x0000)
struct DebugMenu_C_CreateButton final
{
public:
	class UDebugButton_C*                         OutDebugButton;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class UDebugButton_C*                         CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_CreateButton) == 0x000008, "Wrong alignment on DebugMenu_C_CreateButton");
static_assert(sizeof(DebugMenu_C_CreateButton) == 0x000050, "Wrong size on DebugMenu_C_CreateButton");
static_assert(offsetof(DebugMenu_C_CreateButton, OutDebugButton) == 0x000000, "Member 'DebugMenu_C_CreateButton::OutDebugButton' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateButton, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'DebugMenu_C_CreateButton::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateButton, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'DebugMenu_C_CreateButton::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'DebugMenu_C_CreateButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateButton, CallFunc_Create_ReturnValue) == 0x000040, "Member 'DebugMenu_C_CreateButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateButton, CallFunc_AddFocusableWidget_ReturnValue) == 0x000048, "Member 'DebugMenu_C_CreateButton::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.InputDebugMenuButton
// 0x0001 (0x0001 - 0x0000)
struct DebugMenu_C_InputDebugMenuButton final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_InputDebugMenuButton) == 0x000001, "Wrong alignment on DebugMenu_C_InputDebugMenuButton");
static_assert(sizeof(DebugMenu_C_InputDebugMenuButton) == 0x000001, "Wrong size on DebugMenu_C_InputDebugMenuButton");
static_assert(offsetof(DebugMenu_C_InputDebugMenuButton, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'DebugMenu_C_InputDebugMenuButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.SetDebugMenuVisibility
// 0x0028 (0x0028 - 0x0000)
struct DebugMenu_C_SetDebugMenuVisibility final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51DF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugSubMenuBase_C*                    K2Node_DynamicCast_AsDebug_Sub_Menu_Base;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E0[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x0014(0x0004)(NoDestructor)
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_SetDebugMenuVisibility) == 0x000008, "Wrong alignment on DebugMenu_C_SetDebugMenuVisibility");
static_assert(sizeof(DebugMenu_C_SetDebugMenuVisibility) == 0x000028, "Wrong size on DebugMenu_C_SetDebugMenuVisibility");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, InVisible) == 0x000000, "Member 'DebugMenu_C_SetDebugMenuVisibility::InVisible' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, K2Node_DynamicCast_AsDebug_Sub_Menu_Base) == 0x000008, "Member 'DebugMenu_C_SetDebugMenuVisibility::K2Node_DynamicCast_AsDebug_Sub_Menu_Base' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'DebugMenu_C_SetDebugMenuVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, CallFunc_ShowCursor_ReturnValue) == 0x000014, "Member 'DebugMenu_C_SetDebugMenuVisibility::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, K2Node_DynamicCast_AsDebug_Menu) == 0x000018, "Member 'DebugMenu_C_SetDebugMenuVisibility::K2Node_DynamicCast_AsDebug_Menu' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'DebugMenu_C_SetDebugMenuVisibility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, CallFunc_IsVisible_ReturnValue) == 0x000021, "Member 'DebugMenu_C_SetDebugMenuVisibility::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_SetDebugMenuVisibility, CallFunc_IsValid_ReturnValue) == 0x000022, "Member 'DebugMenu_C_SetDebugMenuVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.ProcFocusCursorMoveUpDown
// 0x0030 (0x0030 - 0x0000)
struct DebugMenu_C_ProcFocusCursorMoveUpDown final
{
public:
	bool                                          InMoveUp;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemCount;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFocusWidgetIndex_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_LoopAdd_ReturnValue;                      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetFocusWidgetIndex_ReturnValue_1;        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_LoopSub_ReturnValue;                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E2[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E3[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_ProcFocusCursorMoveUpDown) == 0x000008, "Wrong alignment on DebugMenu_C_ProcFocusCursorMoveUpDown");
static_assert(sizeof(DebugMenu_C_ProcFocusCursorMoveUpDown) == 0x000030, "Wrong size on DebugMenu_C_ProcFocusCursorMoveUpDown");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, InMoveUp) == 0x000000, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::InMoveUp' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, ItemCount) == 0x000004, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::ItemCount' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_GetFocusWidgetIndex_ReturnValue) == 0x000008, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_GetFocusWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_LoopAdd_ReturnValue) == 0x00000C, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_LoopAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_GetFocusWidgetIndex_ReturnValue_1) == 0x000010, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_GetFocusWidgetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_LoopSub_ReturnValue) == 0x000014, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_LoopSub_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000018, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_IsVisible_ReturnValue) == 0x000019, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_GetChildrenCount_ReturnValue) == 0x00001C, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_GetDebugFunction_IsValid) == 0x000021, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_ProcFocusCursorMoveUpDown, CallFunc_GetDebugFunction_ReturnValue) == 0x000028, "Member 'DebugMenu_C_ProcFocusCursorMoveUpDown::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.GetCurrentValue
// 0x00A0 (0x00A0 - 0x0000)
struct DebugMenu_C_GetCurrentValue final
{
public:
	class FText                                   CurrentValue;                                      // 0x0000(0x0018)(Parm, OutParm)
	bool                                          ValueExists;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E4[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E5[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E6[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetScalabilityValue_ReturnValue;          // 0x0088(0x0018)()
};
static_assert(alignof(DebugMenu_C_GetCurrentValue) == 0x000008, "Wrong alignment on DebugMenu_C_GetCurrentValue");
static_assert(sizeof(DebugMenu_C_GetCurrentValue) == 0x0000A0, "Wrong size on DebugMenu_C_GetCurrentValue");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CurrentValue) == 0x000000, "Member 'DebugMenu_C_GetCurrentValue::CurrentValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, ValueExists) == 0x000018, "Member 'DebugMenu_C_GetCurrentValue::ValueExists' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_GetDebugFunction_IsValid) == 0x000019, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_GetDebugFunction_ReturnValue) == 0x000020, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_Array_Get_Item) == 0x000050, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x000060, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_Greater_IntInt_ReturnValue) == 0x000084, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetCurrentValue, CallFunc_GetScalabilityValue_ReturnValue) == 0x000088, "Member 'DebugMenu_C_GetCurrentValue::CallFunc_GetScalabilityValue_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.AddChildMenu
// 0x0048 (0x0048 - 0x0000)
struct DebugMenu_C_AddChildMenu final
{
public:
	class UUserWidget*                            Param_ChildMenu;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            TmpChildMenu;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_AddChildMenu) == 0x000008, "Wrong alignment on DebugMenu_C_AddChildMenu");
static_assert(sizeof(DebugMenu_C_AddChildMenu) == 0x000048, "Wrong size on DebugMenu_C_AddChildMenu");
static_assert(offsetof(DebugMenu_C_AddChildMenu, Param_ChildMenu) == 0x000000, "Member 'DebugMenu_C_AddChildMenu::Param_ChildMenu' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, TmpChildMenu) == 0x000008, "Member 'DebugMenu_C_AddChildMenu::TmpChildMenu' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000010, "Member 'DebugMenu_C_AddChildMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_BreakVector2D_X) == 0x000018, "Member 'DebugMenu_C_AddChildMenu::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_BreakVector2D_Y) == 0x00001C, "Member 'DebugMenu_C_AddChildMenu::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_Add_FloatFloat_ReturnValue) == 0x000020, "Member 'DebugMenu_C_AddChildMenu::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_GetDesiredSize_ReturnValue) == 0x000024, "Member 'DebugMenu_C_AddChildMenu::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_BreakVector2D_X_1) == 0x00002C, "Member 'DebugMenu_C_AddChildMenu::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_BreakVector2D_Y_1) == 0x000030, "Member 'DebugMenu_C_AddChildMenu::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000034, "Member 'DebugMenu_C_AddChildMenu::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000038, "Member 'DebugMenu_C_AddChildMenu::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddChildMenu, CallFunc_MakeVector2D_ReturnValue) == 0x00003C, "Member 'DebugMenu_C_AddChildMenu::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct DebugMenu_C_SetTitle final
{
public:
	class FText                                   TitleText;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DebugMenu_C_SetTitle) == 0x000008, "Wrong alignment on DebugMenu_C_SetTitle");
static_assert(sizeof(DebugMenu_C_SetTitle) == 0x000018, "Wrong size on DebugMenu_C_SetTitle");
static_assert(offsetof(DebugMenu_C_SetTitle, TitleText) == 0x000000, "Member 'DebugMenu_C_SetTitle::TitleText' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.AddMenuItem
// 0x0010 (0x0010 - 0x0000)
struct DebugMenu_C_AddMenuItem final
{
public:
	class USBUserWidget*                          Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_AddMenuItem) == 0x000008, "Wrong alignment on DebugMenu_C_AddMenuItem");
static_assert(sizeof(DebugMenu_C_AddMenuItem) == 0x000010, "Wrong size on DebugMenu_C_AddMenuItem");
static_assert(offsetof(DebugMenu_C_AddMenuItem, Widget) == 0x000000, "Member 'DebugMenu_C_AddMenuItem::Widget' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_AddMenuItem, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000008, "Member 'DebugMenu_C_AddMenuItem::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.CreateChildButton
// 0x0050 (0x0050 - 0x0000)
struct DebugMenu_C_CreateChildButton final
{
public:
	class UDebugChildButton_C*                    OutDebugButton;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class UDebugChildButton_C*                    CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddFocusableWidget_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugMenu_C_CreateChildButton) == 0x000008, "Wrong alignment on DebugMenu_C_CreateChildButton");
static_assert(sizeof(DebugMenu_C_CreateChildButton) == 0x000050, "Wrong size on DebugMenu_C_CreateChildButton");
static_assert(offsetof(DebugMenu_C_CreateChildButton, OutDebugButton) == 0x000000, "Member 'DebugMenu_C_CreateChildButton::OutDebugButton' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateChildButton, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'DebugMenu_C_CreateChildButton::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateChildButton, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'DebugMenu_C_CreateChildButton::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateChildButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'DebugMenu_C_CreateChildButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateChildButton, CallFunc_Create_ReturnValue) == 0x000040, "Member 'DebugMenu_C_CreateChildButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_CreateChildButton, CallFunc_AddFocusableWidget_ReturnValue) == 0x000048, "Member 'DebugMenu_C_CreateChildButton::CallFunc_AddFocusableWidget_ReturnValue' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.GetText
// 0x0098 (0x0098 - 0x0000)
struct DebugMenu_C_GetText final
{
public:
	class USBTextTableAsset*                      InTextTableAsset;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InTextID;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InOldTextId;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   OutText;                                           // 0x0018(0x0018)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E7[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0038(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51E8[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0080(0x0018)()
};
static_assert(alignof(DebugMenu_C_GetText) == 0x000008, "Wrong alignment on DebugMenu_C_GetText");
static_assert(sizeof(DebugMenu_C_GetText) == 0x000098, "Wrong size on DebugMenu_C_GetText");
static_assert(offsetof(DebugMenu_C_GetText, InTextTableAsset) == 0x000000, "Member 'DebugMenu_C_GetText::InTextTableAsset' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, InTextID) == 0x000008, "Member 'DebugMenu_C_GetText::InTextID' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, InOldTextId) == 0x000010, "Member 'DebugMenu_C_GetText::InOldTextId' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, OutText) == 0x000018, "Member 'DebugMenu_C_GetText::OutText' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, Temp_bool_Variable) == 0x000030, "Member 'DebugMenu_C_GetText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, CallFunc_Conv_NameToText_ReturnValue) == 0x000038, "Member 'DebugMenu_C_GetText::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000050, "Member 'DebugMenu_C_GetText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'DebugMenu_C_GetText::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'DebugMenu_C_GetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetText, K2Node_Select_Default) == 0x000080, "Member 'DebugMenu_C_GetText::K2Node_Select_Default' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.Set Item Command
// 0x0590 (0x0590 - 0x0000)
struct DebugMenu_C_Set_Item_Command final
{
public:
	class FName                                   ItemSetName;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AllSouko;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51E9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0068(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x00A8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x00E8(0x0040)(HasGetValueTypeHash)
	struct FSBBulkGetItemProductItemSetInfo       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0128(0x0060)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51EA[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_1;                              // 0x01F8(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_2;                              // 0x0230(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51EB[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBulkGetItemProductItemInfo          CallFunc_Array_Get_Item;                           // 0x0250(0x000C)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51EC[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0268(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51ED[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemStrageNumber_StorageNumber;        // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51EE[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x02D8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0318(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0330(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0370(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03B0(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x03C0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03D0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x03E8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x0400(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x0440(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0480(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0490(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x04A0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x04B8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_10;           // 0x04D0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x0510(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0520(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0538(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0550(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51EF[0x4];                                     // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0568(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F0[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0580(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_Set_Item_Command) == 0x000008, "Wrong alignment on DebugMenu_C_Set_Item_Command");
static_assert(sizeof(DebugMenu_C_Set_Item_Command) == 0x000590, "Wrong size on DebugMenu_C_Set_Item_Command");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, ItemSetName) == 0x000000, "Member 'DebugMenu_C_Set_Item_Command::ItemSetName' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, AllSouko) == 0x000008, "Member 'DebugMenu_C_Set_Item_Command::AllSouko' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, Temp_text_Variable) == 0x000010, "Member 'DebugMenu_C_Set_Item_Command::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_1) == 0x000068, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_2) == 0x0000A8, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_3) == 0x0000E8, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_GetDataTableRowFromName_OutRow) == 0x000128, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000188, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Conv_NameToString_ReturnValue) == 0x000190, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Concat_StrStr_ReturnValue) == 0x0001A0, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001B0, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Array_Length_ReturnValue_1) == 0x0001C4, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Conv_TextToString_ReturnValue) == 0x0001C8, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Conv_IntToString_ReturnValue) == 0x0001D8, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001E8, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, Temp_text_Variable_1) == 0x0001F8, "Member 'DebugMenu_C_Set_Item_Command::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000210, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000220, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, Temp_text_Variable_2) == 0x000230, "Member 'DebugMenu_C_Set_Item_Command::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, Temp_int_Array_Index_Variable) == 0x000248, "Member 'DebugMenu_C_Set_Item_Command::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, Temp_byte_Variable) == 0x00024C, "Member 'DebugMenu_C_Set_Item_Command::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Array_Get_Item) == 0x000250, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, Temp_int_Loop_Counter_Variable) == 0x00025C, "Member 'DebugMenu_C_Set_Item_Command::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Add_IntInt_ReturnValue) == 0x000260, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_4) == 0x000268, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Less_IntInt_ReturnValue) == 0x0002A8, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002AC, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_GetNameText_ReturnValue) == 0x0002B0, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_GetItemStrageNumber_StorageNumber) == 0x0002C0, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_GetItemStrageNumber_StorageNumber' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0002C8, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_5) == 0x0002D8, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Conv_StringToText_ReturnValue) == 0x000318, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_6) == 0x000330, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_7) == 0x000370, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeArray_Array) == 0x0003B0, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeArray_Array_1) == 0x0003C0, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Format_ReturnValue) == 0x0003D0, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Format_ReturnValue_1) == 0x0003E8, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_8) == 0x000400, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_9) == 0x000440, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeArray_Array_2) == 0x000480, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeArray_Array_3) == 0x000490, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Format_ReturnValue_2) == 0x0004A0, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Format_ReturnValue_3) == 0x0004B8, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeStruct_FormatArgumentData_10) == 0x0004D0, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeStruct_FormatArgumentData_10' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_MakeArray_Array_4) == 0x000510, "Member 'DebugMenu_C_Set_Item_Command::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Format_ReturnValue_4) == 0x000520, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, K2Node_Select_Default) == 0x000538, "Member 'DebugMenu_C_Set_Item_Command::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000550, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Len_ReturnValue) == 0x000560, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000568, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000578, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_Set_Item_Command, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000580, "Member 'DebugMenu_C_Set_Item_Command::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");

// Function DebugMenu.DebugMenu_C.GetItemStrageNumber
// 0x00F8 (0x00F8 - 0x0000)
struct DebugMenu_C_GetItemStrageNumber final
{
public:
	int32                                         AllSouko;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNumber;                                     // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F1[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F2[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0020(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51F3[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugMenu_C_GetItemStrageNumber) == 0x000008, "Wrong alignment on DebugMenu_C_GetItemStrageNumber");
static_assert(sizeof(DebugMenu_C_GetItemStrageNumber) == 0x0000F8, "Wrong size on DebugMenu_C_GetItemStrageNumber");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, AllSouko) == 0x000000, "Member 'DebugMenu_C_GetItemStrageNumber::AllSouko' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, ItemIndex) == 0x000004, "Member 'DebugMenu_C_GetItemStrageNumber::ItemIndex' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, StorageNumber) == 0x000008, "Member 'DebugMenu_C_GetItemStrageNumber::StorageNumber' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00000C, "Member 'DebugMenu_C_GetItemStrageNumber::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, CallFunc_GetMasterDataManager_IsValid) == 0x00000D, "Member 'DebugMenu_C_GetItemStrageNumber::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'DebugMenu_C_GetItemStrageNumber::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, CallFunc_GetItemMasterData_IsExists) == 0x000018, "Member 'DebugMenu_C_GetItemStrageNumber::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, CallFunc_GetItemMasterData_ReturnValue) == 0x000020, "Member 'DebugMenu_C_GetItemStrageNumber::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F0, "Member 'DebugMenu_C_GetItemStrageNumber::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugMenu_C_GetItemStrageNumber, CallFunc_SelectInt_ReturnValue) == 0x0000F4, "Member 'DebugMenu_C_GetItemStrageNumber::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

}

