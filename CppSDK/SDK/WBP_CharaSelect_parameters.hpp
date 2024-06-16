#pragma once

 

// Package: WBP_CharaSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SecondPasswordSenderStartType_structs.hpp"
#include "SecondPasswordSenderEndReason_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnStartWithCharacter__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature final
{
public:
	class FString                                 Param_CharacterId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ListIndex;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_bReturnDisconnect;                           // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature");
static_assert(sizeof(WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature) == 0x000018, "Wrong size on WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature");
static_assert(offsetof(WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature, Param_CharacterId) == 0x000000, "Member 'WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature::Param_CharacterId' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature, ListIndex) == 0x000010, "Member 'WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature::ListIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature, Param_bReturnDisconnect) == 0x000014, "Member 'WBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature::Param_bReturnDisconnect' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnStartFriendSession__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature final
{
public:
	class FString                                 Param_CharacterId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ListIndex;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8736[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FriendCharacterId;                                 // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature");
static_assert(sizeof(WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature) == 0x000028, "Wrong size on WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature");
static_assert(offsetof(WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature, Param_CharacterId) == 0x000000, "Member 'WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature::Param_CharacterId' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature, ListIndex) == 0x000010, "Member 'WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature::ListIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature, FriendCharacterId) == 0x000018, "Member 'WBP_CharaSelect_C_OnStartFriendSession__DelegateSignature::FriendCharacterId' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ExecuteUbergraph_WBP_CharaSelect
// 0x0D38 (0x0D38 - 0x0000)
struct WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsinputEnabled_Enabled;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8737[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8738[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8739[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0018(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_873A[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_873B[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_873C[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_873D[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsinputEnabled_Enabled_1;                 // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsinputEnabled_Enabled_2;                 // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_873E[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0080(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasSuccessful_2;                     // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_873F[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_DefaultCharacterId;                   // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_RetCode_6;                            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bForceDelete;                         // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8740[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x00D8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8741[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F0(0x0018)()
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8742[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters; // 0x0118(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue;   // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bForceDelete;                   // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8743[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8744[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0138(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0160(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0188(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x01B0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x01D8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0200(0x0028)()
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8745[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_6;              // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x026C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_6;            // 0x0282(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8746[0x5];                                     // 0x0283(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0298(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8747[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetDefaultSelectIndex_retIndex;           // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8748[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_2;                     // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8749[0x6];                                     // 0x02CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharaCreateParameter>        CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_OutCharaCreateParameters; // 0x02D0(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_ReturnValue; // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_874A[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBUserOnlineAccountCharacter>  CallFunc_GetLogedInPlayerCharacters_OutCharacters_1; // 0x02E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharacters_ReturnValue_1; // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_874B[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CharacterSelectCaptureOne_C*        CallFunc_Array_Get_Item;                           // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_7;            // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_874C[0x2];                                     // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x031C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x031D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_8;            // 0x031E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_874D[0x1];                                     // 0x031F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_874E[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_9;            // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_874F[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CharacterSelectCaptureOne_C*        CallFunc_Array_Get_Item_1;                         // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x0348(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_8;               // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_3;                     // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8750[0x3];                                     // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCreateCharacter_ret;                    // 0x0361(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8751[0x6];                                     // 0x0362(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0368(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0378(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_6;                    // 0x0390(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_7;                    // 0x03B8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_8;                    // 0x03E0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_9;                    // 0x0408(0x0028)()
	int32                                         K2Node_CustomEvent_Result_5;                       // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8752[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8753[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0450(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0478(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0488(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x04A0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x04B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x04C8(0x0018)()
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x04E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8754[0x4];                                     // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           K2Node_MakeArray_Array;                            // 0x04E8(0x0010)(ConstParm, ReferenceParm)
	class ABP_CharacterSelectCaptureOne_C*        CallFunc_Array_Get_Item_3;                         // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_10;           // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8755[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_4;                     // 0x0508(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESendSecondPasswordRole                       K2Node_CustomEvent_Role;                           // 0x0511(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderEndReason                K2Node_CustomEvent_Reason;                         // 0x0512(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderStartType                K2Node_CustomEvent_StartType;                      // 0x0513(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0514(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0515(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0516(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0517(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkyBlueSecondPasswordStatus                  CallFunc_GetSecondPasswordStatus_ReturnValue;      // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkyBlueSecondPasswordStatus                  CallFunc_GetSecondPasswordStatus_ReturnValue_1;    // 0x0519(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x051A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;                    // 0x051B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_4;                       // 0x051C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8756[0x3];                                     // 0x051D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0520(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8757[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0538(0x0018)()
	int32                                         K2Node_Event_RetCode_5;                            // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8758[0x4];                                     // 0x0554(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0558(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0568(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0580(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8759[0x3];                                     // 0x0581(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0584(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_875A[0x3];                                     // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x058C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWPB_CharaselectDebugbButton_C*         CallFunc_Create_ReturnValue_5;                     // 0x0590(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x05A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x05B0(0x0018)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x05C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_6;                     // 0x05D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_3;                       // 0x05E0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_875B[0x7];                                     // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x05E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_875C[0x7];                                     // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0600(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_11;           // 0x0618(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_875D[0x7];                                     // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_PlayerName;                     // 0x0620(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_RetCode_4;                            // 0x0630(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_875E[0x4];                                     // 0x0634(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0638(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0648(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_875F[0x7];                                     // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0668(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_2;                       // 0x0678(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8760[0x7];                                     // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x0680(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_5;                    // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8761[0x7];                                     // 0x0699(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x06A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_14;         // 0x06B0(0x0018)()
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x06C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8762[0x4];                                     // 0x06CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x06D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_4;                         // 0x06E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_8;           // 0x06F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_9;           // 0x0700(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_15;         // 0x0710(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_16;         // 0x0728(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_10;                   // 0x0740(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_11;                   // 0x0768(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_12;                   // 0x0790(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_13;                   // 0x07B8(0x0028)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_10;          // 0x07E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EYesNoDialogResult                            K2Node_CustomEvent_Result_1;                       // 0x07F0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8763[0x7];                                     // 0x07F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_17;         // 0x07F8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_6;                    // 0x0810(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8764[0x7];                                     // 0x0811(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_11;          // 0x0818(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x0828(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_18;         // 0x0838(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_19;         // 0x0850(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_12;          // 0x0868(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEnablePartyRejoinRemainingTime_ReturnValue; // 0x0878(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8765[0x4];                                     // 0x087C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_20;         // 0x0880(0x0018)()
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0898(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8766[0x3];                                     // 0x0899(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x089C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_7;                     // 0x08A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x08A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x08A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8767[0x2];                                     // 0x08AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x08AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_12;           // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x08B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x08B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8768[0x1];                                     // 0x08B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode_3;                            // 0x08B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x08B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8769[0x7];                                     // 0x08B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x08C0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_21;         // 0x08D0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x08E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnablePartyRejoinTime_ReturnValue;      // 0x08E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_876A[0x2];                                     // 0x08EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x08EC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_876B[0x4];                                     // 0x08FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_8;                     // 0x0900(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_13;           // 0x0908(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_876C[0x7];                                     // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_AddCharacterSlotDialog_C*          K2Node_CustomEvent_Widget;                         // 0x0910(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Add;                            // 0x0918(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_876D[0x7];                                     // 0x0919(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x0920(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      K2Node_CustomEvent_SBCryptoCurrency;               // 0x0930(0x0028)(ConstParm, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_22;         // 0x0958(0x0018)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0970(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_876E[0x3];                                     // 0x0971(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode_2;                            // 0x0974(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      K2Node_Event_InCryptocurrency;                     // 0x0978(0x0028)(ConstParm, NoDestructor)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_5;            // 0x09A0(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x09B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_876F[0x7];                                     // 0x09B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_23;         // 0x09B8(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x09D0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UWBP_AddCharacterSlotDialog_C* Widget, bool Add)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x09E0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bWasSuccessful_1;                     // 0x09F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8770[0x3];                                     // 0x09F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode_1;                            // 0x09F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPurchaseAmount_ReturnValue;            // 0x09F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8771[0x4];                                     // 0x09FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_6;            // 0x0A00(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_24;         // 0x0A10(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0A28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasSuccessful;                       // 0x0A29(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8772[0x2];                                     // 0x0A2A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode;                              // 0x0A2C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_AddCharacterSlotDialog_C*          CallFunc_Create_ReturnValue_9;                     // 0x0A30(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0A38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_14;           // 0x0A39(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8773[0x2];                                     // 0x0A3A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0A3C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0A40(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         K2Node_DynamicCast_AsWBP_Character_Select_List_Item; // 0x0A48(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0A50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0A51(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8774[0x2];                                     // 0x0A52(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0A54(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0A58(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0A5C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_4;            // 0x0A60(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_15;           // 0x0A70(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8775[0x7];                                     // 0x0A71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue;              // 0x0A78(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0A80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableContentRejoin_bEnableContentRejoin; // 0x0A81(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnablePartyRejoin_bEnablePartyRejoin;   // 0x0A82(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x0A83(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_5;            // 0x0A84(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8776[0x4];                                     // 0x0A94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_1;            // 0x0A98(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0AA0(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& PlayerName)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0AB0(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0AC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0AC1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8777[0x6];                                     // 0x0AC2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UNameSettingDialog_C*                   CallFunc_Create_ReturnValue_10;                    // 0x0AC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0AD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8778[0x3];                                     // 0x0AD1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_9;               // 0x0AD4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x0AD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8779[0x3];                                     // 0x0AD9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x0ADC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_8;            // 0x0AE0(0x0010)(ZeroConstructor, NoDestructor)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_2;            // 0x0AF0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_25;         // 0x0AF8(0x0018)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0B10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_877A[0x7];                                     // 0x0B11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0B18(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0B58(0x0010)(ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_16;           // 0x0B68(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_877B[0x7];                                     // 0x0B69(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0B70(0x0018)()
	TDelegate<void(EYesNoDialogResult Result)>    K2Node_CreateDelegate_OutputDelegate_9;            // 0x0B88(0x0010)(ZeroConstructor, NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0B98(0x0040)(HasGetValueTypeHash)
	class USBDialog*                              CallFunc_ShowYesNoDialog_ReturnValue_3;            // 0x0BD8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0BE0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0C20(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Init_Cur_Character_Ban_System_Message_bIsBaned; // 0x0C60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_877C[0x7];                                     // 0x0C61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0C68(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0C78(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0C90(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 Result)>                 K2Node_CreateDelegate_OutputDelegate_10;           // 0x0CA0(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_17;           // 0x0CB0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_7;                    // 0x0CB1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_877D[0x6];                                     // 0x0CB2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelStreaming*                        CallFunc_GetStreamingLevel_ReturnValue;            // 0x0CB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLevelVisible_ReturnValue;               // 0x0CC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0CC1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_877E[0x6];                                     // 0x0CC2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MultipleSelectDialog_C*            CallFunc_Create_ReturnValue_11;                    // 0x0CC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterSelectCaptureOne_C*        CallFunc_Array_Get_Item_5;                         // 0x0CD0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_10;              // 0x0CD8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0CDC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0CDD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_877F[0x2];                                     // 0x0CDE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0CE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadyToOpenCharacterSelectMap_ReturnValue; // 0x0CE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8780[0x3];                                     // 0x0CE9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0CEC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8781[0x4];                                     // 0x0CFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWPB_CharaselectDebugbButton_C*         CallFunc_Create_ReturnValue_12;                    // 0x0D00(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x0D08(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0D10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPurchaseAmount_ReturnValue_1;          // 0x0D14(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;             // 0x0D18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0D19(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8782[0x6];                                     // 0x0D1A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue_13;                    // 0x0D20(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x0D28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0D29(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0D2A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0D2B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsinputEnabled_Enabled_3;                 // 0x0D2C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsinputEnabled_Enabled_4;                 // 0x0D2D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsinputEnabled_Enabled_5;                 // 0x0D2E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsinputEnabled_Enabled_6;                 // 0x0D2F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsinputEnabled_Enabled_7;                 // 0x0D30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect");
static_assert(sizeof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect) == 0x000D38, "Wrong size on WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, EntryPoint) == 0x000000, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled) == 0x000004, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_bool_Variable) == 0x00000C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSBRetMessage_ReturnValue) == 0x000018, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue) == 0x000044, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000060, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000064, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_1) == 0x000068, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00006D, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_PlayAnimation_ReturnValue_1) == 0x000070, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Array_Index_Variable_1) == 0x000078, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled_1) == 0x00007C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled_2) == 0x00007D, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_MyGeometry) == 0x000080, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_InDeltaTime) == 0x0000B8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_bWasSuccessful_2) == 0x0000BC, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_bWasSuccessful_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_DefaultCharacterId) == 0x0000C0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_DefaultCharacterId' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_RetCode_6) == 0x0000D0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_RetCode_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_bForceDelete) == 0x0000D4, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_bForceDelete' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x0000D8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetNetworkDataCache_IsValid) == 0x000108, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000110, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetLogedInPlayerCharacters_OutCharacters) == 0x000118, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetLogedInPlayerCharacters_OutCharacters' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetLogedInPlayerCharacters_ReturnValue) == 0x000128, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetLogedInPlayerCharacters_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_bForceDelete) == 0x000129, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_bForceDelete' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetChildrenCount_ReturnValue) == 0x00012C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000130, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor) == 0x000138, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_1) == 0x000160, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_2) == 0x000188, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_3) == 0x0001B0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_4) == 0x0001D8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_5) == 0x000200, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue) == 0x000228, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue) == 0x000230, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_1) == 0x000238, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_PlayAnimation_ReturnValue_2) == 0x000240, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_PlayAnimation_ReturnValue_3) == 0x000248, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_PlayAnimation_ReturnValue_4) == 0x000250, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_PlayAnimation_ReturnValue_5) == 0x000258, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_PlayAnimation_ReturnValue_6) == 0x000260, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_PlayAnimation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Loop_Counter_Variable_1) == 0x000268, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate) == 0x00026C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue_2) == 0x00027C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x000280, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x000281, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_6) == 0x000282, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue) == 0x000288, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000298, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_2) == 0x0002B0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0002B4, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetDefaultSelectIndex_retIndex) == 0x0002B8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetDefaultSelectIndex_retIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_2) == 0x0002C0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_1) == 0x0002C8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_2) == 0x0002C9, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_OutCharaCreateParameters) == 0x0002D0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_OutCharaCreateParameters' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_ReturnValue) == 0x0002E0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetLogedInPlayerCharacters_OutCharacters_1) == 0x0002E8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetLogedInPlayerCharacters_OutCharacters_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetLogedInPlayerCharacters_ReturnValue_1) == 0x0002F8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetLogedInPlayerCharacters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_3) == 0x0002F9, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Get_Item) == 0x000300, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_3) == 0x000308, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_4) == 0x00030C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000310, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_7) == 0x000311, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_5) == 0x000314, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_6) == 0x000318, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Less_IntInt_ReturnValue) == 0x00031C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Greater_IntInt_ReturnValue_2) == 0x00031D, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_8) == 0x00031E, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Loop_Counter_Variable_2) == 0x000320, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Array_Index_Variable_2) == 0x000324, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Less_IntInt_ReturnValue_1) == 0x000328, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue_3) == 0x00032C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_9) == 0x000330, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Get_Item_1) == 0x000338, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Get_Item_2) == 0x000340, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_7) == 0x000348, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_8) == 0x00034C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_3) == 0x000350, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsEditor_ReturnValue) == 0x000358, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_FloatFloat_ReturnValue) == 0x00035C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Less_FloatFloat_ReturnValue) == 0x000360, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsCreateCharacter_ret) == 0x000361, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsCreateCharacter_ret' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000368, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000378, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_6) == 0x000390, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_7) == 0x0003B8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_8) == 0x0003E0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_9) == 0x000408, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Result_5) == 0x000430, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Result_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000438, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchInteger_CmpSuccess) == 0x000448, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000450, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000468, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000478, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000488, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0004A0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x0004B8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_7) == 0x0004C8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Array_Index_Variable_3) == 0x0004E0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeArray_Array) == 0x0004E8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Get_Item_3) == 0x0004F8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_10) == 0x000500, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_4) == 0x000508, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_4) == 0x000510, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Role) == 0x000511, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Role' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Reason) == 0x000512, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Reason' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_StartType) == 0x000513, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_StartType' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000514, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess) == 0x000515, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess_1) == 0x000516, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess_2) == 0x000517, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSecondPasswordStatus_ReturnValue) == 0x000518, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSecondPasswordStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSecondPasswordStatus_ReturnValue_1) == 0x000519, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSecondPasswordStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess_3) == 0x00051A, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess_4) == 0x00051B, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Result_4) == 0x00051C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000520, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000530, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000538, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_RetCode_5) == 0x000550, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_RetCode_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000558, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000568, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000580, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Loop_Counter_Variable_3) == 0x000584, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Less_IntInt_ReturnValue_2) == 0x000588, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue_4) == 0x00058C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_5) == 0x000590, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000598, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0005A0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_10) == 0x0005B0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_Margin) == 0x0005C8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_6) == 0x0005D8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Result_3) == 0x0005E0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0005E8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0005F8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000600, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_11) == 0x000618, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_PlayerName) == 0x000620, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_PlayerName' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_RetCode_4) == 0x000630, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_RetCode_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000638, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000648, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000660, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000668, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Result_2) == 0x000678, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_13) == 0x000680, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess_5) == 0x000698, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x0006A0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_14) == 0x0006B0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Array_Index_Variable_4) == 0x0006C8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x0006D0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Get_Item_4) == 0x0006E0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_8) == 0x0006F0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_9) == 0x000700, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_15) == 0x000710, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_16) == 0x000728, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_10) == 0x000740, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_11) == 0x000768, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_11' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_12) == 0x000790, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_12' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_SlateColor_13) == 0x0007B8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_SlateColor_13' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_10) == 0x0007E0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Result_1) == 0x0007F0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_17) == 0x0007F8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess_6) == 0x000810, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_11) == 0x000818, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x000828, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_18) == 0x000838, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_19) == 0x000850, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAsset_ReturnValue_12) == 0x000868, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAsset_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetEnablePartyRejoinRemainingTime_ReturnValue) == 0x000878, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetEnablePartyRejoinRemainingTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_20) == 0x000880, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000898, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Loop_Counter_Variable_4) == 0x00089C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_7) == 0x0008A0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_5) == 0x0008A8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Less_IntInt_ReturnValue_3) == 0x0008A9, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue_5) == 0x0008AC, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_12) == 0x0008B0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetVisibility_ReturnValue) == 0x0008B1, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0008B2, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_RetCode_3) == 0x0008B4, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_RetCode_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_BooleanAND_ReturnValue) == 0x0008B8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x0008C0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_21) == 0x0008D0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x0008E8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsEnablePartyRejoinTime_ReturnValue) == 0x0008E9, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsEnablePartyRejoinTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_1) == 0x0008EC, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_8) == 0x000900, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_13) == 0x000908, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Widget) == 0x000910, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Add) == 0x000918, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Add' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x000920, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_SBCryptoCurrency) == 0x000930, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_SBCryptoCurrency' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_22) == 0x000958, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000970, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_RetCode_2) == 0x000974, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_RetCode_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_InCryptocurrency) == 0x000978, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_InCryptocurrency' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSBRetMessage_ReturnValue_5) == 0x0009A0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSBRetMessage_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x0009B0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_23) == 0x0009B8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_23' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_2) == 0x0009D0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_3) == 0x0009E0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_bWasSuccessful_1) == 0x0009F0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_RetCode_1) == 0x0009F4, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_RetCode_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetPurchaseAmount_ReturnValue) == 0x0009F8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetPurchaseAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetSBRetMessage_ReturnValue_6) == 0x000A00, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetSBRetMessage_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_24) == 0x000A10, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_24' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_6) == 0x000A28, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_bWasSuccessful) == 0x000A29, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Event_RetCode) == 0x000A2C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_9) == 0x000A30, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_7) == 0x000A38, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_14) == 0x000A39, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Variable) == 0x000A3C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetChildAt_ReturnValue) == 0x000A40, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_DynamicCast_AsWBP_Character_Select_List_Item) == 0x000A48, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_DynamicCast_AsWBP_Character_Select_List_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_DynamicCast_bSuccess) == 0x000A50, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000A51, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Add_ReturnValue) == 0x000A54, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Add_ReturnValue_1) == 0x000A58, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue_6) == 0x000A5C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_4) == 0x000A60, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_15) == 0x000A70, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_ShowYesNoDialog_ReturnValue) == 0x000A78, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_ShowYesNoDialog_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_8) == 0x000A80, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsEnableContentRejoin_bEnableContentRejoin) == 0x000A81, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsEnableContentRejoin_bEnableContentRejoin' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsEnablePartyRejoin_bEnablePartyRejoin) == 0x000A82, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsEnablePartyRejoin_bEnablePartyRejoin' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_9) == 0x000A83, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_5) == 0x000A84, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_ShowYesNoDialog_ReturnValue_1) == 0x000A98, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_ShowYesNoDialog_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_6) == 0x000AA0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_7) == 0x000AB0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CustomEvent_Result) == 0x000AC0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_10) == 0x000AC1, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_10) == 0x000AC8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_11) == 0x000AD0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_9) == 0x000AD4, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Greater_IntInt_ReturnValue_3) == 0x000AD8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Add_IntInt_ReturnValue_7) == 0x000ADC, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_8) == 0x000AE0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_ShowYesNoDialog_ReturnValue_2) == 0x000AF0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_ShowYesNoDialog_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_StringToText_ReturnValue_25) == 0x000AF8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_StringToText_ReturnValue_25' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000B10, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_FormatArgumentData) == 0x000B18, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeArray_Array_1) == 0x000B58, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_16) == 0x000B68, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Format_ReturnValue) == 0x000B70, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_9) == 0x000B88, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_FormatArgumentData_1) == 0x000B98, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_ShowYesNoDialog_ReturnValue_3) == 0x000BD8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_ShowYesNoDialog_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_FormatArgumentData_2) == 0x000BE0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_FormatArgumentData_3) == 0x000C20, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Init_Cur_Character_Ban_System_Message_bIsBaned) == 0x000C60, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Init_Cur_Character_Ban_System_Message_bIsBaned' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeArray_Array_2) == 0x000C68, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Format_ReturnValue_1) == 0x000C78, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Conv_TextToString_ReturnValue) == 0x000C90, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_CreateDelegate_OutputDelegate_10) == 0x000CA0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_MakeLiteralByte_ReturnValue_17) == 0x000CB0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_MakeLiteralByte_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_SwitchEnum_CmpSuccess_7) == 0x000CB1, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_SwitchEnum_CmpSuccess_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetStreamingLevel_ReturnValue) == 0x000CB8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetStreamingLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsLevelVisible_ReturnValue) == 0x000CC0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsLevelVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Not_PreBool_ReturnValue) == 0x000CC1, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_11) == 0x000CC8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Get_Item_5) == 0x000CD0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Array_Length_ReturnValue_10) == 0x000CD8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Array_Length_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Less_IntInt_ReturnValue_4) == 0x000CDC, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000CDD, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000CE0, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsReadyToOpenCharacterSelectMap_ReturnValue) == 0x000CE8, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsReadyToOpenCharacterSelectMap_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_MakeStruct_Margin_1) == 0x000CEC, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_12) == 0x000D00, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x000D08, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, Temp_int_Variable_1) == 0x000D10, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_GetPurchaseAmount_ReturnValue_1) == 0x000D14, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_GetPurchaseAmount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Greater_IntInt_ReturnValue_4) == 0x000D18, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_12) == 0x000D19, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Create_ReturnValue_13) == 0x000D20, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Create_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsValid_ReturnValue_13) == 0x000D28, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsEmpty_ReturnValue) == 0x000D29, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_Not_PreBool_ReturnValue_1) == 0x000D2A, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, K2Node_Select_Default) == 0x000D2B, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled_3) == 0x000D2C, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled_4) == 0x000D2D, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled_5) == 0x000D2E, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled_6) == 0x000D2F, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect, CallFunc_IsinputEnabled_Enabled_7) == 0x000D30, "Member 'WBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect::CallFunc_IsinputEnabled_Enabled_7' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.DecisonDialogResult
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_DecisonDialogResult final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_DecisonDialogResult) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_DecisonDialogResult");
static_assert(sizeof(WBP_CharaSelect_C_DecisonDialogResult) == 0x000001, "Wrong size on WBP_CharaSelect_C_DecisonDialogResult");
static_assert(offsetof(WBP_CharaSelect_C_DecisonDialogResult, Result) == 0x000000, "Member 'WBP_CharaSelect_C_DecisonDialogResult::Result' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnCharacterBuySlot
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaSelect_C_OnCharacterBuySlot final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8783[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnCharacterBuySlot) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_OnCharacterBuySlot");
static_assert(sizeof(WBP_CharaSelect_C_OnCharacterBuySlot) == 0x000008, "Wrong size on WBP_CharaSelect_C_OnCharacterBuySlot");
static_assert(offsetof(WBP_CharaSelect_C_OnCharacterBuySlot, bWasSuccessful) == 0x000000, "Member 'WBP_CharaSelect_C_OnCharacterBuySlot::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnCharacterBuySlot, RetCode) == 0x000004, "Member 'WBP_CharaSelect_C_OnCharacterBuySlot::RetCode' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnCharacterSlotPurchase
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaSelect_C_OnCharacterSlotPurchase final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8784[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnCharacterSlotPurchase) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_OnCharacterSlotPurchase");
static_assert(sizeof(WBP_CharaSelect_C_OnCharacterSlotPurchase) == 0x000008, "Wrong size on WBP_CharaSelect_C_OnCharacterSlotPurchase");
static_assert(offsetof(WBP_CharaSelect_C_OnCharacterSlotPurchase, bWasSuccessful) == 0x000000, "Member 'WBP_CharaSelect_C_OnCharacterSlotPurchase::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnCharacterSlotPurchase, RetCode) == 0x000004, "Member 'WBP_CharaSelect_C_OnCharacterSlotPurchase::RetCode' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnGetCryptocurrency
// 0x0030 (0x0030 - 0x0000)
struct WBP_CharaSelect_C_OnGetCryptocurrency final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8785[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCryptoCurrency                      InCryptocurrency;                                  // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_OnGetCryptocurrency) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_OnGetCryptocurrency");
static_assert(sizeof(WBP_CharaSelect_C_OnGetCryptocurrency) == 0x000030, "Wrong size on WBP_CharaSelect_C_OnGetCryptocurrency");
static_assert(offsetof(WBP_CharaSelect_C_OnGetCryptocurrency, RetCode) == 0x000000, "Member 'WBP_CharaSelect_C_OnGetCryptocurrency::RetCode' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnGetCryptocurrency, InCryptocurrency) == 0x000008, "Member 'WBP_CharaSelect_C_OnGetCryptocurrency::InCryptocurrency' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.CreateAddSlotDialog
// 0x0028 (0x0028 - 0x0000)
struct WBP_CharaSelect_C_CreateAddSlotDialog final
{
public:
	struct FSBCryptoCurrency                      SBCryptoCurrency;                                  // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_CreateAddSlotDialog) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_CreateAddSlotDialog");
static_assert(sizeof(WBP_CharaSelect_C_CreateAddSlotDialog) == 0x000028, "Wrong size on WBP_CharaSelect_C_CreateAddSlotDialog");
static_assert(offsetof(WBP_CharaSelect_C_CreateAddSlotDialog, SBCryptoCurrency) == 0x000000, "Member 'WBP_CharaSelect_C_CreateAddSlotDialog::SBCryptoCurrency' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent_2
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaSelect_C_CustomEvent_2 final
{
public:
	class UWBP_AddCharacterSlotDialog_C*          Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Add;                                               // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_CustomEvent_2) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_CustomEvent_2");
static_assert(sizeof(WBP_CharaSelect_C_CustomEvent_2) == 0x000010, "Wrong size on WBP_CharaSelect_C_CustomEvent_2");
static_assert(offsetof(WBP_CharaSelect_C_CustomEvent_2, Widget) == 0x000000, "Member 'WBP_CharaSelect_C_CustomEvent_2::Widget' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_CustomEvent_2, Add) == 0x000008, "Member 'WBP_CharaSelect_C_CustomEvent_2::Add' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnRefuseReJoinParty
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaSelect_C_OnRefuseReJoinParty final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnRefuseReJoinParty) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_OnRefuseReJoinParty");
static_assert(sizeof(WBP_CharaSelect_C_OnRefuseReJoinParty) == 0x000004, "Wrong size on WBP_CharaSelect_C_OnRefuseReJoinParty");
static_assert(offsetof(WBP_CharaSelect_C_OnRefuseReJoinParty, RetCode) == 0x000000, "Member 'WBP_CharaSelect_C_OnRefuseReJoinParty::RetCode' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnDecideReturnContentReportDialog_Event
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event");
static_assert(sizeof(WBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event) == 0x000001, "Wrong size on WBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event");
static_assert(offsetof(WBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event, Result) == 0x000000, "Member 'WBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event::Result' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnDecideReturnPartyReportDialog_Event
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event");
static_assert(sizeof(WBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event) == 0x000001, "Wrong size on WBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event");
static_assert(offsetof(WBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event, Result) == 0x000000, "Member 'WBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event::Result' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnCharacterRename
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaSelect_C_OnCharacterRename final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnCharacterRename) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_OnCharacterRename");
static_assert(sizeof(WBP_CharaSelect_C_OnCharacterRename) == 0x000004, "Wrong size on WBP_CharaSelect_C_OnCharacterRename");
static_assert(offsetof(WBP_CharaSelect_C_OnCharacterRename, RetCode) == 0x000000, "Member 'WBP_CharaSelect_C_OnCharacterRename::RetCode' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.�������_0
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaSelect_C__________0 final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C__________0) == 0x000008, "Wrong alignment on WBP_CharaSelect_C__________0");
static_assert(sizeof(WBP_CharaSelect_C__________0) == 0x000010, "Wrong size on WBP_CharaSelect_C__________0");
static_assert(offsetof(WBP_CharaSelect_C__________0, PlayerName) == 0x000000, "Member 'WBP_CharaSelect_C__________0::PlayerName' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_CustomEvent final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_CustomEvent) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_CustomEvent");
static_assert(sizeof(WBP_CharaSelect_C_CustomEvent) == 0x000001, "Wrong size on WBP_CharaSelect_C_CustomEvent");
static_assert(offsetof(WBP_CharaSelect_C_CustomEvent, Result) == 0x000000, "Member 'WBP_CharaSelect_C_CustomEvent::Result' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnRestoreCharacter
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaSelect_C_OnRestoreCharacter final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnRestoreCharacter) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_OnRestoreCharacter");
static_assert(sizeof(WBP_CharaSelect_C_OnRestoreCharacter) == 0x000004, "Wrong size on WBP_CharaSelect_C_OnRestoreCharacter");
static_assert(offsetof(WBP_CharaSelect_C_OnRestoreCharacter, RetCode) == 0x000000, "Member 'WBP_CharaSelect_C_OnRestoreCharacter::RetCode' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_CustomEvent_0 final
{
public:
	EYesNoDialogResult                            Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_CustomEvent_0) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_CustomEvent_0");
static_assert(sizeof(WBP_CharaSelect_C_CustomEvent_0) == 0x000001, "Wrong size on WBP_CharaSelect_C_CustomEvent_0");
static_assert(offsetof(WBP_CharaSelect_C_CustomEvent_0, Result) == 0x000000, "Member 'WBP_CharaSelect_C_CustomEvent_0::Result' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnEndSecondPasswordSender
// 0x0003 (0x0003 - 0x0000)
struct WBP_CharaSelect_C_OnEndSecondPasswordSender final
{
public:
	ESendSecondPasswordRole                       Role;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderEndReason                Reason;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESecondPasswordSenderStartType                StartType;                                         // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnEndSecondPasswordSender) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_OnEndSecondPasswordSender");
static_assert(sizeof(WBP_CharaSelect_C_OnEndSecondPasswordSender) == 0x000003, "Wrong size on WBP_CharaSelect_C_OnEndSecondPasswordSender");
static_assert(offsetof(WBP_CharaSelect_C_OnEndSecondPasswordSender, Role) == 0x000000, "Member 'WBP_CharaSelect_C_OnEndSecondPasswordSender::Role' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnEndSecondPasswordSender, Reason) == 0x000001, "Member 'WBP_CharaSelect_C_OnEndSecondPasswordSender::Reason' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnEndSecondPasswordSender, StartType) == 0x000002, "Member 'WBP_CharaSelect_C_OnEndSecondPasswordSender::StartType' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent_1
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaSelect_C_CustomEvent_1 final
{
public:
	int32                                         Result;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_CustomEvent_1) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_CustomEvent_1");
static_assert(sizeof(WBP_CharaSelect_C_CustomEvent_1) == 0x000004, "Wrong size on WBP_CharaSelect_C_CustomEvent_1");
static_assert(offsetof(WBP_CharaSelect_C_CustomEvent_1, Result) == 0x000000, "Member 'WBP_CharaSelect_C_CustomEvent_1::Result' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.DeleteCharacter
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_DeleteCharacter final
{
public:
	bool                                          bForceDelete;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_DeleteCharacter) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_DeleteCharacter");
static_assert(sizeof(WBP_CharaSelect_C_DeleteCharacter) == 0x000001, "Wrong size on WBP_CharaSelect_C_DeleteCharacter");
static_assert(offsetof(WBP_CharaSelect_C_DeleteCharacter, bForceDelete) == 0x000000, "Member 'WBP_CharaSelect_C_DeleteCharacter::bForceDelete' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnDeletedCharacter
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaSelect_C_OnDeletedCharacter final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bForceDelete;                                      // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_OnDeletedCharacter) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_OnDeletedCharacter");
static_assert(sizeof(WBP_CharaSelect_C_OnDeletedCharacter) == 0x000008, "Wrong size on WBP_CharaSelect_C_OnDeletedCharacter");
static_assert(offsetof(WBP_CharaSelect_C_OnDeletedCharacter, RetCode) == 0x000000, "Member 'WBP_CharaSelect_C_OnDeletedCharacter::RetCode' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnDeletedCharacter, bForceDelete) == 0x000004, "Member 'WBP_CharaSelect_C_OnDeletedCharacter::bForceDelete' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnUpdatePlayerInfo
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaSelect_C_OnUpdatePlayerInfo final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8786[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DefaultCharacterId;                                // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_OnUpdatePlayerInfo) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_OnUpdatePlayerInfo");
static_assert(sizeof(WBP_CharaSelect_C_OnUpdatePlayerInfo) == 0x000018, "Wrong size on WBP_CharaSelect_C_OnUpdatePlayerInfo");
static_assert(offsetof(WBP_CharaSelect_C_OnUpdatePlayerInfo, bWasSuccessful) == 0x000000, "Member 'WBP_CharaSelect_C_OnUpdatePlayerInfo::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnUpdatePlayerInfo, DefaultCharacterId) == 0x000008, "Member 'WBP_CharaSelect_C_OnUpdatePlayerInfo::DefaultCharacterId' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Tick
// 0x003C (0x003C - 0x0000)
struct WBP_CharaSelect_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_Tick) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_Tick");
static_assert(sizeof(WBP_CharaSelect_C_Tick) == 0x00003C, "Wrong size on WBP_CharaSelect_C_Tick");
static_assert(offsetof(WBP_CharaSelect_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_CharaSelect_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Tick, InDeltaTime) == 0x000038, "Member 'WBP_CharaSelect_C_Tick::InDeltaTime' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Init Chara Image
// 0x0058 (0x0058 - 0x0000)
struct WBP_CharaSelect_C_Init_Chara_Image final
{
public:
	int32                                         InSelectIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8787[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharacterSelectListItem_C*         CharaItem;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemIndex;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharaIndex;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8788[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8789[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_878A[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_Init_Chara_Image) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_Init_Chara_Image");
static_assert(sizeof(WBP_CharaSelect_C_Init_Chara_Image) == 0x000058, "Wrong size on WBP_CharaSelect_C_Init_Chara_Image");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, InSelectIndex) == 0x000000, "Member 'WBP_CharaSelect_C_Init_Chara_Image::InSelectIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CharaItem) == 0x000008, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CharaItem' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, ItemIndex) == 0x000010, "Member 'WBP_CharaSelect_C_Init_Chara_Image::ItemIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CharaIndex) == 0x000014, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CharaIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, Temp_int_Variable) == 0x000018, "Member 'WBP_CharaSelect_C_Init_Chara_Image::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Array_Length_ReturnValue_1) == 0x000028, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000034, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, Temp_int_Variable_1) == 0x000038, "Member 'WBP_CharaSelect_C_Init_Chara_Image::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x00003C, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Array_Length_ReturnValue_2) == 0x000048, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00004C, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000050, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Chara_Image, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000054, "Member 'WBP_CharaSelect_C_Init_Chara_Image::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Setup Chara Sele List
// 0x0098 (0x0098 - 0x0000)
struct WBP_CharaSelect_C_Setup_Chara_Sele_List final
{
public:
	struct FVector2D                              NextPos;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              OldPos;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextIndex;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_878B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      Pos;                                               // 0x0018(0x0010)(Edit, BlueprintVisible)
	class UWBP_CharacterSelectListItem_C*         Item;                                              // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Vector2DVector2D_ReturnValue;  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1; // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_878C[0x1];                                     // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_2; // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_3; // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_878D[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_878E[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharacterSelectListItem_C*         CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_878F[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8790[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharacterSelectListItem_C*         CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8791[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_Setup_Chara_Sele_List) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_Setup_Chara_Sele_List");
static_assert(sizeof(WBP_CharaSelect_C_Setup_Chara_Sele_List) == 0x000098, "Wrong size on WBP_CharaSelect_C_Setup_Chara_Sele_List");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, NextPos) == 0x000000, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::NextPos' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, OldPos) == 0x000008, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::OldPos' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, NextIndex) == 0x000010, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::NextIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, Pos) == 0x000018, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::Pos' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, Item) == 0x000028, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, Temp_int_Array_Index_Variable) == 0x000030, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_EqualEqual_Vector2DVector2D_ReturnValue) == 0x000034, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_EqualEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1) == 0x000035, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Greater_IntInt_ReturnValue) == 0x000036, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, Temp_int_Array_Index_Variable_1) == 0x000038, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_2) == 0x00003C, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_3) == 0x00003D, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_EqualEqual_Vector2DVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x00004C, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000054, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Array_Get_Item) == 0x000058, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Subtract_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Percent_IntInt_ReturnValue) == 0x000070, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Multiply_IntInt_ReturnValue) == 0x000074, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Add_IntInt_ReturnValue_2) == 0x000078, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Array_Length_ReturnValue_2) == 0x000088, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Setup_Chara_Sele_List, CallFunc_Array_Add_ReturnValue_1) == 0x000090, "Member 'WBP_CharaSelect_C_Setup_Chara_Sele_List::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateMove
// 0x0330 (0x0330 - 0x0000)
struct WBP_CharaSelect_C_UpdateMove final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxFrame;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_1;      // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8792[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue_1;     // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_2;      // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_3;      // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8793[0x8];                                     // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue_2;     // 0x00B0(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue_3;     // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0114(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue_1;                       // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8794[0x8];                                     // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_TEase_ReturnValue;                        // 0x0130(0x0030)(IsPlainOldData, NoDestructor)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x0194(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue_2;                       // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue_3;                       // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_2;                   // 0x01A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_3;                   // 0x01B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8795[0xC];                                     // 0x01C4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_TEase_ReturnValue_1;                      // 0x01D0(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x020C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0218(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x0224(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x022C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_4;      // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue_5;      // 0x0244(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue_4;     // 0x0250(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_Conv_VectorToTransform_ReturnValue_5;     // 0x0280(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_TEase_ReturnValue_2;                      // 0x02B0(0x0030)(IsPlainOldData, NoDestructor)
	class UWBP_CharacterSelectListItem_C*         CallFunc_Array_Get_Item;                           // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x02E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x02F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x0300(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x030C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8796[0x3];                                     // 0x030D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_2;      // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8797[0x3];                                     // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x031C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8798[0x2];                                     // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_UpdateMove) == 0x000010, "Wrong alignment on WBP_CharaSelect_C_UpdateMove");
static_assert(sizeof(WBP_CharaSelect_C_UpdateMove) == 0x000330, "Wrong size on WBP_CharaSelect_C_UpdateMove");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, InDeltaTime) == 0x000000, "Member 'WBP_CharaSelect_C_UpdateMove::InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, Rate) == 0x000004, "Member 'WBP_CharaSelect_C_UpdateMove::Rate' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, MaxFrame) == 0x000008, "Member 'WBP_CharaSelect_C_UpdateMove::MaxFrame' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_CharaSelect_C_UpdateMove::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000010, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_Vector2DToVector_ReturnValue_1) == 0x00001C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_Vector2DToVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToTransform_ReturnValue) == 0x000030, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToTransform_ReturnValue_1) == 0x000060, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_Vector2DToVector_ReturnValue_2) == 0x000090, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_Vector2DToVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_Vector2DToVector_ReturnValue_3) == 0x00009C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_Vector2DToVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToTransform_ReturnValue_2) == 0x0000B0, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToTransform_ReturnValue_3) == 0x0000E0, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToTransform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Ease_ReturnValue) == 0x000110, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, K2Node_MakeStruct_LinearColor) == 0x000114, "Member 'WBP_CharaSelect_C_UpdateMove::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Ease_ReturnValue_1) == 0x000124, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Ease_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_TEase_ReturnValue) == 0x000130, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_TEase_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, K2Node_MakeStruct_LinearColor_1) == 0x000160, "Member 'WBP_CharaSelect_C_UpdateMove::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Location) == 0x000170, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Rotation) == 0x00017C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Scale) == 0x000188, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000194, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Ease_ReturnValue_2) == 0x00019C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Ease_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Ease_ReturnValue_3) == 0x0001A0, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Ease_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, K2Node_MakeStruct_LinearColor_2) == 0x0001A4, "Member 'WBP_CharaSelect_C_UpdateMove::K2Node_MakeStruct_LinearColor_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, K2Node_MakeStruct_LinearColor_3) == 0x0001B4, "Member 'WBP_CharaSelect_C_UpdateMove::K2Node_MakeStruct_LinearColor_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_TEase_ReturnValue_1) == 0x0001D0, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_TEase_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Location_1) == 0x000200, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Rotation_1) == 0x00020C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Scale_1) == 0x000218, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x000224, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00022C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, Temp_int_Loop_Counter_Variable) == 0x000230, "Member 'WBP_CharaSelect_C_UpdateMove::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Add_IntInt_ReturnValue) == 0x000234, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_Vector2DToVector_ReturnValue_4) == 0x000238, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_Vector2DToVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_Vector2DToVector_ReturnValue_5) == 0x000244, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_Vector2DToVector_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToTransform_ReturnValue_4) == 0x000250, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToTransform_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToTransform_ReturnValue_5) == 0x000280, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToTransform_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_TEase_ReturnValue_2) == 0x0002B0, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_TEase_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Array_Get_Item) == 0x0002E0, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Location_2) == 0x0002E8, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Rotation_2) == 0x0002F4, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_BreakTransform_Scale_2) == 0x000300, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00030C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Conv_VectorToVector2D_ReturnValue_2) == 0x000310, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Conv_VectorToVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000318, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Array_Length_ReturnValue) == 0x00031C, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Less_IntInt_ReturnValue) == 0x000320, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000321, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateMove, CallFunc_Add_FloatFloat_ReturnValue) == 0x000324, "Member 'WBP_CharaSelect_C_UpdateMove::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateSelectCursorVisible
// 0x000C (0x000C - 0x0000)
struct WBP_CharaSelect_C_UpdateSelectCursorVisible final
{
public:
	int32                                         CharaNum;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8799[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_UpdateSelectCursorVisible) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_UpdateSelectCursorVisible");
static_assert(sizeof(WBP_CharaSelect_C_UpdateSelectCursorVisible) == 0x00000C, "Wrong size on WBP_CharaSelect_C_UpdateSelectCursorVisible");
static_assert(offsetof(WBP_CharaSelect_C_UpdateSelectCursorVisible, CharaNum) == 0x000000, "Member 'WBP_CharaSelect_C_UpdateSelectCursorVisible::CharaNum' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateSelectCursorVisible, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'WBP_CharaSelect_C_UpdateSelectCursorVisible::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateSelectCursorVisible, CallFunc_Greater_IntInt_ReturnValue) == 0x000005, "Member 'WBP_CharaSelect_C_UpdateSelectCursorVisible::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateSelectCursorVisible, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000006, "Member 'WBP_CharaSelect_C_UpdateSelectCursorVisible::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateSelectCursorVisible, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_UpdateSelectCursorVisible::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.InitCharaVisible
// 0x0010 (0x0010 - 0x0000)
struct WBP_CharaSelect_C_InitCharaVisible final
{
public:
	int32                                         CharaNum;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_879A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_InitCharaVisible) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_InitCharaVisible");
static_assert(sizeof(WBP_CharaSelect_C_InitCharaVisible) == 0x000010, "Wrong size on WBP_CharaSelect_C_InitCharaVisible");
static_assert(offsetof(WBP_CharaSelect_C_InitCharaVisible, CharaNum) == 0x000000, "Member 'WBP_CharaSelect_C_InitCharaVisible::CharaNum' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_InitCharaVisible, CallFunc_Greater_IntInt_ReturnValue) == 0x000004, "Member 'WBP_CharaSelect_C_InitCharaVisible::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_InitCharaVisible, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_InitCharaVisible::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_InitCharaVisible, K2Node_SwitchInteger_CmpSuccess) == 0x00000C, "Member 'WBP_CharaSelect_C_InitCharaVisible::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Preload Chara Image
// 0x0030 (0x0030 - 0x0000)
struct WBP_CharaSelect_C_Preload_Chara_Image final
{
public:
	int32                                         Diff;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharaIndex;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_879B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_879C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_879D[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_Preload_Chara_Image) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_Preload_Chara_Image");
static_assert(sizeof(WBP_CharaSelect_C_Preload_Chara_Image) == 0x000030, "Wrong size on WBP_CharaSelect_C_Preload_Chara_Image");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, Diff) == 0x000000, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::Diff' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CharaIndex) == 0x000004, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CharaIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Array_Length_ReturnValue_1) == 0x000010, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Array_Length_ReturnValue_2) == 0x000020, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000028, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Preload_Chara_Image, CallFunc_Percent_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_CharaSelect_C_Preload_Chara_Image::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ResetCharaSeleItemPos
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharaSelect_C_ResetCharaSeleItemPos final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharacterSelectListItem_C*         CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_ResetCharaSeleItemPos) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ResetCharaSeleItemPos");
static_assert(sizeof(WBP_CharaSelect_C_ResetCharaSeleItemPos) == 0x000020, "Wrong size on WBP_CharaSelect_C_ResetCharaSeleItemPos");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleItemPos, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_CharaSelect_C_ResetCharaSeleItemPos::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleItemPos, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_CharaSelect_C_ResetCharaSeleItemPos::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleItemPos, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_ResetCharaSeleItemPos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleItemPos, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_CharaSelect_C_ResetCharaSeleItemPos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleItemPos, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_CharaSelect_C_ResetCharaSeleItemPos::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleItemPos, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_CharaSelect_C_ResetCharaSeleItemPos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Set Delete Start Button Visible
// 0x000C (0x000C - 0x0000)
struct WBP_CharaSelect_C_Set_Delete_Start_Button_Visible final
{
public:
	ESlateVisibility                              InState;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_879E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveCharacterNum_Nu_;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_Set_Delete_Start_Button_Visible");
static_assert(sizeof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible) == 0x00000C, "Wrong size on WBP_CharaSelect_C_Set_Delete_Start_Button_Visible");
static_assert(offsetof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible, InState) == 0x000000, "Member 'WBP_CharaSelect_C_Set_Delete_Start_Button_Visible::InState' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible, CallFunc_GetActiveCharacterNum_Nu_) == 0x000004, "Member 'WBP_CharaSelect_C_Set_Delete_Start_Button_Visible::CallFunc_GetActiveCharacterNum_Nu_' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_Set_Delete_Start_Button_Visible::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible, CallFunc_IsEmpty_ReturnValue) == 0x000009, "Member 'WBP_CharaSelect_C_Set_Delete_Start_Button_Visible::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00000A, "Member 'WBP_CharaSelect_C_Set_Delete_Start_Button_Visible::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Delete_Start_Button_Visible, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'WBP_CharaSelect_C_Set_Delete_Start_Button_Visible::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.GetDefaultSelectIndex
// 0x0118 (0x0118 - 0x0000)
struct WBP_CharaSelect_C_GetDefaultSelectIndex final
{
public:
	TArray<struct FSBUserOnlineAccountCharacter>  InList;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 InCharacterId;                                     // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         RetIndex;                                          // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_879F[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBUserOnlineAccountCharacter          CallFunc_Array_Get_Item;                           // 0x0030(0x00D8)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A0[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A1[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_GetDefaultSelectIndex) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_GetDefaultSelectIndex");
static_assert(sizeof(WBP_CharaSelect_C_GetDefaultSelectIndex) == 0x000118, "Wrong size on WBP_CharaSelect_C_GetDefaultSelectIndex");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, InList) == 0x000000, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::InList' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, InCharacterId) == 0x000010, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::InCharacterId' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, RetIndex) == 0x000020, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::RetIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000108, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, Temp_int_Loop_Counter_Variable) == 0x00010C, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, CallFunc_Less_IntInt_ReturnValue) == 0x000110, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetDefaultSelectIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000114, "Member 'WBP_CharaSelect_C_GetDefaultSelectIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ResetCharaSeleScale
// 0x0030 (0x0030 - 0x0000)
struct WBP_CharaSelect_C_ResetCharaSeleScale final
{
public:
	struct FVector2D                              Scale;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A2[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_87A3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharacterSelectListItem_C*         CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_ResetCharaSeleScale) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ResetCharaSeleScale");
static_assert(sizeof(WBP_CharaSelect_C_ResetCharaSeleScale) == 0x000030, "Wrong size on WBP_CharaSelect_C_ResetCharaSeleScale");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, Scale) == 0x000000, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::Scale' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ResetCharaSeleScale, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_CharaSelect_C_ResetCharaSeleScale::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateCharaSeleText
// 0x0038 (0x0038 - 0x0000)
struct WBP_CharaSelect_C_UpdateCharaSeleText final
{
public:
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0000(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A4[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0020(0x0018)()
};
static_assert(alignof(WBP_CharaSelect_C_UpdateCharaSeleText) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_UpdateCharaSeleText");
static_assert(sizeof(WBP_CharaSelect_C_UpdateCharaSeleText) == 0x000038, "Wrong size on WBP_CharaSelect_C_UpdateCharaSeleText");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSeleText, CallFunc_Conv_IntToText_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_UpdateCharaSeleText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSeleText, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_CharaSelect_C_UpdateCharaSeleText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSeleText, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_CharaSelect_C_UpdateCharaSeleText::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSeleText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000020, "Member 'WBP_CharaSelect_C_UpdateCharaSeleText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Update Enable All Button
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_Update_Enable_All_Button final
{
public:
	bool                                          InEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_Update_Enable_All_Button) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_Update_Enable_All_Button");
static_assert(sizeof(WBP_CharaSelect_C_Update_Enable_All_Button) == 0x000001, "Wrong size on WBP_CharaSelect_C_Update_Enable_All_Button");
static_assert(offsetof(WBP_CharaSelect_C_Update_Enable_All_Button, InEnable) == 0x000000, "Member 'WBP_CharaSelect_C_Update_Enable_All_Button::InEnable' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ClearCache
// 0x0030 (0x0030 - 0x0000)
struct WBP_CharaSelect_C_ClearCache final
{
public:
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A5[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBGameInstance*                        K2Node_DynamicCast_AsSBGame_Instance;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A6[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_ClearCache) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ClearCache");
static_assert(sizeof(WBP_CharaSelect_C_ClearCache) == 0x000030, "Wrong size on WBP_CharaSelect_C_ClearCache");
static_assert(offsetof(WBP_CharaSelect_C_ClearCache, CallFunc_GetGameInstance_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_ClearCache::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ClearCache, CallFunc_GetUIManager_IsValid) == 0x000008, "Member 'WBP_CharaSelect_C_ClearCache::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ClearCache, CallFunc_GetUIManager_ReturnValue) == 0x000010, "Member 'WBP_CharaSelect_C_ClearCache::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ClearCache, K2Node_DynamicCast_AsSBGame_Instance) == 0x000018, "Member 'WBP_CharaSelect_C_ClearCache::K2Node_DynamicCast_AsSBGame_Instance' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ClearCache, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_CharaSelect_C_ClearCache::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ClearCache, CallFunc_GetNetworkDataCache_IsValid) == 0x000021, "Member 'WBP_CharaSelect_C_ClearCache::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ClearCache, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000028, "Member 'WBP_CharaSelect_C_ClearCache::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateCharaInfo
// 0x0188 (0x0188 - 0x0000)
struct WBP_CharaSelect_C_UpdateCharaInfo final
{
public:
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A7[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetAdventurerRankText_ReturnValue;        // 0x0030(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A8[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0050(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0120(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0140(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0158(0x0018)()
	class FText                                   CallFunc_BlancToSpace_Text;                        // 0x0170(0x0018)()
};
static_assert(alignof(WBP_CharaSelect_C_UpdateCharaInfo) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_UpdateCharaInfo");
static_assert(sizeof(WBP_CharaSelect_C_UpdateCharaInfo) == 0x000188, "Wrong size on WBP_CharaSelect_C_UpdateCharaInfo");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_GetClassNameText_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_SetDateTime_ReturnValue) == 0x000028, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_IsEmpty_ReturnValue) == 0x000029, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_GetAdventurerRankText_ReturnValue) == 0x000030, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_GetAdventurerRankText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000050, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, K2Node_MakeArray_Array) == 0x000090, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A0, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B0, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E0, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, K2Node_MakeArray_Array_1) == 0x000120, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000130, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000140, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_Format_ReturnValue_1) == 0x000158, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaInfo, CallFunc_BlancToSpace_Text) == 0x000170, "Member 'WBP_CharaSelect_C_UpdateCharaInfo::CallFunc_BlancToSpace_Text' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateCharaSlotText
// 0x0098 (0x0098 - 0x0000)
struct WBP_CharaSelect_C_UpdateCharaSlotText final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87A9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87AA[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0030(0x0018)()
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0058(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0070(0x0028)()
};
static_assert(alignof(WBP_CharaSelect_C_UpdateCharaSlotText) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_UpdateCharaSlotText");
static_assert(sizeof(WBP_CharaSelect_C_UpdateCharaSlotText) == 0x000098, "Wrong size on WBP_CharaSelect_C_UpdateCharaSlotText");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, Temp_bool_Variable) == 0x000000, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, Temp_struct_Variable) == 0x000004, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, Temp_struct_Variable_1) == 0x000014, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, K2Node_Select_Default) == 0x000048, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000058, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_UpdateCharaSlotText, K2Node_MakeStruct_SlateColor) == 0x000070, "Member 'WBP_CharaSelect_C_UpdateCharaSlotText::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.IsCreateCharacter
// 0x000C (0x000C - 0x0000)
struct WBP_CharaSelect_C_IsCreateCharacter final
{
public:
	bool                                          Ret;                                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87AB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_IsCreateCharacter) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_IsCreateCharacter");
static_assert(sizeof(WBP_CharaSelect_C_IsCreateCharacter) == 0x00000C, "Wrong size on WBP_CharaSelect_C_IsCreateCharacter");
static_assert(offsetof(WBP_CharaSelect_C_IsCreateCharacter, Ret) == 0x000000, "Member 'WBP_CharaSelect_C_IsCreateCharacter::Ret' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsCreateCharacter, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WBP_CharaSelect_C_IsCreateCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsCreateCharacter, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_IsCreateCharacter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Set Chara Sele List Item Data
// 0x0028 (0x0028 - 0x0000)
struct WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data final
{
public:
	int32                                         CharaSeleListItemNum;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharaIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterSelectCaptureOne_C*        CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87AC[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CharacterSelectListItem_C*         CallFunc_Array_Get_Item_1;                         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data");
static_assert(sizeof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data) == 0x000028, "Wrong size on WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CharaSeleListItemNum) == 0x000000, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CharaSeleListItemNum' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CharaIndex) == 0x000004, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CharaIndex' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CallFunc_Array_Get_Item) == 0x000008, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CallFunc_Array_Get_Item_1) == 0x000018, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CallFunc_IsEmpty_ReturnValue) == 0x000020, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'WBP_CharaSelect_C_Set_Chara_Sele_List_Item_Data::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.SetEnableSelectCursor
// 0x0002 (0x0002 - 0x0000)
struct WBP_CharaSelect_C_SetEnableSelectCursor final
{
public:
	bool                                          IsLeft;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRight;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_SetEnableSelectCursor) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_SetEnableSelectCursor");
static_assert(sizeof(WBP_CharaSelect_C_SetEnableSelectCursor) == 0x000002, "Wrong size on WBP_CharaSelect_C_SetEnableSelectCursor");
static_assert(offsetof(WBP_CharaSelect_C_SetEnableSelectCursor, IsLeft) == 0x000000, "Member 'WBP_CharaSelect_C_SetEnableSelectCursor::IsLeft' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_SetEnableSelectCursor, IsRight) == 0x000001, "Member 'WBP_CharaSelect_C_SetEnableSelectCursor::IsRight' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Set Visible Select Cursor
// 0x0002 (0x0002 - 0x0000)
struct WBP_CharaSelect_C_Set_Visible_Select_Cursor final
{
public:
	ESlateVisibility                              InLeftState;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              InRightState;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_Set_Visible_Select_Cursor) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_Set_Visible_Select_Cursor");
static_assert(sizeof(WBP_CharaSelect_C_Set_Visible_Select_Cursor) == 0x000002, "Wrong size on WBP_CharaSelect_C_Set_Visible_Select_Cursor");
static_assert(offsetof(WBP_CharaSelect_C_Set_Visible_Select_Cursor, InLeftState) == 0x000000, "Member 'WBP_CharaSelect_C_Set_Visible_Select_Cursor::InLeftState' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Set_Visible_Select_Cursor, InRightState) == 0x000001, "Member 'WBP_CharaSelect_C_Set_Visible_Select_Cursor::InRightState' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Initialize Character Studio
// 0x0070 (0x0070 - 0x0000)
struct WBP_CharaSelect_C_Initialize_Character_Studio final
{
public:
	TArray<class AActor*>                         SwapList;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterSelectCaptureBustUp_C*     K2Node_DynamicCast_AsBP_Character_Select_Capture_Bust_Up; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87AD[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CharacterSelectCaptureOne_C*        K2Node_DynamicCast_AsBP_Character_Select_Capture_One; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87AE[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87AF[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsWithTag_OutActors;            // 0x0048(0x0010)(ReferenceParm)
	TArray<struct FSBCharaCreateParameter>        CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_OutCharaCreateParameters; // 0x0058(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_ReturnValue; // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B0[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_Initialize_Character_Studio) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_Initialize_Character_Studio");
static_assert(sizeof(WBP_CharaSelect_C_Initialize_Character_Studio) == 0x000070, "Wrong size on WBP_CharaSelect_C_Initialize_Character_Studio");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, SwapList) == 0x000000, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::SwapList' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, K2Node_DynamicCast_AsBP_Character_Select_Capture_Bust_Up) == 0x000020, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::K2Node_DynamicCast_AsBP_Character_Select_Capture_Bust_Up' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, K2Node_DynamicCast_AsBP_Character_Select_Capture_One) == 0x000030, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::K2Node_DynamicCast_AsBP_Character_Select_Capture_One' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_GetAllActorsWithTag_OutActors) == 0x000048, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_GetAllActorsWithTag_OutActors' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_OutCharaCreateParameters) == 0x000058, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_OutCharaCreateParameters' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_ReturnValue) == 0x000068, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_GetLogedInPlayerCharactersCharaCreateParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Initialize_Character_Studio, CallFunc_Array_Add_ReturnValue) == 0x00006C, "Member 'WBP_CharaSelect_C_Initialize_Character_Studio::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ShowSecondPasswordSender
// 0x0020 (0x0020 - 0x0000)
struct WBP_CharaSelect_C_ShowSecondPasswordSender final
{
public:
	ESecondPasswordSenderStartType                Role;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_87B1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESendSecondPasswordRole Role, ESecondPasswordSenderEndReason Reason, ESecondPasswordSenderStartType StartType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_87B2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USecondPasswordSender_C*                CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_ShowSecondPasswordSender) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ShowSecondPasswordSender");
static_assert(sizeof(WBP_CharaSelect_C_ShowSecondPasswordSender) == 0x000020, "Wrong size on WBP_CharaSelect_C_ShowSecondPasswordSender");
static_assert(offsetof(WBP_CharaSelect_C_ShowSecondPasswordSender, Role) == 0x000000, "Member 'WBP_CharaSelect_C_ShowSecondPasswordSender::Role' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ShowSecondPasswordSender, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_CharaSelect_C_ShowSecondPasswordSender::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ShowSecondPasswordSender, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_CharaSelect_C_ShowSecondPasswordSender::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.HideSecondPasswordSender
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_HideSecondPasswordSender final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_HideSecondPasswordSender) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_HideSecondPasswordSender");
static_assert(sizeof(WBP_CharaSelect_C_HideSecondPasswordSender) == 0x000001, "Wrong size on WBP_CharaSelect_C_HideSecondPasswordSender");
static_assert(offsetof(WBP_CharaSelect_C_HideSecondPasswordSender, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_HideSecondPasswordSender::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ShowDialogSecondPasswordExpired
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaSelect_C_ShowDialogSecondPasswordExpired final
{
public:
	class USecondPasswordExpiredDialog_C*         CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_ShowDialogSecondPasswordExpired) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ShowDialogSecondPasswordExpired");
static_assert(sizeof(WBP_CharaSelect_C_ShowDialogSecondPasswordExpired) == 0x000018, "Wrong size on WBP_CharaSelect_C_ShowDialogSecondPasswordExpired");
static_assert(offsetof(WBP_CharaSelect_C_ShowDialogSecondPasswordExpired, CallFunc_Create_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_ShowDialogSecondPasswordExpired::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ShowDialogSecondPasswordExpired, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_CharaSelect_C_ShowDialogSecondPasswordExpired::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ShowDialogDeleteFirst
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaSelect_C_ShowDialogDeleteFirst final
{
public:
	class UDeleteDialogFirst_C*                   CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool DELETE)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_ShowDialogDeleteFirst) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ShowDialogDeleteFirst");
static_assert(sizeof(WBP_CharaSelect_C_ShowDialogDeleteFirst) == 0x000018, "Wrong size on WBP_CharaSelect_C_ShowDialogDeleteFirst");
static_assert(offsetof(WBP_CharaSelect_C_ShowDialogDeleteFirst, CallFunc_Create_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_ShowDialogDeleteFirst::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ShowDialogDeleteFirst, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_CharaSelect_C_ShowDialogDeleteFirst::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnEndDialogDeleteFirst
// 0x0002 (0x0002 - 0x0000)
struct WBP_CharaSelect_C_OnEndDialogDeleteFirst final
{
public:
	bool                                          DELETE;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_OnEndDialogDeleteFirst) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_OnEndDialogDeleteFirst");
static_assert(sizeof(WBP_CharaSelect_C_OnEndDialogDeleteFirst) == 0x000002, "Wrong size on WBP_CharaSelect_C_OnEndDialogDeleteFirst");
static_assert(offsetof(WBP_CharaSelect_C_OnEndDialogDeleteFirst, DELETE) == 0x000000, "Member 'WBP_CharaSelect_C_OnEndDialogDeleteFirst::DELETE' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_OnEndDialogDeleteFirst, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_CharaSelect_C_OnEndDialogDeleteFirst::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ShowDialogDeleteLast
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaSelect_C_ShowDialogDeleteLast final
{
public:
	class UDeleteDialogLast_C*                    CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool DELETE)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_ShowDialogDeleteLast) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_ShowDialogDeleteLast");
static_assert(sizeof(WBP_CharaSelect_C_ShowDialogDeleteLast) == 0x000018, "Wrong size on WBP_CharaSelect_C_ShowDialogDeleteLast");
static_assert(offsetof(WBP_CharaSelect_C_ShowDialogDeleteLast, CallFunc_Create_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_ShowDialogDeleteLast::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ShowDialogDeleteLast, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_CharaSelect_C_ShowDialogDeleteLast::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.OnEndDialogDeleteLast
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_OnEndDialogDeleteLast final
{
public:
	bool                                          DELETE;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_OnEndDialogDeleteLast) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_OnEndDialogDeleteLast");
static_assert(sizeof(WBP_CharaSelect_C_OnEndDialogDeleteLast) == 0x000001, "Wrong size on WBP_CharaSelect_C_OnEndDialogDeleteLast");
static_assert(offsetof(WBP_CharaSelect_C_OnEndDialogDeleteLast, DELETE) == 0x000000, "Member 'WBP_CharaSelect_C_OnEndDialogDeleteLast::DELETE' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.GetActiveCharacterNum
// 0x0100 (0x0100 - 0x0000)
struct WBP_CharaSelect_C_GetActiveCharacterNum final
{
public:
	int32                                         NuM;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Cnt;                                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBUserOnlineAccountCharacter          CallFunc_Array_Get_Item;                           // 0x0020(0x00D8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_GetActiveCharacterNum) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_GetActiveCharacterNum");
static_assert(sizeof(WBP_CharaSelect_C_GetActiveCharacterNum) == 0x000100, "Wrong size on WBP_CharaSelect_C_GetActiveCharacterNum");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, NuM) == 0x000000, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::NuM' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, Cnt) == 0x000004, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::Cnt' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, Temp_int_Variable) == 0x000014, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, CallFunc_Array_Length_ReturnValue) == 0x00001C, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, CallFunc_Less_IntInt_ReturnValue) == 0x0000F8, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_GetActiveCharacterNum, CallFunc_IsEmpty_ReturnValue) == 0x0000F9, "Member 'WBP_CharaSelect_C_GetActiveCharacterNum::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.InitCurrentCharacterInfoAll
// 0x0040 (0x0040 - 0x0000)
struct WBP_CharaSelect_C_InitCurrentCharacterInfoAll final
{
public:
	float                                         CallFunc_GetEnablePartyRejoinRemainingTime_ReturnValue; // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnablePartyRejoinTime_ReturnValue;      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B3[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLastJoinedContentInfoState          CallFunc_GetLastJoinedContentInfoState_ReturnValue; // 0x0008(0x0018)(ConstParm)
	struct FSBLastJoinedPartyInfoState            CallFunc_GetLastJoinedPartyInfoState_ReturnValue;  // 0x0020(0x0020)(ConstParm)
};
static_assert(alignof(WBP_CharaSelect_C_InitCurrentCharacterInfoAll) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_InitCurrentCharacterInfoAll");
static_assert(sizeof(WBP_CharaSelect_C_InitCurrentCharacterInfoAll) == 0x000040, "Wrong size on WBP_CharaSelect_C_InitCurrentCharacterInfoAll");
static_assert(offsetof(WBP_CharaSelect_C_InitCurrentCharacterInfoAll, CallFunc_GetEnablePartyRejoinRemainingTime_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_InitCurrentCharacterInfoAll::CallFunc_GetEnablePartyRejoinRemainingTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_InitCurrentCharacterInfoAll, CallFunc_IsEnablePartyRejoinTime_ReturnValue) == 0x000004, "Member 'WBP_CharaSelect_C_InitCurrentCharacterInfoAll::CallFunc_IsEnablePartyRejoinTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_InitCurrentCharacterInfoAll, CallFunc_Less_FloatFloat_ReturnValue) == 0x000005, "Member 'WBP_CharaSelect_C_InitCurrentCharacterInfoAll::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_InitCurrentCharacterInfoAll, CallFunc_GetLastJoinedContentInfoState_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_InitCurrentCharacterInfoAll::CallFunc_GetLastJoinedContentInfoState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_InitCurrentCharacterInfoAll, CallFunc_GetLastJoinedPartyInfoState_ReturnValue) == 0x000020, "Member 'WBP_CharaSelect_C_InitCurrentCharacterInfoAll::CallFunc_GetLastJoinedPartyInfoState_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.ActiveReJoinParty
// 0x0003 (0x0003 - 0x0000)
struct WBP_CharaSelect_C_ActiveReJoinParty final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoginCharacterRejectedReturnDisconnectedParty_ReturnValue; // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnablePartyRejoinTime_ReturnValue;      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_ActiveReJoinParty) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_ActiveReJoinParty");
static_assert(sizeof(WBP_CharaSelect_C_ActiveReJoinParty) == 0x000003, "Wrong size on WBP_CharaSelect_C_ActiveReJoinParty");
static_assert(offsetof(WBP_CharaSelect_C_ActiveReJoinParty, bResult) == 0x000000, "Member 'WBP_CharaSelect_C_ActiveReJoinParty::bResult' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ActiveReJoinParty, CallFunc_IsLoginCharacterRejectedReturnDisconnectedParty_ReturnValue) == 0x000001, "Member 'WBP_CharaSelect_C_ActiveReJoinParty::CallFunc_IsLoginCharacterRejectedReturnDisconnectedParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_ActiveReJoinParty, CallFunc_IsEnablePartyRejoinTime_ReturnValue) == 0x000002, "Member 'WBP_CharaSelect_C_ActiveReJoinParty::CallFunc_IsEnablePartyRejoinTime_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.RejectReturnDisconnectedParty
// 0x0008 (0x0008 - 0x0000)
struct WBP_CharaSelect_C_RejectReturnDisconnectedParty final
{
public:
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_RejectReturnDisconnectedParty) == 0x000004, "Wrong alignment on WBP_CharaSelect_C_RejectReturnDisconnectedParty");
static_assert(sizeof(WBP_CharaSelect_C_RejectReturnDisconnectedParty) == 0x000008, "Wrong size on WBP_CharaSelect_C_RejectReturnDisconnectedParty");
static_assert(offsetof(WBP_CharaSelect_C_RejectReturnDisconnectedParty, CallFunc_Array_Contains_ReturnValue) == 0x000000, "Member 'WBP_CharaSelect_C_RejectReturnDisconnectedParty::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_RejectReturnDisconnectedParty, CallFunc_Array_AddUnique_ReturnValue) == 0x000004, "Member 'WBP_CharaSelect_C_RejectReturnDisconnectedParty::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.IsEnableContentRejoin
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaSelect_C_IsEnableContentRejoin final
{
public:
	bool                                          bEnableContentRejoin;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableContentRejoinTime_ReturnValue;    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoginCharacterRejectedReturnContent_ReturnValue; // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_IsEnableContentRejoin) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_IsEnableContentRejoin");
static_assert(sizeof(WBP_CharaSelect_C_IsEnableContentRejoin) == 0x000004, "Wrong size on WBP_CharaSelect_C_IsEnableContentRejoin");
static_assert(offsetof(WBP_CharaSelect_C_IsEnableContentRejoin, bEnableContentRejoin) == 0x000000, "Member 'WBP_CharaSelect_C_IsEnableContentRejoin::bEnableContentRejoin' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsEnableContentRejoin, CallFunc_IsEnableContentRejoinTime_ReturnValue) == 0x000001, "Member 'WBP_CharaSelect_C_IsEnableContentRejoin::CallFunc_IsEnableContentRejoinTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsEnableContentRejoin, CallFunc_IsLoginCharacterRejectedReturnContent_ReturnValue) == 0x000002, "Member 'WBP_CharaSelect_C_IsEnableContentRejoin::CallFunc_IsLoginCharacterRejectedReturnContent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsEnableContentRejoin, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'WBP_CharaSelect_C_IsEnableContentRejoin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.IsEnablePartyRejoin
// 0x0004 (0x0004 - 0x0000)
struct WBP_CharaSelect_C_IsEnablePartyRejoin final
{
public:
	bool                                          bEnablePartyRejoin;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnablePartyRejoinTime_ReturnValue;      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLoginCharacterRejectedReturnDisconnectedParty_ReturnValue; // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_IsEnablePartyRejoin) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_IsEnablePartyRejoin");
static_assert(sizeof(WBP_CharaSelect_C_IsEnablePartyRejoin) == 0x000004, "Wrong size on WBP_CharaSelect_C_IsEnablePartyRejoin");
static_assert(offsetof(WBP_CharaSelect_C_IsEnablePartyRejoin, bEnablePartyRejoin) == 0x000000, "Member 'WBP_CharaSelect_C_IsEnablePartyRejoin::bEnablePartyRejoin' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsEnablePartyRejoin, CallFunc_IsEnablePartyRejoinTime_ReturnValue) == 0x000001, "Member 'WBP_CharaSelect_C_IsEnablePartyRejoin::CallFunc_IsEnablePartyRejoinTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsEnablePartyRejoin, CallFunc_IsLoginCharacterRejectedReturnDisconnectedParty_ReturnValue) == 0x000002, "Member 'WBP_CharaSelect_C_IsEnablePartyRejoin::CallFunc_IsLoginCharacterRejectedReturnDisconnectedParty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_IsEnablePartyRejoin, CallFunc_Not_PreBool_ReturnValue) == 0x000003, "Member 'WBP_CharaSelect_C_IsEnablePartyRejoin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.Init Cur Character Ban System Message
// 0x04F8 (0x04F8 - 0x0000)
struct WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message final
{
public:
	bool                                          bIsBaned;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bBaned;                                            // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B5[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalTxtLimitedMinute;                             // 0x0008(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalTxtLimitedHour;                               // 0x0020(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalTxtLimitedDay;                                // 0x0038(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalTxtLimitedInfo;                               // 0x0050(0x0018)(Edit, BlueprintVisible)
	bool                                          bMinuteExist;                                      // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHourExist;                                        // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDayExist;                                         // 0x006A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B6[0x5];                                     // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LocalTxtLimitedHeader;                             // 0x0070(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalLimitedTimeSuspensionText;                    // 0x0088(0x0018)(Edit, BlueprintVisible)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0108(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0148(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0188(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x01C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0208(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0218(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0240(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0268(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_3;     // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0290(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_4;     // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B7[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x02C0(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B8[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_5;     // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x02F0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0308(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87B9[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0350(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0360(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0378(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x03B8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x03C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87BA[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x03D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x03E8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87BB[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0430(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0440(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_6;     // 0x0458(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87BC[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0470(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x0488(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x04C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x04D8(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message");
static_assert(sizeof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message) == 0x0004F8, "Wrong size on WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, bIsBaned) == 0x000000, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::bIsBaned' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, bBaned) == 0x000001, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::bBaned' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, LocalTxtLimitedMinute) == 0x000008, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::LocalTxtLimitedMinute' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, LocalTxtLimitedHour) == 0x000020, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::LocalTxtLimitedHour' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, LocalTxtLimitedDay) == 0x000038, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::LocalTxtLimitedDay' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, LocalTxtLimitedInfo) == 0x000050, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::LocalTxtLimitedInfo' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, bMinuteExist) == 0x000068, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::bMinuteExist' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, bHourExist) == 0x000069, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::bHourExist' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, bDayExist) == 0x00006A, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::bDayExist' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, LocalTxtLimitedHeader) == 0x000070, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::LocalTxtLimitedHeader' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, LocalLimitedTimeSuspensionText) == 0x000088, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::LocalLimitedTimeSuspensionText' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000A0, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_1) == 0x000108, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_2) == 0x000148, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_3) == 0x000188, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_4) == 0x0001C8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeArray_Array) == 0x000208, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Format_ReturnValue) == 0x000218, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000230, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000240, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x000258, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000268, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_GetTextFromAssetByName_ReturnValue_3) == 0x000280, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_GetTextFromAssetByName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000290, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_GetTextFromAssetByName_ReturnValue_4) == 0x0002A8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_GetTextFromAssetByName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_BooleanOR_ReturnValue) == 0x0002B8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0002C0, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_BooleanOR_ReturnValue_1) == 0x0002D8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_GetTextFromAssetByName_ReturnValue_5) == 0x0002E0, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_GetTextFromAssetByName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0002F0, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_5) == 0x000308, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Greater_IntInt_ReturnValue) == 0x000348, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeArray_Array_1) == 0x000350, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Format_ReturnValue_1) == 0x000360, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_6) == 0x000378, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeArray_Array_2) == 0x0003B8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0003C8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Format_ReturnValue_2) == 0x0003D0, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_7) == 0x0003E8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000428, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeArray_Array_3) == 0x000430, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Format_ReturnValue_3) == 0x000440, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_GetTextFromAssetByName_ReturnValue_6) == 0x000458, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_GetTextFromAssetByName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_SwitchEnum_CmpSuccess) == 0x000468, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000470, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeStruct_FormatArgumentData_8) == 0x000488, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_MakeArray_Array_4) == 0x0004C8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, CallFunc_Format_ReturnValue_4) == 0x0004D8, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message, K2Node_SwitchEnum_CmpSuccess_1) == 0x0004F0, "Member 'WBP_CharaSelect_C_Init_Cur_Character_Ban_System_Message::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.SetButtonFocus
// 0x0018 (0x0018 - 0x0000)
struct WBP_CharaSelect_C_SetButtonFocus final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87BD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_87BE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CharaSelect_C_SetButtonFocus) == 0x000008, "Wrong alignment on WBP_CharaSelect_C_SetButtonFocus");
static_assert(sizeof(WBP_CharaSelect_C_SetButtonFocus) == 0x000018, "Wrong size on WBP_CharaSelect_C_SetButtonFocus");
static_assert(offsetof(WBP_CharaSelect_C_SetButtonFocus, Temp_bool_Variable) == 0x000000, "Member 'WBP_CharaSelect_C_SetButtonFocus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_SetButtonFocus, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WBP_CharaSelect_C_SetButtonFocus::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_SetButtonFocus, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_CharaSelect_C_SetButtonFocus::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CharaSelect_C_SetButtonFocus, K2Node_Select_Default) == 0x000010, "Member 'WBP_CharaSelect_C_SetButtonFocus::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CharaSelect.WBP_CharaSelect_C.IsinputEnabled
// 0x0001 (0x0001 - 0x0000)
struct WBP_CharaSelect_C_IsinputEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CharaSelect_C_IsinputEnabled) == 0x000001, "Wrong alignment on WBP_CharaSelect_C_IsinputEnabled");
static_assert(sizeof(WBP_CharaSelect_C_IsinputEnabled) == 0x000001, "Wrong size on WBP_CharaSelect_C_IsinputEnabled");
static_assert(offsetof(WBP_CharaSelect_C_IsinputEnabled, Enabled) == 0x000000, "Member 'WBP_CharaSelect_C_IsinputEnabled::Enabled' has a wrong offset!");

}

