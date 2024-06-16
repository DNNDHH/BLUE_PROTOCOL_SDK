#pragma once

 

// Package: DebugButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function DebugButton.DebugButton_C.EventDispatcher_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct DebugButton_C_EventDispatcher_OnClicked__DelegateSignature final
{
public:
	class UDebugButton_C*                         DebugButton;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_EventDispatcher_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on DebugButton_C_EventDispatcher_OnClicked__DelegateSignature");
static_assert(sizeof(DebugButton_C_EventDispatcher_OnClicked__DelegateSignature) == 0x000008, "Wrong size on DebugButton_C_EventDispatcher_OnClicked__DelegateSignature");
static_assert(offsetof(DebugButton_C_EventDispatcher_OnClicked__DelegateSignature, DebugButton) == 0x000000, "Member 'DebugButton_C_EventDispatcher_OnClicked__DelegateSignature::DebugButton' has a wrong offset!");

// Function DebugButton.DebugButton_C.ExecuteUbergraph_DebugButton
// 0x0568 (0x0568 - 0x0000)
struct DebugButton_C_ExecuteUbergraph_DebugButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_LocationStr;                    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_514F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5150[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu_1;                 // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5151[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5152[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_GetLastConfirmedScreenResolution_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_GetLastConfirmedScreenResolution_ReturnValue_1; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_GetLastConfirmedScreenResolution_ReturnValue_2; // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_8;              // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_GetLastConfirmedScreenResolution_ReturnValue_3; // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5153[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugList_C*                           CallFunc_Create_ReturnValue;                       // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugList_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_GetLastConfirmedScreenResolution_ReturnValue_4; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5154[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_4;           // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_5;           // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_9;              // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_10;             // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_11;             // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              K2Node_MakeStruct_IntPoint;                        // 0x01D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5155[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           CallFunc_Create_ReturnValue_2;                     // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x01E8(0x0010)(ReferenceParm)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5156[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5157[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5158[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTravelOption                        K2Node_MakeStruct_SBTravelOption;                  // 0x0248(0x0098)()
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5159[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_515A[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_Dynamic_Sky;          // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_515B[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0308(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_515C[0x3];                                     // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1; // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsBP_Dynamic_Sky_1;        // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_515D[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x0338(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x034C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_515E[0x3];                                     // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_2;                // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_515F[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsDebug_Sub_Menu_Base;     // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_3;                // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5160[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_3;                     // 0x0378(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugSubMenuBase_C*                    CallFunc_Create_ReturnValue_4;                     // 0x0380(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5161[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5162[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATargetPoint*                           CallFunc_Array_Get_Item_1;                         // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x03A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x03B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_TeleportTo_ReturnValue;                // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5163[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x03D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x03ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5164[0x2];                                     // 0x03EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu_2;                 // 0x03F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5165[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate;              // 0x03FC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5166[0x4];                                     // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugSubMenuBase_C*                    K2Node_DynamicCast_AsDebug_Sub_Menu_Base;          // 0x0410(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0419(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5167[0x6];                                     // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item_3;                         // 0x0428(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0434(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5168[0x3];                                     // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0445(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5169[0x2];                                     // 0x0446(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_1;                             // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_4;                         // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516A[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0470(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0480(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0490(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516B[0x7];                                     // 0x0491(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_2;                             // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu_3;                 // 0x04A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516C[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_2;                       // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x04B8(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Array_Get_Item_5;                         // 0x04C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu_4;                 // 0x04D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516D[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDebugMenu_C*                           K2Node_DynamicCast_AsDebug_Menu_5;                 // 0x04E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_1;               // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516E[0x6];                                     // 0x04F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_1;           // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0500(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_2;               // 0x0519(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_516F[0x6];                                     // 0x051A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_2;           // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetDebugFunction_IsValid_3;               // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5170[0x6];                                     // 0x052A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_3;           // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDebugFunction_IsValid_4;               // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5171[0x7];                                     // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue_4;           // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcChildMenuPosition_Position;           // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcChildMenuPosition_Position_1;         // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcChildMenuPosition_Position_2;         // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_ExecuteUbergraph_DebugButton) == 0x000008, "Wrong alignment on DebugButton_C_ExecuteUbergraph_DebugButton");
static_assert(sizeof(DebugButton_C_ExecuteUbergraph_DebugButton) == 0x000568, "Wrong size on DebugButton_C_ExecuteUbergraph_DebugButton");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, EntryPoint) == 0x000000, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_CustomEvent_LocationStr) == 0x000008, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_CustomEvent_LocationStr' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsDebug_Menu) == 0x000030, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsDebug_Menu' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsDebug_Menu_1) == 0x000050, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsDebug_Menu_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000060, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Len_ReturnValue) == 0x000070, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetGameUserSettings_ReturnValue) == 0x000078, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetLastConfirmedScreenResolution_ReturnValue) == 0x000080, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetLastConfirmedScreenResolution_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_IntToString_ReturnValue) == 0x000088, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000098, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000A8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetLastConfirmedScreenResolution_ReturnValue_1) == 0x0000B8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetLastConfirmedScreenResolution_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000C0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0000D0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetGameUserSettings_ReturnValue_1) == 0x0000E0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetGameUserSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetLastConfirmedScreenResolution_ReturnValue_2) == 0x0000EC, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetLastConfirmedScreenResolution_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_IntToString_ReturnValue_2) == 0x0000F8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000108, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000118, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000128, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_8) == 0x000138, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetLastConfirmedScreenResolution_ReturnValue_3) == 0x000148, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetLastConfirmedScreenResolution_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_int_Array_Index_Variable) == 0x000150, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Create_ReturnValue) == 0x000158, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Create_ReturnValue_1) == 0x000160, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetGameUserSettings_ReturnValue_2) == 0x000168, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetGameUserSettings_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetLastConfirmedScreenResolution_ReturnValue_4) == 0x000170, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetLastConfirmedScreenResolution_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_StringToInt_ReturnValue) == 0x000178, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_IntToString_ReturnValue_4) == 0x000180, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_IntToString_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_IntToString_ReturnValue_5) == 0x000190, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_IntToString_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_9) == 0x0001A0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_10) == 0x0001B0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Concat_StrStr_ReturnValue_11) == 0x0001C0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Concat_StrStr_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_StringToInt_ReturnValue_1) == 0x0001D0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_StringToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_MakeStruct_IntPoint) == 0x0001D4, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_MakeStruct_IntPoint' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Create_ReturnValue_2) == 0x0001E0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetAllActorsOfClass_OutActors) == 0x0001E8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0001F8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Length_ReturnValue) == 0x000200, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000208, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000218, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Get_Item) == 0x000220, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetPlayerController_ReturnValue) == 0x000230, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000238, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess_2) == 0x000240, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_MakeStruct_SBTravelOption) == 0x000248, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_MakeStruct_SBTravelOption' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_int_Loop_Counter_Variable_1) == 0x0002E0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Less_IntInt_ReturnValue) == 0x0002E4, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue) == 0x0002E8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002F0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_AsBP_Dynamic_Sky) == 0x0002F8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_AsBP_Dynamic_Sky' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_bSuccess) == 0x000300, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000308, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Length_ReturnValue_1) == 0x000318, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00031C, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1) == 0x000320, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_AsBP_Dynamic_Sky_1) == 0x000328, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_AsBP_Dynamic_Sky_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_bSuccess_1) == 0x000330, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_MakeLiteralByte_ReturnValue) == 0x000331, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x000338, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Length_ReturnValue_2) == 0x000348, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Greater_IntInt_ReturnValue_2) == 0x00034C, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_class_Variable) == 0x000350, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000358, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_bSuccess_2) == 0x000360, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_AsDebug_Sub_Menu_Base) == 0x000368, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_AsDebug_Sub_Menu_Base' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_ClassDynamicCast_bSuccess_3) == 0x000370, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_ClassDynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Create_ReturnValue_3) == 0x000378, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Create_ReturnValue_4) == 0x000380, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_IsValidClass_ReturnValue) == 0x000388, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_CustomEvent_Loaded) == 0x000390, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_int_Array_Index_Variable_1) == 0x000398, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_bool_True_if_break_was_hit_Variable) == 0x00039C, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Get_Item_1) == 0x0003A0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0003A8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0003B4, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetObjectName_ReturnValue) == 0x0003C0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_K2_TeleportTo_ReturnValue) == 0x0003D0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_K2_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x0003D1, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Not_PreBool_ReturnValue) == 0x0003D2, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_BooleanAND_ReturnValue) == 0x0003D3, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Get_Item_2) == 0x0003D8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Length_ReturnValue_3) == 0x0003E8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_SwitchString_CmpSuccess) == 0x0003EC, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0003ED, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsDebug_Menu_2) == 0x0003F0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsDebug_Menu_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess_3) == 0x0003F8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_CreateDelegate_OutputDelegate) == 0x0003FC, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsDebug_Sub_Menu_Base) == 0x000410, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsDebug_Sub_Menu_Base' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess_4) == 0x000418, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_IsValid) == 0x000419, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_ReturnValue) == 0x000420, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Get_Item_3) == 0x000428, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_AddUnique_ReturnValue) == 0x000430, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_RemoveItem_ReturnValue) == 0x000434, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetObjectClass_ReturnValue) == 0x000438, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Length_ReturnValue_4) == 0x000440, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000444, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x000445, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_class_Variable_1) == 0x000448, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_CustomEvent_Loaded_1) == 0x000450, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Get_Item_4) == 0x000458, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000468, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_SelectString_ReturnValue) == 0x000470, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000480, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_SwitchEnum_CmpSuccess) == 0x000490, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, Temp_class_Variable_2) == 0x000498, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsDebug_Menu_3) == 0x0004A0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsDebug_Menu_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess_5) == 0x0004A8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_CustomEvent_Loaded_2) == 0x0004B0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_CreateDelegate_OutputDelegate_2) == 0x0004B8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_Array_Get_Item_5) == 0x0004C8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsDebug_Menu_4) == 0x0004D8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsDebug_Menu_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess_6) == 0x0004E0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_AsDebug_Menu_5) == 0x0004E8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_AsDebug_Menu_5' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, K2Node_DynamicCast_bSuccess_7) == 0x0004F0, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_IsValid_1) == 0x0004F1, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_IsValid_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_ReturnValue_1) == 0x0004F8, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetPlayerController_ReturnValue_1) == 0x000500, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetPlayerController_ReturnValue_2) == 0x000508, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetPlayerController_ReturnValue_3) == 0x000510, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_IsVisible_ReturnValue) == 0x000518, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_IsValid_2) == 0x000519, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_IsValid_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_ReturnValue_2) == 0x000520, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_IsVisible_ReturnValue_1) == 0x000528, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_IsValid_3) == 0x000529, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_IsValid_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_ReturnValue_3) == 0x000530, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_IsValid_4) == 0x000538, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_IsValid_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetDebugFunction_ReturnValue_4) == 0x000540, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetDebugFunction_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_GetPlayerController_ReturnValue_4) == 0x000548, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_CalcChildMenuPosition_Position) == 0x000550, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_CalcChildMenuPosition_Position' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_CalcChildMenuPosition_Position_1) == 0x000558, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_CalcChildMenuPosition_Position_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ExecuteUbergraph_DebugButton, CallFunc_CalcChildMenuPosition_Position_2) == 0x000560, "Member 'DebugButton_C_ExecuteUbergraph_DebugButton::CallFunc_CalcChildMenuPosition_Position_2' has a wrong offset!");

