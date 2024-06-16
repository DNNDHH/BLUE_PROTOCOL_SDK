#pragma once

 

// Package: DhcBattleHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "EN_DHCStatus_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleHUD.DhcBattleHUD_C.ExecuteUbergraph_DhcBattleHUD
// 0x0730 (0x0730 - 0x0000)
struct DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode, struct FSBDhcBattleInfo& InAttackCheckerInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode, bool InResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	EN_DHCStatus                                  Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6259[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_625A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_625B[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EN_DHCStatus DHCState, bool LocalPlayerJoined)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0088(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0098(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00B8(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_625C[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DHCMeasurer;                    // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DHCMeasurer_C*                      K2Node_DynamicCast_AsBP_DHCMeasurer;               // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EN_DHCStatus                                  K2Node_CustomEvent_DHCState;                       // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_LocalPlayerJoined;              // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_625D[0x1];                                     // 0x010B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDHCRemainTime_LeftTimeSec;             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0110(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0138(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0160(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0188(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x01B0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x01D8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_6;                    // 0x0200(0x0028)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_7;                    // 0x0240(0x0028)()
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_1;                  // 0x0268(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_8;                    // 0x0278(0x0028)()
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_2;                  // 0x02A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_9;                    // 0x02B0(0x0028)()
	TScriptInterface<class ISBDHCBattleInterface> CallFunc_GetIsSoloPlay_self_CastInput;             // 0x02D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsSoloPlay_ReturnValue;                // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSBTelopManager_IsValid;                // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_625E[0x6];                                     // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTelopManager*                        CallFunc_GetSBTelopManager_ReturnValue;            // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam;                // 0x02F8(0x0060)()
	class FString                                 CallFunc_GetCurrentZoneName_ReturnValue;           // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0368(0x0018)()
	bool                                          CallFunc_GetSBTelopManager_IsValid_1;              // 0x0380(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_625F[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTelopManager*                        CallFunc_GetSBTelopManager_ReturnValue_1;          // 0x0388(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTelopPlayParam                      K2Node_MakeStruct_SBTelopPlayParam_1;              // 0x0390(0x0060)()
	int32                                         CallFunc_GetDHCPlayerNum_PlayerNum;                // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x03F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6260[0x2];                                     // 0x03F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetDHCPlayerInfo_PlayerState;             // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDHCPlayerInfo_Name;                    // 0x0400(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_TotalDamage;             // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_DamagePerSec;            // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x041C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6261[0x3];                                     // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6262[0x4];                                     // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0428(0x0018)()
	float                                         Temp_float_Variable_2;                             // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6263[0x4];                                     // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0448(0x0028)(ConstParm)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0470(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6264[0x4];                                     // 0x0474(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDhcBattleComponent*                  CallFunc_GetDhcBattleComponent_ReturnValue;        // 0x0478(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0480(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6265[0x3];                                     // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InRetCode_1;                    // 0x049C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDhcBattleInfo                       K2Node_CustomEvent_InAttackCheckerInfo;            // 0x04A0(0x0010)(ConstParm)
	bool                                          CallFunc_RequestLoadHighScoreInfo_ReturnValue;     // 0x04B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x04B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6266[0x6];                                     // 0x04B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleHighScoreInfo              CallFunc_Array_Get_Item;                           // 0x04B8(0x00D8)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0594(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6267[0x3];                                     // 0x0595(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDhcBattleComponent*                  CallFunc_GetDhcBattleComponent_ReturnValue_1;      // 0x0598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6268[0x4];                                     // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x05A8(0x0018)()
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x05C0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InResult;                       // 0x05C4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6269[0x3];                                     // 0x05C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x05C8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x05D8(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_626A[0x3];                                     // 0x05F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x05F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 CallFunc_Map_Find_Value;                           // 0x05F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0600(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_626B[0x7];                                     // 0x0601(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetDHCPlayerInfo_PlayerState_1;           // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDHCPlayerInfo_Name_1;                  // 0x0610(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_TotalDamage_1;           // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_DamagePerSec_1;          // 0x0624(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_626C[0x4];                                     // 0x062C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetDHCPlayerInfo_PlayerState_2;           // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDHCPlayerInfo_Name_2;                  // 0x0638(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_TotalDamage_2;           // 0x0648(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_DamagePerSec_2;          // 0x064C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0651(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0652(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_626D[0x1];                                     // 0x0653(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0654(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_3;                             // 0x0658(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x065C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_626E[0x3];                                     // 0x065D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0660(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_DHCStatus                                  Temp_byte_Variable_1;                              // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0671(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0672(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_626F[0x1];                                     // 0x0673(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0674(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0678(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x067C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6270[0x3];                                     // 0x067D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0680(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0684(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6271[0x3];                                     // 0x0685(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetDHCRemainTime_LeftTimeSec_1;           // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDHCPlayerNum_PlayerNum_1;              // 0x068C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0690(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0694(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0695(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6272[0x2];                                     // 0x0696(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetDHCPlayerInfo_PlayerState_3;           // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDHCPlayerInfo_Name_3;                  // 0x06A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_TotalDamage_3;           // 0x06B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_DamagePerSec_3;          // 0x06B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 CallFunc_Map_Find_Value_1;                         // 0x06B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x06C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6273[0x7];                                     // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_GetDHCPlayerInfo_PlayerState_4;           // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDHCPlayerInfo_Name_4;                  // 0x06D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_TotalDamage_4;           // 0x06E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_DamagePerSec_4;          // 0x06E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_2;                     // 0x06E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue_1;                   // 0x06EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_2;                      // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6274[0x4];                                     // 0x06F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x06F8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_4;             // 0x0710(0x0018)()
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_2;       // 0x0728(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD) == 0x000008, "Wrong alignment on DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD");
static_assert(sizeof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD) == 0x000730, "Wrong size on DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, EntryPoint) == 0x000000, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_byte_Variable) == 0x000024, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_float_Variable) == 0x000028, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_float_Variable_1) == 0x00002C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetClassNameText_ReturnValue) == 0x000038, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_int_Array_Index_Variable) == 0x000048, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x000068, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x000078, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetSBRetMessage_ReturnValue) == 0x000088, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000098, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_int_Variable) == 0x0000B0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Add_IntInt_ReturnValue) == 0x0000B4, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_Event_MyGeometry) == 0x0000B8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_Event_InDeltaTime) == 0x0000F0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_Event_IsDesignTime) == 0x0000F4, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CustomEvent_DHCMeasurer) == 0x0000F8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CustomEvent_DHCMeasurer' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_DynamicCast_AsBP_DHCMeasurer) == 0x000100, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_DynamicCast_AsBP_DHCMeasurer' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_DynamicCast_bSuccess) == 0x000108, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CustomEvent_DHCState) == 0x000109, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CustomEvent_DHCState' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CustomEvent_LocalPlayerJoined) == 0x00010A, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CustomEvent_LocalPlayerJoined' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCRemainTime_LeftTimeSec) == 0x00010C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCRemainTime_LeftTimeSec' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor) == 0x000110, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_1) == 0x000138, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_2) == 0x000160, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_3) == 0x000188, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_4) == 0x0001B0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_5) == 0x0001D8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_6) == 0x000200, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_6' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000228, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_MakeColor_ReturnValue) == 0x000230, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_7) == 0x000240, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_7' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_MakeColor_ReturnValue_1) == 0x000268, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_MakeColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_8) == 0x000278, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_8' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_MakeColor_ReturnValue_2) == 0x0002A0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_MakeColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SlateColor_9) == 0x0002B0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SlateColor_9' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetIsSoloPlay_self_CastInput) == 0x0002D8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetIsSoloPlay_self_CastInput' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetIsSoloPlay_ReturnValue) == 0x0002E8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetIsSoloPlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetSBTelopManager_IsValid) == 0x0002E9, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetSBTelopManager_IsValid' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetSBTelopManager_ReturnValue) == 0x0002F0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetSBTelopManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SBTelopPlayParam) == 0x0002F8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SBTelopPlayParam' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetCurrentZoneName_ReturnValue) == 0x000358, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetCurrentZoneName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000368, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetSBTelopManager_IsValid_1) == 0x000380, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetSBTelopManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetSBTelopManager_ReturnValue_1) == 0x000388, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetSBTelopManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_MakeStruct_SBTelopPlayParam_1) == 0x000390, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_MakeStruct_SBTelopPlayParam_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerNum_PlayerNum) == 0x0003F0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerNum_PlayerNum' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Greater_IntInt_ReturnValue) == 0x0003F4, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_bool_True_if_break_was_hit_Variable) == 0x0003F5, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_PlayerState) == 0x0003F8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_PlayerState' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_Name) == 0x000400, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_Name' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_TotalDamage) == 0x000410, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_TotalDamage' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_DamagePerSec) == 0x000414, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_DamagePerSec' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_FTrunc_ReturnValue) == 0x000418, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Not_PreBool_ReturnValue) == 0x00041C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Clamp_ReturnValue) == 0x000420, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_IntToText_ReturnValue) == 0x000428, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_float_Variable_2) == 0x000440, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_float_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000448, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetLevel_ReturnValue) == 0x000470, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDhcBattleComponent_ReturnValue) == 0x000478, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDhcBattleComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000480, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_IsValid_ReturnValue) == 0x000498, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CustomEvent_InRetCode_1) == 0x00049C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CustomEvent_InRetCode_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CustomEvent_InAttackCheckerInfo) == 0x0004A0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CustomEvent_InAttackCheckerInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_RequestLoadHighScoreInfo_ReturnValue) == 0x0004B0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_RequestLoadHighScoreInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0004B1, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Array_Get_Item) == 0x0004B8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Array_Length_ReturnValue) == 0x000590, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000594, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDhcBattleComponent_ReturnValue_1) == 0x000598, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDhcBattleComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Clamp_ReturnValue_1) == 0x0005A0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0005A8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CustomEvent_InRetCode) == 0x0005C0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_CustomEvent_InResult) == 0x0005C4, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_CustomEvent_InResult' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0005C8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0005D8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0005F0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_int_Variable_1) == 0x0005F4, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Map_Find_Value) == 0x0005F8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Map_Find_ReturnValue) == 0x000600, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_PlayerState_1) == 0x000608, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_PlayerState_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_Name_1) == 0x000610, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_Name_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_TotalDamage_1) == 0x000620, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_TotalDamage_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_DamagePerSec_1) == 0x000624, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_DamagePerSec_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_FTrunc_ReturnValue_1) == 0x000628, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_PlayerState_2) == 0x000630, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_PlayerState_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_Name_2) == 0x000638, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_Name_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_TotalDamage_2) == 0x000648, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_TotalDamage_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_DamagePerSec_2) == 0x00064C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_DamagePerSec_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000650, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_BooleanAND_ReturnValue) == 0x000651, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000652, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Add_IntInt_ReturnValue_1) == 0x000654, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_float_Variable_3) == 0x000658, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_float_Variable_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00065C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000660, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000668, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_byte_Variable_1) == 0x000670, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000671, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Not_PreBool_ReturnValue_1) == 0x000672, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_Select_Default) == 0x000674, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, Temp_int_Loop_Counter_Variable) == 0x000678, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Less_IntInt_ReturnValue) == 0x00067C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Add_IntInt_ReturnValue_2) == 0x000680, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_BooleanAND_ReturnValue_1) == 0x000684, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCRemainTime_LeftTimeSec_1) == 0x000688, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCRemainTime_LeftTimeSec_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerNum_PlayerNum_1) == 0x00068C, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerNum_PlayerNum_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, K2Node_Select_Default_1) == 0x000690, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000694, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000695, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_PlayerState_3) == 0x000698, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_PlayerState_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_Name_3) == 0x0006A0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_Name_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_TotalDamage_3) == 0x0006B0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_TotalDamage_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_DamagePerSec_3) == 0x0006B4, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_DamagePerSec_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Map_Find_Value_1) == 0x0006B8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Map_Find_ReturnValue_1) == 0x0006C0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_PlayerState_4) == 0x0006C8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_PlayerState_4' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_Name_4) == 0x0006D0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_Name_4' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_TotalDamage_4) == 0x0006E0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_TotalDamage_4' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetDHCPlayerInfo_DamagePerSec_4) == 0x0006E4, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetDHCPlayerInfo_DamagePerSec_4' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_FTrunc_ReturnValue_2) == 0x0006E8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_FTrunc_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetLevel_ReturnValue_1) == 0x0006EC, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Clamp_ReturnValue_2) == 0x0006F0, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Clamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_IntToText_ReturnValue_3) == 0x0006F8, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_Conv_IntToText_ReturnValue_4) == 0x000710, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_Conv_IntToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD, CallFunc_GetUIVisibleSettings_ReturnValue_2) == 0x000728, "Member 'DhcBattleHUD_C_ExecuteUbergraph_DhcBattleHUD::CallFunc_GetUIVisibleSettings_ReturnValue_2' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleHUD_C_CustomEvent_0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InResult;                                          // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleHUD_C_CustomEvent_0) == 0x000004, "Wrong alignment on DhcBattleHUD_C_CustomEvent_0");
static_assert(sizeof(DhcBattleHUD_C_CustomEvent_0) == 0x000008, "Wrong size on DhcBattleHUD_C_CustomEvent_0");
static_assert(offsetof(DhcBattleHUD_C_CustomEvent_0, InRetCode) == 0x000000, "Member 'DhcBattleHUD_C_CustomEvent_0::InRetCode' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CustomEvent_0, InResult) == 0x000004, "Member 'DhcBattleHUD_C_CustomEvent_0::InResult' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.OnLoadDhcBattleHighScore
// 0x0018 (0x0018 - 0x0000)
struct DhcBattleHUD_C_OnLoadDhcBattleHighScore final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6275[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattleInfo                       InAttackCheckerInfo;                               // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(DhcBattleHUD_C_OnLoadDhcBattleHighScore) == 0x000008, "Wrong alignment on DhcBattleHUD_C_OnLoadDhcBattleHighScore");
static_assert(sizeof(DhcBattleHUD_C_OnLoadDhcBattleHighScore) == 0x000018, "Wrong size on DhcBattleHUD_C_OnLoadDhcBattleHighScore");
static_assert(offsetof(DhcBattleHUD_C_OnLoadDhcBattleHighScore, InRetCode) == 0x000000, "Member 'DhcBattleHUD_C_OnLoadDhcBattleHighScore::InRetCode' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_OnLoadDhcBattleHighScore, InAttackCheckerInfo) == 0x000008, "Member 'DhcBattleHUD_C_OnLoadDhcBattleHighScore::InAttackCheckerInfo' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.StateChanged
// 0x0002 (0x0002 - 0x0000)
struct DhcBattleHUD_C_StateChanged final
{
public:
	EN_DHCStatus                                  Param_DHCState;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalPlayerJoined;                                 // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleHUD_C_StateChanged) == 0x000001, "Wrong alignment on DhcBattleHUD_C_StateChanged");
static_assert(sizeof(DhcBattleHUD_C_StateChanged) == 0x000002, "Wrong size on DhcBattleHUD_C_StateChanged");
static_assert(offsetof(DhcBattleHUD_C_StateChanged, Param_DHCState) == 0x000000, "Member 'DhcBattleHUD_C_StateChanged::Param_DHCState' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_StateChanged, LocalPlayerJoined) == 0x000001, "Member 'DhcBattleHUD_C_StateChanged::LocalPlayerJoined' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.Init
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleHUD_C_Init final
{
public:
	class AActor*                                 DHCMeasurer;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleHUD_C_Init) == 0x000008, "Wrong alignment on DhcBattleHUD_C_Init");
static_assert(sizeof(DhcBattleHUD_C_Init) == 0x000008, "Wrong size on DhcBattleHUD_C_Init");
static_assert(offsetof(DhcBattleHUD_C_Init, DHCMeasurer) == 0x000000, "Member 'DhcBattleHUD_C_Init::DHCMeasurer' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleHUD_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleHUD_C_PreConstruct) == 0x000001, "Wrong alignment on DhcBattleHUD_C_PreConstruct");
static_assert(sizeof(DhcBattleHUD_C_PreConstruct) == 0x000001, "Wrong size on DhcBattleHUD_C_PreConstruct");
static_assert(offsetof(DhcBattleHUD_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DhcBattleHUD_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.Tick
// 0x003C (0x003C - 0x0000)
struct DhcBattleHUD_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleHUD_C_Tick) == 0x000004, "Wrong alignment on DhcBattleHUD_C_Tick");
static_assert(sizeof(DhcBattleHUD_C_Tick) == 0x00003C, "Wrong size on DhcBattleHUD_C_Tick");
static_assert(offsetof(DhcBattleHUD_C_Tick, MyGeometry) == 0x000000, "Member 'DhcBattleHUD_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_Tick, InDeltaTime) == 0x000038, "Member 'DhcBattleHUD_C_Tick::InDeltaTime' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.SetTime
// 0x0088 (0x0088 - 0x0000)
struct DhcBattleHUD_C_SetTime final
{
public:
	float                                         Sec;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6276[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              NewLocalVar_0;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              Timespan;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMilliseconds_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSeconds_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6277[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0050(0x0018)()
	int32                                         CallFunc_GetMinutes_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_2;                      // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0070(0x0018)()
};
static_assert(alignof(DhcBattleHUD_C_SetTime) == 0x000008, "Wrong alignment on DhcBattleHUD_C_SetTime");
static_assert(sizeof(DhcBattleHUD_C_SetTime) == 0x000088, "Wrong size on DhcBattleHUD_C_SetTime");
static_assert(offsetof(DhcBattleHUD_C_SetTime, Sec) == 0x000000, "Member 'DhcBattleHUD_C_SetTime::Sec' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, NewLocalVar_0) == 0x000008, "Member 'DhcBattleHUD_C_SetTime::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, Timespan) == 0x000010, "Member 'DhcBattleHUD_C_SetTime::Timespan' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_FromSeconds_ReturnValue) == 0x000018, "Member 'DhcBattleHUD_C_SetTime::CallFunc_FromSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_GetMilliseconds_ReturnValue) == 0x000020, "Member 'DhcBattleHUD_C_SetTime::CallFunc_GetMilliseconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_Divide_IntInt_ReturnValue) == 0x000024, "Member 'DhcBattleHUD_C_SetTime::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_GetSeconds_ReturnValue) == 0x000028, "Member 'DhcBattleHUD_C_SetTime::CallFunc_GetSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_Clamp_ReturnValue) == 0x00002C, "Member 'DhcBattleHUD_C_SetTime::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_Clamp_ReturnValue_1) == 0x000030, "Member 'DhcBattleHUD_C_SetTime::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'DhcBattleHUD_C_SetTime::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000050, "Member 'DhcBattleHUD_C_SetTime::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_GetMinutes_ReturnValue) == 0x000068, "Member 'DhcBattleHUD_C_SetTime::CallFunc_GetMinutes_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_Clamp_ReturnValue_2) == 0x00006C, "Member 'DhcBattleHUD_C_SetTime::CallFunc_Clamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_SetTime, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000070, "Member 'DhcBattleHUD_C_SetTime::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");

// Function DhcBattleHUD.DhcBattleHUD_C.CreateMemberList
// 0x0098 (0x0098 - 0x0000)
struct DhcBattleHUD_C_CreateMemberList final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6278[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MemberName;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class APlayerState*                           PlayerState;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 MemberItem;                                        // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         K2Node_DynamicCast_AsSBPlayer_State;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6279[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_627A[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_627B[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_627C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDhcBattleMemberItem_C*                 CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           CallFunc_GetDHCPlayerInfo_PlayerState;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDHCPlayerInfo_Name;                    // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_TotalDamage;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDHCPlayerInfo_DamagePerSec;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_627D[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDHCPlayerNum_PlayerNum;                // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleHUD_C_CreateMemberList) == 0x000008, "Wrong alignment on DhcBattleHUD_C_CreateMemberList");
static_assert(sizeof(DhcBattleHUD_C_CreateMemberList) == 0x000098, "Wrong size on DhcBattleHUD_C_CreateMemberList");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, Param_Index) == 0x000000, "Member 'DhcBattleHUD_C_CreateMemberList::Param_Index' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, MemberName) == 0x000008, "Member 'DhcBattleHUD_C_CreateMemberList::MemberName' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, PlayerState) == 0x000018, "Member 'DhcBattleHUD_C_CreateMemberList::PlayerState' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, MemberItem) == 0x000020, "Member 'DhcBattleHUD_C_CreateMemberList::MemberItem' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, K2Node_DynamicCast_AsSBPlayer_State) == 0x000028, "Member 'DhcBattleHUD_C_CreateMemberList::K2Node_DynamicCast_AsSBPlayer_State' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'DhcBattleHUD_C_CreateMemberList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetClassLevel_ReturnValue) == 0x000034, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetClassType_ReturnValue) == 0x000038, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, Temp_int_Variable) == 0x00003C, "Member 'DhcBattleHUD_C_CreateMemberList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetSBPlayerState_ReturnValue) == 0x000048, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_Create_ReturnValue) == 0x000060, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetDHCPlayerInfo_PlayerState) == 0x000068, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetDHCPlayerInfo_PlayerState' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetDHCPlayerInfo_Name) == 0x000070, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetDHCPlayerInfo_Name' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetDHCPlayerInfo_TotalDamage) == 0x000080, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetDHCPlayerInfo_TotalDamage' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetDHCPlayerInfo_DamagePerSec) == 0x000084, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetDHCPlayerInfo_DamagePerSec' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_GetDHCPlayerNum_PlayerNum) == 0x00008C, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_GetDHCPlayerNum_PlayerNum' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000090, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleHUD_C_CreateMemberList, CallFunc_Greater_IntInt_ReturnValue) == 0x000091, "Member 'DhcBattleHUD_C_CreateMemberList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

