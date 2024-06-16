#pragma once

 

// Package: GuildMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GuildMenu.GuildMenu_C.ExecuteUbergraph_GuildMenu
// 0x01F8 (0x01F8 - 0x0000)
struct GuildMenu_C_ExecuteUbergraph_GuildMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInViewport_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F97[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetParentWidget_Parent;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_C*                         K2Node_DynamicCast_AsCommand_Menu;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F98[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPageNum_Page;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGuildComp_IsValid;                     // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F99[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9A[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPageNum_Page_1;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ButtonId;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9B[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_7;                      // 0x0050(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9C[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0058(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	int32                                         K2Node_CustomEvent_PageIndex;                      // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8F9D[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetPageNum_Page_2;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGuildComp_IsValid_1;                   // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9E[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate;              // 0x00A8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8F9F[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MainPage_1;                           // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage_1;                            // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00E4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_6;                      // 0x00F4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAccept;                       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA0[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InEntryId;                      // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA1[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_4;            // 0x0114(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_Event_MainPage;                             // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FA2[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Message;                              // 0x0130(0x0018)(ConstParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA3[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_5;                      // 0x0150(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA4[0x3];                                     // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_KickedGuildName;                // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_5;            // 0x0168(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_RetCode_4;                      // 0x0178(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& KickedGuildName)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x017C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA5[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_3;                      // 0x0190(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA6[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_7;            // 0x0198(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 RetCode, bool IsAccept, const class FString& InEntryId)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGuildComp_IsValid_2;                   // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA7[0x6];                                     // 0x01BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_2;               // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue_1;              // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA8[0x2];                                     // 0x01CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x01CC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FA9[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x01D4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode)>                K2Node_CreateDelegate_OutputDelegate_9;            // 0x01D8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FAA[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x01EC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMenu_C_ExecuteUbergraph_GuildMenu) == 0x000008, "Wrong alignment on GuildMenu_C_ExecuteUbergraph_GuildMenu");
static_assert(sizeof(GuildMenu_C_ExecuteUbergraph_GuildMenu) == 0x0001F8, "Wrong size on GuildMenu_C_ExecuteUbergraph_GuildMenu");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, EntryPoint) == 0x000000, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_IsInViewport_ReturnValue) == 0x000004, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_IsInViewport_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetParentWidget_Parent) == 0x000008, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetParentWidget_Parent' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_DynamicCast_AsCommand_Menu) == 0x000010, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_DynamicCast_AsCommand_Menu' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_Array_Get_Item) == 0x000020, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetPageNum_Page) == 0x000030, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetPageNum_Page' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000034, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetGuildComp_IsValid) == 0x000035, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetGuildComp_IsValid' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetGuildComp_ReturnValue) == 0x000038, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_IsGuildMember_ReturnValue) == 0x000040, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetPageNum_Page_1) == 0x000044, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetPageNum_Page_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_ComponentBoundEvent_ButtonId) == 0x000048, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_ComponentBoundEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, Temp_bool_Has_Been_Initd_Variable) == 0x00004C, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode_7) == 0x000050, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode_7' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000054, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetSBRetMessage_ReturnValue) == 0x000058, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_PageIndex) == 0x000080, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_PageIndex' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_Event_InBookMarkType) == 0x000088, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetPageNum_Page_2) == 0x000098, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetPageNum_Page_2' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetGuildComp_IsValid_1) == 0x00009C, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetGuildComp_IsValid_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetGuildComp_ReturnValue_1) == 0x0000A0, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate) == 0x0000A8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_SwitchInteger_CmpSuccess) == 0x0000D8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x0000D9, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_Event_MainPage_1) == 0x0000DC, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_Event_MainPage_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_Event_SubPage_1) == 0x0000E0, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_Event_SubPage_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000E4, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode_6) == 0x0000F4, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode_6' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_IsAccept) == 0x0000F8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_IsAccept' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_InEntryId) == 0x000100, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_InEntryId' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000110, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000114, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_Event_MainPage) == 0x000124, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_Event_SubPage) == 0x000128, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_Event_Message) == 0x000130, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_Event_Message' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_Add_IntInt_ReturnValue) == 0x000148, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_SwitchInteger_CmpSuccess_1) == 0x00014C, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode_5) == 0x000150, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode_5' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000154, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_KickedGuildName) == 0x000158, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_KickedGuildName' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_5) == 0x000168, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode_4) == 0x000178, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode_4' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_6) == 0x00017C, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00018C, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode_3) == 0x000190, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode_3' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue_4) == 0x000194, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000195, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_7) == 0x000198, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_8) == 0x0001A8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, Temp_bool_IsClosed_Variable) == 0x0001B8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetGuildComp_IsValid_2) == 0x0001B9, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetGuildComp_IsValid_2' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_GetGuildComp_ReturnValue_2) == 0x0001C0, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_GetGuildComp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_IsGuildMember_ReturnValue_1) == 0x0001C8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_IsGuildMember_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_BooleanAND_ReturnValue) == 0x0001C9, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode_2) == 0x0001CC, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue_5) == 0x0001D0, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode_1) == 0x0001D4, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CreateDelegate_OutputDelegate_9) == 0x0001D8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue_6) == 0x0001E8, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, K2Node_CustomEvent_RetCode) == 0x0001EC, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_ExecuteUbergraph_GuildMenu, CallFunc_EqualEqual_IntInt_ReturnValue_7) == 0x0001F0, "Member 'GuildMenu_C_ExecuteUbergraph_GuildMenu::CallFunc_EqualEqual_IntInt_ReturnValue_7' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.OnCompleteGuildCancelInvitation
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_OnCompleteGuildCancelInvitation final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_OnCompleteGuildCancelInvitation) == 0x000004, "Wrong alignment on GuildMenu_C_OnCompleteGuildCancelInvitation");
static_assert(sizeof(GuildMenu_C_OnCompleteGuildCancelInvitation) == 0x000004, "Wrong size on GuildMenu_C_OnCompleteGuildCancelInvitation");
static_assert(offsetof(GuildMenu_C_OnCompleteGuildCancelInvitation, RetCode) == 0x000000, "Member 'GuildMenu_C_OnCompleteGuildCancelInvitation::RetCode' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.OnCompleteGuildKicked
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_OnCompleteGuildKicked final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_OnCompleteGuildKicked) == 0x000004, "Wrong alignment on GuildMenu_C_OnCompleteGuildKicked");
static_assert(sizeof(GuildMenu_C_OnCompleteGuildKicked) == 0x000004, "Wrong size on GuildMenu_C_OnCompleteGuildKicked");
static_assert(offsetof(GuildMenu_C_OnCompleteGuildKicked, RetCode) == 0x000000, "Member 'GuildMenu_C_OnCompleteGuildKicked::RetCode' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.CompletedGGetEntryList
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_CompletedGGetEntryList final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_CompletedGGetEntryList) == 0x000004, "Wrong alignment on GuildMenu_C_CompletedGGetEntryList");
static_assert(sizeof(GuildMenu_C_CompletedGGetEntryList) == 0x000004, "Wrong size on GuildMenu_C_CompletedGGetEntryList");
static_assert(offsetof(GuildMenu_C_CompletedGGetEntryList, RetCode) == 0x000000, "Member 'GuildMenu_C_CompletedGGetEntryList::RetCode' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.CompletedDenyMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_CompletedDenyMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_CompletedDenyMember) == 0x000004, "Wrong alignment on GuildMenu_C_CompletedDenyMember");
static_assert(sizeof(GuildMenu_C_CompletedDenyMember) == 0x000004, "Wrong size on GuildMenu_C_CompletedDenyMember");
static_assert(offsetof(GuildMenu_C_CompletedDenyMember, RetCode) == 0x000000, "Member 'GuildMenu_C_CompletedDenyMember::RetCode' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.CompletedAcceptMember
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_CompletedAcceptMember final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_CompletedAcceptMember) == 0x000004, "Wrong alignment on GuildMenu_C_CompletedAcceptMember");
static_assert(sizeof(GuildMenu_C_CompletedAcceptMember) == 0x000004, "Wrong size on GuildMenu_C_CompletedAcceptMember");
static_assert(offsetof(GuildMenu_C_CompletedAcceptMember, RetCode) == 0x000000, "Member 'GuildMenu_C_CompletedAcceptMember::RetCode' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.Event_OnCompleteNotifyKickedFromGuild
// 0x0010 (0x0010 - 0x0000)
struct GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild final
{
public:
	class FString                                 KickedGuildName;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild) == 0x000008, "Wrong alignment on GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild");
