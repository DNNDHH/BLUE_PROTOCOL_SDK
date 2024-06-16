#pragma once

 

// Package: UMG_SeasonPassMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.ExecuteUbergraph_UMG_SeasonPassMenu
// 0x0650 (0x0650 - 0x0000)
struct UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77F7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77F8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77F9[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_1;     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_2;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUpRankAtAutoRankup_ReturnValue;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77FA[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_3;     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_SeasonPassItemReceiveMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_4;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SeasonPassRankupDialog_C*          CallFunc_Create_ReturnValue_1;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_4;     // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_5;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRank_ReturnValue;                      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77FB[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_5;     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_GetRequiredRankupPoint_ReturnValue;       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPoint_ReturnValue;                     // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMaxRank_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRank_ReturnValue_1;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 UpRank)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77FC[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_2;            // 0x0130(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77FD[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_6;      // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_6;     // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_3;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_7;      // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_7;     // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_4;            // 0x0198(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsSeasonValid_ReturnValue;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77FE[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_8;      // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_8;     // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_5;            // 0x01C0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CanAutoRankup_ReturnValue;                // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77FF[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_9;      // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_9;     // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSeasonValid_ReturnValue_1;              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7800[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_6;            // 0x01EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7801[0x3];                                     // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MainPage;                             // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_UpRank_1;                       // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7802[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0220(0x0018)()
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7803[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_5;                    // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7804[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardItemData*        K2Node_CustomEvent_Data_1;                         // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7805[0x2];                                     // 0x025A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_4;                    // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7806[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7807[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0270(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0280(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02A8(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x02C0(0x0018)()
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue_1;           // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x02E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7808[0x2];                                     // 0x02E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_3;                    // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7809[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_2;                    // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_780A[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0308(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0320(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0330(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_10;     // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           CallFunc_GetSeasonPassComponent_ReturnValue_10;    // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRank_ReturnValue_2;                    // 0x0358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowSeasonPassDebugUi_ReturnValue;      // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsShowSeasonPassDebugUi_ReturnValue_1;    // 0x035D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x035E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_780B[0x1];                                     // 0x035F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0360(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03A0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x03C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x03D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x03E0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x03F8(0x0018)()
	TDelegate<void(int32 InRetCode, int32 InFreeMoney, int32 InPaidMoney)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0410(0x0010)(ZeroConstructor, NoDestructor)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_2;                     // 0x0420(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_UpRank;                         // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x042C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_780C[0x3];                                     // 0x042D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x043A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x043B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x043C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x043D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_780D[0x2];                                     // 0x043E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x0440(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_780E[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface_1;   // 0x0458(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_780F[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface_2;   // 0x0470(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7810[0x7];                                     // 0x0481(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface_3;   // 0x0488(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7811[0x7];                                     // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardItemData*        K2Node_ComponentBoundEvent_RewardItemData;         // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassItemReceiveMenu_C*       K2Node_CustomEvent_Sender_2;                       // 0x04A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_SeasonPassItemReceiveMenu_C*       CallFunc_Create_ReturnValue_3;                     // 0x04B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue_1;           // 0x04C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSeasonPassMenuRewardItemData*        K2Node_CustomEvent_Data;                           // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x04D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x04D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7812[0x5];                                     // 0x04D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x04D8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7813[0x7];                                     // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bEnable;                        // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x04F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7814[0x1];                                     // 0x04F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x04F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InFreeMoney;                    // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InPaidMoney;                    // 0x04FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0500(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0510(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0518(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7815[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0538(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0550(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7816[0x3];                                     // 0x0551(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USBSeasonPassMenuRewardItemData* Data)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0554(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0564(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0565(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7817[0x2];                                     // 0x0566(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7818[0x4];                                     // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSeasonPassMenuRewardData*            CallFunc_SpawnObject_ReturnValue;                  // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0580(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x0590(0x0010)(ZeroConstructor, NoDestructor)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x05A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x05B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x05C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x05C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7819[0x2];                                     // 0x05CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x05CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x05D0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x05E0(0x0018)()
	bool                                          CallFunc_IsShowSeasonPassDebugUi_ReturnValue_2;    // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x05F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_781A[0x2];                                     // 0x05FA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x05FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0600(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0610(0x0018)()
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0628(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_781B[0x7];                                     // 0x0629(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0638(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu");
static_assert(sizeof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu) == 0x000650, "Wrong size on UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x000020, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000028, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_1) == 0x000030, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000038, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Create_ReturnValue) == 0x000040, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_2) == 0x000048, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetUpRankAtAutoRankup_ReturnValue) == 0x000050, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetUpRankAtAutoRankup_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsValid_ReturnValue) == 0x000054, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000058, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_3) == 0x000060, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_4) == 0x000078, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Create_ReturnValue_1) == 0x000080, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_4) == 0x000088, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_5) == 0x000090, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetRank_ReturnValue) == 0x000098, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_5) == 0x0000A0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetRequiredRankupPoint_ReturnValue) == 0x0000E8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetRequiredRankupPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetPoint_ReturnValue) == 0x0000EC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetMaxRank_ReturnValue) == 0x0000F0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetMaxRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Divide_IntInt_ReturnValue) == 0x0000F4, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetRank_ReturnValue_1) == 0x0000F8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetRank_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Add_IntInt_ReturnValue) == 0x0000FC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000100, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Min_ReturnValue) == 0x000110, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Add_IntInt_ReturnValue_1) == 0x000114, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000118, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_TextToString_ReturnValue) == 0x000120, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000130, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Concat_StrStr_ReturnValue) == 0x000140, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToInt_ReturnValue) == 0x000150, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000158, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_6) == 0x000168, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_6) == 0x000170, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000178, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_7) == 0x000188, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_7) == 0x000190, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000198, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsSeasonValid_ReturnValue) == 0x0001A8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsSeasonValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_8) == 0x0001B0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_8) == 0x0001B8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001C0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_CanAutoRankup_ReturnValue) == 0x0001D0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_CanAutoRankup_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_9) == 0x0001D8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_9) == 0x0001E0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsSeasonValid_ReturnValue_1) == 0x0001E8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsSeasonValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x0001EC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0001FC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Event_InBookMarkType) == 0x000200, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Event_MainPage) == 0x000210, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Event_SubPage) == 0x000214, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_UpRank_1) == 0x000218, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_UpRank_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralText_ReturnValue) == 0x000220, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x000238, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, Temp_int_Variable) == 0x000240, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_SwitchEnum_CmpSuccess) == 0x000244, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InRetCode_5) == 0x000248, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InRetCode_5' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00024C, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_Data_1) == 0x000250, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_BooleanAND_ReturnValue) == 0x000258, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, Temp_bool_Variable) == 0x000259, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InRetCode_4) == 0x00025C, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InRetCode_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000260, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Select_Default) == 0x000264, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000268, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x000270, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000280, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000298, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002A8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0002C0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_ShowYesNoDialog2_ReturnValue_1) == 0x0002D8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_ShowYesNoDialog2_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0002E0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_SwitchEnum_CmpSuccess_1) == 0x0002E1, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InRetCode_3) == 0x0002E4, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InRetCode_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_PlaySE_ReturnValue) == 0x0002E8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0002EC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InRetCode_2) == 0x0002F0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InRetCode_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x0002F4, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0002F8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000308, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000320, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000330, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBPlayerController_ReturnValue_10) == 0x000348, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBPlayerController_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSeasonPassComponent_ReturnValue_10) == 0x000350, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSeasonPassComponent_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetRank_ReturnValue_2) == 0x000358, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetRank_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsShowSeasonPassDebugUi_ReturnValue) == 0x00035C, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsShowSeasonPassDebugUi_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsShowSeasonPassDebugUi_ReturnValue_1) == 0x00035D, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsShowSeasonPassDebugUi_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, Temp_bool_Variable_1) == 0x00035E, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x000360, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_MakeArray_Array) == 0x0003A0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_IntToString_ReturnValue) == 0x0003B0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0003C0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0003D0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0003E0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Format_ReturnValue) == 0x0003F8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x000410, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Create_ReturnValue_2) == 0x000420, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_UpRank) == 0x000428, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_UpRank' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsValid_ReturnValue_1) == 0x00042C, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_AddChildToCanvas_ReturnValue) == 0x000430, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000438, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000439, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, Temp_bool_Variable_2) == 0x00043A, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x00043B, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_BooleanAND_ReturnValue_2) == 0x00043C, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x00043D, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x000440, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_bSuccess) == 0x000450, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface_1) == 0x000458, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_bSuccess_1) == 0x000468, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface_2) == 0x000470, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_bSuccess_2) == 0x000480, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_AsSBCommand_Menu_Interface_3) == 0x000488, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_AsSBCommand_Menu_Interface_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_DynamicCast_bSuccess_3) == 0x000498, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_ComponentBoundEvent_RewardItemData) == 0x0004A0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_ComponentBoundEvent_RewardItemData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_Sender_2) == 0x0004A8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x0004B0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Create_ReturnValue_3) == 0x0004B8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_AddChildToCanvas_ReturnValue_1) == 0x0004C0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_AddChildToCanvas_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_Data) == 0x0004C8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x0004D0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x0004D1, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsValid_ReturnValue_2) == 0x0004D2, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Event_Animation) == 0x0004D8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0004E0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_PlayAnimationForward_ReturnValue) == 0x0004E8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0004F0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_bEnable) == 0x0004F1, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_bEnable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Select_Default_1) == 0x0004F2, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InRetCode_1) == 0x0004F4, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InFreeMoney) == 0x0004F8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InFreeMoney' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InPaidMoney) == 0x0004FC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InPaidMoney' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000500, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Create_ReturnValue_4) == 0x000510, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000518, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsValid_ReturnValue_3) == 0x000530, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_ComponentBoundEvent_Text) == 0x000538, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_ComponentBoundEvent_CommitMethod) == 0x000550, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x000554, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_IntToByte_ReturnValue) == 0x000564, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetValidValue_ReturnValue) == 0x000565, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, Temp_int_Variable_1) == 0x000568, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_SpawnObject_ReturnValue) == 0x000570, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetEventExecutor_ReturnValue) == 0x000578, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x000580, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CreateDelegate_OutputDelegate_10) == 0x000590, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetEventExecutor_ReturnValue_1) == 0x0005A0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_Sender_1) == 0x0005A8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_Param_1) == 0x0005B0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_Sender) == 0x0005B8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_Param) == 0x0005C0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsValid_ReturnValue_4) == 0x0005C8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, Temp_bool_Variable_3) == 0x0005C9, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Select_Default_2) == 0x0005CC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x0005D0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0005E0, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_IsShowSeasonPassDebugUi_ReturnValue_2) == 0x0005F8, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_IsShowSeasonPassDebugUi_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_Select_Default_3) == 0x0005F9, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, K2Node_CustomEvent_InRetCode) == 0x0005FC, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000600, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000610, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetUIManager_IsValid) == 0x000628, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_GetUIManager_ReturnValue) == 0x000630, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000638, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu, CallFunc_Conv_StringToName_ReturnValue) == 0x000648, "Member 'UMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompleted
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenu_C_OnCompleted final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnCompleted) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnCompleted");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnCompleted) == 0x000004, "Wrong size on UMG_SeasonPassMenu_C_OnCompleted");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnCompleted, InRetCode) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnCompleted::InRetCode' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnUpdateReceivedRewardInfo
// 0x0010 (0x0010 - 0x0000)
struct UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo) == 0x000010, "Wrong size on UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo, Sender) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo::Sender' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo, Param) == 0x000008, "Member 'UMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo::Param' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnUpdateSeasonPassInfo
// 0x0010 (0x0010 - 0x0000)
struct UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo) == 0x000010, "Wrong size on UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo, Sender) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo::Sender' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo, Param) == 0x000008, "Member 'UMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo::Param' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'UMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompletedAmoutOfMoney
// 0x000C (0x000C - 0x0000)
struct UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InFreeMoney;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InPaidMoney;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney) == 0x00000C, "Wrong size on UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney, InRetCode) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney::InRetCode' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney, InFreeMoney) == 0x000004, "Member 'UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney::InFreeMoney' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney, InPaidMoney) == 0x000008, "Member 'UMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney::InPaidMoney' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.EnableInput
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassMenu_C_EnableInput final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenu_C_EnableInput) == 0x000001, "Wrong alignment on UMG_SeasonPassMenu_C_EnableInput");
static_assert(sizeof(UMG_SeasonPassMenu_C_EnableInput) == 0x000001, "Wrong size on UMG_SeasonPassMenu_C_EnableInput");
static_assert(offsetof(UMG_SeasonPassMenu_C_EnableInput, bEnable) == 0x000000, "Member 'UMG_SeasonPassMenu_C_EnableInput::bEnable' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_OnAnimationFinished");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on UMG_SeasonPassMenu_C_OnAnimationFinished");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnClieckItemReceive
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenu_C_OnClieckItemReceive final
{
public:
	class USBSeasonPassMenuRewardItemData*        Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnClieckItemReceive) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_OnClieckItemReceive");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnClieckItemReceive) == 0x000008, "Wrong size on UMG_SeasonPassMenu_C_OnClieckItemReceive");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnClieckItemReceive, Data) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnClieckItemReceive::Data' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCloseReceiveMenu
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenu_C_OnCloseReceiveMenu final
{
public:
	class UUMG_SeasonPassItemReceiveMenu_C*       Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnCloseReceiveMenu) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_OnCloseReceiveMenu");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnCloseReceiveMenu) == 0x000008, "Wrong size on UMG_SeasonPassMenu_C_OnCloseReceiveMenu");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnCloseReceiveMenu, Sender) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnCloseReceiveMenu::Sender' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        RewardItemData;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature, RewardItemData) == 0x000000, "Member 'UMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature::RewardItemData' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnClickedRankupDialogOk
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenu_C_OnClickedRankupDialogOk final
{
public:
	int32                                         UpRank;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnClickedRankupDialogOk) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnClickedRankupDialogOk");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnClickedRankupDialogOk) == 0x000004, "Wrong size on UMG_SeasonPassMenu_C_OnClickedRankupDialogOk");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnClickedRankupDialogOk, UpRank) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnClickedRankupDialogOk::UpRank' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnGetSeasonPassRewardAllCompleted
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted) == 0x000004, "Wrong size on UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted, InRetCode) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted::InRetCode' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompletedGetInfo
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenu_C_OnCompletedGetInfo final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnCompletedGetInfo) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnCompletedGetInfo");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnCompletedGetInfo) == 0x000004, "Wrong size on UMG_SeasonPassMenu_C_OnCompletedGetInfo");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnCompletedGetInfo, InRetCode) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnCompletedGetInfo::InRetCode' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnComplateReceive
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenu_C_OnComplateReceive final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnComplateReceive) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnComplateReceive");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnComplateReceive) == 0x000004, "Wrong size on UMG_SeasonPassMenu_C_OnComplateReceive");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnComplateReceive, InRetCode) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnComplateReceive::InRetCode' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestReceiveApi
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenu_C_RequestReceiveApi final
{
public:
	class USBSeasonPassMenuRewardItemData*        Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_RequestReceiveApi) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_RequestReceiveApi");
