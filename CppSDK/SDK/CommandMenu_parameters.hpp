#pragma once

 

// Package: CommandMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu.CommandMenu_C.ExecuteUbergraph_CommandMenu
// 0x0B98 (0x0B98 - 0x0000)
struct CommandMenu_C_ExecuteUbergraph_CommandMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EE4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CommandMenuBookmarkRegister_C*     CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE5[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE6[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE7[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBKeyConfigAction                            K2Node_Event_QuickAccess;                          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            CallFunc_GetCommondMenuType_ReturnValue;           // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE8[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookmarkType_ReturnValue;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBCommandMenuType                            K2Node_CustomEvent_InMenuType_3;                   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBContentLockType                            CallFunc_ToContentLockType_ReturnValue;            // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetContentLock_ReturnValue;               // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_CustomEvent_InMenuType_2;                   // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EE9[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InBookMarkType;                 // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_InParamName_1;                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRmShopMenuType                             CallFunc_BookmarkTypeToRmShopMenuType_Value;       // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableMenu_bEnable;                     // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EEA[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_2;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_BookmarkType_1;                 // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TsCheck_NewParam;                         // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EEB[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Now_Page_NowBookMarkType;             // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_3;                       // 0x00ED(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EEC[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface;         // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EED[0x6];                                     // 0x0102(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	ESBBookMarkerSlot                             K2Node_CustomEvent_BookmarkSlot;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EEE[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_KeyString;                      // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0180(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0198(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x01B0(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EEF[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_BookmarkType;                   // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EF0[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0210(0x0040)(HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EF1[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0258(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0268(0x0018)()
	class FString                                 K2Node_CustomEvent_InputPin;                       // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0290(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02A0(0x0018)()
	EYesNoDialogResult                            K2Node_CustomEvent_Result_2;                       // 0x02B8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EF2[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EF3[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuSubButtonInterface> K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface; // 0x02D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EF4[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput_1;          // 0x02F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue_1;             // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EF5[0x6];                                     // 0x0302(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Get_Now_Page_NowBookMarkType_1;           // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue;          // 0x0318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0328(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_Event_MenuType;                             // 0x0332(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EF6[0x5];                                     // 0x0333(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_BookMarkType;                         // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_InParamName;                          // 0x0348(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EF7[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0368(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EF8[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EF9[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBMatchingGameState* MatchedGame)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0390(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance;     // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EFA[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x03AC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x03BC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8EFB[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EFC[0x3];                                     // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_6;            // 0x03E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8EFD[0x4];                                     // 0x03F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x03F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EFE[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBActivatedDungeonList*                CallFunc_GetActivatedDungeonList_ReturnValue;      // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EFF[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0428(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            CallFunc_GetFirstMenuType_MenuType;                // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F00[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F01[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_3;        // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F02[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x0470(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CommandMenuGet_ReturnValue;               // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            CallFunc_GetFirstMenuType_MenuType_1;              // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F03[0x6];                                     // 0x047A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_3;           // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0488(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F04[0x4];                                     // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue_1;            // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_DefaultGameInstance_C*              K2Node_DynamicCast_AsBP_Default_Game_Instance_1;   // 0x04A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F05[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x04B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x04C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F06[0x3];                                     // 0x04C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x04C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_UnreadCount;                    // 0x04C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F07[0x4];                                     // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_4;        // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F08[0x7];                                     // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue;             // 0x04E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_5;        // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F09[0x7];                                     // 0x04F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue_1;           // 0x0500(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bForce;                         // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F0A[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0518(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F0B[0x7];                                     // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_1;         // 0x0530(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F0C[0x6];                                     // 0x053A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x0540(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue;               // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid_1;               // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F0D[0x7];                                     // 0x0551(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue_1;           // 0x0558(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBDemoManager*                         CallFunc_GetDemoManager_ReturnValue_1;             // 0x0560(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_2;         // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_2;         // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F0E[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon;         // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F0F[0x7];                                     // 0x0591(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F10[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon_1;       // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x05B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F11[0x6];                                     // 0x05B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_3;         // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character_3;         // 0x05C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F12[0x3];                                     // 0x05C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x05CC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bIsAleat)>                K2Node_CreateDelegate_OutputDelegate_9;            // 0x05DC(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x05EC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8F13[0x4];                                     // 0x05FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_4;           // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_4;                       // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_4;                        // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_5;           // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_3;                       // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_3;                        // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USBMatchingGameState* MatchedGame)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x0630(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x0640(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_13;           // 0x0650(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_7;                      // 0x0660(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_14;           // 0x0664(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8F14[0x4];                                     // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_6;           // 0x0678(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0680(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0688(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_2;               // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_3;               // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon_2;       // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F15[0x7];                                     // 0x06B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState_Dungeon*                   K2Node_DynamicCast_AsSBGame_State_Dungeon_3;       // 0x06C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x06C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x06CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x06CB(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_6;                      // 0x06CC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F16[0x7];                                     // 0x06D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x06E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRequiredDataInfoListCache_ReturnValue;  // 0x06E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x06E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x06EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F17[0x1];                                     // 0x06EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_15;           // 0x06EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue_1;         // 0x06FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsActiveExcramation_Active;               // 0x06FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x06FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x06FF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_QuitFlag;                       // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F18[0x3];                                     // 0x0709(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_DlalogMsgID;                    // 0x070C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_6;        // 0x0710(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x0718(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F19[0x3];                                     // 0x0719(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x071C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0721(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0722(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0723(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0724(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F1A[0x3];                                     // 0x0725(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface_1;       // 0x0728(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_19;                    // 0x0738(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      CallFunc_TermRequest_ReturnValue;                  // 0x0739(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x073A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanBattleCurrentMapLevel_ReturnValue;     // 0x073B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x073D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F1B[0x2];                                     // 0x073E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool IsVisible)>               K2Node_CreateDelegate_OutputDelegate_16;           // 0x0740(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F1C[0x7];                                     // 0x0751(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0758(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0760(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0768(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0769(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F1D[0x2];                                     // 0x076A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x076C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0770(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameState*                      CallFunc_GetCurrentParty_OutPartyState;            // 0x0778(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCurrentParty_ReturnValue;              // 0x0780(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F1E[0x7];                                     // 0x0781(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_ClassDynamicCast_AsRm_Shop_Menu;            // 0x0788(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F1F[0x7];                                     // 0x0791(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          CallFunc_Create_ReturnValue_3;                     // 0x0798(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPartyGameStateGeneral*               K2Node_DynamicCast_AsSBParty_Game_State_General;   // 0x07A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_20;                    // 0x07A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRecruiting_ReturnValue;                 // 0x07A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasConvocation_ReturnValue;               // 0x07AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocalPartyLeader_ReturnValue;           // 0x07AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F20[0x4];                                     // 0x07AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded;                         // 0x07B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x07B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F21[0x7];                                     // 0x07B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x07C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x07C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBCommand_Menu_Child_Base; // 0x07D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;                // 0x07D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F22[0x7];                                     // 0x07D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCommandMenuChildBase*                CallFunc_Create_ReturnValue_4;                     // 0x07E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_1;                       // 0x07E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x07F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x07F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F23[0x6];                                     // 0x07F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface_2;       // 0x07F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_21;                    // 0x0808(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      CallFunc_TermRequest_ReturnValue_1;                // 0x0809(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x080A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F24[0x5];                                     // 0x080B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0810(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0818(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0819(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F25[0x2];                                     // 0x081A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x081C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_1;                   // 0x0820(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F26[0x7];                                     // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_1;               // 0x0828(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseSkyStore_Result;                     // 0x0831(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F27[0x6];                                     // 0x0832(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_5;                     // 0x0838(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface_3;       // 0x0840(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_22;                    // 0x0850(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0851(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0852(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F28[0x5];                                     // 0x0853(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable_2;                             // 0x0858(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCommandMenuChildBase*                CallFunc_Create_Child_Menu_CreateChildWidget;      // 0x0860(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0868(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0869(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x086A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F29[0x5];                                     // 0x086B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UObject>                    K2Node_CustomEvent_Loaded_2;                       // 0x0870(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button_7;               // 0x0878(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button_6;               // 0x0880(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button_5;               // 0x0888(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button_4;               // 0x0890(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            K2Node_CustomEvent_InMenuType_1;                   // 0x0898(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F2A[0x3];                                     // 0x0899(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_InParamName;                    // 0x089C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x08A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue_2;         // 0x08A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x08A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x08A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_CustomEvent_InMenuType;                     // 0x08A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsStartup;                     // 0x08A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_First;                          // 0x08AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F2B[0x5];                                     // 0x08AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_2;       // 0x08B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x08B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F2C[0x7];                                     // 0x08B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput_2;          // 0x08C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue_2;             // 0x08D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x08D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F2D[0x6];                                     // 0x08D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button_3;               // 0x08D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface_4;       // 0x08E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_23;                    // 0x08F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_2;     // 0x08F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      CallFunc_TermRequest_ReturnValue_2;                // 0x08F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x08F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_ComponentBoundEvent_MenuType_2;             // 0x08F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x08F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x08F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_ComponentBoundEvent_MenuType_1;             // 0x08F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid_2;                   // 0x08F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F2E[0x7];                                     // 0x08F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue_2;               // 0x0900(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMouseCursorType                            CallFunc_GetCurrMouseCursorType_ReturnValue;       // 0x0908(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x0909(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F2F[0x6];                                     // 0x090A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button_2;               // 0x0910(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            K2Node_ComponentBoundEvent_MenuType;               // 0x0918(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0919(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_1;              // 0x091A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x091B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F30[0x4];                                     // 0x091C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0920(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0930(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x0940(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x0941(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_5;          // 0x0942(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F31[0x5];                                     // 0x0943(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface_5;       // 0x0948(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_24;                    // 0x0958(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F32[0x3];                                     // 0x0959(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x095C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0964(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0965(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F33[0x2];                                     // 0x0966(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0968(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x0970(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F34[0x7];                                     // 0x0971(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   CallFunc_Map_Find_Value;                           // 0x0978(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x09A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x09A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F35[0x2];                                     // 0x09A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_17;           // 0x09A4(0x0010)(ZeroConstructor, NoDestructor)
	EClientExitStatus                             Temp_byte_Variable_2;                              // 0x09B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EClientExitStatus                             Temp_byte_Variable_3;                              // 0x09B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x09B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F36[0x1];                                     // 0x09B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button_1;               // 0x09B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EClientExitStatus                             K2Node_Select_Default;                             // 0x09C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x09C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x09C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_6;          // 0x09C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_7;          // 0x09C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F37[0x3];                                     // 0x09C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameLogout_C*                          CallFunc_Create_ReturnValue_6;                     // 0x09C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_18;           // 0x09D0(0x0010)(ZeroConstructor, NoDestructor)
	ESBRmShopMenuType                             K2Node_CustomEvent_StartUpShopType;                // 0x09E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x09E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x09E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x09E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_19;           // 0x09E4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8F38[0x4];                                     // 0x09F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x09F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0A00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                K2Node_ComponentBoundEvent_Button;                 // 0x0A08(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpenMapUI_ReturnValue;                  // 0x0A10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x0A11(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F39[0x2];                                     // 0x0A12(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_5;                      // 0x0A14(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0A18(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0A1C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0A1D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F3A[0x2];                                     // 0x0A1E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0A20(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F3B[0x4];                                     // 0x0A24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlayMessage_C*                      CallFunc_Create_ReturnValue_7;                     // 0x0A28(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0A30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F3C[0x7];                                     // 0x0A31(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0A38(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0A40(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetSendedEntries_ReturnValue;     // 0x0A44(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0A45(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_InviteData_ReturnValue;           // 0x0A46(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F3D[0x1];                                     // 0x0A47(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0A48(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x0A4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F3E[0x3];                                     // 0x0A4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEntryId;                      // 0x0A50(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x0A60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F3F[0x3];                                     // 0x0A61(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0A64(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x0A68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInIsVisible;                         // 0x0A69(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F40[0x2];                                     // 0x0A6A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_20;           // 0x0A6C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8F41[0x4];                                     // 0x0A7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBSubMenuInterface>   K2Node_DynamicCast_AsSBSub_Menu_Interface_6;       // 0x0A80(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_25;                    // 0x0A90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F42[0x3];                                     // 0x0A91(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate_21;           // 0x0A94(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8F43[0x4];                                     // 0x0AA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0AA8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_22;           // 0x0AB0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0AC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F44[0x3];                                     // 0x0AC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_23;           // 0x0AC4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_8;          // 0x0AD4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_IsStart;                // 0x0AD5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x0AD6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;                // 0x0AD7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_8;                 // 0x0AD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F45[0x3];                                     // 0x0AD9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_24;           // 0x0ADC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0AEC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_9;                 // 0x0AED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F46[0x2];                                     // 0x0AEE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_25;           // 0x0AF0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_7;                // 0x0B00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F47[0x7];                                     // 0x0B01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0B08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_8;                // 0x0B10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x0B11(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_10;                // 0x0B12(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_11;                // 0x0B13(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x0B14(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F48[0x3];                                     // 0x0B15(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue_2;           // 0x0B18(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x0B20(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_21;                   // 0x0B21(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsAleat;                       // 0x0B22(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F49[0x1];                                     // 0x0B23(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_26;           // 0x0B24(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bForce)>                  K2Node_CreateDelegate_OutputDelegate_27;           // 0x0B34(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8F4A[0x4];                                     // 0x0B44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0B48(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0B50(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 ErrorCode, int32 UnreadCount)> K2Node_CreateDelegate_OutputDelegate_28;           // 0x0B58(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsActiveBillingShop_ReturnValue;          // 0x0B68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F4B[0x7];                                     // 0x0B69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0B70(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_9;          // 0x0B78(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0B79(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_2;              // 0x0B7A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F4C[0x1];                                     // 0x0B7B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0B7C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_9;                // 0x0B80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0B81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_12;                // 0x0B82(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F4D[0x5];                                     // 0x0B83(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_Event_InWidget;                             // 0x0B88(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_22;                   // 0x0B90(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_ExecuteUbergraph_CommandMenu) == 0x000008, "Wrong alignment on CommandMenu_C_ExecuteUbergraph_CommandMenu");
static_assert(sizeof(CommandMenu_C_ExecuteUbergraph_CommandMenu) == 0x000B98, "Wrong size on CommandMenu_C_ExecuteUbergraph_CommandMenu");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, EntryPoint) == 0x000000, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue) == 0x000008, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000030, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000038, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000048, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000058, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000059, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x00005A, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00005B, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00005C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00005D, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEventExecutor_ReturnValue) == 0x000060, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000068, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Event_QuickAccess) == 0x000070, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Event_QuickAccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetCommondMenuType_ReturnValue) == 0x000072, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetCommondMenuType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000073, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetBookmarkType_ReturnValue) == 0x000078, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetBookmarkType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InMenuType_3) == 0x000088, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InMenuType_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000089, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_ToContentLockType_ReturnValue) == 0x00008A, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_ToContentLockType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetContentLock_ReturnValue) == 0x00008B, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetContentLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_SwitchEnum_CmpSuccess) == 0x00008C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InMenuType_2) == 0x00008D, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InMenuType_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InBookMarkType) == 0x000090, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InBookMarkType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InParamName_1) == 0x0000A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InParamName_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000A8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BookmarkTypeToRmShopMenuType_Value) == 0x0000A9, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BookmarkTypeToRmShopMenuType_Value' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0000AA, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsEnableMenu_bEnable) == 0x0000AB, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsEnableMenu_bEnable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000AC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsVisible_ReturnValue) == 0x0000AD, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000B0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_BookmarkType_1) == 0x0000C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_BookmarkType_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PlaySE_ReturnValue) == 0x0000D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_TsCheck_NewParam) == 0x0000D4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_TsCheck_NewParam' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Get_Now_Page_NowBookMarkType) == 0x0000D8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Get_Now_Page_NowBookMarkType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PlaySE_ReturnValue_1) == 0x0000E8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000EC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Result_3) == 0x0000ED, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface) == 0x0000F0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess) == 0x000100, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000101, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000108, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000118, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_BookmarkSlot) == 0x000158, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_BookmarkSlot' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_KeyString) == 0x000160, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_KeyString' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000170, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000180, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000198, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_MakeStruct_FormatArgumentData) == 0x0001B0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0001F0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_BookmarkType) == 0x0001F8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_BookmarkType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000208, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x000210, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000250, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_MakeArray_Array) == 0x000258, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Format_ReturnValue) == 0x000268, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InputPin) == 0x000280, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InputPin' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000290, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Result_2) == 0x0002B8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_ShowYesNoDialog_ReturnValue) == 0x0002C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0002C8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface) == 0x0002D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Sub_Button_Interface' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_1) == 0x0002E0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x0002E8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsDeadHitPoint_self_CastInput_1) == 0x0002F0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsDeadHitPoint_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsDeadHitPoint_ReturnValue_1) == 0x000300, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsDeadHitPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_2) == 0x000301, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Get_Now_Page_NowBookMarkType_1) == 0x000308, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Get_Now_Page_NowBookMarkType_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetBookMarkTypeNone_ReturnValue) == 0x000318, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetBookMarkTypeNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue_1) == 0x000328, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000330, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue) == 0x000331, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Event_MenuType) == 0x000332, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Event_MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Event_BookMarkType) == 0x000338, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Event_BookMarkType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Event_InParamName) == 0x000348, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Event_InParamName' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x000350, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000358, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_1) == 0x000360, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000368, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_2) == 0x000370, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEventExecutor_ReturnValue_2) == 0x000378, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PostAkEvent_ReturnValue) == 0x000380, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameInstance_ReturnValue) == 0x000388, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000390, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsBP_Default_Game_Instance) == 0x0003A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsBP_Default_Game_Instance' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_3) == 0x0003A8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003AC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x0003BC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x0003D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0003D8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_4) == 0x0003E0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x0003E4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x0003F8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetNetworkDataCache_IsValid) == 0x000400, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000408, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetActivatedDungeonList_ReturnValue) == 0x000410, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetActivatedDungeonList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_2) == 0x000418, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000420, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetConcernedList_ReturnValue) == 0x000428, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetFirstMenuType_MenuType) == 0x000430, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetFirstMenuType_MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000438, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerController_ReturnValue_2) == 0x000440, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x000448, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_5) == 0x000450, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerController_ReturnValue_3) == 0x000458, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller_3) == 0x000460, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_6) == 0x000468, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x000470, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_CommandMenuGet_ReturnValue) == 0x000478, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_CommandMenuGet_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetFirstMenuType_MenuType_1) == 0x000479, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetFirstMenuType_MenuType_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEventExecutor_ReturnValue_3) == 0x000480, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEventExecutor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x000488, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PostAkEvent_ReturnValue_1) == 0x000498, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameInstance_ReturnValue_1) == 0x0004A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsBP_Default_Game_Instance_1) == 0x0004A8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsBP_Default_Game_Instance_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_7) == 0x0004B0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerController_ReturnValue_4) == 0x0004B8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_bWasSuccessful) == 0x0004C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_ErrorCode) == 0x0004C4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_UnreadCount) == 0x0004C8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_UnreadCount' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller_4) == 0x0004D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_8) == 0x0004D8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetMailComponent_ReturnValue) == 0x0004E0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetMailComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerController_ReturnValue_5) == 0x0004E8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller_5) == 0x0004F0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_9) == 0x0004F8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetMailComponent_ReturnValue_1) == 0x000500, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetMailComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000508, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_bForce) == 0x000510, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_bForce' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000518, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_10) == 0x000520, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000528, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Character_1) == 0x000530, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Character_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_11) == 0x000538, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameSingleton_IsValid) == 0x000539, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameSingleton_ReturnValue) == 0x000540, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetDemoManager_ReturnValue) == 0x000548, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetDemoManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameSingleton_IsValid_1) == 0x000550, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameSingleton_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameSingleton_ReturnValue_1) == 0x000558, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameSingleton_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetDemoManager_ReturnValue_1) == 0x000560, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetDemoManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerCharacter_ReturnValue_2) == 0x000568, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameState_ReturnValue) == 0x000570, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Character_2) == 0x000578, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Character_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_12) == 0x000580, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon) == 0x000588, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_13) == 0x000590, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameState_ReturnValue_1) == 0x000598, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_3) == 0x0005A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon_1) == 0x0005A8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_14) == 0x0005B0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_4) == 0x0005B1, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerCharacter_ReturnValue_3) == 0x0005B8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerCharacter_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Character_3) == 0x0005C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Character_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_15) == 0x0005C8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x0005CC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x0005DC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_10) == 0x0005EC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEventExecutor_ReturnValue_4) == 0x000600, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEventExecutor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Sender_4) == 0x000608, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Sender_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Param_4) == 0x000610, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Param_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEventExecutor_ReturnValue_5) == 0x000618, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEventExecutor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Sender_3) == 0x000620, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Sender_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Param_3) == 0x000628, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Param_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_11) == 0x000630, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_12) == 0x000640, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_13) == 0x000650, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode_7) == 0x000660, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_14) == 0x000664, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEventExecutor_ReturnValue_6) == 0x000678, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEventExecutor_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Sender_2) == 0x000680, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Param_2) == 0x000688, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Sender_1) == 0x000690, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Param_1) == 0x000698, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameState_ReturnValue_2) == 0x0006A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGameState_ReturnValue_3) == 0x0006A8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGameState_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon_2) == 0x0006B0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_16) == 0x0006B8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBGame_State_Dungeon_3) == 0x0006C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBGame_State_Dungeon_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_17) == 0x0006C8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_5) == 0x0006C9, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_6) == 0x0006CA, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Result_1) == 0x0006CB, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode_6) == 0x0006CC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0006D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0006D8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x0006E0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsRequiredDataInfoListCache_ReturnValue) == 0x0006E8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsRequiredDataInfoListCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_7) == 0x0006E9, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_byte_Variable) == 0x0006EA, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_15) == 0x0006EC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsPlayerIsInBattle_ReturnValue_1) == 0x0006FC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsPlayerIsInBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsActiveExcramation_Active) == 0x0006FD, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsActiveExcramation_Active' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_3) == 0x0006FE, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0006FF, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000700, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_QuitFlag) == 0x000708, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_QuitFlag' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_DlalogMsgID) == 0x00070C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_DlalogMsgID' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBPlayer_Controller_6) == 0x000710, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBPlayer_Controller_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_18) == 0x000718, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralInt_ReturnValue) == 0x00071C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Result) == 0x000720, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_SwitchEnum_CmpSuccess_1) == 0x000721, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_DoesImplementInterface_ReturnValue) == 0x000722, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_8) == 0x000723, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000724, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface_1) == 0x000728, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_19) == 0x000738, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_19' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_TermRequest_ReturnValue) == 0x000739, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_TermRequest_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_SwitchEnum_CmpSuccess_2) == 0x00073A, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_CanBattleCurrentMapLevel_ReturnValue) == 0x00073B, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_CanBattleCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_byte_Variable_1) == 0x00073C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_bool_Variable) == 0x00073D, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_16) == 0x000740, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_16' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetUIManager_IsValid) == 0x000750, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetUIManager_ReturnValue) == 0x000758, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue_2) == 0x000760, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000768, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_9) == 0x000769, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PlaySE_ReturnValue_2) == 0x00076C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_class_Variable) == 0x000770, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetCurrentParty_OutPartyState) == 0x000778, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetCurrentParty_OutPartyState' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetCurrentParty_ReturnValue) == 0x000780, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetCurrentParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ClassDynamicCast_AsRm_Shop_Menu) == 0x000788, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ClassDynamicCast_AsRm_Shop_Menu' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ClassDynamicCast_bSuccess) == 0x000790, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue_3) == 0x000798, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBParty_Game_State_General) == 0x0007A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBParty_Game_State_General' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_20) == 0x0007A8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_20' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsRecruiting_ReturnValue) == 0x0007A9, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsRecruiting_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_HasConvocation_ReturnValue) == 0x0007AA, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_HasConvocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsLocalPartyLeader_ReturnValue) == 0x0007AB, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsLocalPartyLeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Loaded) == 0x0007B0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetNetworkDataCache_IsValid_1) == 0x0007B8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x0007C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_class_Variable_1) == 0x0007C8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ClassDynamicCast_AsSBCommand_Menu_Child_Base) == 0x0007D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ClassDynamicCast_AsSBCommand_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ClassDynamicCast_bSuccess_1) == 0x0007D8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue_4) == 0x0007E0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Loaded_1) == 0x0007E8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x0007F0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_10) == 0x0007F1, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface_2) == 0x0007F8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_21) == 0x000808, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_21' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_TermRequest_ReturnValue_1) == 0x000809, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_TermRequest_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_SwitchEnum_CmpSuccess_3) == 0x00080A, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000810, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsInViewport_ReturnValue) == 0x000818, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000819, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_PlaySE_ReturnValue_3) == 0x00081C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetUIManager_IsValid_1) == 0x000820, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetUIManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetUIManager_ReturnValue_1) == 0x000828, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetUIManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000830, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsUseSkyStore_Result) == 0x000831, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsUseSkyStore_Result' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue_5) == 0x000838, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface_3) == 0x000840, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_22) == 0x000850, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_22' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x000851, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_11) == 0x000852, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_class_Variable_2) == 0x000858, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_Child_Menu_CreateChildWidget) == 0x000860, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_Child_Menu_CreateChildWidget' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x000868, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x000869, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_4) == 0x00086A, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Loaded_2) == 0x000870, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Loaded_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button_7) == 0x000878, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button_6) == 0x000880, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button_5) == 0x000888, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button_4) == 0x000890, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InMenuType_1) == 0x000898, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InMenuType_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InParamName) == 0x00089C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InParamName' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x0008A4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsPlayerIsInBattle_ReturnValue_2) == 0x0008A5, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsPlayerIsInBattle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_12) == 0x0008A6, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_5) == 0x0008A7, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InMenuType) == 0x0008A8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_bIsStartup) == 0x0008A9, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_bIsStartup' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_First) == 0x0008AA, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_First' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_2) == 0x0008B0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_13) == 0x0008B8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsDeadHitPoint_self_CastInput_2) == 0x0008C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsDeadHitPoint_self_CastInput_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsDeadHitPoint_ReturnValue_2) == 0x0008D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsDeadHitPoint_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_6) == 0x0008D1, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button_3) == 0x0008D8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface_4) == 0x0008E0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_23) == 0x0008F0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_23' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_DoesImplementInterface_ReturnValue_2) == 0x0008F1, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_DoesImplementInterface_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_TermRequest_ReturnValue_2) == 0x0008F2, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_TermRequest_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_SwitchEnum_CmpSuccess_4) == 0x0008F3, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_MenuType_2) == 0x0008F4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_MenuType_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_14) == 0x0008F5, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_15) == 0x0008F6, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_MenuType_1) == 0x0008F7, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_MenuType_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetUIManager_IsValid_2) == 0x0008F8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetUIManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetUIManager_ReturnValue_2) == 0x000900, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetUIManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetCurrMouseCursorType_ReturnValue) == 0x000908, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetCurrMouseCursorType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x000909, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button_2) == 0x000910, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_MenuType) == 0x000918, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_InDungeonGame_ReturnValue) == 0x000919, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_InDungeonGame_ReturnValue_1) == 0x00091A, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_InDungeonGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x00091B, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000920, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000930, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x000940, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x000941, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_5) == 0x000942, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface_5) == 0x000948, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_24) == 0x000958, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_24' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralName_ReturnValue) == 0x00095C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_4) == 0x000964, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetMasterDataManager_IsValid) == 0x000965, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetMasterDataManager_ReturnValue) == 0x000968, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x000970, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Map_Find_Value) == 0x000978, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Map_Find_ReturnValue) == 0x0009A0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_7) == 0x0009A1, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_17) == 0x0009A4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_17' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_byte_Variable_2) == 0x0009B4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_byte_Variable_3) == 0x0009B5, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, Temp_bool_Variable_1) == 0x0009B6, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button_1) == 0x0009B8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Select_Default) == 0x0009C0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x0009C1, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x0009C2, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_6) == 0x0009C3, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_7) == 0x0009C4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue_6) == 0x0009C8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_18) == 0x0009D0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_18' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_StartUpShopType) == 0x0009E0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_StartUpShopType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_IsVisible) == 0x0009E1, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_16) == 0x0009E2, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Select_Default_1) == 0x0009E3, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_19) == 0x0009E4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_19' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Sender) == 0x0009F8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_Param) == 0x000A00, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_Button) == 0x000A08, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsOpenMapUI_ReturnValue) == 0x000A10, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsOpenMapUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_17) == 0x000A11, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode_5) == 0x000A14, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode_4) == 0x000A18, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000A1C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000A1D, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode_3) == 0x000A20, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Create_ReturnValue_7) == 0x000A28, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000A30, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGuildComp_ReturnValue) == 0x000A38, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode_2) == 0x000A40, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Request_GetSendedEntries_ReturnValue) == 0x000A44, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Request_GetSendedEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000A45, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Request_InviteData_ReturnValue) == 0x000A46, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Request_InviteData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode_1) == 0x000A48, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_IsAccept) == 0x000A4C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_InEntryId) == 0x000A50, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_InEntryId' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x000A60, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_RetCode) == 0x000A64, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x000A68, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Event_bInIsVisible) == 0x000A69, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Event_bInIsVisible' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_20) == 0x000A6C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_20' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_AsSBSub_Menu_Interface_6) == 0x000A80, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_AsSBSub_Menu_Interface_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_DynamicCast_bSuccess_25) == 0x000A90, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_DynamicCast_bSuccess_25' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_21) == 0x000A94, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_21' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetGuildComp_ReturnValue_1) == 0x000AA8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_22) == 0x000AB0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_22' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsGuildMember_ReturnValue) == 0x000AC0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_23) == 0x000AC4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_23' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_8) == 0x000AD4, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_ComponentBoundEvent_IsStart) == 0x000AD5, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_ComponentBoundEvent_IsStart' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_5) == 0x000AD6, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_6) == 0x000AD7, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_8) == 0x000AD8, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_24) == 0x000ADC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_24' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000AEC, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_9) == 0x000AED, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_25) == 0x000AF0, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_25' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_7) == 0x000B00, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000B08, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_8) == 0x000B10, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_18) == 0x000B11, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_10) == 0x000B12, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_11) == 0x000B13, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_19) == 0x000B14, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetMailComponent_ReturnValue_2) == 0x000B18, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetMailComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_20) == 0x000B20, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_21) == 0x000B21, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CustomEvent_bIsAleat) == 0x000B22, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CustomEvent_bIsAleat' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_26) == 0x000B24, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_26' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_27) == 0x000B34, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_27' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000B48, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetConcernedList_ReturnValue_1) == 0x000B50, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_CreateDelegate_OutputDelegate_28) == 0x000B58, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_CreateDelegate_OutputDelegate_28' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsActiveBillingShop_ReturnValue) == 0x000B68, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsActiveBillingShop_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Event_Animation) == 0x000B70, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_NotEqual_ByteByte_ReturnValue_9) == 0x000B78, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_NotEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000B79, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_InDungeonGame_ReturnValue_2) == 0x000B7A, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_InDungeonGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000B7C, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_Not_PreBool_ReturnValue_9) == 0x000B80, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_Not_PreBool_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000B81, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_BooleanAND_ReturnValue_12) == 0x000B82, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_BooleanAND_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, K2Node_Event_InWidget) == 0x000B88, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::K2Node_Event_InWidget' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_ExecuteUbergraph_CommandMenu, CallFunc_IsValid_ReturnValue_22) == 0x000B90, "Member 'CommandMenu_C_ExecuteUbergraph_CommandMenu::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnAddBgGroupContents
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_OnAddBgGroupContents final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnAddBgGroupContents) == 0x000008, "Wrong alignment on CommandMenu_C_OnAddBgGroupContents");
static_assert(sizeof(CommandMenu_C_OnAddBgGroupContents) == 0x000008, "Wrong size on CommandMenu_C_OnAddBgGroupContents");
static_assert(offsetof(CommandMenu_C_OnAddBgGroupContents, InWidget) == 0x000000, "Member 'CommandMenu_C_OnAddBgGroupContents::InWidget' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on CommandMenu_C_OnAnimationFinished");
static_assert(sizeof(CommandMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on CommandMenu_C_OnAnimationFinished");
static_assert(offsetof(CommandMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'CommandMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnMailDelegateEvents
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_OnMailDelegateEvents final
{
public:
	bool                                          bIsAleat;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_OnMailDelegateEvents) == 0x000001, "Wrong alignment on CommandMenu_C_OnMailDelegateEvents");
static_assert(sizeof(CommandMenu_C_OnMailDelegateEvents) == 0x000001, "Wrong size on CommandMenu_C_OnMailDelegateEvents");
static_assert(offsetof(CommandMenu_C_OnMailDelegateEvents, bIsAleat) == 0x000000, "Member 'CommandMenu_C_OnMailDelegateEvents::bIsAleat' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature final
{
public:
	bool                                          IsStart;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature) == 0x000001, "Wrong alignment on CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature) == 0x000001, "Wrong size on CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature, IsStart) == 0x000000, "Member 'CommandMenu_C_BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature::IsStart' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnIsCmnBackBtnVisible
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_OnIsCmnBackBtnVisible final
{
public:
	bool                                          bInIsVisible;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_OnIsCmnBackBtnVisible) == 0x000001, "Wrong alignment on CommandMenu_C_OnIsCmnBackBtnVisible");
static_assert(sizeof(CommandMenu_C_OnIsCmnBackBtnVisible) == 0x000001, "Wrong size on CommandMenu_C_OnIsCmnBackBtnVisible");
static_assert(offsetof(CommandMenu_C_OnIsCmnBackBtnVisible, bInIsVisible) == 0x000000, "Member 'CommandMenu_C_OnIsCmnBackBtnVisible::bInIsVisible' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Event_OnCompletedCancelEntry
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_C_Event_OnCompletedCancelEntry final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Event_OnCompletedCancelEntry) == 0x000004, "Wrong alignment on CommandMenu_C_Event_OnCompletedCancelEntry");
static_assert(sizeof(CommandMenu_C_Event_OnCompletedCancelEntry) == 0x000004, "Wrong size on CommandMenu_C_Event_OnCompletedCancelEntry");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedCancelEntry, RetCode) == 0x000000, "Member 'CommandMenu_C_Event_OnCompletedCancelEntry::RetCode' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Event_OnCompletedInviteArraignment
// 0x0018 (0x0018 - 0x0000)
struct CommandMenu_C_Event_OnCompletedInviteArraignment final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccept;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F4E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEntryId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Event_OnCompletedInviteArraignment) == 0x000008, "Wrong alignment on CommandMenu_C_Event_OnCompletedInviteArraignment");
static_assert(sizeof(CommandMenu_C_Event_OnCompletedInviteArraignment) == 0x000018, "Wrong size on CommandMenu_C_Event_OnCompletedInviteArraignment");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedInviteArraignment, RetCode) == 0x000000, "Member 'CommandMenu_C_Event_OnCompletedInviteArraignment::RetCode' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedInviteArraignment, IsAccept) == 0x000004, "Member 'CommandMenu_C_Event_OnCompletedInviteArraignment::IsAccept' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedInviteArraignment, InEntryId) == 0x000008, "Member 'CommandMenu_C_Event_OnCompletedInviteArraignment::InEntryId' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Event_OnCompletedGGetEntryList
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_C_Event_OnCompletedGGetEntryList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Event_OnCompletedGGetEntryList) == 0x000004, "Wrong alignment on CommandMenu_C_Event_OnCompletedGGetEntryList");
static_assert(sizeof(CommandMenu_C_Event_OnCompletedGGetEntryList) == 0x000004, "Wrong size on CommandMenu_C_Event_OnCompletedGGetEntryList");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedGGetEntryList, RetCode) == 0x000000, "Member 'CommandMenu_C_Event_OnCompletedGGetEntryList::RetCode' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Event_OnCompletedWithDraw
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_C_Event_OnCompletedWithDraw final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Event_OnCompletedWithDraw) == 0x000004, "Wrong alignment on CommandMenu_C_Event_OnCompletedWithDraw");
static_assert(sizeof(CommandMenu_C_Event_OnCompletedWithDraw) == 0x000004, "Wrong size on CommandMenu_C_Event_OnCompletedWithDraw");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedWithDraw, RetCode) == 0x000000, "Member 'CommandMenu_C_Event_OnCompletedWithDraw::RetCode' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Event_OnCompletedGetInviteList
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_C_Event_OnCompletedGetInviteList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Event_OnCompletedGetInviteList) == 0x000004, "Wrong alignment on CommandMenu_C_Event_OnCompletedGetInviteList");
static_assert(sizeof(CommandMenu_C_Event_OnCompletedGetInviteList) == 0x000004, "Wrong size on CommandMenu_C_Event_OnCompletedGetInviteList");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedGetInviteList, RetCode) == 0x000000, "Member 'CommandMenu_C_Event_OnCompletedGetInviteList::RetCode' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Event_OnCompletedGetEntries
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_C_Event_OnCompletedGetEntries final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Event_OnCompletedGetEntries) == 0x000004, "Wrong alignment on CommandMenu_C_Event_OnCompletedGetEntries");
static_assert(sizeof(CommandMenu_C_Event_OnCompletedGetEntries) == 0x000004, "Wrong size on CommandMenu_C_Event_OnCompletedGetEntries");
static_assert(offsetof(CommandMenu_C_Event_OnCompletedGetEntries, RetCode) == 0x000000, "Member 'CommandMenu_C_Event_OnCompletedGetEntries::RetCode' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnUpdateSeasonPassAnyInfo
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_OnUpdateSeasonPassAnyInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnUpdateSeasonPassAnyInfo) == 0x000008, "Wrong alignment on CommandMenu_C_OnUpdateSeasonPassAnyInfo");
static_assert(sizeof(CommandMenu_C_OnUpdateSeasonPassAnyInfo) == 0x000010, "Wrong size on CommandMenu_C_OnUpdateSeasonPassAnyInfo");
static_assert(offsetof(CommandMenu_C_OnUpdateSeasonPassAnyInfo, Sender) == 0x000000, "Member 'CommandMenu_C_OnUpdateSeasonPassAnyInfo::Sender' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_OnUpdateSeasonPassAnyInfo, Param) == 0x000008, "Member 'CommandMenu_C_OnUpdateSeasonPassAnyInfo::Param' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnCommandMenuVisible_Event_0
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_OnCommandMenuVisible_Event_0 final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_OnCommandMenuVisible_Event_0) == 0x000001, "Wrong alignment on CommandMenu_C_OnCommandMenuVisible_Event_0");
static_assert(sizeof(CommandMenu_C_OnCommandMenuVisible_Event_0) == 0x000001, "Wrong size on CommandMenu_C_OnCommandMenuVisible_Event_0");
static_assert(offsetof(CommandMenu_C_OnCommandMenuVisible_Event_0, Param_IsVisible) == 0x000000, "Member 'CommandMenu_C_OnCommandMenuVisible_Event_0::Param_IsVisible' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.DisplayRmShop
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_DisplayRmShop final
{
public:
	ESBRmShopMenuType                             StartUpShopType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_DisplayRmShop) == 0x000001, "Wrong alignment on CommandMenu_C_DisplayRmShop");
