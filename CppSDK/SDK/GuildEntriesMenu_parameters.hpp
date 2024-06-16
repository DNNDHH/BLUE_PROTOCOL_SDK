#pragma once

 

// Package: GuildEntriesMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildEntriesMenu.GuildEntriesMenu_C.ExecuteUbergraph_GuildEntriesMenu
// 0x0DE8 (0x0DE8 - 0x0000)
struct GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6ACB[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_ComponentBoundEvent_Item;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildEntryListItem_C*                  K2Node_DynamicCast_AsGuild_Entry_List_Item;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ACC[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_Get_Guild_Comp_ReturnValue;               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData;                       // 0x0048(0x00E0)()
	bool                                          CallFunc_IsGuildPromoter_ReturnValue;              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ACD[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_Get_Guild_Comp_ReturnValue_1;             // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_1;                     // 0x0138(0x00E0)()
	bool                                          CallFunc_IsGuildPromoter_ReturnValue_1;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ACE[0x5];                                     // 0x021B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_Get_Guild_Comp_ReturnValue_2;             // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0228(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ACF[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0230(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0240(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0258(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AD0[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_1;            // 0x0260(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD1[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0278(0x0018)()
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0290(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AD2[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_2;            // 0x0298(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD3[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x02B0(0x0018)()
	class USBPlayerGuildComponent*                CallFunc_Get_Guild_Comp_ReturnValue_3;             // 0x02C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Request_GetEntryList_ReturnValue;         // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD4[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x02E0(0x0010)(ZeroConstructor, NoDestructor)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful_1;               // 0x02F8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD5[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData_1;  // 0x0300(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x06F8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AD6[0x4];                                     // 0x06FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0700(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_3;            // 0x0710(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD7[0x7];                                     // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0728(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0740(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD8[0x7];                                     // 0x0741(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0748(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0759(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x075A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AD9[0x5];                                     // 0x075B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_2;                     // 0x0760(0x00E0)()
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0840(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0841(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ADA[0x2];                                     // 0x0842(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0844(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0854(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6ADB[0x4];                                     // 0x0864(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       CallFunc_Create_ReturnValue;                       // 0x0868(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_Get_Guild_Comp_ReturnValue_4;             // 0x0870(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildPromoter_ReturnValue_2;            // 0x0878(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PSonlyDiffCheck_PSOnlyDiff;               // 0x0879(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ADC[0x6];                                     // 0x087A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0880(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0888(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0890(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ADD[0x7];                                     // 0x0891(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData_3;                     // 0x0898(0x00E0)()
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_1;           // 0x0978(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0980(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ADE[0x7];                                     // 0x0981(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           K2Node_CustomEvent_PlayerProfileDetailMenuData;    // 0x0988(0x03F8)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0D80(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ADF[0x4];                                     // 0x0D84(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue_4;            // 0x0D88(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0D98(0x0018)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0DB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0DB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0DC0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AE0[0x7];                                     // 0x0DC1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue_2;           // 0x0DC8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32 RetCode)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0DD0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0DE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu");
static_assert(sizeof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu) == 0x000DE8, "Wrong size on GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, EntryPoint) == 0x000000, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_ComponentBoundEvent_Item) == 0x000028, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_DynamicCast_AsGuild_Entry_List_Item) == 0x000030, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_DynamicCast_AsGuild_Entry_List_Item' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Get_Guild_Comp_ReturnValue) == 0x000040, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Get_Guild_Comp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetEntry_EntryData) == 0x000048, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetEntry_EntryData' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsGuildPromoter_ReturnValue) == 0x000128, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsGuildPromoter_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Get_Guild_Comp_ReturnValue_1) == 0x000130, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Get_Guild_Comp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetEntry_EntryData_1) == 0x000138, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetEntry_EntryData_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsGuildPromoter_ReturnValue_1) == 0x000218, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsGuildPromoter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsValid_ReturnValue_1) == 0x000219, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsValid_ReturnValue_2) == 0x00021A, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Get_Guild_Comp_ReturnValue_2) == 0x000220, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Get_Guild_Comp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_RetCode_4) == 0x000228, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00022C, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x000230, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000240, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_RetCode_3) == 0x000258, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetSBRetMessage_ReturnValue_1) == 0x000260, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetSBRetMessage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000270, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000278, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_RetCode_2) == 0x000290, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetSBRetMessage_ReturnValue_2) == 0x000298, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetSBRetMessage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0002A8, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0002B0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Get_Guild_Comp_ReturnValue_3) == 0x0002C8, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Get_Guild_Comp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Request_GetEntryList_ReturnValue) == 0x0002D0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Request_GetEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x0002D8, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002E0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetConcernedList_ReturnValue) == 0x0002F0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_bWasSuccessful_1) == 0x0002F8, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_bWasSuccessful_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData_1) == 0x000300, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_RetCode_1) == 0x0006F8, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetPlayerId_ReturnValue) == 0x000700, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetSBRetMessage_ReturnValue_3) == 0x000710, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetSBRetMessage_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000720, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000728, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000740, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetCharacterId_ReturnValue) == 0x000748, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000758, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsValid_ReturnValue_3) == 0x000759, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_BooleanAND_ReturnValue) == 0x00075A, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetEntry_EntryData_2) == 0x000760, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetEntry_EntryData_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsValid_ReturnValue_4) == 0x000840, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, Temp_bool_Has_Been_Initd_Variable) == 0x000841, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000844, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000854, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Create_ReturnValue) == 0x000868, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Get_Guild_Comp_ReturnValue_4) == 0x000870, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Get_Guild_Comp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_IsGuildPromoter_ReturnValue_2) == 0x000878, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_IsGuildPromoter_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_PSonlyDiffCheck_PSOnlyDiff) == 0x000879, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_PSonlyDiffCheck_PSOnlyDiff' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000880, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000888, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_DynamicCast_bSuccess_1) == 0x000890, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetEntry_EntryData_3) == 0x000898, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetEntry_EntryData_3' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetConcernedList_ReturnValue_1) == 0x000978, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetConcernedList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_bWasSuccessful) == 0x000980, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_PlayerProfileDetailMenuData) == 0x000988, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CustomEvent_RetCode) == 0x000D80, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetSBRetMessage_ReturnValue_4) == 0x000D88, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetSBRetMessage_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000D98, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x000DB0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000DB8, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_DynamicCast_bSuccess_2) == 0x000DC0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, CallFunc_GetConcernedList_ReturnValue_2) == 0x000DC8, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::CallFunc_GetConcernedList_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000DD0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu, Temp_bool_IsClosed_Variable) == 0x000DE0, "Member 'GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu::Temp_bool_IsClosed_Variable' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.OpenReportUI_Event
// 0x0408 (0x0408 - 0x0000)
struct GuildEntriesMenu_C_OpenReportUI_Event final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AE1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_OpenReportUI_Event) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_OpenReportUI_Event");
static_assert(sizeof(GuildEntriesMenu_C_OpenReportUI_Event) == 0x000408, "Wrong size on GuildEntriesMenu_C_OpenReportUI_Event");
static_assert(offsetof(GuildEntriesMenu_C_OpenReportUI_Event, bWasSuccessful) == 0x000000, "Member 'GuildEntriesMenu_C_OpenReportUI_Event::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_OpenReportUI_Event, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildEntriesMenu_C_OpenReportUI_Event::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_OpenReportUI_Event, RetCode) == 0x000400, "Member 'GuildEntriesMenu_C_OpenReportUI_Event::RetCode' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.OnConpletedGetProfile
// 0x0408 (0x0408 - 0x0000)
struct GuildEntriesMenu_C_OnConpletedGetProfile final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AE2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           PlayerProfileDetailMenuData;                       // 0x0008(0x03F8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         RetCode;                                           // 0x0400(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_OnConpletedGetProfile) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_OnConpletedGetProfile");
static_assert(sizeof(GuildEntriesMenu_C_OnConpletedGetProfile) == 0x000408, "Wrong size on GuildEntriesMenu_C_OnConpletedGetProfile");
static_assert(offsetof(GuildEntriesMenu_C_OnConpletedGetProfile, bWasSuccessful) == 0x000000, "Member 'GuildEntriesMenu_C_OnConpletedGetProfile::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_OnConpletedGetProfile, PlayerProfileDetailMenuData) == 0x000008, "Member 'GuildEntriesMenu_C_OnConpletedGetProfile::PlayerProfileDetailMenuData' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_OnConpletedGetProfile, RetCode) == 0x000400, "Member 'GuildEntriesMenu_C_OnConpletedGetProfile::RetCode' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.On Update Guild Member List
// 0x0004 (0x0004 - 0x0000)
struct GuildEntriesMenu_C_On_Update_Guild_Member_List final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_On_Update_Guild_Member_List) == 0x000004, "Wrong alignment on GuildEntriesMenu_C_On_Update_Guild_Member_List");
static_assert(sizeof(GuildEntriesMenu_C_On_Update_Guild_Member_List) == 0x000004, "Wrong size on GuildEntriesMenu_C_On_Update_Guild_Member_List");
static_assert(offsetof(GuildEntriesMenu_C_On_Update_Guild_Member_List, RetCode) == 0x000000, "Member 'GuildEntriesMenu_C_On_Update_Guild_Member_List::RetCode' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.OnMember Denied
// 0x0004 (0x0004 - 0x0000)
struct GuildEntriesMenu_C_OnMember_Denied final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_OnMember_Denied) == 0x000004, "Wrong alignment on GuildEntriesMenu_C_OnMember_Denied");
static_assert(sizeof(GuildEntriesMenu_C_OnMember_Denied) == 0x000004, "Wrong size on GuildEntriesMenu_C_OnMember_Denied");
static_assert(offsetof(GuildEntriesMenu_C_OnMember_Denied, RetCode) == 0x000000, "Member 'GuildEntriesMenu_C_OnMember_Denied::RetCode' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.OnMemberAccepted
// 0x0004 (0x0004 - 0x0000)
struct GuildEntriesMenu_C_OnMemberAccepted final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_OnMemberAccepted) == 0x000004, "Wrong alignment on GuildEntriesMenu_C_OnMemberAccepted");
static_assert(sizeof(GuildEntriesMenu_C_OnMemberAccepted) == 0x000004, "Wrong size on GuildEntriesMenu_C_OnMemberAccepted");
static_assert(offsetof(GuildEntriesMenu_C_OnMemberAccepted, RetCode) == 0x000000, "Member 'GuildEntriesMenu_C_OnMemberAccepted::RetCode' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature final
{
public:
	class UObject*                                Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");
static_assert(sizeof(GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature) == 0x000008, "Wrong size on GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");
static_assert(offsetof(GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature, Item) == 0x000000, "Member 'GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature::Item' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.GenerateEntries
// 0x0138 (0x0138 - 0x0000)
struct GuildEntriesMenu_C_GenerateEntries final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AE3[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildEntryListItem_C*                  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_Get_Guild_Comp_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0020(0x0010)(ReferenceParm)
	struct FGuildEntryData                        CallFunc_Array_Get_Item;                           // 0x0030(0x00E0)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AE4[0x6];                                     // 0x011A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0120(0x0018)()
};
static_assert(alignof(GuildEntriesMenu_C_GenerateEntries) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_GenerateEntries");
static_assert(sizeof(GuildEntriesMenu_C_GenerateEntries) == 0x000138, "Wrong size on GuildEntriesMenu_C_GenerateEntries");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, Temp_int_Array_Index_Variable) == 0x000000, "Member 'GuildEntriesMenu_C_GenerateEntries::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GuildEntriesMenu_C_GenerateEntries::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Create_ReturnValue) == 0x000010, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Get_Guild_Comp_ReturnValue) == 0x000018, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Get_Guild_Comp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_GetGuildEntryList_ReturnValue) == 0x000020, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Array_Get_Item) == 0x000030, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Array_Length_ReturnValue_1) == 0x000114, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Less_IntInt_ReturnValue) == 0x000118, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Greater_IntInt_ReturnValue) == 0x000119, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_GenerateEntries, CallFunc_Conv_IntToText_ReturnValue) == 0x000120, "Member 'GuildEntriesMenu_C_GenerateEntries::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.Get Guild Comp
// 0x0018 (0x0018 - 0x0000)
struct GuildEntriesMenu_C_Get_Guild_Comp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_Get_Guild_Comp) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_Get_Guild_Comp");
static_assert(sizeof(GuildEntriesMenu_C_Get_Guild_Comp) == 0x000018, "Wrong size on GuildEntriesMenu_C_Get_Guild_Comp");
static_assert(offsetof(GuildEntriesMenu_C_Get_Guild_Comp, ReturnValue) == 0x000000, "Member 'GuildEntriesMenu_C_Get_Guild_Comp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_Get_Guild_Comp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildEntriesMenu_C_Get_Guild_Comp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_Get_Guild_Comp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildEntriesMenu_C_Get_Guild_Comp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.PSonlyDiffCheck
// 0x0120 (0x0120 - 0x0000)
struct GuildEntriesMenu_C_PSonlyDiffCheck final
{
public:
	bool                                          PSOnlyDiff;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Ret;                                               // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AE5[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AE6[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0018(0x0020)()
	struct FGuildEntryData                        CallFunc_GetEntry_EntryData;                       // 0x0038(0x00E0)()
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildEntriesMenu_C_PSonlyDiffCheck) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_PSonlyDiffCheck");
static_assert(sizeof(GuildEntriesMenu_C_PSonlyDiffCheck) == 0x000120, "Wrong size on GuildEntriesMenu_C_PSonlyDiffCheck");
static_assert(offsetof(GuildEntriesMenu_C_PSonlyDiffCheck, PSOnlyDiff) == 0x000000, "Member 'GuildEntriesMenu_C_PSonlyDiffCheck::PSOnlyDiff' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_PSonlyDiffCheck, Ret) == 0x000001, "Member 'GuildEntriesMenu_C_PSonlyDiffCheck::Ret' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_PSonlyDiffCheck, CallFunc_GetSBPlayerState_ReturnValue) == 0x000008, "Member 'GuildEntriesMenu_C_PSonlyDiffCheck::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_PSonlyDiffCheck, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GuildEntriesMenu_C_PSonlyDiffCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_PSonlyDiffCheck, CallFunc_GetPlatformInfo_ReturnValue) == 0x000018, "Member 'GuildEntriesMenu_C_PSonlyDiffCheck::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_PSonlyDiffCheck, CallFunc_GetEntry_EntryData) == 0x000038, "Member 'GuildEntriesMenu_C_PSonlyDiffCheck::CallFunc_GetEntry_EntryData' has a wrong offset!");
static_assert(offsetof(GuildEntriesMenu_C_PSonlyDiffCheck, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000118, "Member 'GuildEntriesMenu_C_PSonlyDiffCheck::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.CreateSwapBlocker
// 0x0008 (0x0008 - 0x0000)
struct GuildEntriesMenu_C_CreateSwapBlocker final
{
public:
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntriesMenu_C_CreateSwapBlocker) == 0x000008, "Wrong alignment on GuildEntriesMenu_C_CreateSwapBlocker");
static_assert(sizeof(GuildEntriesMenu_C_CreateSwapBlocker) == 0x000008, "Wrong size on GuildEntriesMenu_C_CreateSwapBlocker");
static_assert(offsetof(GuildEntriesMenu_C_CreateSwapBlocker, CallFunc_Create_ReturnValue) == 0x000000, "Member 'GuildEntriesMenu_C_CreateSwapBlocker::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function GuildEntriesMenu.GuildEntriesMenu_C.DeleteSwapBlocker
// 0x0001 (0x0001 - 0x0000)
struct GuildEntriesMenu_C_DeleteSwapBlocker final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildEntriesMenu_C_DeleteSwapBlocker) == 0x000001, "Wrong alignment on GuildEntriesMenu_C_DeleteSwapBlocker");
static_assert(sizeof(GuildEntriesMenu_C_DeleteSwapBlocker) == 0x000001, "Wrong size on GuildEntriesMenu_C_DeleteSwapBlocker");
static_assert(offsetof(GuildEntriesMenu_C_DeleteSwapBlocker, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GuildEntriesMenu_C_DeleteSwapBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