static_assert(sizeof(GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild) == 0x000010, "Wrong size on GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild");
static_assert(offsetof(GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild, KickedGuildName) == 0x000000, "Member 'GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild::KickedGuildName' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.Event_OnCompleteGetGuildData
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_Event_OnCompleteGetGuildData final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_Event_OnCompleteGetGuildData) == 0x000004, "Wrong alignment on GuildMenu_C_Event_OnCompleteGetGuildData");
static_assert(sizeof(GuildMenu_C_Event_OnCompleteGetGuildData) == 0x000004, "Wrong size on GuildMenu_C_Event_OnCompleteGetGuildData");
static_assert(offsetof(GuildMenu_C_Event_OnCompleteGetGuildData, RetCode) == 0x000000, "Member 'GuildMenu_C_Event_OnCompleteGetGuildData::RetCode' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.OnSubMenuUpdateWithMessage
// 0x0020 (0x0020 - 0x0000)
struct GuildMenu_C_OnSubMenuUpdateWithMessage final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GuildMenu_C_OnSubMenuUpdateWithMessage) == 0x000008, "Wrong alignment on GuildMenu_C_OnSubMenuUpdateWithMessage");
static_assert(sizeof(GuildMenu_C_OnSubMenuUpdateWithMessage) == 0x000020, "Wrong size on GuildMenu_C_OnSubMenuUpdateWithMessage");
static_assert(offsetof(GuildMenu_C_OnSubMenuUpdateWithMessage, MainPage) == 0x000000, "Member 'GuildMenu_C_OnSubMenuUpdateWithMessage::MainPage' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_OnSubMenuUpdateWithMessage, SubPage) == 0x000004, "Member 'GuildMenu_C_OnSubMenuUpdateWithMessage::SubPage' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_OnSubMenuUpdateWithMessage, Message) == 0x000008, "Member 'GuildMenu_C_OnSubMenuUpdateWithMessage::Message' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.Event_OnCompletedInviteArraignment
// 0x0018 (0x0018 - 0x0000)
struct GuildMenu_C_Event_OnCompletedInviteArraignment final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAccept;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FAB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InEntryId;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_Event_OnCompletedInviteArraignment) == 0x000008, "Wrong alignment on GuildMenu_C_Event_OnCompletedInviteArraignment");
static_assert(sizeof(GuildMenu_C_Event_OnCompletedInviteArraignment) == 0x000018, "Wrong size on GuildMenu_C_Event_OnCompletedInviteArraignment");
static_assert(offsetof(GuildMenu_C_Event_OnCompletedInviteArraignment, RetCode) == 0x000000, "Member 'GuildMenu_C_Event_OnCompletedInviteArraignment::RetCode' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_Event_OnCompletedInviteArraignment, IsAccept) == 0x000004, "Member 'GuildMenu_C_Event_OnCompletedInviteArraignment::IsAccept' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_Event_OnCompletedInviteArraignment, InEntryId) == 0x000008, "Member 'GuildMenu_C_Event_OnCompletedInviteArraignment::InEntryId' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct GuildMenu_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on GuildMenu_C_OnSubMenuUpdate");
static_assert(sizeof(GuildMenu_C_OnSubMenuUpdate) == 0x000008, "Wrong size on GuildMenu_C_OnSubMenuUpdate");
static_assert(offsetof(GuildMenu_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'GuildMenu_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'GuildMenu_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct GuildMenu_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on GuildMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(GuildMenu_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on GuildMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(GuildMenu_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'GuildMenu_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.SetPage
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_SetPage final
{
public:
	int32                                         PageIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_SetPage) == 0x000004, "Wrong alignment on GuildMenu_C_SetPage");
static_assert(sizeof(GuildMenu_C_SetPage) == 0x000004, "Wrong size on GuildMenu_C_SetPage");
static_assert(offsetof(GuildMenu_C_SetPage, PageIndex) == 0x000000, "Member 'GuildMenu_C_SetPage::PageIndex' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.OnWithDraw
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_OnWithDraw final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_OnWithDraw) == 0x000004, "Wrong alignment on GuildMenu_C_OnWithDraw");
static_assert(sizeof(GuildMenu_C_OnWithDraw) == 0x000004, "Wrong size on GuildMenu_C_OnWithDraw");
static_assert(offsetof(GuildMenu_C_OnWithDraw, RetCode) == 0x000000, "Member 'GuildMenu_C_OnWithDraw::RetCode' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000004, "Wrong size on GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.CheckSubMenu
// 0x0001 (0x0001 - 0x0000)
struct GuildMenu_C_CheckSubMenu final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMenu_C_CheckSubMenu) == 0x000001, "Wrong alignment on GuildMenu_C_CheckSubMenu");
static_assert(sizeof(GuildMenu_C_CheckSubMenu) == 0x000001, "Wrong size on GuildMenu_C_CheckSubMenu");
static_assert(offsetof(GuildMenu_C_CheckSubMenu, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'GuildMenu_C_CheckSubMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.MakeGuild
// 0x0020 (0x0020 - 0x0000)
struct GuildMenu_C_MakeGuild final
{
public:
	class UClass*                                 Param_Class;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FAC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_MakeGuild) == 0x000008, "Wrong alignment on GuildMenu_C_MakeGuild");
static_assert(sizeof(GuildMenu_C_MakeGuild) == 0x000020, "Wrong size on GuildMenu_C_MakeGuild");
static_assert(offsetof(GuildMenu_C_MakeGuild, Param_Class) == 0x000000, "Member 'GuildMenu_C_MakeGuild::Param_Class' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_MakeGuild, CallFunc_Create_ReturnValue) == 0x000008, "Member 'GuildMenu_C_MakeGuild::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_MakeGuild, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GuildMenu_C_MakeGuild::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_MakeGuild, CallFunc_AddChildToCanvas_ReturnValue) == 0x000018, "Member 'GuildMenu_C_MakeGuild::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.GetPageNum
// 0x0020 (0x0020 - 0x0000)
struct GuildMenu_C_GetPageNum final
{
public:
	class FString                                 BookMark;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Page;                                              // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMenu_C_GetPageNum) == 0x000008, "Wrong alignment on GuildMenu_C_GetPageNum");
static_assert(sizeof(GuildMenu_C_GetPageNum) == 0x000020, "Wrong size on GuildMenu_C_GetPageNum");
static_assert(offsetof(GuildMenu_C_GetPageNum, BookMark) == 0x000000, "Member 'GuildMenu_C_GetPageNum::BookMark' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_GetPageNum, Page) == 0x000010, "Member 'GuildMenu_C_GetPageNum::Page' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_GetPageNum, CallFunc_Array_Find_ReturnValue) == 0x000014, "Member 'GuildMenu_C_GetPageNum::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_GetPageNum, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'GuildMenu_C_GetPageNum::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.SubMenuOutText
// 0x0178 (0x0178 - 0x0000)
struct GuildMenu_C_SubMenuOutText final
{
public:
	int32                                         InTextID;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalHelpID;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FGuildMemberData>               CallFunc_GetGuildInviteMemberList_ReturnValue;     // 0x0028(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FAD[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0058(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8FAE[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0118(0x0010)(ReferenceParm)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FAF[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB0[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0160(0x0018)()
};
static_assert(alignof(GuildMenu_C_SubMenuOutText) == 0x000008, "Wrong alignment on GuildMenu_C_SubMenuOutText");
static_assert(sizeof(GuildMenu_C_SubMenuOutText) == 0x000178, "Wrong size on GuildMenu_C_SubMenuOutText");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, InTextID) == 0x000000, "Member 'GuildMenu_C_SubMenuOutText::InTextID' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, LocalHelpID) == 0x000004, "Member 'GuildMenu_C_SubMenuOutText::LocalHelpID' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_GetGuildInviteMemberList_ReturnValue) == 0x000028, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_GetGuildInviteMemberList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_GetGuildEntryList_ReturnValue) == 0x000058, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'GuildMenu_C_SubMenuOutText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Array_Length_ReturnValue_1) == 0x0000A8, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, K2Node_MakeArray_Array) == 0x0000B0, "Member 'GuildMenu_C_SubMenuOutText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'GuildMenu_C_SubMenuOutText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Format_ReturnValue) == 0x000100, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, K2Node_MakeArray_Array_1) == 0x000118, "Member 'GuildMenu_C_SubMenuOutText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Greater_IntInt_ReturnValue) == 0x000128, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000129, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000130, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, K2Node_SwitchInteger_CmpSuccess) == 0x000158, "Member 'GuildMenu_C_SubMenuOutText::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_SubMenuOutText, CallFunc_Format_ReturnValue_1) == 0x000160, "Member 'GuildMenu_C_SubMenuOutText::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.UpdateSubMenuButtonState
// 0x0058 (0x0058 - 0x0000)
struct GuildMenu_C_UpdateSubMenuButtonState final
{
public:
	bool                                          IsGuildMemberLocal;                                // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGuildComp_IsValid;                     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB1[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGuildMember_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB2[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGuildComp_IsValid_1;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB3[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue_1;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasNewMember_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB4[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuildEntryData>                CallFunc_GetGuildEntryList_ReturnValue;            // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB5[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMenu_C_UpdateSubMenuButtonState) == 0x000008, "Wrong alignment on GuildMenu_C_UpdateSubMenuButtonState");
static_assert(sizeof(GuildMenu_C_UpdateSubMenuButtonState) == 0x000058, "Wrong size on GuildMenu_C_UpdateSubMenuButtonState");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, IsGuildMemberLocal) == 0x000000, "Member 'GuildMenu_C_UpdateSubMenuButtonState::IsGuildMemberLocal' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_GetGuildComp_IsValid) == 0x000001, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_GetGuildComp_IsValid' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_GetGuildComp_ReturnValue) == 0x000008, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_IsGuildMember_ReturnValue) == 0x000010, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_IsGuildMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, Temp_int_Variable) == 0x000014, "Member 'GuildMenu_C_UpdateSubMenuButtonState::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_GetGuildComp_IsValid_1) == 0x000018, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_GetGuildComp_IsValid_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_GetGuildComp_ReturnValue_1) == 0x000020, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_GetGuildComp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_HasNewMember_ReturnValue) == 0x000029, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_HasNewMember_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_GetGuildEntryList_ReturnValue) == 0x000030, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_GetGuildEntryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_BooleanOR_ReturnValue) == 0x000049, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_GetChildrenCount_ReturnValue) == 0x00004C, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuButtonState, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000054, "Member 'GuildMenu_C_UpdateSubMenuButtonState::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.NeedToWaitUpdateMainMenu
// 0x0040 (0x0040 - 0x0000)
struct GuildMenu_C_NeedToWaitUpdateMainMenu final
{
public:
	class UGuildRankMenu_C*                       K2Node_DynamicCast_AsGuild_Rank_Menu;              // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB6[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildActivity_C*                       K2Node_DynamicCast_AsGuild_Activity;               // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB7[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildMemberInfoMenu_C*                 K2Node_DynamicCast_AsGuild_Member_Info_Menu;       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB8[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildDetailsMenu_C*                    K2Node_DynamicCast_AsGuild_Details_Menu;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GuildMenu_C_NeedToWaitUpdateMainMenu) == 0x000008, "Wrong alignment on GuildMenu_C_NeedToWaitUpdateMainMenu");
static_assert(sizeof(GuildMenu_C_NeedToWaitUpdateMainMenu) == 0x000040, "Wrong size on GuildMenu_C_NeedToWaitUpdateMainMenu");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_AsGuild_Rank_Menu) == 0x000000, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_AsGuild_Rank_Menu' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_SwitchInteger_CmpSuccess) == 0x000009, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_AsGuild_Activity) == 0x000010, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_AsGuild_Activity' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_bSuccess_1) == 0x000018, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_AsGuild_Member_Info_Menu) == 0x000020, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_AsGuild_Member_Info_Menu' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_bSuccess_2) == 0x000028, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_AsGuild_Details_Menu) == 0x000030, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_AsGuild_Details_Menu' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, K2Node_DynamicCast_bSuccess_3) == 0x000038, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_NeedToWaitUpdateMainMenu, CallFunc_IsValid_ReturnValue) == 0x000039, "Member 'GuildMenu_C_NeedToWaitUpdateMainMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.UpdateSubMenuOutText
// 0x0010 (0x0010 - 0x0000)
struct GuildMenu_C_UpdateSubMenuOutText final
{
public:
	int32                                         Selection;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Sub_Page;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess_1;                 // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FB9[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_UpdateSubMenuOutText) == 0x000004, "Wrong alignment on GuildMenu_C_UpdateSubMenuOutText");
static_assert(sizeof(GuildMenu_C_UpdateSubMenuOutText) == 0x000010, "Wrong size on GuildMenu_C_UpdateSubMenuOutText");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuOutText, Selection) == 0x000000, "Member 'GuildMenu_C_UpdateSubMenuOutText::Selection' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuOutText, Param_Sub_Page) == 0x000004, "Member 'GuildMenu_C_UpdateSubMenuOutText::Param_Sub_Page' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuOutText, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'GuildMenu_C_UpdateSubMenuOutText::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuOutText, K2Node_SwitchInteger_CmpSuccess_1) == 0x000009, "Member 'GuildMenu_C_UpdateSubMenuOutText::K2Node_SwitchInteger_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_UpdateSubMenuOutText, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GuildMenu_C_UpdateSubMenuOutText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function GuildMenu.GuildMenu_C.TermRequest
// 0x0018 (0x0018 - 0x0000)
struct GuildMenu_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FBA[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildMenu_C_TermRequest) == 0x000008, "Wrong alignment on GuildMenu_C_TermRequest");
static_assert(sizeof(GuildMenu_C_TermRequest) == 0x000018, "Wrong size on GuildMenu_C_TermRequest");
static_assert(offsetof(GuildMenu_C_TermRequest, InReason) == 0x000000, "Member 'GuildMenu_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_TermRequest, ReturnValue) == 0x000001, "Member 'GuildMenu_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_TermRequest, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'GuildMenu_C_TermRequest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'GuildMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'GuildMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