static_assert(sizeof(CommandMenu_C_DisplayRmShop) == 0x000001, "Wrong size on CommandMenu_C_DisplayRmShop");
static_assert(offsetof(CommandMenu_C_DisplayRmShop, StartUpShopType) == 0x000000, "Member 'CommandMenu_C_DisplayRmShop::StartUpShopType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature) == 0x000001, "Wrong alignment on CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature) == 0x000001, "Wrong size on CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature, MenuType) == 0x000000, "Member 'CommandMenu_C_BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature::MenuType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature) == 0x000001, "Wrong alignment on CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature) == 0x000001, "Wrong size on CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature, MenuType) == 0x000000, "Member 'CommandMenu_C_BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature::MenuType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature) == 0x000001, "Wrong alignment on CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature) == 0x000001, "Wrong size on CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature, MenuType) == 0x000000, "Member 'CommandMenu_C_BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature::MenuType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.StartChildMenu
// 0x0003 (0x0003 - 0x0000)
struct CommandMenu_C_StartChildMenu final
{
public:
	ESBCommandMenuType                            Param_InMenuType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsStartup;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          First;                                             // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_StartChildMenu) == 0x000001, "Wrong alignment on CommandMenu_C_StartChildMenu");
static_assert(sizeof(CommandMenu_C_StartChildMenu) == 0x000003, "Wrong size on CommandMenu_C_StartChildMenu");
static_assert(offsetof(CommandMenu_C_StartChildMenu, Param_InMenuType) == 0x000000, "Member 'CommandMenu_C_StartChildMenu::Param_InMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_StartChildMenu, bIsStartup) == 0x000001, "Member 'CommandMenu_C_StartChildMenu::bIsStartup' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_StartChildMenu, First) == 0x000002, "Member 'CommandMenu_C_StartChildMenu::First' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.TryStartChildMenu
// 0x000C (0x000C - 0x0000)
struct CommandMenu_C_TryStartChildMenu final
{
public:
	ESBCommandMenuType                            Param_InMenuType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F4F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InParamName;                                       // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_TryStartChildMenu) == 0x000004, "Wrong alignment on CommandMenu_C_TryStartChildMenu");
static_assert(sizeof(CommandMenu_C_TryStartChildMenu) == 0x00000C, "Wrong size on CommandMenu_C_TryStartChildMenu");
static_assert(offsetof(CommandMenu_C_TryStartChildMenu, Param_InMenuType) == 0x000000, "Member 'CommandMenu_C_TryStartChildMenu::Param_InMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TryStartChildMenu, InParamName) == 0x000004, "Member 'CommandMenu_C_TryStartChildMenu::InParamName' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_C_BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnHide_Event_0
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_OnHide_Event_0 final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnHide_Event_0) == 0x000001, "Wrong alignment on CommandMenu_C_OnHide_Event_0");
static_assert(sizeof(CommandMenu_C_OnHide_Event_0) == 0x000001, "Wrong size on CommandMenu_C_OnHide_Event_0");
static_assert(offsetof(CommandMenu_C_OnHide_Event_0, Result) == 0x000000, "Member 'CommandMenu_C_OnHide_Event_0::Result' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.StartExitGame
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_StartExitGame final
{
public:
	bool                                          QuitFlag;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F50[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DlalogMsgID;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_StartExitGame) == 0x000004, "Wrong alignment on CommandMenu_C_StartExitGame");
static_assert(sizeof(CommandMenu_C_StartExitGame) == 0x000008, "Wrong size on CommandMenu_C_StartExitGame");
static_assert(offsetof(CommandMenu_C_StartExitGame, QuitFlag) == 0x000000, "Member 'CommandMenu_C_StartExitGame::QuitFlag' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_StartExitGame, DlalogMsgID) == 0x000004, "Member 'CommandMenu_C_StartExitGame::DlalogMsgID' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CustomEvent_6
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_CustomEvent_6 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F51[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_CustomEvent_6) == 0x000004, "Wrong alignment on CommandMenu_C_CustomEvent_6");
static_assert(sizeof(CommandMenu_C_CustomEvent_6) == 0x000008, "Wrong size on CommandMenu_C_CustomEvent_6");
static_assert(offsetof(CommandMenu_C_CustomEvent_6, Result) == 0x000000, "Member 'CommandMenu_C_CustomEvent_6::Result' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CustomEvent_6, RetCode) == 0x000004, "Member 'CommandMenu_C_CustomEvent_6::RetCode' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CustomEvent_5
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_CustomEvent_5 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_CustomEvent_5) == 0x000008, "Wrong alignment on CommandMenu_C_CustomEvent_5");
static_assert(sizeof(CommandMenu_C_CustomEvent_5) == 0x000010, "Wrong size on CommandMenu_C_CustomEvent_5");
static_assert(offsetof(CommandMenu_C_CustomEvent_5, Sender) == 0x000000, "Member 'CommandMenu_C_CustomEvent_5::Sender' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CustomEvent_5, Param) == 0x000008, "Member 'CommandMenu_C_CustomEvent_5::Param' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnUpdateMatchingMenuButtonNew
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_OnUpdateMatchingMenuButtonNew final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnUpdateMatchingMenuButtonNew) == 0x000008, "Wrong alignment on CommandMenu_C_OnUpdateMatchingMenuButtonNew");
static_assert(sizeof(CommandMenu_C_OnUpdateMatchingMenuButtonNew) == 0x000010, "Wrong size on CommandMenu_C_OnUpdateMatchingMenuButtonNew");
static_assert(offsetof(CommandMenu_C_OnUpdateMatchingMenuButtonNew, Sender) == 0x000000, "Member 'CommandMenu_C_OnUpdateMatchingMenuButtonNew::Sender' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_OnUpdateMatchingMenuButtonNew, Param) == 0x000008, "Member 'CommandMenu_C_OnUpdateMatchingMenuButtonNew::Param' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Event_OnCompleteCommandMenuGetDelegate
// 0x0004 (0x0004 - 0x0000)
struct CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate) == 0x000004, "Wrong alignment on CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate");
static_assert(sizeof(CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate) == 0x000004, "Wrong size on CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate");
static_assert(offsetof(CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate, RetCode) == 0x000000, "Member 'CommandMenu_C_Event_OnCompleteCommandMenuGetDelegate::RetCode' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.�������_3
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C__________3 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C__________3) == 0x000008, "Wrong alignment on CommandMenu_C__________3");
static_assert(sizeof(CommandMenu_C__________3) == 0x000010, "Wrong size on CommandMenu_C__________3");
static_assert(offsetof(CommandMenu_C__________3, Sender) == 0x000000, "Member 'CommandMenu_C__________3::Sender' has a wrong offset!");
static_assert(offsetof(CommandMenu_C__________3, Param) == 0x000008, "Member 'CommandMenu_C__________3::Param' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CustomEvent_4
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_CustomEvent_4 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_CustomEvent_4) == 0x000008, "Wrong alignment on CommandMenu_C_CustomEvent_4");
static_assert(sizeof(CommandMenu_C_CustomEvent_4) == 0x000010, "Wrong size on CommandMenu_C_CustomEvent_4");
static_assert(offsetof(CommandMenu_C_CustomEvent_4, Sender) == 0x000000, "Member 'CommandMenu_C_CustomEvent_4::Sender' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CustomEvent_4, Param) == 0x000008, "Member 'CommandMenu_C_CustomEvent_4::Param' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnRequestTermCommandMenuDelegate_Event_0
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0 final
{
public:
	bool                                          bForce;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0) == 0x000001, "Wrong alignment on CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0");
