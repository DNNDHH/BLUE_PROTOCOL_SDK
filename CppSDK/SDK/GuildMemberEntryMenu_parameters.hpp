#pragma once

 

// Package: GuildMemberEntryMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.ExecuteUbergraph_GuildMemberEntryMenu
// 0x1380 (0x1380 - 0x0000)
struct GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60C9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData;                       // 0x0008(0x00E0)()
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00F8(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60CA[0x1];                                     // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0114(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60CB[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0130(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0134(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_60CC[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0148(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60CD[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0160(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0178(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x017C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60CE[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0188(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0198(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60CF[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x01B8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01C8(0x0018)()
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_3;            // 0x01E0(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60D0[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x01F8(0x0018)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetEntryList_ReturnValue;         // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D1[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildEntryListItem_C*                  K2Node_DynamicCast_AsGuild_Entry_List_Item;        // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D2[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_1;                     // 0x0238(0x00E0)()
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D3[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0320(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0330(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x0338(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D4[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData_1;  // 0x0340(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0738(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_4;            // 0x073C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x074C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D5[0x3];                                     // 0x074D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0750(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0760(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D6[0x7];                                     // 0x0761(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0768(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0780(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D7[0x7];                                     // 0x0781(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x0788(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue;              // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0791(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0792(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0793(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D8[0x4];                                     // 0x0794(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0798(0x0018)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_3;               // 0x07B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x07B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue_1;            // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60D9[0x7];                                     // 0x07C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x07D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x07E8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0828(0x0010)(ReferenceParm)
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_2;                     // 0x0838(0x00E0)()
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_4;               // 0x0918(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0920(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue_2;            // 0x0930(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60DA[0x7];                                     // 0x0931(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0938(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0950(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DB[0x7];                                     // 0x0951(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0958(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0970(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60DC[0x7];                                     // 0x0971(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_5;               // 0x0978(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_3;                     // 0x0980(0x00E0)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0A60(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DD[0x7];                                     // 0x0A61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0A68(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0A78(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x0A90(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x0AA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60DE[0x7];                                     // 0x0AA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0AB0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0AB8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60DF[0x7];                                     // 0x0AB9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_6;               // 0x0AC0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_4;                     // 0x0AC8(0x00E0)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0BA8(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC_1;         // 0x0BC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict_1;    // 0x0BC1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E0[0x6];                                     // 0x0BC2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue_2;                     // 0x0BC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0BD0(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0BE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_5;                     // 0x0BE8(0x00E0)()
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0CC8(0x0020)()
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0CE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E1[0x7];                                     // 0x0CE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0CF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0CF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0D00(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E2[0x7];                                     // 0x0D01(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0D08(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_6;                     // 0x0D10(0x00E0)()
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0DF0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E3[0x7];                                     // 0x0DF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0DF8(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x11F0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60E4[0x4];                                     // 0x11F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x11F8(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x1208(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x1220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x1228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x1230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E5[0x7];                                     // 0x1231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_2;           // 0x1238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x1240(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x1250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E6[0x7];                                     // 0x1251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x1258(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x1270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x1280(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x1298(0x0040)(HasGetValueTypeHash)
	TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x12D8(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x12E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x12F8(0x0018)()
	ESlateVisibility                              K2Node_CustomEvent_InVisibility;                   // 0x1310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60E7[0x7];                                     // 0x1311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x1318(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60E8[0x3];                                     // 0x1329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_8;            // 0x132C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_60E9[0x4];                                     // 0x133C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x1340(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x1350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60EA[0x7];                                     // 0x1351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x1358(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_9;            // 0x1360(0x0010)(ZeroConstructor, NoDestructor)
	class UGuildMemberInfoMenu_C*                 K2Node_DynamicCast_AsGuild_Member_Info_Menu;       // 0x1370(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x1378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu) == 0x000008, "Wrong alignment on GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu");
static_assert(sizeof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu) == 0x001380, "Wrong size on GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, EntryPoint) == 0x000000, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEntry_EntryData) == 0x000008, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEntry_EntryData' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate) == 0x0000E8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x0000F8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000110, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000111, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsValid_ReturnValue) == 0x000112, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000114, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsValid_ReturnValue_1) == 0x000124, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetGuildComp_ReturnValue) == 0x000128, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_RetCode_4) == 0x000130, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000134, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x000148, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000158, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000160, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_RetCode_3) == 0x000178, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_RetCode_2) == 0x00017C, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000180, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000188, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000198, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0001B0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x0001B8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001C8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001E0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x0001F0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetRestrictText_ReturnValue) == 0x0001F8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetGuildComp_ReturnValue_1) == 0x000210, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Request_GetEntryList_ReturnValue) == 0x000218, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Request_GetEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_ComponentBoundEvent_Item) == 0x000220, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_AsGuild_Entry_List_Item) == 0x000228, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_AsGuild_Entry_List_Item' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_bSuccess) == 0x000230, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEntry_EntryData_1) == 0x000238, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEntry_EntryData_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsValid_ReturnValue_2) == 0x000318, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Create_ReturnValue) == 0x000320, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000328, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetConcernedList_ReturnValue) == 0x000330, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_bWasSuccessful_1) == 0x000338, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData_1) == 0x000340, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_RetCode_1) == 0x000738, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x00073C, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00074C, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000750, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_BooleanAND_ReturnValue) == 0x000760, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000768, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_BooleanAND_ReturnValue_1) == 0x000780, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetGuildComp_ReturnValue_2) == 0x000788, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsGuildPromoter_ReturnValue) == 0x000790, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsGuildPromoter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsValid_ReturnValue_3) == 0x000791, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, Temp_bool_Variable) == 0x000792, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsValid_ReturnValue_4) == 0x000793, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_Select_Default) == 0x000798, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetGuildComp_ReturnValue_3) == 0x0007B0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetGuildComp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_TextToString_ReturnValue) == 0x0007B8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsGuildPromoter_ReturnValue_1) == 0x0007C8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsGuildPromoter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_5) == 0x0007D0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_MakeStruct_FormatArgumentData) == 0x0007E8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_MakeArray_Array) == 0x000828, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEntry_EntryData_2) == 0x000838, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEntry_EntryData_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetGuildComp_ReturnValue_4) == 0x000918, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetGuildComp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetTextFromAsset_ReturnValue) == 0x000920, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_IsGuildPromoter_ReturnValue_2) == 0x000930, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_IsGuildPromoter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000938, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_Result_1) == 0x000950, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Format_ReturnValue) == 0x000958, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000970, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetGuildComp_ReturnValue_5) == 0x000978, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetGuildComp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEntry_EntryData_3) == 0x000980, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEntry_EntryData_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000A60, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000A68, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000A78, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetRestrictText_ReturnValue_1) == 0x000A90, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_Result) == 0x000AA8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Create_ReturnValue_1) == 0x000AB0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000AB8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetGuildComp_ReturnValue_6) == 0x000AC0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetGuildComp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEntry_EntryData_4) == 0x000AC8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEntry_EntryData_4' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000BA8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_CheckXboxPrivacyTypePure_IsUGC_1) == 0x000BC0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_CheckXboxPrivacyTypePure_IsUGC_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_CheckXboxPrivacyTypePure_IsRestrict_1) == 0x000BC1, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_CheckXboxPrivacyTypePure_IsRestrict_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Create_ReturnValue_2) == 0x000BC8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000BD0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetSBPlayerState_ReturnValue) == 0x000BE0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEntry_EntryData_5) == 0x000BE8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEntry_EntryData_5' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetPlatformInfo_ReturnValue) == 0x000CC8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000CE8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000CF0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000CF8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_bSuccess_1) == 0x000D00, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetConcernedList_ReturnValue_1) == 0x000D08, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEntry_EntryData_6) == 0x000D10, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEntry_EntryData_6' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_bWasSuccessful) == 0x000DF0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000DF8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_RetCode) == 0x0011F0, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x0011F8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_9) == 0x001208, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x001220, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x001228, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_bSuccess_2) == 0x001230, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetConcernedList_ReturnValue_2) == 0x001238, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetConcernedList_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x001240, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, Temp_bool_Variable_1) == 0x001250, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_Select_Default_1) == 0x001258, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_TextToString_ReturnValue_1) == 0x001270, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Conv_StringToText_ReturnValue_10) == 0x001280, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x001298, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x0012D8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_MakeArray_Array_1) == 0x0012E8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_Format_ReturnValue_1) == 0x0012F8, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CustomEvent_InVisibility) == 0x001310, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CustomEvent_InVisibility' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x001318, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x001328, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x00132C, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x001340, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x001350, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, CallFunc_GetParentWidget_Parent) == 0x001358, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x001360, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_AsGuild_Member_Info_Menu) == 0x001370, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_AsGuild_Member_Info_Menu' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu, K2Node_DynamicCast_bSuccess_3) == 0x001378, "Member 'GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_PlayerReportChangeVisibility
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility) == 0x000001, "Wrong alignment on GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility");
static_assert(sizeof(GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility) == 0x000001, "Wrong size on GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility");
static_assert(offsetof(GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility, InVisibility) == 0x000000, "Member 'GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility::InVisibility' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OpenReportUI_Event
// 0x0408 (0x0408 - 0x0000)
struct GuildMemberEntryMenu_C_OpenReportUI_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60EB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_OpenReportUI_Event) == 0x000008, "Wrong alignment on GuildMemberEntryMenu_C_OpenReportUI_Event");
static_assert(sizeof(GuildMemberEntryMenu_C_OpenReportUI_Event) == 0x000408, "Wrong size on GuildMemberEntryMenu_C_OpenReportUI_Event");
static_assert(offsetof(GuildMemberEntryMenu_C_OpenReportUI_Event, bWasSuccessful) == 0x000000, "Member 'GuildMemberEntryMenu_C_OpenReportUI_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_OpenReportUI_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildMemberEntryMenu_C_OpenReportUI_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_OpenReportUI_Event, RetCode) == 0x000400, "Member 'GuildMemberEntryMenu_C_OpenReportUI_Event::RetCode' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryAccept
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberEntryMenu_C_OnEntryAccept final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_OnEntryAccept) == 0x000001, "Wrong alignment on GuildMemberEntryMenu_C_OnEntryAccept");
static_assert(sizeof(GuildMemberEntryMenu_C_OnEntryAccept) == 0x000001, "Wrong size on GuildMemberEntryMenu_C_OnEntryAccept");
static_assert(offsetof(GuildMemberEntryMenu_C_OnEntryAccept, Result) == 0x000000, "Member 'GuildMemberEntryMenu_C_OnEntryAccept::Result' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryDeny
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberEntryMenu_C_OnEntryDeny final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_OnEntryDeny) == 0x000001, "Wrong alignment on GuildMemberEntryMenu_C_OnEntryDeny");
static_assert(sizeof(GuildMemberEntryMenu_C_OnEntryDeny) == 0x000001, "Wrong size on GuildMemberEntryMenu_C_OnEntryDeny");
static_assert(offsetof(GuildMemberEntryMenu_C_OnEntryDeny, Result) == 0x000000, "Member 'GuildMemberEntryMenu_C_OnEntryDeny::Result' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompleteOnIsGetPlayerProfileDetailMenuDataDelegate
// 0x0408 (0x0408 - 0x0000)
struct GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60EC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate) == 0x000008, "Wrong alignment on GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate");
static_assert(sizeof(GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate) == 0x000408, "Wrong size on GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate");
static_assert(offsetof(GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate, bWasSuccessful) == 0x000000, "Member 'GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate, RetCode) == 0x000400, "Member 'GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate::RetCode' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong alignment on GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");
static_assert(sizeof(GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong size on GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");
static_assert(offsetof(GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature, Item) == 0x000000, "Member 'GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature::Item' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedGGetEntryList
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberEntryMenu_C_CompletedGGetEntryList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_CompletedGGetEntryList) == 0x000004, "Wrong alignment on GuildMemberEntryMenu_C_CompletedGGetEntryList");
static_assert(sizeof(GuildMemberEntryMenu_C_CompletedGGetEntryList) == 0x000004, "Wrong size on GuildMemberEntryMenu_C_CompletedGGetEntryList");
static_assert(offsetof(GuildMemberEntryMenu_C_CompletedGGetEntryList, RetCode) == 0x000000, "Member 'GuildMemberEntryMenu_C_CompletedGGetEntryList::RetCode' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedDenyMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberEntryMenu_C_CompletedDenyMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_CompletedDenyMember) == 0x000004, "Wrong alignment on GuildMemberEntryMenu_C_CompletedDenyMember");
static_assert(sizeof(GuildMemberEntryMenu_C_CompletedDenyMember) == 0x000004, "Wrong size on GuildMemberEntryMenu_C_CompletedDenyMember");
static_assert(offsetof(GuildMemberEntryMenu_C_CompletedDenyMember, RetCode) == 0x000000, "Member 'GuildMemberEntryMenu_C_CompletedDenyMember::RetCode' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedAcceptMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberEntryMenu_C_CompletedAcceptMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_CompletedAcceptMember) == 0x000004, "Wrong alignment on GuildMemberEntryMenu_C_CompletedAcceptMember");
static_assert(sizeof(GuildMemberEntryMenu_C_CompletedAcceptMember) == 0x000004, "Wrong size on GuildMemberEntryMenu_C_CompletedAcceptMember");
static_assert(offsetof(GuildMemberEntryMenu_C_CompletedAcceptMember, RetCode) == 0x000000, "Member 'GuildMemberEntryMenu_C_CompletedAcceptMember::RetCode' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildMemberEntryMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildMemberEntryMenu_C_GetGuildComp");
static_assert(sizeof(GuildMemberEntryMenu_C_GetGuildComp) == 0x000018, "Wrong size on GuildMemberEntryMenu_C_GetGuildComp");
static_assert(offsetof(GuildMemberEntryMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildMemberEntryMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMemberEntryMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMemberEntryMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GenerateEntries
// 0x0138 (0x0138 - 0x0000)
struct GuildMemberEntryMenu_C_GenerateEntries final
{
public:
	TArray<struct FGuildEntryData>                TmpEntries;                                        // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60ED[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildEntryListItem_C*                  CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60EE[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_Array_Get_Item;                           // 0x0048(0x00E0)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60EF[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberEntryMenu_C_GenerateEntries) == 0x000008, "Wrong alignment on GuildMemberEntryMenu_C_GenerateEntries");
static_assert(sizeof(GuildMemberEntryMenu_C_GenerateEntries) == 0x000138, "Wrong size on GuildMemberEntryMenu_C_GenerateEntries");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, TmpEntries) == 0x000000, "Member 'GuildMemberEntryMenu_C_GenerateEntries::TmpEntries' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GuildMemberEntryMenu_C_GenerateEntries::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'GuildMemberEntryMenu_C_GenerateEntries::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_Create_ReturnValue) == 0x000020, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_GetGuildComp_ReturnValue) == 0x000028, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_GetGuildEntryList_ReturnValue) == 0x000030, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_Array_Get_Item) == 0x000048, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_Greater_IntInt_ReturnValue) == 0x000128, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_Array_Length_ReturnValue_1) == 0x00012C, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMemberEntryMenu_C_GenerateEntries, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'GuildMemberEntryMenu_C_GenerateEntries::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetEntryCount
// 0x0004 (0x0004 - 0x0000)
struct GuildMemberEntryMenu_C_GetEntryCount final
{
public:
	int32                                         EntryCount;                                        // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_GetEntryCount) == 0x000004, "Wrong alignment on GuildMemberEntryMenu_C_GetEntryCount");
static_assert(sizeof(GuildMemberEntryMenu_C_GetEntryCount) == 0x000004, "Wrong size on GuildMemberEntryMenu_C_GetEntryCount");
static_assert(offsetof(GuildMemberEntryMenu_C_GetEntryCount, EntryCount) == 0x000000, "Member 'GuildMemberEntryMenu_C_GetEntryCount::EntryCount' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CreateSwapBlocker
// 0x0008 (0x0008 - 0x0000)
struct GuildMemberEntryMenu_C_CreateSwapBlocker final
{
public:
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMemberEntryMenu_C_CreateSwapBlocker) == 0x000008, "Wrong alignment on GuildMemberEntryMenu_C_CreateSwapBlocker");
static_assert(sizeof(GuildMemberEntryMenu_C_CreateSwapBlocker) == 0x000008, "Wrong size on GuildMemberEntryMenu_C_CreateSwapBlocker");
static_assert(offsetof(GuildMemberEntryMenu_C_CreateSwapBlocker, CallFunc_Create_ReturnValue) == 0x000000, "Member 'GuildMemberEntryMenu_C_CreateSwapBlocker::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.DeleteSwapBlocker
// 0x0001 (0x0001 - 0x0000)
struct GuildMemberEntryMenu_C_DeleteSwapBlocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMemberEntryMenu_C_DeleteSwapBlocker) == 0x000001, "Wrong alignment on GuildMemberEntryMenu_C_DeleteSwapBlocker");
static_assert(sizeof(GuildMemberEntryMenu_C_DeleteSwapBlocker) == 0x000001, "Wrong size on GuildMemberEntryMenu_C_DeleteSwapBlocker");
static_assert(offsetof(GuildMemberEntryMenu_C_DeleteSwapBlocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GuildMemberEntryMenu_C_DeleteSwapBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