// Function DebugButton.DebugButton_C.OnPressSetPlayerLocation
// 0x0010 (0x0010 - 0x0000)
struct DebugButton_C_OnPressSetPlayerLocation final
{
public:
	class FString                                 LocationStr;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_OnPressSetPlayerLocation) == 0x000008, "Wrong alignment on DebugButton_C_OnPressSetPlayerLocation");
static_assert(sizeof(DebugButton_C_OnPressSetPlayerLocation) == 0x000010, "Wrong size on DebugButton_C_OnPressSetPlayerLocation");
static_assert(offsetof(DebugButton_C_OnPressSetPlayerLocation, LocationStr) == 0x000000, "Member 'DebugButton_C_OnPressSetPlayerLocation::LocationStr' has a wrong offset!");

// Function DebugButton.DebugButton_C.OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9
// 0x0008 (0x0008 - 0x0000)
struct DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9) == 0x000008, "Wrong alignment on DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9");
static_assert(sizeof(DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9) == 0x000008, "Wrong size on DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9");
static_assert(offsetof(DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9, Loaded) == 0x000000, "Member 'DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9::Loaded' has a wrong offset!");

// Function DebugButton.DebugButton_C.OnLoaded_495F650B48822E342FF6D9A376B5922E
// 0x0008 (0x0008 - 0x0000)
struct DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E) == 0x000008, "Wrong alignment on DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E");
static_assert(sizeof(DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E) == 0x000008, "Wrong size on DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E");
static_assert(offsetof(DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E, Loaded) == 0x000000, "Member 'DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E::Loaded' has a wrong offset!");