static_assert(sizeof(CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0) == 0x000001, "Wrong size on CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0");
static_assert(offsetof(CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0, bForce) == 0x000000, "Member 'CommandMenu_C_OnRequestTermCommandMenuDelegate_Event_0::bForce' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnUnreadUpdate
// 0x000C (0x000C - 0x0000)
struct CommandMenu_C_OnUnreadUpdate final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F52[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorCode;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UnreadCount;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnUnreadUpdate) == 0x000004, "Wrong alignment on CommandMenu_C_OnUnreadUpdate");
static_assert(sizeof(CommandMenu_C_OnUnreadUpdate) == 0x00000C, "Wrong size on CommandMenu_C_OnUnreadUpdate");
static_assert(offsetof(CommandMenu_C_OnUnreadUpdate, bWasSuccessful) == 0x000000, "Member 'CommandMenu_C_OnUnreadUpdate::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_OnUnreadUpdate, ErrorCode) == 0x000004, "Member 'CommandMenu_C_OnUnreadUpdate::ErrorCode' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_OnUnreadUpdate, UnreadCount) == 0x000008, "Member 'CommandMenu_C_OnUnreadUpdate::UnreadCount' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.RequestTransitionMenuNew
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_C_RequestTransitionMenuNew final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F53[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_BookmarkType;                                // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   InParamName;                                       // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_RequestTransitionMenuNew) == 0x000008, "Wrong alignment on CommandMenu_C_RequestTransitionMenuNew");
static_assert(sizeof(CommandMenu_C_RequestTransitionMenuNew) == 0x000020, "Wrong size on CommandMenu_C_RequestTransitionMenuNew");
static_assert(offsetof(CommandMenu_C_RequestTransitionMenuNew, MenuType) == 0x000000, "Member 'CommandMenu_C_RequestTransitionMenuNew::MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_RequestTransitionMenuNew, Param_BookmarkType) == 0x000008, "Member 'CommandMenu_C_RequestTransitionMenuNew::Param_BookmarkType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_RequestTransitionMenuNew, InParamName) == 0x000018, "Member 'CommandMenu_C_RequestTransitionMenuNew::InParamName' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CustomEvent_3
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_CustomEvent_3 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_CustomEvent_3) == 0x000001, "Wrong alignment on CommandMenu_C_CustomEvent_3");
static_assert(sizeof(CommandMenu_C_CustomEvent_3) == 0x000001, "Wrong size on CommandMenu_C_CustomEvent_3");
static_assert(offsetof(CommandMenu_C_CustomEvent_3, Result) == 0x000000, "Member 'CommandMenu_C_CustomEvent_3::Result' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BookmarkDelete
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_BookmarkDelete final
{
public:
	class FString                                 InputPin;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BookmarkDelete) == 0x000008, "Wrong alignment on CommandMenu_C_BookmarkDelete");