static_assert(sizeof(UMG_SeasonPassMenu_C_RequestReceiveApi) == 0x000008, "Wrong size on UMG_SeasonPassMenu_C_RequestReceiveApi");
static_assert(offsetof(UMG_SeasonPassMenu_C_RequestReceiveApi, Data) == 0x000000, "Member 'UMG_SeasonPassMenu_C_RequestReceiveApi::Data' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompleteRankup
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenu_C_OnCompleteRankup final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnCompleteRankup) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnCompleteRankup");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnCompleteRankup) == 0x000004, "Wrong size on UMG_SeasonPassMenu_C_OnCompleteRankup");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnCompleteRankup, InRetCode) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnCompleteRankup::InRetCode' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestRankupApi
// 0x0004 (0x0004 - 0x0000)
struct UMG_SeasonPassMenu_C_RequestRankupApi final
{
public:
	int32                                         UpRank;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_RequestRankupApi) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_RequestRankupApi");
static_assert(sizeof(UMG_SeasonPassMenu_C_RequestRankupApi) == 0x000004, "Wrong size on UMG_SeasonPassMenu_C_RequestRankupApi");
static_assert(offsetof(UMG_SeasonPassMenu_C_RequestRankupApi, UpRank) == 0x000000, "Member 'UMG_SeasonPassMenu_C_RequestRankupApi::UpRank' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenu_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on UMG_SeasonPassMenu_C_OnSubMenuUpdate");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnSubMenuUpdate) == 0x000008, "Wrong size on UMG_SeasonPassMenu_C_OnSubMenuUpdate");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'UMG_SeasonPassMenu_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'UMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.TermRequest
// 0x0018 (0x0018 - 0x0000)
struct UMG_SeasonPassMenu_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermReason                            Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_781C[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenu_C_TermRequest) == 0x000008, "Wrong alignment on UMG_SeasonPassMenu_C_TermRequest");
static_assert(sizeof(UMG_SeasonPassMenu_C_TermRequest) == 0x000018, "Wrong size on UMG_SeasonPassMenu_C_TermRequest");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, InReason) == 0x000000, "Member 'UMG_SeasonPassMenu_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, ReturnValue) == 0x000001, "Member 'UMG_SeasonPassMenu_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, Temp_byte_Variable) == 0x000002, "Member 'UMG_SeasonPassMenu_C_TermRequest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'UMG_SeasonPassMenu_C_TermRequest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, Temp_byte_Variable_1) == 0x000004, "Member 'UMG_SeasonPassMenu_C_TermRequest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, Temp_byte_Variable_2) == 0x000005, "Member 'UMG_SeasonPassMenu_C_TermRequest::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, K2Node_Select_Default) == 0x000006, "Member 'UMG_SeasonPassMenu_C_TermRequest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UMG_SeasonPassMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UMG_SeasonPassMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