// Function DebugButton.DebugButton_C.OnLoaded_445800FD409A4EBB9ABB87B77ED6E644
// 0x0008 (0x0008 - 0x0000)
struct DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644) == 0x000008, "Wrong alignment on DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644");
static_assert(sizeof(DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644) == 0x000008, "Wrong size on DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644");
static_assert(offsetof(DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644, Loaded) == 0x000000, "Member 'DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644::Loaded' has a wrong offset!");

// Function DebugButton.DebugButton_C.LoadSettings
// 0x0018 (0x0018 - 0x0000)
struct DebugButton_C_LoadSettings final
{
public:
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5172[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSaveGameReturn                             CallFunc_LoadDebugSettings_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugButton_C_LoadSettings) == 0x000008, "Wrong alignment on DebugButton_C_LoadSettings");
static_assert(sizeof(DebugButton_C_LoadSettings) == 0x000018, "Wrong size on DebugButton_C_LoadSettings");
static_assert(offsetof(DebugButton_C_LoadSettings, CallFunc_GetDebugFunction_IsValid) == 0x000000, "Member 'DebugButton_C_LoadSettings::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugButton_C_LoadSettings, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugButton_C_LoadSettings::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_LoadSettings, CallFunc_LoadDebugSettings_ReturnValue) == 0x000010, "Member 'DebugButton_C_LoadSettings::CallFunc_LoadDebugSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_LoadSettings, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'DebugButton_C_LoadSettings::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function DebugButton.DebugButton_C.SaveSettings
// 0x0018 (0x0018 - 0x0000)
struct DebugButton_C_SaveSettings final
{
public:
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5173[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSaveGameReturn                             CallFunc_SaveDebugSettings_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DebugButton_C_SaveSettings) == 0x000008, "Wrong alignment on DebugButton_C_SaveSettings");
static_assert(sizeof(DebugButton_C_SaveSettings) == 0x000018, "Wrong size on DebugButton_C_SaveSettings");
static_assert(offsetof(DebugButton_C_SaveSettings, CallFunc_GetDebugFunction_IsValid) == 0x000000, "Member 'DebugButton_C_SaveSettings::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugButton_C_SaveSettings, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugButton_C_SaveSettings::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_SaveSettings, CallFunc_SaveDebugSettings_ReturnValue) == 0x000010, "Member 'DebugButton_C_SaveSettings::CallFunc_SaveDebugSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_SaveSettings, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'DebugButton_C_SaveSettings::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function DebugButton.DebugButton_C.ResetSettings
// 0x0010 (0x0010 - 0x0000)
struct DebugButton_C_ResetSettings final
{
public:
	bool                                          CallFunc_GetDebugFunction_IsValid;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5174[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDebugFunction*                       CallFunc_GetDebugFunction_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_ResetSettings) == 0x000008, "Wrong alignment on DebugButton_C_ResetSettings");
static_assert(sizeof(DebugButton_C_ResetSettings) == 0x000010, "Wrong size on DebugButton_C_ResetSettings");
static_assert(offsetof(DebugButton_C_ResetSettings, CallFunc_GetDebugFunction_IsValid) == 0x000000, "Member 'DebugButton_C_ResetSettings::CallFunc_GetDebugFunction_IsValid' has a wrong offset!");
static_assert(offsetof(DebugButton_C_ResetSettings, CallFunc_GetDebugFunction_ReturnValue) == 0x000008, "Member 'DebugButton_C_ResetSettings::CallFunc_GetDebugFunction_ReturnValue' has a wrong offset!");

// Function DebugButton.DebugButton_C.SetButtonFocus
// 0x0058 (0x0058 - 0x0000)
struct DebugButton_C_SetButtonFocus final
{
public:
	bool                                          bFocus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5175[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(DebugButton_C_SetButtonFocus) == 0x000008, "Wrong alignment on DebugButton_C_SetButtonFocus");
static_assert(sizeof(DebugButton_C_SetButtonFocus) == 0x000058, "Wrong size on DebugButton_C_SetButtonFocus");
static_assert(offsetof(DebugButton_C_SetButtonFocus, bFocus) == 0x000000, "Member 'DebugButton_C_SetButtonFocus::bFocus' has a wrong offset!");
static_assert(offsetof(DebugButton_C_SetButtonFocus, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'DebugButton_C_SetButtonFocus::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DebugButton_C_SetButtonFocus, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'DebugButton_C_SetButtonFocus::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function DebugButton.DebugButton_C.GetText
// 0x0030 (0x0030 - 0x0000)
struct DebugButton_C_GetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(DebugButton_C_GetText) == 0x000008, "Wrong alignment on DebugButton_C_GetText");
static_assert(sizeof(DebugButton_C_GetText) == 0x000030, "Wrong size on DebugButton_C_GetText");
static_assert(offsetof(DebugButton_C_GetText, Text) == 0x000000, "Member 'DebugButton_C_GetText::Text' has a wrong offset!");
static_assert(offsetof(DebugButton_C_GetText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'DebugButton_C_GetText::CallFunc_GetText_ReturnValue' has a wrong offset!");

// Function DebugButton.DebugButton_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct DebugButton_C_SetText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DebugButton_C_SetText) == 0x000008, "Wrong alignment on DebugButton_C_SetText");
static_assert(sizeof(DebugButton_C_SetText) == 0x000018, "Wrong size on DebugButton_C_SetText");
static_assert(offsetof(DebugButton_C_SetText, Text) == 0x000000, "Member 'DebugButton_C_SetText::Text' has a wrong offset!");

// Function DebugButton.DebugButton_C.CalcChildMenuPosition
// 0x0034 (0x0034 - 0x0000)
struct DebugButton_C_CalcChildMenuPosition final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DebugButton_C_CalcChildMenuPosition) == 0x000004, "Wrong alignment on DebugButton_C_CalcChildMenuPosition");
static_assert(sizeof(DebugButton_C_CalcChildMenuPosition) == 0x000034, "Wrong size on DebugButton_C_CalcChildMenuPosition");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, Position) == 0x000000, "Member 'DebugButton_C_CalcChildMenuPosition::Position' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_GetDesiredSize_ReturnValue) == 0x000008, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_X) == 0x000010, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_Add_FloatFloat_ReturnValue) == 0x000018, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_X_1) == 0x00001C, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_BreakVector2D_Y_1) == 0x000020, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000024, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000028, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DebugButton_C_CalcChildMenuPosition, CallFunc_MakeVector2D_ReturnValue) == 0x00002C, "Member 'DebugButton_C_CalcChildMenuPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}