static_assert(sizeof(CommandMenu_C_BookmarkDelete) == 0x000010, "Wrong size on CommandMenu_C_BookmarkDelete");
static_assert(offsetof(CommandMenu_C_BookmarkDelete, InputPin) == 0x000000, "Member 'CommandMenu_C_BookmarkDelete::InputPin' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BookmarkRegistration
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_BookmarkRegistration final
{
public:
	class FString                                 Param_BookmarkType;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BookmarkRegistration) == 0x000008, "Wrong alignment on CommandMenu_C_BookmarkRegistration");
static_assert(sizeof(CommandMenu_C_BookmarkRegistration) == 0x000010, "Wrong size on CommandMenu_C_BookmarkRegistration");
static_assert(offsetof(CommandMenu_C_BookmarkRegistration, Param_BookmarkType) == 0x000000, "Member 'CommandMenu_C_BookmarkRegistration::Param_BookmarkType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CustomEvent_2
// 0x0018 (0x0018 - 0x0000)
struct CommandMenu_C_CustomEvent_2 final
{
public:
	ESBBookMarkerSlot                             BookmarkSlot;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F54[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 KeyString;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_CustomEvent_2) == 0x000008, "Wrong alignment on CommandMenu_C_CustomEvent_2");
static_assert(sizeof(CommandMenu_C_CustomEvent_2) == 0x000018, "Wrong size on CommandMenu_C_CustomEvent_2");
static_assert(offsetof(CommandMenu_C_CustomEvent_2, BookmarkSlot) == 0x000000, "Member 'CommandMenu_C_CustomEvent_2::BookmarkSlot' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CustomEvent_2, KeyString) == 0x000008, "Member 'CommandMenu_C_CustomEvent_2::KeyString' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_CustomEvent_1 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_CustomEvent_1) == 0x000001, "Wrong alignment on CommandMenu_C_CustomEvent_1");
static_assert(sizeof(CommandMenu_C_CustomEvent_1) == 0x000001, "Wrong size on CommandMenu_C_CustomEvent_1");
static_assert(offsetof(CommandMenu_C_CustomEvent_1, Result) == 0x000000, "Member 'CommandMenu_C_CustomEvent_1::Result' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.BookmarkProcessing
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_BookmarkProcessing final
{
public:
	class FString                                 Param_BookmarkType;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_BookmarkProcessing) == 0x000008, "Wrong alignment on CommandMenu_C_BookmarkProcessing");
