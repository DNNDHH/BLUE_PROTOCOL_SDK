#pragma once

 

// Package: TitleMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TitleMenu.TitleMenu_C.ExecuteUbergraph_TitleMenu
// 0x0550 (0x0550 - 0x0000)
struct TitleMenu_C_ExecuteUbergraph_TitleMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9E77[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters; // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBLoginBanType                               CallFunc_GetLogedInPlayerBanType_ReturnValue;      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLoginBanDurationType                       CallFunc_GetLogedInPlayerBanDurationType_ReturnValue; // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E78[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A8(0x0018)()
	class FText                                   CallFunc_GetBanFinishedAt_Result;                  // 0x00C0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0128(0x0018)()
	class FString                                 K2Node_ComponentBoundEvent_CharacterId_1;          // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ListIndex_1;            // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bReturnDisconnect;      // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E79[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x0158(0x0004)(NoDestructor)
	bool                                          CallFunc_HasFromOption_ReturnValue;                // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E7A[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetNewCharacterId_ReturnValue;            // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_ComponentBoundEvent_CharacterId;            // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ListIndex;              // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E7B[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_FriendCharacterId;      // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_ConnectToServer_ReturnValue;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ConnectToServerAtFriendSession_ReturnValue; // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E7C[0x2];                                     // 0x019A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_InRetCode;                            // 0x019C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x01A0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01B0(0x0018)()
	class FString                                 CallFunc_HasAccessTokenLocalPlayer_OutAccessToken; // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAccessTokenLocalPlayer_ReturnValue;    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E7D[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer; // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E7E[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTitleMenuCharaLayer*                 CallFunc_Create_ReturnValue;                       // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFadedOutScreen_ReturnValue;             // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E7F[0x2];                                     // 0x0212(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode;                              // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0218(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0228(0x0018)()
	bool                                          CallFunc_IsCharaSelectStart_CharaSelect;           // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E80[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E81[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E82[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0270(0x0018)()
	class FString                                 CallFunc_GetKeyValue_OutValue;                     // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetKeyValue_ReturnValue;                  // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E83[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue;            // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetKeyValue_OutValue_1;                   // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetKeyValue_ReturnValue_1;                // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E84[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x02C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E85[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_ConnectToServer_ReturnValue_1;            // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E86[0x6];                                     // 0x0322(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0348(0x0018)()
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E87[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerReconnectionWaitTime_ReturnValue; // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E88[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLowVGAMode_ReturnValue;                 // 0x038A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLowVGAModeFirstInitialized_ReturnValue; // 0x038B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E89[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters_1; // 0x0390(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue_1; // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8A[0x5];                                     // 0x03A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_1;                             // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue;            // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsActor;                   // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8B[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameInstance*                        CallFunc_GetSBGameInstance_ReturnValue_1;          // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x03D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x03DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x03DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8C[0x4];                                     // 0x03DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Select_Default;                             // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       K2Node_Select_Default_1;                           // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasFromOption_ReturnValue_1;              // 0x0408(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8D[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_2;                // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8E[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue_2;                     // 0x0420(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOptionMenu_C*                          K2Node_DynamicCast_AsOption_Menu;                  // 0x0428(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E8F[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USystemMessage_C*                       CallFunc_Create_ReturnValue_3;                     // 0x0438(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E90[0x6];                                     // 0x0442(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0448(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0450(0x0010)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid_1;               // 0x0464(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E91[0x3];                                     // 0x0465(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue_1;           // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_2;                       // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USBUIAssetManager*                      CallFunc_GetUIAssetManager_ReturnValue;            // 0x0478(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0480(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E92[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E93[0x3];                                     // 0x04C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x04CC(0x0010)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable_1;                             // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid_2;               // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E94[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue_2;           // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIAssetManager*                      CallFunc_GetUIAssetManager_ReturnValue_1;          // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x04F8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValidSoftClassReference_ReturnValue_1;  // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E95[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0510(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0519(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E96[0x2];                                     // 0x051A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_2;                           // 0x051C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0520(0x0010)(ZeroConstructor, NoDestructor)
	class UClass*                                 K2Node_CustomEvent_InSBTitleMenuCharaLayer;        // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTitleMenuCharaLayer*                 CallFunc_Create_ReturnValue_5;                     // 0x0538(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E97[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0548(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_ExecuteUbergraph_TitleMenu) == 0x000010, "Wrong alignment on TitleMenu_C_ExecuteUbergraph_TitleMenu");
static_assert(sizeof(TitleMenu_C_ExecuteUbergraph_TitleMenu) == 0x000550, "Wrong size on TitleMenu_C_ExecuteUbergraph_TitleMenu");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, EntryPoint) == 0x000000, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetLogedInPlayerCharacters_OutCharacters) == 0x000018, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetLogedInPlayerCharacters_OutCharacters' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetLogedInPlayerCharacters_ReturnValue) == 0x000028, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetLogedInPlayerCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetLogedInPlayerBanType_ReturnValue) == 0x00002A, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetLogedInPlayerBanType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetLogedInPlayerBanDurationType_ReturnValue) == 0x00002B, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetLogedInPlayerBanDurationType_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_SwitchEnum_CmpSuccess) == 0x00002C, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_SwitchEnum_CmpSuccess_1) == 0x00002D, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000030, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000058, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetBanFinishedAt_Result) == 0x0000C0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetBanFinishedAt_Result' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_MakeArray_Array) == 0x000118, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Format_ReturnValue) == 0x000128, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ComponentBoundEvent_CharacterId_1) == 0x000140, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ComponentBoundEvent_CharacterId_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ComponentBoundEvent_ListIndex_1) == 0x000150, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ComponentBoundEvent_ListIndex_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ComponentBoundEvent_bReturnDisconnect) == 0x000154, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ComponentBoundEvent_bReturnDisconnect' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_ShowCursor_ReturnValue) == 0x000158, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_HasFromOption_ReturnValue) == 0x00015C, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_HasFromOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetNewCharacterId_ReturnValue) == 0x000160, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetNewCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ComponentBoundEvent_CharacterId) == 0x000170, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ComponentBoundEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ComponentBoundEvent_ListIndex) == 0x000180, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ComponentBoundEvent_ListIndex' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ComponentBoundEvent_FriendCharacterId) == 0x000188, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ComponentBoundEvent_FriendCharacterId' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_ConnectToServer_ReturnValue) == 0x000198, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_ConnectToServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_ConnectToServerAtFriendSession_ReturnValue) == 0x000199, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_ConnectToServerAtFriendSession_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_Event_InRetCode) == 0x00019C, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_Event_InRetCode' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x0001A0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001B0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_HasAccessTokenLocalPlayer_OutAccessToken) == 0x0001C8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_HasAccessTokenLocalPlayer_OutAccessToken' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_HasAccessTokenLocalPlayer_ReturnValue) == 0x0001D8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_HasAccessTokenLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_class_Variable) == 0x0001E0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer) == 0x0001E8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ClassDynamicCast_AsSBTitle_Menu_Chara_Layer' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ClassDynamicCast_bSuccess) == 0x0001F0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Create_ReturnValue) == 0x0001F8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000200, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_DynamicCast_AsSBGame_Instance) == 0x000208, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_DynamicCast_bSuccess) == 0x000210, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsFadedOutScreen_ReturnValue) == 0x000211, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsFadedOutScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_Event_RetCode) == 0x000214, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000218, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000228, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsCharaSelectStart_CharaSelect) == 0x000240, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsCharaSelectStart_CharaSelect' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameMode_ReturnValue) == 0x000248, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CustomEvent_Result) == 0x000250, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000258, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000268, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000270, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetKeyValue_OutValue) == 0x000288, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetKeyValue_OutValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetKeyValue_ReturnValue) == 0x000298, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetKeyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_BoolToString_ReturnValue) == 0x0002A0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_BoolToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetKeyValue_OutValue_1) == 0x0002B0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetKeyValue_OutValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetKeyValue_ReturnValue_1) == 0x0002C0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetKeyValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x0002C8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_BooleanOR_ReturnValue) == 0x0002D8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_BoolToString_ReturnValue_1) == 0x0002E0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_BoolToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0002F0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000300, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000310, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_ConnectToServer_ReturnValue_1) == 0x000320, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_ConnectToServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValid_ReturnValue) == 0x000321, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CustomEvent_Loaded) == 0x000328, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Create_ReturnValue_1) == 0x000330, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000338, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000348, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameSingleton_IsValid) == 0x000360, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameSingleton_ReturnValue) == 0x000368, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetUIManager_ReturnValue) == 0x000370, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetServerReconnectionWaitTime_ReturnValue) == 0x000378, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetServerReconnectionWaitTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetConfigSaveManager_IsValid) == 0x00037C, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000380, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValid_ReturnValue_1) == 0x000388, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValid_ReturnValue_2) == 0x000389, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsLowVGAMode_ReturnValue) == 0x00038A, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsLowVGAMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsLowVGAModeFirstInitialized_ReturnValue) == 0x00038B, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsLowVGAModeFirstInitialized_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetLogedInPlayerCharacters_OutCharacters_1) == 0x000390, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetLogedInPlayerCharacters_OutCharacters_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetLogedInPlayerCharacters_ReturnValue_1) == 0x0003A0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetLogedInPlayerCharacters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_BooleanAND_ReturnValue) == 0x0003A1, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x0003A2, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_class_Variable_1) == 0x0003A8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetSBGameInstance_ReturnValue) == 0x0003B0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetSBGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ClassDynamicCast_AsActor) == 0x0003B8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ClassDynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ClassDynamicCast_bSuccess_1) == 0x0003C0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetSBGameInstance_ReturnValue_1) == 0x0003C8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetSBGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CustomEvent_Loaded_1) == 0x0003D0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x0003D8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0003D9, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_bool_Variable) == 0x0003DA, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_bool_Variable_1) == 0x0003DB, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_Select_Default) == 0x0003E0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_Select_Default_1) == 0x0003E8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_PlayAnimation_ReturnValue) == 0x0003F0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x0003F8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_class_Variable_2) == 0x000400, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_HasFromOption_ReturnValue_1) == 0x000408, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_HasFromOption_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ClassDynamicCast_AsUser_Widget) == 0x000410, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ClassDynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_ClassDynamicCast_bSuccess_2) == 0x000418, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_ClassDynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Create_ReturnValue_2) == 0x000420, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_DynamicCast_AsOption_Menu) == 0x000428, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_DynamicCast_AsOption_Menu' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_DynamicCast_bSuccess_1) == 0x000430, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Create_ReturnValue_3) == 0x000438, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValid_ReturnValue_3) == 0x000440, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValid_ReturnValue_4) == 0x000441, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Create_ReturnValue_4) == 0x000448, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000450, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_float_Variable) == 0x000460, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameSingleton_IsValid_1) == 0x000464, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameSingleton_IsValid_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameSingleton_ReturnValue_1) == 0x000468, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameSingleton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CustomEvent_Loaded_2) == 0x000470, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetUIAssetManager_ReturnValue) == 0x000478, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetUIAssetManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_MakeTransform_ReturnValue) == 0x000480, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValidSoftClassReference_ReturnValue) == 0x0004B0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValidSoftClassReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0004B8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_FinishSpawningActor_ReturnValue) == 0x0004C0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValid_ReturnValue_5) == 0x0004C8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0004CC, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_float_Variable_1) == 0x0004DC, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameSingleton_IsValid_2) == 0x0004E0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameSingleton_IsValid_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetGameSingleton_ReturnValue_2) == 0x0004E8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetGameSingleton_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_GetUIAssetManager_ReturnValue_1) == 0x0004F0, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_GetUIAssetManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0004F8, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValidSoftClassReference_ReturnValue_1) == 0x000508, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValidSoftClassReference_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_AddChild_ReturnValue) == 0x000510, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, Temp_bool_Variable_2) == 0x000518, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValid_ReturnValue_6) == 0x000519, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_Select_Default_2) == 0x00051C, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000520, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, K2Node_CustomEvent_InSBTitleMenuCharaLayer) == 0x000530, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::K2Node_CustomEvent_InSBTitleMenuCharaLayer' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_Create_ReturnValue_5) == 0x000538, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_IsValidClass_ReturnValue) == 0x000540, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ExecuteUbergraph_TitleMenu, CallFunc_AddChild_ReturnValue_1) == 0x000548, "Member 'TitleMenu_C_ExecuteUbergraph_TitleMenu::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.SetupCharaLayer
// 0x0008 (0x0008 - 0x0000)
struct TitleMenu_C_SetupCharaLayer final
{
public:
	class UClass*                                 InSBTitleMenuCharaLayer;                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_SetupCharaLayer) == 0x000008, "Wrong alignment on TitleMenu_C_SetupCharaLayer");