static_assert(sizeof(CommandMenu_C_BookmarkProcessing) == 0x000010, "Wrong size on CommandMenu_C_BookmarkProcessing");
static_assert(offsetof(CommandMenu_C_BookmarkProcessing, Param_BookmarkType) == 0x000000, "Member 'CommandMenu_C_BookmarkProcessing::Param_BookmarkType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.TransitionMenuFromSubMenu
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_C_TransitionMenuFromSubMenu final
{
public:
	ESBCommandMenuType                            Param_InMenuType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F55[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBookMarkType;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   InParamName;                                       // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_TransitionMenuFromSubMenu) == 0x000008, "Wrong alignment on CommandMenu_C_TransitionMenuFromSubMenu");
static_assert(sizeof(CommandMenu_C_TransitionMenuFromSubMenu) == 0x000020, "Wrong size on CommandMenu_C_TransitionMenuFromSubMenu");
static_assert(offsetof(CommandMenu_C_TransitionMenuFromSubMenu, Param_InMenuType) == 0x000000, "Member 'CommandMenu_C_TransitionMenuFromSubMenu::Param_InMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TransitionMenuFromSubMenu, InBookMarkType) == 0x000008, "Member 'CommandMenu_C_TransitionMenuFromSubMenu::InBookMarkType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TransitionMenuFromSubMenu, InParamName) == 0x000018, "Member 'CommandMenu_C_TransitionMenuFromSubMenu::InParamName' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.StartQuickAccess
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_StartQuickAccess final
{
public:
	ESBCommandMenuType                            Param_InMenuType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_StartQuickAccess) == 0x000001, "Wrong alignment on CommandMenu_C_StartQuickAccess");
static_assert(sizeof(CommandMenu_C_StartQuickAccess) == 0x000001, "Wrong size on CommandMenu_C_StartQuickAccess");
static_assert(offsetof(CommandMenu_C_StartQuickAccess, Param_InMenuType) == 0x000000, "Member 'CommandMenu_C_StartQuickAccess::Param_InMenuType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnPress_QuickAccess
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_OnPress_QuickAccess final
{
public:
	ESBKeyConfigAction                            QuickAccess;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnPress_QuickAccess) == 0x000001, "Wrong alignment on CommandMenu_C_OnPress_QuickAccess");
static_assert(sizeof(CommandMenu_C_OnPress_QuickAccess) == 0x000001, "Wrong size on CommandMenu_C_OnPress_QuickAccess");
static_assert(offsetof(CommandMenu_C_OnPress_QuickAccess, QuickAccess) == 0x000000, "Member 'CommandMenu_C_OnPress_QuickAccess::QuickAccess' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnLoaded_AE38282A462780609F3445B36A750DC5
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5) == 0x000008, "Wrong alignment on CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5");
static_assert(sizeof(CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5) == 0x000008, "Wrong size on CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5");
static_assert(offsetof(CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5, Loaded) == 0x000000, "Member 'CommandMenu_C_OnLoaded_AE38282A462780609F3445B36A750DC5::Loaded' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnLoaded_6ACEB693478345863D5B688D8FC8E59D
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D) == 0x000008, "Wrong alignment on CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D");
static_assert(sizeof(CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D) == 0x000008, "Wrong size on CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D");
static_assert(offsetof(CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D, Loaded) == 0x000000, "Member 'CommandMenu_C_OnLoaded_6ACEB693478345863D5B688D8FC8E59D::Loaded' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnLoaded_A56FA3C649A13B2523A4D78B50954D35
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35 final
{
public:
	TSubclassOf<class UObject>                    Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35) == 0x000008, "Wrong alignment on CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35");
static_assert(sizeof(CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35) == 0x000008, "Wrong size on CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35");
static_assert(offsetof(CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35, Loaded) == 0x000000, "Member 'CommandMenu_C_OnLoaded_A56FA3C649A13B2523A4D78B50954D35::Loaded' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CollectMenuButton
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_CollectMenuButton final
{
public:
	TArray<class UCommandMenu_MenuItem_C*>        K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(CommandMenu_C_CollectMenuButton) == 0x000008, "Wrong alignment on CommandMenu_C_CollectMenuButton");
static_assert(sizeof(CommandMenu_C_CollectMenuButton) == 0x000010, "Wrong size on CommandMenu_C_CollectMenuButton");
static_assert(offsetof(CommandMenu_C_CollectMenuButton, K2Node_MakeArray_Array) == 0x000000, "Member 'CommandMenu_C_CollectMenuButton::K2Node_MakeArray_Array' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.SetActiveMenuButton
// 0x0028 (0x0028 - 0x0000)
struct CommandMenu_C_SetActiveMenuButton final
{
public:
	ESBCommandMenuType                            ActiveMenuType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            NewActiveMenuType;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F56[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F57[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenu_MenuItem_C*                CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            CallFunc_GetMenuType_MenuType;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_SetActiveMenuButton) == 0x000008, "Wrong alignment on CommandMenu_C_SetActiveMenuButton");
static_assert(sizeof(CommandMenu_C_SetActiveMenuButton) == 0x000028, "Wrong size on CommandMenu_C_SetActiveMenuButton");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, ActiveMenuType) == 0x000000, "Member 'CommandMenu_C_SetActiveMenuButton::ActiveMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, NewActiveMenuType) == 0x000001, "Member 'CommandMenu_C_SetActiveMenuButton::NewActiveMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CommandMenu_C_SetActiveMenuButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'CommandMenu_C_SetActiveMenuButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000011, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000012, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000013, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_Array_Get_Item) == 0x000018, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_GetMenuType_MenuType) == 0x000024, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_GetMenuType_MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButton, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000026, "Member 'CommandMenu_C_SetActiveMenuButton::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Add BGGroup Contents
// 0x0010 (0x0010 - 0x0000)
struct CommandMenu_C_Add_BGGroup_Contents final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Add_BGGroup_Contents) == 0x000008, "Wrong alignment on CommandMenu_C_Add_BGGroup_Contents");
static_assert(sizeof(CommandMenu_C_Add_BGGroup_Contents) == 0x000010, "Wrong size on CommandMenu_C_Add_BGGroup_Contents");
static_assert(offsetof(CommandMenu_C_Add_BGGroup_Contents, InWidget) == 0x000000, "Member 'CommandMenu_C_Add_BGGroup_Contents::InWidget' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Add_BGGroup_Contents, CallFunc_AddChildToOverlay_ReturnValue) == 0x000008, "Member 'CommandMenu_C_Add_BGGroup_Contents::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.DisableMenuButtons
// 0x00B0 (0x00B0 - 0x0000)
struct CommandMenu_C_DisableMenuButtons final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F58[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F59[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F5A[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBContentLockType                            CallFunc_ToContentLockType_ReturnValue;            // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetContentLock_ReturnValue;               // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue_1;         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F5B[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput_1;          // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue_1;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F5C[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable;                              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F5D[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            Temp_byte_Variable;                                // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpenMapUI_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F5E[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F5F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F60[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x00A5(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x00A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_1;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_2;              // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseSkyStore_Result;                     // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_3;              // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_DisableMenuButtons) == 0x000008, "Wrong alignment on CommandMenu_C_DisableMenuButtons");
static_assert(sizeof(CommandMenu_C_DisableMenuButtons) == 0x0000B0, "Wrong size on CommandMenu_C_DisableMenuButtons");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, Temp_int_Variable) == 0x000000, "Member 'CommandMenu_C_DisableMenuButtons::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000018, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000028, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_Conv_IntToByte_ReturnValue) == 0x00002A, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002B, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000030, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, Temp_int_Variable_1) == 0x000034, "Member 'CommandMenu_C_DisableMenuButtons::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_BooleanAND_ReturnValue_1) == 0x000038, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000039, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_GetValidValue_ReturnValue) == 0x00003A, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003B, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00003C, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_ToContentLockType_ReturnValue) == 0x00003D, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_ToContentLockType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, K2Node_SwitchEnum_CmpSuccess) == 0x00003E, "Member 'CommandMenu_C_DisableMenuButtons::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_GetContentLock_ReturnValue) == 0x00003F, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_GetContentLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000040, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsPlayerIsInBattle_ReturnValue_1) == 0x000048, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsPlayerIsInBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsDeadHitPoint_self_CastInput_1) == 0x000050, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsDeadHitPoint_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsDeadHitPoint_ReturnValue_1) == 0x000060, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsDeadHitPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_BooleanAND_ReturnValue_2) == 0x000061, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_BooleanAND_ReturnValue_3) == 0x000062, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_MakeLiteralByte_ReturnValue) == 0x000063, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, Temp_object_Variable) == 0x000068, "Member 'CommandMenu_C_DisableMenuButtons::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000070, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000071, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000072, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_MakeLiteralInt_ReturnValue) == 0x000074, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_InDungeonGame_ReturnValue) == 0x000078, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000079, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_Not_PreBool_ReturnValue) == 0x00007A, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, Temp_byte_Variable) == 0x00007B, "Member 'CommandMenu_C_DisableMenuButtons::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsOpenMapUI_ReturnValue) == 0x00007C, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsOpenMapUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, K2Node_Select_Default) == 0x000080, "Member 'CommandMenu_C_DisableMenuButtons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_GetMasterDataManager_IsValid) == 0x000088, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_GetMasterDataManager_ReturnValue) == 0x000090, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_MakeLiteralName_ReturnValue) == 0x00009C, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000A4, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x0000A5, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_BooleanAND_ReturnValue_4) == 0x0000A6, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x0000A7, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_InDungeonGame_ReturnValue_1) == 0x0000A8, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_InDungeonGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_InDungeonGame_ReturnValue_2) == 0x0000A9, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_InDungeonGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0000AA, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_IsUseSkyStore_Result) == 0x0000AB, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_IsUseSkyStore_Result' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x0000AC, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_InDungeonGame_ReturnValue_3) == 0x0000AD, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_InDungeonGame_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_DisableMenuButtons, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000AE, "Member 'CommandMenu_C_DisableMenuButtons::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.SetActiveMenuButtonAnim
// 0x0028 (0x0028 - 0x0000)
struct CommandMenu_C_SetActiveMenuButtonAnim final
{
public:
	ESBCommandMenuType                            ActiveMenuType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            NewActiveMenuType;                                 // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F61[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F62[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenu_MenuItem_C*                CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            CallFunc_GetMenuType_MenuType;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_SetActiveMenuButtonAnim) == 0x000008, "Wrong alignment on CommandMenu_C_SetActiveMenuButtonAnim");
static_assert(sizeof(CommandMenu_C_SetActiveMenuButtonAnim) == 0x000028, "Wrong size on CommandMenu_C_SetActiveMenuButtonAnim");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, ActiveMenuType) == 0x000000, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::ActiveMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, NewActiveMenuType) == 0x000001, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::NewActiveMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000011, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000012, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000013, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_BooleanOR_ReturnValue) == 0x000014, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_Array_Get_Item) == 0x000018, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_GetMenuType_MenuType) == 0x000024, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_GetMenuType_MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetActiveMenuButtonAnim, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000026, "Member 'CommandMenu_C_SetActiveMenuButtonAnim::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Update Library New Icon
// 0x0330 (0x0330 - 0x0000)
struct CommandMenu_C_Update_Library_New_Icon final
{
public:
	class UDataTable*                             TutorialHelpDB;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           TutorialHelpIdList;                                // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<struct FEnemyParamMasterData>          EnemyList;                                         // 0x0018(0x0010)(Edit, BlueprintVisible)
	class ASBPlayerController*                    PlayerController;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CheckNameList;                                     // 0x0030(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 CheckList;                                         // 0x0040(0x0010)(Edit, BlueprintVisible)
	class USBLibrarySaveManager*                  SaveManager;                                       // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNewInformationEnemyLibrary_ReturnValue; // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNewInformationAchievementLibrary_ReturnValue; // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F63[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadDemoIdList_ReturnValue;            // 0x0090(0x0010)(ReferenceParm)
	class USBTheaterComponent*                    CallFunc_GetTheaterComponent_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetLoadDemoList_ReturnValue;              // 0x00A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_ValidAddLibraryPic_ReturnValue;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F64[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_2;             // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNewInformatioAddLibraryPic_ReturnValue; // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F65[0x5];                                     // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllReadDefaultBookmark_ReturnValue;     // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllReadBookmark_ReturnValue;            // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F66[0x5];                                     // 0x00F3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid_1;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F67[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue_1;      // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0118(0x0218)()
};
static_assert(alignof(CommandMenu_C_Update_Library_New_Icon) == 0x000008, "Wrong alignment on CommandMenu_C_Update_Library_New_Icon");
static_assert(sizeof(CommandMenu_C_Update_Library_New_Icon) == 0x000330, "Wrong size on CommandMenu_C_Update_Library_New_Icon");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, TutorialHelpDB) == 0x000000, "Member 'CommandMenu_C_Update_Library_New_Icon::TutorialHelpDB' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, TutorialHelpIdList) == 0x000008, "Member 'CommandMenu_C_Update_Library_New_Icon::TutorialHelpIdList' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, EnemyList) == 0x000018, "Member 'CommandMenu_C_Update_Library_New_Icon::EnemyList' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, PlayerController) == 0x000028, "Member 'CommandMenu_C_Update_Library_New_Icon::PlayerController' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CheckNameList) == 0x000030, "Member 'CommandMenu_C_Update_Library_New_Icon::CheckNameList' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CheckList) == 0x000040, "Member 'CommandMenu_C_Update_Library_New_Icon::CheckList' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, SaveManager) == 0x000050, "Member 'CommandMenu_C_Update_Library_New_Icon::SaveManager' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetCharacterId_ReturnValue) == 0x000058, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetCharacterId_ReturnValue_1) == 0x000068, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_IsNewInformationEnemyLibrary_ReturnValue) == 0x000078, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_IsNewInformationEnemyLibrary_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_IsNewInformationAchievementLibrary_ReturnValue) == 0x000079, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_IsNewInformationAchievementLibrary_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetLibrarySaveManager_IsValid) == 0x00007A, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000080, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetSBPlayerController_ReturnValue) == 0x000088, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetReadDemoIdList_ReturnValue) == 0x000090, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetReadDemoIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetTheaterComponent_ReturnValue) == 0x0000A0, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetTheaterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetLoadDemoList_ReturnValue) == 0x0000A8, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetLoadDemoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_ValidAddLibraryPic_ReturnValue) == 0x0000B8, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_ValidAddLibraryPic_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetCharacterId_ReturnValue_2) == 0x0000C0, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetCharacterId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_IsReadNameList_ReturnValue) == 0x0000D0, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_IsNewInformatioAddLibraryPic_ReturnValue) == 0x0000D1, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_IsNewInformatioAddLibraryPic_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_Not_PreBool_ReturnValue) == 0x0000D2, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetPlayerController_ReturnValue) == 0x0000D8, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x0000E0, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000E8, "Member 'CommandMenu_C_Update_Library_New_Icon::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'CommandMenu_C_Update_Library_New_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_IsAllReadDefaultBookmark_ReturnValue) == 0x0000F1, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_IsAllReadDefaultBookmark_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_IsAllReadBookmark_ReturnValue) == 0x0000F2, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_IsAllReadBookmark_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetPlayerId_ReturnValue) == 0x0000F8, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetLibrarySaveManager_IsValid_1) == 0x000108, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetLibrarySaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_GetLibrarySaveManager_ReturnValue_1) == 0x000110, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_GetLibrarySaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Library_New_Icon, CallFunc_LoadLibraryData_ReturnValue) == 0x000118, "Member 'CommandMenu_C_Update_Library_New_Icon::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Create Child Menu
// 0x0050 (0x0050 - 0x0000)
struct CommandMenu_C_Create_Child_Menu final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCommandMenuChildBase*                CreateChildWidget;                                 // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsSBCommand_Menu_Child_Base; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F68[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCommandMenuChildBase*                CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckBookmarkID_IsActive;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F69[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_CheckBookmarkID_ReplacementID;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRememberMenu_bRet;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F6A[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_Create_Child_Menu) == 0x000008, "Wrong alignment on CommandMenu_C_Create_Child_Menu");
static_assert(sizeof(CommandMenu_C_Create_Child_Menu) == 0x000050, "Wrong size on CommandMenu_C_Create_Child_Menu");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, Param_Class) == 0x000000, "Member 'CommandMenu_C_Create_Child_Menu::Param_Class' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CreateChildWidget) == 0x000008, "Member 'CommandMenu_C_Create_Child_Menu::CreateChildWidget' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, K2Node_ClassDynamicCast_AsSBCommand_Menu_Child_Base) == 0x000010, "Member 'CommandMenu_C_Create_Child_Menu::K2Node_ClassDynamicCast_AsSBCommand_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, K2Node_ClassDynamicCast_bSuccess) == 0x000018, "Member 'CommandMenu_C_Create_Child_Menu::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_Create_ReturnValue) == 0x000020, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_CheckBookmarkID_IsActive) == 0x000028, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_CheckBookmarkID_IsActive' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_CheckBookmarkID_ReplacementID) == 0x000030, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_CheckBookmarkID_ReplacementID' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_BooleanAND_ReturnValue) == 0x000041, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_IsRememberMenu_bRet) == 0x000042, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_IsRememberMenu_bRet' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_GetUIManager_IsValid) == 0x000043, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Create_Child_Menu, CallFunc_GetUIManager_ReturnValue) == 0x000048, "Member 'CommandMenu_C_Create_Child_Menu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.GetCommondMenuType
// 0x000F (0x000F - 0x0000)
struct CommandMenu_C_GetCommondMenuType final
{
public:
	ESBKeyConfigAction                            Action;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBookmarkType_bBookmark;                 // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            CallFunc_QuickAccess2CommandMenuType_ReturnValue;  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            CallFunc_BookmarkTypeToCommandMenuType_ReturnValue; // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_Select_Default;                             // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            K2Node_Select_Default_1;                           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            K2Node_Select_Default_2;                           // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_GetCommondMenuType) == 0x000001, "Wrong alignment on CommandMenu_C_GetCommondMenuType");
static_assert(sizeof(CommandMenu_C_GetCommondMenuType) == 0x00000F, "Wrong size on CommandMenu_C_GetCommondMenuType");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, Action) == 0x000000, "Member 'CommandMenu_C_GetCommondMenuType::Action' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, ReturnValue) == 0x000001, "Member 'CommandMenu_C_GetCommondMenuType::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, Temp_byte_Variable) == 0x000002, "Member 'CommandMenu_C_GetCommondMenuType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, CallFunc_IsBookmarkType_bBookmark) == 0x000003, "Member 'CommandMenu_C_GetCommondMenuType::CallFunc_IsBookmarkType_bBookmark' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, CallFunc_QuickAccess2CommandMenuType_ReturnValue) == 0x000004, "Member 'CommandMenu_C_GetCommondMenuType::CallFunc_QuickAccess2CommandMenuType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, Temp_byte_Variable_1) == 0x000005, "Member 'CommandMenu_C_GetCommondMenuType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, Temp_bool_Variable) == 0x000006, "Member 'CommandMenu_C_GetCommondMenuType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, Temp_bool_Variable_1) == 0x000007, "Member 'CommandMenu_C_GetCommondMenuType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, Temp_bool_Variable_2) == 0x000008, "Member 'CommandMenu_C_GetCommondMenuType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, CallFunc_BookmarkTypeToCommandMenuType_ReturnValue) == 0x000009, "Member 'CommandMenu_C_GetCommondMenuType::CallFunc_BookmarkTypeToCommandMenuType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, CallFunc_InDungeonGame_ReturnValue) == 0x00000A, "Member 'CommandMenu_C_GetCommondMenuType::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, K2Node_Select_Default) == 0x00000B, "Member 'CommandMenu_C_GetCommondMenuType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000C, "Member 'CommandMenu_C_GetCommondMenuType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, K2Node_Select_Default_1) == 0x00000D, "Member 'CommandMenu_C_GetCommondMenuType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetCommondMenuType, K2Node_Select_Default_2) == 0x00000E, "Member 'CommandMenu_C_GetCommondMenuType::K2Node_Select_Default_2' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.GetBookmarkType
// 0x0058 (0x0058 - 0x0000)
struct CommandMenu_C_GetBookmarkType final
{
public:
	ESBKeyConfigAction                            Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F6B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 BookMark;                                          // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBookMarkAction2BookMark_bIsValid;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBBookMarkerSlot                             CallFunc_GetBookMarkAction2BookMark_ReturnValue;   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F6C[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMark_ReturnValue;                  // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBookmarkType_bBookmark;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckBookmarkID_IsActive;                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F6D[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_CheckBookmarkID_ReplacementID;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_GetBookmarkType) == 0x000008, "Wrong alignment on CommandMenu_C_GetBookmarkType");
static_assert(sizeof(CommandMenu_C_GetBookmarkType) == 0x000058, "Wrong size on CommandMenu_C_GetBookmarkType");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, Param_Index) == 0x000000, "Member 'CommandMenu_C_GetBookmarkType::Param_Index' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, ReturnValue) == 0x000008, "Member 'CommandMenu_C_GetBookmarkType::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, BookMark) == 0x000018, "Member 'CommandMenu_C_GetBookmarkType::BookMark' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, CallFunc_GetBookMarkAction2BookMark_bIsValid) == 0x000028, "Member 'CommandMenu_C_GetBookmarkType::CallFunc_GetBookMarkAction2BookMark_bIsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, CallFunc_GetBookMarkAction2BookMark_ReturnValue) == 0x000029, "Member 'CommandMenu_C_GetBookmarkType::CallFunc_GetBookMarkAction2BookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, CallFunc_GetBookMark_ReturnValue) == 0x000030, "Member 'CommandMenu_C_GetBookmarkType::CallFunc_GetBookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, CallFunc_IsBookmarkType_bBookmark) == 0x000040, "Member 'CommandMenu_C_GetBookmarkType::CallFunc_IsBookmarkType_bBookmark' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, CallFunc_CheckBookmarkID_IsActive) == 0x000041, "Member 'CommandMenu_C_GetBookmarkType::CallFunc_CheckBookmarkID_IsActive' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetBookmarkType, CallFunc_CheckBookmarkID_ReplacementID) == 0x000048, "Member 'CommandMenu_C_GetBookmarkType::CallFunc_CheckBookmarkID_ReplacementID' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.IsBookmarkType
// 0x0003 (0x0003 - 0x0000)
struct CommandMenu_C_IsBookmarkType final
{
public:
	ESBKeyConfigAction                            Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBookmark;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBookMarks_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_IsBookmarkType) == 0x000001, "Wrong alignment on CommandMenu_C_IsBookmarkType");
static_assert(sizeof(CommandMenu_C_IsBookmarkType) == 0x000003, "Wrong size on CommandMenu_C_IsBookmarkType");
static_assert(offsetof(CommandMenu_C_IsBookmarkType, Param_Index) == 0x000000, "Member 'CommandMenu_C_IsBookmarkType::Param_Index' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsBookmarkType, bBookmark) == 0x000001, "Member 'CommandMenu_C_IsBookmarkType::bBookmark' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsBookmarkType, CallFunc_IsBookMarks_ReturnValue) == 0x000002, "Member 'CommandMenu_C_IsBookmarkType::CallFunc_IsBookMarks_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Get Now Page
// 0x0038 (0x0038 - 0x0000)
struct CommandMenu_C_Get_Now_Page final
{
public:
	class FString                                 NowBookMarkType;                                   // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBookMarkTypeNone_ReturnValue;          // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F6E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCommandMenuChildBase*                K2Node_DynamicCast_AsSBCommand_Menu_Child_Base;    // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_Get_Now_Page) == 0x000008, "Wrong alignment on CommandMenu_C_Get_Now_Page");
static_assert(sizeof(CommandMenu_C_Get_Now_Page) == 0x000038, "Wrong size on CommandMenu_C_Get_Now_Page");
static_assert(offsetof(CommandMenu_C_Get_Now_Page, NowBookMarkType) == 0x000000, "Member 'CommandMenu_C_Get_Now_Page::NowBookMarkType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Get_Now_Page, CallFunc_GetBookMarkTypeNone_ReturnValue) == 0x000010, "Member 'CommandMenu_C_Get_Now_Page::CallFunc_GetBookMarkTypeNone_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Get_Now_Page, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'CommandMenu_C_Get_Now_Page::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Get_Now_Page, K2Node_DynamicCast_AsSBCommand_Menu_Child_Base) == 0x000028, "Member 'CommandMenu_C_Get_Now_Page::K2Node_DynamicCast_AsSBCommand_Menu_Child_Base' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Get_Now_Page, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CommandMenu_C_Get_Now_Page::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.TsCheck
// 0x0048 (0x0048 - 0x0000)
struct CommandMenu_C_TsCheck final
{
public:
	class FString                                 InputPin;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          NewParam;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F6F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F70[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F71[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetBookMark_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F72[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_TsCheck) == 0x000008, "Wrong alignment on CommandMenu_C_TsCheck");
static_assert(sizeof(CommandMenu_C_TsCheck) == 0x000048, "Wrong size on CommandMenu_C_TsCheck");
static_assert(offsetof(CommandMenu_C_TsCheck, InputPin) == 0x000000, "Member 'CommandMenu_C_TsCheck::InputPin' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, NewParam) == 0x000010, "Member 'CommandMenu_C_TsCheck::NewParam' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, Temp_int_Variable) == 0x000014, "Member 'CommandMenu_C_TsCheck::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, Temp_int_Variable_1) == 0x000018, "Member 'CommandMenu_C_TsCheck::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_Conv_IntToByte_ReturnValue) == 0x00001C, "Member 'CommandMenu_C_TsCheck::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'CommandMenu_C_TsCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_GetValidValue_ReturnValue) == 0x000024, "Member 'CommandMenu_C_TsCheck::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000025, "Member 'CommandMenu_C_TsCheck::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_GetBookMark_ReturnValue) == 0x000028, "Member 'CommandMenu_C_TsCheck::CallFunc_GetBookMark_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000038, "Member 'CommandMenu_C_TsCheck::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000039, "Member 'CommandMenu_C_TsCheck::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'CommandMenu_C_TsCheck::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_MakeLiteralInt_ReturnValue) == 0x000040, "Member 'CommandMenu_C_TsCheck::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_TsCheck, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'CommandMenu_C_TsCheck::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.UpdateSeasonPassMenuButton
// 0x0040 (0x0040 - 0x0000)
struct CommandMenu_C_UpdateSeasonPassMenuButton final
{
public:
	class USBPlayerSeasonPassComponent*           Comp;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowExcramation;                                  // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F73[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F74[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUnreadedSeasonPassFlag_bResult;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x0021(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnreadedSeasonPassFlag_bResult_1;       // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnreadedSeasonPassFlag_bResult_2;       // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnyRewardCanReceived_ReturnValue;       // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F75[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_UpdateSeasonPassMenuButton) == 0x000008, "Wrong alignment on CommandMenu_C_UpdateSeasonPassMenuButton");
static_assert(sizeof(CommandMenu_C_UpdateSeasonPassMenuButton) == 0x000040, "Wrong size on CommandMenu_C_UpdateSeasonPassMenuButton");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, Comp) == 0x000000, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::Comp' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, bShowExcramation) == 0x000008, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::bShowExcramation' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_MakeLiteralName_ReturnValue) == 0x00000C, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_GetMasterDataManager_IsValid) == 0x000014, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_IsUnreadedSeasonPassFlag_bResult) == 0x000020, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_IsUnreadedSeasonPassFlag_bResult' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x000021, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_IsUnreadedSeasonPassFlag_bResult_1) == 0x000022, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_IsUnreadedSeasonPassFlag_bResult_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_IsUnreadedSeasonPassFlag_bResult_2) == 0x000023, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_IsUnreadedSeasonPassFlag_bResult_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_IsAnyRewardCanReceived_ReturnValue) == 0x000025, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_IsAnyRewardCanReceived_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_BooleanOR_ReturnValue) == 0x000026, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_IsSeasonValid_ReturnValue) == 0x000027, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_BooleanOR_ReturnValue_1) == 0x000028, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_BooleanOR_ReturnValue_2) == 0x00002A, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateSeasonPassMenuButton, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000038, "Member 'CommandMenu_C_UpdateSeasonPassMenuButton::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.UpdateLetterButton
// 0x0030 (0x0030 - 0x0000)
struct CommandMenu_C_UpdateLetterButton final
{
public:
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F76[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMailComponent*                 CallFunc_GetMailComponent_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUnreadCount_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMailLimitAleat_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRestrictedUsage_ReturnValue;            // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEncourageOrganization_ReturnValue;      // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_UpdateLetterButton) == 0x000008, "Wrong alignment on CommandMenu_C_UpdateLetterButton");
static_assert(sizeof(CommandMenu_C_UpdateLetterButton) == 0x000030, "Wrong size on CommandMenu_C_UpdateLetterButton");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_GetPlayerController_ReturnValue) == 0x000000, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000008, "Member 'CommandMenu_C_UpdateLetterButton::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'CommandMenu_C_UpdateLetterButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_GetMailComponent_ReturnValue) == 0x000018, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_GetMailComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_GetUnreadCount_ReturnValue) == 0x000020, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_GetUnreadCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_GetMailLimitAleat_ReturnValue) == 0x000024, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_GetMailLimitAleat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_Greater_IntInt_ReturnValue) == 0x000025, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_IsRestrictedUsage_ReturnValue) == 0x000026, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_IsRestrictedUsage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_IsEncourageOrganization_ReturnValue) == 0x000027, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_IsEncourageOrganization_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateLetterButton, CallFunc_BooleanOR_ReturnValue) == 0x000028, "Member 'CommandMenu_C_UpdateLetterButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.GetIsRmShopDisplayed
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_GetIsRmShopDisplayed final
{
public:
	bool                                          OutIsRmShopOpen;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_GetIsRmShopDisplayed) == 0x000001, "Wrong alignment on CommandMenu_C_GetIsRmShopDisplayed");