static_assert(sizeof(TitleMenu_C_SetupCharaLayer) == 0x000008, "Wrong size on TitleMenu_C_SetupCharaLayer");
static_assert(offsetof(TitleMenu_C_SetupCharaLayer, InSBTitleMenuCharaLayer) == 0x000000, "Member 'TitleMenu_C_SetupCharaLayer::InSBTitleMenuCharaLayer' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.OnFinishedDialog
// 0x0001 (0x0001 - 0x0000)
struct TitleMenu_C_OnFinishedDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_OnFinishedDialog) == 0x000001, "Wrong alignment on TitleMenu_C_OnFinishedDialog");
static_assert(sizeof(TitleMenu_C_OnFinishedDialog) == 0x000001, "Wrong size on TitleMenu_C_OnFinishedDialog");
static_assert(offsetof(TitleMenu_C_OnFinishedDialog, Result) == 0x000000, "Member 'TitleMenu_C_OnFinishedDialog::Result' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.OnFailedConnectServer
// 0x0004 (0x0004 - 0x0000)
struct TitleMenu_C_OnFailedConnectServer final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_OnFailedConnectServer) == 0x000004, "Wrong alignment on TitleMenu_C_OnFailedConnectServer");
static_assert(sizeof(TitleMenu_C_OnFailedConnectServer) == 0x000004, "Wrong size on TitleMenu_C_OnFailedConnectServer");
static_assert(offsetof(TitleMenu_C_OnFailedConnectServer, RetCode) == 0x000000, "Member 'TitleMenu_C_OnFailedConnectServer::RetCode' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.OnLoginFailure
// 0x0004 (0x0004 - 0x0000)
struct TitleMenu_C_OnLoginFailure final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_OnLoginFailure) == 0x000004, "Wrong alignment on TitleMenu_C_OnLoginFailure");
static_assert(sizeof(TitleMenu_C_OnLoginFailure) == 0x000004, "Wrong size on TitleMenu_C_OnLoginFailure");
static_assert(offsetof(TitleMenu_C_OnLoginFailure, InRetCode) == 0x000000, "Member 'TitleMenu_C_OnLoginFailure::InRetCode' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature final
{
public:
	class FString                                 CharacterId;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ListIndex;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E98[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FriendCharacterId;                                 // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature) == 0x000008, "Wrong alignment on TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature");
static_assert(sizeof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature) == 0x000028, "Wrong size on TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature");
static_assert(offsetof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature, CharacterId) == 0x000000, "Member 'TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature::CharacterId' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature, ListIndex) == 0x000010, "Member 'TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature::ListIndex' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature, FriendCharacterId) == 0x000018, "Member 'TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_12_OnStartFriendSession__DelegateSignature::FriendCharacterId' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature final
{
public:
	class FString                                 CharacterId;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ListIndex;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_bReturnDisconnect;                           // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature) == 0x000008, "Wrong alignment on TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature");
static_assert(sizeof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature) == 0x000018, "Wrong size on TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature");
static_assert(offsetof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature, CharacterId) == 0x000000, "Member 'TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature::CharacterId' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature, ListIndex) == 0x000010, "Member 'TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature::ListIndex' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature, Param_bReturnDisconnect) == 0x000014, "Member 'TitleMenu_C_BndEvt__CharaSelect_K2Node_ComponentBoundEvent_24_OnStartWithCharacter__DelegateSignature::Param_bReturnDisconnect' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72
// 0x0008 (0x0008 - 0x0000)
struct TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72) == 0x000008, "Wrong alignment on TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72");
static_assert(sizeof(TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72) == 0x000008, "Wrong size on TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72");
static_assert(offsetof(TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72, Loaded) == 0x000000, "Member 'TitleMenu_C_OnLoaded_1AAC7DC34E6B473A8EFADD93F6A5CA72::Loaded' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.OnLoaded_E8315409430BF09E1DB899BAE01D7ABD
// 0x0008 (0x0008 - 0x0000)
struct TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD) == 0x000008, "Wrong alignment on TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD");
static_assert(sizeof(TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD) == 0x000008, "Wrong size on TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD");
static_assert(offsetof(TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD, Loaded) == 0x000000, "Member 'TitleMenu_C_OnLoaded_E8315409430BF09E1DB899BAE01D7ABD::Loaded' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.OnLoaded_136303394FB780B732D94AA171FCCCE2
// 0x0008 (0x0008 - 0x0000)
struct TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2) == 0x000008, "Wrong alignment on TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2");
static_assert(sizeof(TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2) == 0x000008, "Wrong size on TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2");
static_assert(offsetof(TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2, Loaded) == 0x000000, "Member 'TitleMenu_C_OnLoaded_136303394FB780B732D94AA171FCCCE2::Loaded' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.HasFromOption
// 0x0038 (0x0038 - 0x0000)
struct TitleMenu_C_HasFromOption final
{
public:
	class FString                                 CheckString;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E99[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ParseOption_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TitleMenu_C_HasFromOption) == 0x000008, "Wrong alignment on TitleMenu_C_HasFromOption");
static_assert(sizeof(TitleMenu_C_HasFromOption) == 0x000038, "Wrong size on TitleMenu_C_HasFromOption");
static_assert(offsetof(TitleMenu_C_HasFromOption, CheckString) == 0x000000, "Member 'TitleMenu_C_HasFromOption::CheckString' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_HasFromOption, ReturnValue) == 0x000010, "Member 'TitleMenu_C_HasFromOption::ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_HasFromOption, CallFunc_GetGameMode_ReturnValue) == 0x000018, "Member 'TitleMenu_C_HasFromOption::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_HasFromOption, CallFunc_ParseOption_ReturnValue) == 0x000020, "Member 'TitleMenu_C_HasFromOption::CallFunc_ParseOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_HasFromOption, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000030, "Member 'TitleMenu_C_HasFromOption::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.GetNewCharacterId
// 0x0028 (0x0028 - 0x0000)
struct TitleMenu_C_GetNewCharacterId final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ParseOption_ReturnValue;                  // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_GetNewCharacterId) == 0x000008, "Wrong alignment on TitleMenu_C_GetNewCharacterId");
static_assert(sizeof(TitleMenu_C_GetNewCharacterId) == 0x000028, "Wrong size on TitleMenu_C_GetNewCharacterId");
static_assert(offsetof(TitleMenu_C_GetNewCharacterId, ReturnValue) == 0x000000, "Member 'TitleMenu_C_GetNewCharacterId::ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetNewCharacterId, CallFunc_GetGameMode_ReturnValue) == 0x000010, "Member 'TitleMenu_C_GetNewCharacterId::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetNewCharacterId, CallFunc_ParseOption_ReturnValue) == 0x000018, "Member 'TitleMenu_C_GetNewCharacterId::CallFunc_ParseOption_ReturnValue' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.ClearCache
// 0x0030 (0x0030 - 0x0000)
struct TitleMenu_C_ClearCache final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E9A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E9B[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TitleMenu_C_ClearCache) == 0x000008, "Wrong alignment on TitleMenu_C_ClearCache");
static_assert(sizeof(TitleMenu_C_ClearCache) == 0x000030, "Wrong size on TitleMenu_C_ClearCache");
static_assert(offsetof(TitleMenu_C_ClearCache, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'TitleMenu_C_ClearCache::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ClearCache, CallFunc_GetUIManager_IsValid) == 0x000008, "Member 'TitleMenu_C_ClearCache::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ClearCache, CallFunc_GetUIManager_ReturnValue) == 0x000010, "Member 'TitleMenu_C_ClearCache::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ClearCache, K2Node_DynamicCast_AsSBGame_Instance) == 0x000018, "Member 'TitleMenu_C_ClearCache::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ClearCache, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'TitleMenu_C_ClearCache::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ClearCache, CallFunc_GetNetworkDataCache_IsValid) == 0x000021, "Member 'TitleMenu_C_ClearCache::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_ClearCache, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000028, "Member 'TitleMenu_C_ClearCache::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.IsCharaSelectStart
// 0x0028 (0x0028 - 0x0000)
struct TitleMenu_C_IsCharaSelectStart final
{
public:
	bool                                          Param_CharaSelect;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E9C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters; // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue;   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasOption_ReturnValue;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasFromOption_ReturnValue;                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TitleMenu_C_IsCharaSelectStart) == 0x000008, "Wrong alignment on TitleMenu_C_IsCharaSelectStart");
static_assert(sizeof(TitleMenu_C_IsCharaSelectStart) == 0x000028, "Wrong size on TitleMenu_C_IsCharaSelectStart");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, Param_CharaSelect) == 0x000000, "Member 'TitleMenu_C_IsCharaSelectStart::Param_CharaSelect' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'TitleMenu_C_IsCharaSelectStart::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, CallFunc_GetLogedInPlayerCharacters_OutCharacters) == 0x000010, "Member 'TitleMenu_C_IsCharaSelectStart::CallFunc_GetLogedInPlayerCharacters_OutCharacters' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, CallFunc_GetLogedInPlayerCharacters_ReturnValue) == 0x000020, "Member 'TitleMenu_C_IsCharaSelectStart::CallFunc_GetLogedInPlayerCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, CallFunc_HasOption_ReturnValue) == 0x000021, "Member 'TitleMenu_C_IsCharaSelectStart::CallFunc_HasOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, CallFunc_HasFromOption_ReturnValue) == 0x000022, "Member 'TitleMenu_C_IsCharaSelectStart::CallFunc_HasFromOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, CallFunc_BooleanAND_ReturnValue) == 0x000023, "Member 'TitleMenu_C_IsCharaSelectStart::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_IsCharaSelectStart, CallFunc_BooleanAND_ReturnValue_1) == 0x000024, "Member 'TitleMenu_C_IsCharaSelectStart::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.SetEffectEnable
// 0x0003 (0x0003 - 0x0000)
struct TitleMenu_C_SetEffectEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TitleMenu_C_SetEffectEnable) == 0x000001, "Wrong alignment on TitleMenu_C_SetEffectEnable");
static_assert(sizeof(TitleMenu_C_SetEffectEnable) == 0x000003, "Wrong size on TitleMenu_C_SetEffectEnable");
static_assert(offsetof(TitleMenu_C_SetEffectEnable, bEnable) == 0x000000, "Member 'TitleMenu_C_SetEffectEnable::bEnable' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_SetEffectEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'TitleMenu_C_SetEffectEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_SetEffectEnable, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'TitleMenu_C_SetEffectEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TitleMenu.TitleMenu_C.GetBanFinishedAt
// 0x03B8 (0x03B8 - 0x0000)
struct TitleMenu_C_GetBanFinishedAt final
{
public:
	class FText                                   Result;                                            // 0x0000(0x0018)(Parm, OutParm)
	struct FSBPlayerBanFinishedTimeInfo           BanFinishedTimeInfo;                               // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_9E9D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalTxtLimitedMinute;                             // 0x0028(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalTxtLimitedHour;                               // 0x0040(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalTxtLimitedDay;                                // 0x0058(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalTxtLimitedHeader;                             // 0x0070(0x0018)(Edit, BlueprintVisible)
	bool                                          bMinuteExist;                                      // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHourExist;                                        // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDayExist;                                         // 0x008A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E9E[0x1];                                     // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerBanFinishedTimeInfo           CallFunc_GetLogedInPlayerBanFinishedAt_ReturnValue; // 0x008C(0x000C)(NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00D8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0118(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0158(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0198(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01D0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01F8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0210(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0220(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E9F[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0250(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EA0[0x6];                                     // 0x026A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x0270(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x02B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EA1[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x02C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x02E0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EA2[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0328(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0338(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0350(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0390(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x03A0(0x0018)()
};
static_assert(alignof(TitleMenu_C_GetBanFinishedAt) == 0x000008, "Wrong alignment on TitleMenu_C_GetBanFinishedAt");
static_assert(sizeof(TitleMenu_C_GetBanFinishedAt) == 0x0003B8, "Wrong size on TitleMenu_C_GetBanFinishedAt");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, Result) == 0x000000, "Member 'TitleMenu_C_GetBanFinishedAt::Result' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, BanFinishedTimeInfo) == 0x000018, "Member 'TitleMenu_C_GetBanFinishedAt::BanFinishedTimeInfo' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, LocalTxtLimitedMinute) == 0x000028, "Member 'TitleMenu_C_GetBanFinishedAt::LocalTxtLimitedMinute' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, LocalTxtLimitedHour) == 0x000040, "Member 'TitleMenu_C_GetBanFinishedAt::LocalTxtLimitedHour' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, LocalTxtLimitedDay) == 0x000058, "Member 'TitleMenu_C_GetBanFinishedAt::LocalTxtLimitedDay' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, LocalTxtLimitedHeader) == 0x000070, "Member 'TitleMenu_C_GetBanFinishedAt::LocalTxtLimitedHeader' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, bMinuteExist) == 0x000088, "Member 'TitleMenu_C_GetBanFinishedAt::bMinuteExist' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, bHourExist) == 0x000089, "Member 'TitleMenu_C_GetBanFinishedAt::bHourExist' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, bDayExist) == 0x00008A, "Member 'TitleMenu_C_GetBanFinishedAt::bDayExist' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_GetLogedInPlayerBanFinishedAt_ReturnValue) == 0x00008C, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_GetLogedInPlayerBanFinishedAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeStruct_FormatArgumentData_2) == 0x000118, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeStruct_FormatArgumentData_3) == 0x000158, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeArray_Array) == 0x000198, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001A8, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Format_ReturnValue) == 0x0001B8, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Conv_StringToText_ReturnValue) == 0x0001D0, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0001E8, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001F8, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000210, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000220, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000238, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_BooleanOR_ReturnValue) == 0x000248, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000250, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_BooleanOR_ReturnValue_1) == 0x000268, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Greater_IntInt_ReturnValue) == 0x000269, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeStruct_FormatArgumentData_4) == 0x000270, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeArray_Array_1) == 0x0002B0, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0002C0, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Format_ReturnValue_1) == 0x0002C8, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeStruct_FormatArgumentData_5) == 0x0002E0, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000320, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeArray_Array_2) == 0x000328, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Format_ReturnValue_2) == 0x000338, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeStruct_FormatArgumentData_6) == 0x000350, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, K2Node_MakeArray_Array_3) == 0x000390, "Member 'TitleMenu_C_GetBanFinishedAt::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(TitleMenu_C_GetBanFinishedAt, CallFunc_Format_ReturnValue_3) == 0x0003A0, "Member 'TitleMenu_C_GetBanFinishedAt::CallFunc_Format_ReturnValue_3' has a wrong offset!");

}