static_assert(sizeof(CommandMenu_C_GetIsRmShopDisplayed) == 0x000001, "Wrong size on CommandMenu_C_GetIsRmShopDisplayed");
static_assert(offsetof(CommandMenu_C_GetIsRmShopDisplayed, OutIsRmShopOpen) == 0x000000, "Member 'CommandMenu_C_GetIsRmShopDisplayed::OutIsRmShopOpen' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.UpdateGuildButton
// 0x0080 (0x0080 - 0x0000)
struct CommandMenu_C_UpdateGuildButton final
{
public:
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, bool IsAccept, const class FString& InEntryId)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F77[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_5;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x006C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(CommandMenu_C_UpdateGuildButton) == 0x000008, "Wrong alignment on CommandMenu_C_UpdateGuildButton");
static_assert(sizeof(CommandMenu_C_UpdateGuildButton) == 0x000080, "Wrong size on CommandMenu_C_UpdateGuildButton");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'CommandMenu_C_UpdateGuildButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'CommandMenu_C_UpdateGuildButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'CommandMenu_C_UpdateGuildButton::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'CommandMenu_C_UpdateGuildButton::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, CallFunc_GetGuildComp_ReturnValue) == 0x000040, "Member 'CommandMenu_C_UpdateGuildButton::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, K2Node_CreateDelegate_OutputDelegate_4) == 0x000048, "Member 'CommandMenu_C_UpdateGuildButton::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, CallFunc_IsGuildMember_ReturnValue) == 0x000058, "Member 'CommandMenu_C_UpdateGuildButton::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, K2Node_CreateDelegate_OutputDelegate_5) == 0x00005C, "Member 'CommandMenu_C_UpdateGuildButton::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButton, K2Node_CreateDelegate_OutputDelegate_6) == 0x00006C, "Member 'CommandMenu_C_UpdateGuildButton::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct CommandMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on CommandMenu_C_GetGuildComp");
static_assert(sizeof(CommandMenu_C_GetGuildComp) == 0x000018, "Wrong size on CommandMenu_C_GetGuildComp");
static_assert(offsetof(CommandMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'CommandMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'CommandMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'CommandMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.UpdateGuildButtonExclamation
// 0x0040 (0x0040 - 0x0000)
struct CommandMenu_C_UpdateGuildButtonExclamation final
{
public:
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNewMember_ReturnValue;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F78[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0010(0x0010)(ReferenceParm)
	TArray<struct FGuildEntryData>                CallFunc_GetPlayerInviteList_ReturnValue;          // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_UpdateGuildButtonExclamation) == 0x000008, "Wrong alignment on CommandMenu_C_UpdateGuildButtonExclamation");
static_assert(sizeof(CommandMenu_C_UpdateGuildButtonExclamation) == 0x000040, "Wrong size on CommandMenu_C_UpdateGuildButtonExclamation");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_GetGuildComp_ReturnValue) == 0x000000, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_HasNewMember_ReturnValue) == 0x000008, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_HasNewMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_GetGuildEntryList_ReturnValue) == 0x000010, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_GetPlayerInviteList_ReturnValue) == 0x000020, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_GetPlayerInviteList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_Array_Length_ReturnValue_1) == 0x000034, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000039, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_BooleanOR_ReturnValue) == 0x00003A, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateGuildButtonExclamation, CallFunc_BooleanOR_ReturnValue_1) == 0x00003B, "Member 'CommandMenu_C_UpdateGuildButtonExclamation::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.UpdateMatchingMenuButtonExclamation
// 0x00E8 (0x00E8 - 0x0000)
struct CommandMenu_C_UpdateMatchingMenuButtonExclamation final
{
public:
	TArray<struct FSBMissionListInfo>             ActivatedDungeonList;                              // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMissionListInfo                     CallFunc_Array_Get_Item;                           // 0x001C(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F79[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBGameModeInfo                        CallFunc_GetGameModeInfo_GameModeInfo;             // 0x0040(0x0030)()
	bool                                          CallFunc_GetGameModeInfo_ReturnValue;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F7A[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F7B[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F7C[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedID_IsValid;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedID_ReturnValue;                   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F7D[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBActivatedDungeonList*                CallFunc_GetActivatedDungeonList_ReturnValue;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F7E[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMissionListInfo>             CallFunc_GetActivatedDungeonList_ReturnValue_1;    // 0x00D8(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(CommandMenu_C_UpdateMatchingMenuButtonExclamation) == 0x000008, "Wrong alignment on CommandMenu_C_UpdateMatchingMenuButtonExclamation");
static_assert(sizeof(CommandMenu_C_UpdateMatchingMenuButtonExclamation) == 0x0000E8, "Wrong size on CommandMenu_C_UpdateMatchingMenuButtonExclamation");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, ActivatedDungeonList) == 0x000000, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::ActivatedDungeonList' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, Temp_int_Array_Index_Variable) == 0x000010, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_Array_Get_Item) == 0x00001C, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetGameModeInfo_GameModeInfo) == 0x000040, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetGameModeInfo_GameModeInfo' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetGameModeInfo_ReturnValue) == 0x000070, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetGameModeInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_Conv_NameToString_ReturnValue) == 0x000078, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000088, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetCharacterId_ReturnValue) == 0x000090, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetPlayerId_ReturnValue) == 0x0000A0, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetNetworkDataCache_IsValid) == 0x0000B0, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000B8, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_IsReadedID_IsValid) == 0x0000C0, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_IsReadedID_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_IsReadedID_ReturnValue) == 0x0000C1, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_IsReadedID_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetActivatedDungeonList_ReturnValue) == 0x0000C8, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetActivatedDungeonList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_BooleanAND_ReturnValue) == 0x0000D0, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateMatchingMenuButtonExclamation, CallFunc_GetActivatedDungeonList_ReturnValue_1) == 0x0000D8, "Member 'CommandMenu_C_UpdateMatchingMenuButtonExclamation::CallFunc_GetActivatedDungeonList_ReturnValue_1' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.SetCmnBackBtnVIsibility
// 0x0006 (0x0006 - 0x0000)
struct CommandMenu_C_SetCmnBackBtnVIsibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_SetCmnBackBtnVIsibility) == 0x000001, "Wrong alignment on CommandMenu_C_SetCmnBackBtnVIsibility");
static_assert(sizeof(CommandMenu_C_SetCmnBackBtnVIsibility) == 0x000006, "Wrong size on CommandMenu_C_SetCmnBackBtnVIsibility");
static_assert(offsetof(CommandMenu_C_SetCmnBackBtnVIsibility, InIsVisible) == 0x000000, "Member 'CommandMenu_C_SetCmnBackBtnVIsibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetCmnBackBtnVIsibility, Temp_byte_Variable) == 0x000001, "Member 'CommandMenu_C_SetCmnBackBtnVIsibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetCmnBackBtnVIsibility, Temp_byte_Variable_1) == 0x000002, "Member 'CommandMenu_C_SetCmnBackBtnVIsibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetCmnBackBtnVIsibility, Temp_bool_Variable) == 0x000003, "Member 'CommandMenu_C_SetCmnBackBtnVIsibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetCmnBackBtnVIsibility, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'CommandMenu_C_SetCmnBackBtnVIsibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_SetCmnBackBtnVIsibility, K2Node_Select_Default) == 0x000005, "Member 'CommandMenu_C_SetCmnBackBtnVIsibility::K2Node_Select_Default' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.UpdateConsent
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_C_UpdateConsent final
{
public:
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, int32 ApprovalMax, bool bNoOverride, TArray<struct FContactListData>& ItemListData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_UpdateConsent) == 0x000008, "Wrong alignment on CommandMenu_C_UpdateConsent");
static_assert(sizeof(CommandMenu_C_UpdateConsent) == 0x000020, "Wrong size on CommandMenu_C_UpdateConsent");
static_assert(offsetof(CommandMenu_C_UpdateConsent, CallFunc_GetSBPlayerController_ReturnValue) == 0x000000, "Member 'CommandMenu_C_UpdateConsent::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateConsent, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'CommandMenu_C_UpdateConsent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateConsent, CallFunc_GetConcernedList_ReturnValue) == 0x000018, "Member 'CommandMenu_C_UpdateConsent::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CommandMenu_AutoGenFunc
// 0x0040 (0x0040 - 0x0000)
struct CommandMenu_C_CommandMenu_AutoGenFunc final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F7F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ApprovalMax;                                       // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNoOverride;                                       // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F80[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FContactListData>               ItemListData;                                      // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0020(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F81[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsConcentList_ReturnValue;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_CommandMenu_AutoGenFunc) == 0x000008, "Wrong alignment on CommandMenu_C_CommandMenu_AutoGenFunc");
static_assert(sizeof(CommandMenu_C_CommandMenu_AutoGenFunc) == 0x000040, "Wrong size on CommandMenu_C_CommandMenu_AutoGenFunc");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, bWasSuccessful) == 0x000000, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, ApprovalMax) == 0x000004, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::ApprovalMax' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, bNoOverride) == 0x000008, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::bNoOverride' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, ItemListData) == 0x000010, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::ItemListData' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, RetCode) == 0x000020, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::RetCode' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, CallFunc_GetConcernedList_ReturnValue) == 0x000030, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CommandMenu_AutoGenFunc, CallFunc_IsConcentList_ReturnValue) == 0x000038, "Member 'CommandMenu_C_CommandMenu_AutoGenFunc::CallFunc_IsConcentList_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.Update Button Inventory
// 0x0060 (0x0060 - 0x0000)
struct CommandMenu_C_Update_Button_Inventory final
{
public:
	bool                                          Storage;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Equipment;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F82[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F83[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyReadedItemStorage_IsValid;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnyReadedItemStorage_ReturnValue;       // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F84[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnyReadedItemStorage_IsValid_1;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnyReadedItemStorage_ReturnValue_1;     // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_Update_Button_Inventory) == 0x000008, "Wrong alignment on CommandMenu_C_Update_Button_Inventory");
static_assert(sizeof(CommandMenu_C_Update_Button_Inventory) == 0x000060, "Wrong size on CommandMenu_C_Update_Button_Inventory");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, Storage) == 0x000000, "Member 'CommandMenu_C_Update_Button_Inventory::Storage' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, Equipment) == 0x000001, "Member 'CommandMenu_C_Update_Button_Inventory::Equipment' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_GetCharacterId_ReturnValue) == 0x000008, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_BooleanOR_ReturnValue) == 0x000018, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_GetPlayerId_ReturnValue) == 0x000020, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_GetCharacterId_ReturnValue_1) == 0x000030, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_IsAnyReadedItemStorage_IsValid) == 0x000040, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_IsAnyReadedItemStorage_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_IsAnyReadedItemStorage_ReturnValue) == 0x000041, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_IsAnyReadedItemStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_GetPlayerId_ReturnValue_1) == 0x000048, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_IsAnyReadedItemStorage_IsValid_1) == 0x000058, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_IsAnyReadedItemStorage_IsValid_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_Update_Button_Inventory, CallFunc_IsAnyReadedItemStorage_ReturnValue_1) == 0x000059, "Member 'CommandMenu_C_Update_Button_Inventory::CallFunc_IsAnyReadedItemStorage_ReturnValue_1' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.UpdateQuestButton
// 0x0098 (0x0098 - 0x0000)
struct CommandMenu_C_UpdateQuestButton final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWishListExclamation_bResult;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNewQuestStockAll_ReturnValue;           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUpdateAutoDeliveryQuest_ReturnValue;    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUpdateAdventureBoard_ReturnValue;       // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsNewAdventureBoard_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F85[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F86[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceptedQuestInfo                     CallFunc_Array_Get_Item;                           // 0x0028(0x0060)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_bIsValid;                 // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_ReturnValue;              // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_UpdateQuestButton) == 0x000008, "Wrong alignment on CommandMenu_C_UpdateQuestButton");
static_assert(sizeof(CommandMenu_C_UpdateQuestButton) == 0x000098, "Wrong size on CommandMenu_C_UpdateQuestButton");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, Temp_int_Array_Index_Variable) == 0x000000, "Member 'CommandMenu_C_UpdateQuestButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'CommandMenu_C_UpdateQuestButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_IsWishListExclamation_bResult) == 0x00000C, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_IsWishListExclamation_bResult' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_IsNewQuestStockAll_ReturnValue) == 0x00000D, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_IsNewQuestStockAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_IsUpdateAutoDeliveryQuest_ReturnValue) == 0x00000E, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_IsUpdateAutoDeliveryQuest_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_IsUpdateAdventureBoard_ReturnValue) == 0x00000F, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_IsUpdateAdventureBoard_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_IsNewAdventureBoard_ReturnValue) == 0x000010, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_IsNewAdventureBoard_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_BooleanOR_ReturnValue) == 0x000011, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_BooleanOR_ReturnValue_1) == 0x000012, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_BooleanOR_ReturnValue_2) == 0x000013, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_GetNetworkDataCache_IsValid) == 0x000014, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000018, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_BooleanOR_ReturnValue_3) == 0x000020, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_Array_Get_Item) == 0x000028, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_Array_Length_ReturnValue) == 0x000088, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00008D, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_IsReadedIdByInt_bIsValid) == 0x00008E, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_IsReadedIdByInt_bIsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_IsReadedIdByInt_ReturnValue) == 0x00008F, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_IsReadedIdByInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_Not_PreBool_ReturnValue) == 0x000090, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_UpdateQuestButton, CallFunc_BooleanAND_ReturnValue) == 0x000091, "Member 'CommandMenu_C_UpdateQuestButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.OnMatchedGame
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_C_OnMatchedGame final
{
public:
	class USBMatchingGameState*                   MatchedGame;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_OnMatchedGame) == 0x000008, "Wrong alignment on CommandMenu_C_OnMatchedGame");
static_assert(sizeof(CommandMenu_C_OnMatchedGame) == 0x000008, "Wrong size on CommandMenu_C_OnMatchedGame");
static_assert(offsetof(CommandMenu_C_OnMatchedGame, MatchedGame) == 0x000000, "Member 'CommandMenu_C_OnMatchedGame::MatchedGame' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.SetIsEnabledBtnSkyStore
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_SetIsEnabledBtnSkyStore final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_SetIsEnabledBtnSkyStore) == 0x000001, "Wrong alignment on CommandMenu_C_SetIsEnabledBtnSkyStore");
static_assert(sizeof(CommandMenu_C_SetIsEnabledBtnSkyStore) == 0x000001, "Wrong size on CommandMenu_C_SetIsEnabledBtnSkyStore");
static_assert(offsetof(CommandMenu_C_SetIsEnabledBtnSkyStore, IsEnabled) == 0x000000, "Member 'CommandMenu_C_SetIsEnabledBtnSkyStore::IsEnabled' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.SetSkyShopBtn
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_C_SetSkyShopBtn final
{
public:
	bool                                          CallFunc_IsEnableOpenRmShopMenu_ReturnValue;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_SetSkyShopBtn) == 0x000001, "Wrong alignment on CommandMenu_C_SetSkyShopBtn");
static_assert(sizeof(CommandMenu_C_SetSkyShopBtn) == 0x000001, "Wrong size on CommandMenu_C_SetSkyShopBtn");
static_assert(offsetof(CommandMenu_C_SetSkyShopBtn, CallFunc_IsEnableOpenRmShopMenu_ReturnValue) == 0x000000, "Member 'CommandMenu_C_SetSkyShopBtn::CallFunc_IsEnableOpenRmShopMenu_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.CheckReadDemoIdList
// 0x00F8 (0x00F8 - 0x0000)
struct CommandMenu_C_CheckReadDemoIdList final
{
public:
	TArray<class FName>                           In;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           L_RemoveLists;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F87[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F88[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDemoData                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0040(0x0090)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F89[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F8A[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_CheckReadDemoIdList) == 0x000008, "Wrong alignment on CommandMenu_C_CheckReadDemoIdList");
static_assert(sizeof(CommandMenu_C_CheckReadDemoIdList) == 0x0000F8, "Wrong size on CommandMenu_C_CheckReadDemoIdList");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, In) == 0x000000, "Member 'CommandMenu_C_CheckReadDemoIdList::In' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, L_RemoveLists) == 0x000010, "Member 'CommandMenu_C_CheckReadDemoIdList::L_RemoveLists' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'CommandMenu_C_CheckReadDemoIdList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, Temp_int_Array_Index_Variable) == 0x000030, "Member 'CommandMenu_C_CheckReadDemoIdList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Array_Get_Item) == 0x000034, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_GetDataTableRowFromName_OutRow) == 0x000040, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D0, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, Temp_int_Loop_Counter_Variable_1) == 0x0000D4, "Member 'CommandMenu_C_CheckReadDemoIdList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Array_Length_ReturnValue_1) == 0x0000DC, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Array_AddUnique_ReturnValue) == 0x0000E0, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E4, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, Temp_int_Array_Index_Variable_1) == 0x0000E8, "Member 'CommandMenu_C_CheckReadDemoIdList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Array_Get_Item_1) == 0x0000EC, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_CheckReadDemoIdList, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000F4, "Member 'CommandMenu_C_CheckReadDemoIdList::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.GetFirstMenuType
// 0x0048 (0x0048 - 0x0000)
struct CommandMenu_C_GetFirstMenuType final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F8B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopCount;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            Work;                                              // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            LastMenuType;                                      // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F8C[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F8D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F8E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableMenu_bEnable;                     // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F8F[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            CallFunc_GetFirstMenuType_Internal_MenuType;       // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_GetFirstMenuType) == 0x000008, "Wrong alignment on CommandMenu_C_GetFirstMenuType");
static_assert(sizeof(CommandMenu_C_GetFirstMenuType) == 0x000048, "Wrong size on CommandMenu_C_GetFirstMenuType");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, MenuType) == 0x000000, "Member 'CommandMenu_C_GetFirstMenuType::MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, LoopCount) == 0x000004, "Member 'CommandMenu_C_GetFirstMenuType::LoopCount' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, Work) == 0x000008, "Member 'CommandMenu_C_GetFirstMenuType::Work' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, LastMenuType) == 0x000009, "Member 'CommandMenu_C_GetFirstMenuType::LastMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, Temp_int_Variable) == 0x00000C, "Member 'CommandMenu_C_GetFirstMenuType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000012, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000013, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000018, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_BooleanAND_ReturnValue) == 0x000020, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000028, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000038, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_BooleanAND_ReturnValue_1) == 0x000039, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_InDungeonGame_ReturnValue) == 0x00003A, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_IsEnableMenu_bEnable) == 0x00003B, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_IsEnableMenu_bEnable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00003C, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000044, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000045, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, K2Node_SwitchEnum_CmpSuccess) == 0x000046, "Member 'CommandMenu_C_GetFirstMenuType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType, CallFunc_GetFirstMenuType_Internal_MenuType) == 0x000047, "Member 'CommandMenu_C_GetFirstMenuType::CallFunc_GetFirstMenuType_Internal_MenuType' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.IsRememberMenu
// 0x0003 (0x0003 - 0x0000)
struct CommandMenu_C_IsRememberMenu final
{
public:
	ESBCommandMenuType                            Param_InMenuType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRet;                                              // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_IsRememberMenu) == 0x000001, "Wrong alignment on CommandMenu_C_IsRememberMenu");
static_assert(sizeof(CommandMenu_C_IsRememberMenu) == 0x000003, "Wrong size on CommandMenu_C_IsRememberMenu");
static_assert(offsetof(CommandMenu_C_IsRememberMenu, Param_InMenuType) == 0x000000, "Member 'CommandMenu_C_IsRememberMenu::Param_InMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsRememberMenu, bRet) == 0x000001, "Member 'CommandMenu_C_IsRememberMenu::bRet' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsRememberMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'CommandMenu_C_IsRememberMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.IsEnableMenu
// 0x0078 (0x0078 - 0x0000)
struct CommandMenu_C_IsEnableMenu final
{
public:
	ESBCommandMenuType                            Param_InMenuType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEnable;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue;           // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBContentLockType                            CallFunc_ToContentLockType_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetContentLock_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F90[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerIsInBattle_ReturnValue_1;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F91[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput;            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F92[0x5];                                     // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F93[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBBattleParamInterface> CallFunc_IsDeadHitPoint_self_CastInput_1;          // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDeadHitPoint_ReturnValue_1;             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue;                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpenMapUI_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F94[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InDungeonGame_ReturnValue_1;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFeatureSettingEenabled_ReturnValue;     // 0x0071(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InDungeonGame_ReturnValue_2;              // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseSkyStore_Result;                     // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_C_IsEnableMenu) == 0x000008, "Wrong alignment on CommandMenu_C_IsEnableMenu");
static_assert(sizeof(CommandMenu_C_IsEnableMenu) == 0x000078, "Wrong size on CommandMenu_C_IsEnableMenu");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, Param_InMenuType) == 0x000000, "Member 'CommandMenu_C_IsEnableMenu::Param_InMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, bEnable) == 0x000001, "Member 'CommandMenu_C_IsEnableMenu::bEnable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsPlayerIsInBattle_ReturnValue) == 0x000002, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsPlayerIsInBattle_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_ToContentLockType_ReturnValue) == 0x000003, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_ToContentLockType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_GetContentLock_ReturnValue) == 0x000005, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_GetContentLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000006, "Member 'CommandMenu_C_IsEnableMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000008, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsPlayerIsInBattle_ReturnValue_1) == 0x000010, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsPlayerIsInBattle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsDeadHitPoint_self_CastInput) == 0x000018, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsDeadHitPoint_self_CastInput' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsDeadHitPoint_ReturnValue) == 0x000028, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsDeadHitPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000029, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_BooleanAND_ReturnValue_2) == 0x00002A, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x000030, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000038, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsDeadHitPoint_self_CastInput_1) == 0x000040, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsDeadHitPoint_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsDeadHitPoint_ReturnValue_1) == 0x000050, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsDeadHitPoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_BooleanAND_ReturnValue_3) == 0x000051, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000052, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000053, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_InDungeonGame_ReturnValue) == 0x000054, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_InDungeonGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000055, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000056, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000057, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsOpenMapUI_ReturnValue) == 0x000058, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsOpenMapUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000059, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_GetMasterDataManager_IsValid) == 0x00005A, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_GetMasterDataManager_ReturnValue) == 0x000060, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_MakeLiteralName_ReturnValue) == 0x000068, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_InDungeonGame_ReturnValue_1) == 0x000070, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_InDungeonGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsFeatureSettingEenabled_ReturnValue) == 0x000071, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsFeatureSettingEenabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_BooleanAND_ReturnValue_4) == 0x000072, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_InDungeonGame_ReturnValue_2) == 0x000073, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_InDungeonGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000074, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_IsUseSkyStore_Result) == 0x000075, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_IsUseSkyStore_Result' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_IsEnableMenu, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x000076, "Member 'CommandMenu_C_IsEnableMenu::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");

// Function CommandMenu.CommandMenu_C.GetFirstMenuType_Internal
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_C_GetFirstMenuType_Internal final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            LastMenuType;                                      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableMenu_bEnable;                     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRememberMenu_bRet;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F95[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            CallFunc_GetLastCommandMenuType_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_C_GetFirstMenuType_Internal) == 0x000008, "Wrong alignment on CommandMenu_C_GetFirstMenuType_Internal");
static_assert(sizeof(CommandMenu_C_GetFirstMenuType_Internal) == 0x000020, "Wrong size on CommandMenu_C_GetFirstMenuType_Internal");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, MenuType) == 0x000000, "Member 'CommandMenu_C_GetFirstMenuType_Internal::MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, LastMenuType) == 0x000001, "Member 'CommandMenu_C_GetFirstMenuType_Internal::LastMenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_IsEnableMenu_bEnable) == 0x000002, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_IsEnableMenu_bEnable' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_IsRememberMenu_bRet) == 0x000003, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_IsRememberMenu_bRet' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000005, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000006, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_BooleanAND_ReturnValue_1) == 0x000007, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_GetUIManager_IsValid) == 0x000008, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_GetUIManager_ReturnValue) == 0x000010, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_C_GetFirstMenuType_Internal, CallFunc_GetLastCommandMenuType_ReturnValue) == 0x000018, "Member 'CommandMenu_C_GetFirstMenuType_Internal::CallFunc_GetLastCommandMenuType_ReturnValue' has a wrong offset!");

}

